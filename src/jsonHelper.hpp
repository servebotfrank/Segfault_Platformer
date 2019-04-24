// jsonParser.hpp

#ifndef JSON_PARSER_HPP
#define JSON_PARSER_HPP

#include "rapidjson/schema.h"

#include <string>

namespace JSONHelper {

std::string readFile(const std::string& pathToFile);
rapidjson::Document createDocument(const std::string& pathToJson);
rapidjson::SchemaDocument createSchemaDocument(const std::string& pathToSchema);
bool validateDocument(const rapidjson::Document& json, const rapidjson::SchemaValidator& schema);

} // namespace JSONHelper

#endif // JSON_PARSER_HPP