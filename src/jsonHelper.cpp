// jsonHelper.cpp

#include "jsonHelper.hpp"

#include "rapidjson/error/en.h"
#include "rapidjson/filereadstream.h"

#include "rapidjson/document.h"
#include "rapidjson/writer.h"

#include <sstream>
#include <fstream>

namespace JSONHelper {

using std::string;
using std::ifstream;
using std::stringstream;
using std::runtime_error;

string readFile(const std::string& pathToFile)
{
    ifstream file(pathToFile);
    if (!file) {
        throw runtime_error("File not found " + pathToFile);
    }

    stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}
rapidjson::Document createDocument(const std::string& pathToJson)
{
    auto fileSource = readFile(pathToJson);
    rapidjson::Document document;
    document.Parse(fileSource.c_str());
    if (document.HasParseError()) {
        throw runtime_error("Not a valid json file " + pathToJson);
    }
    return document;
}
rapidjson::SchemaDocument createSchemaDocument(const std::string& pathToSchema)
{
    auto document = createDocument(pathToSchema);
    return rapidjson::SchemaDocument(document);
}
bool validateJSON(rapidjson::Document& json, rapidjson::SchemaValidator& schema)
{
    auto valid = json.Accept(schema);
    schema.Reset();
    return valid;
}

} // namespace JSONHelper