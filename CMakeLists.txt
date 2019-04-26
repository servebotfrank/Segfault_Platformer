cmake_minimum_required (VERSION 3.5 FATAL_ERROR)
project (Platformer VERSION 0.1 LANGUAGES CXX)

find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

set (SOURCES
    src/configloader.cpp
    src/configloader.hpp
    src/GameObject.cpp
    src/GameObject.hpp
    src/gameobjectfactory.cpp
    src/gameobjectfactory.hpp
    src/jsonHelper.cpp
    src/jsonHelper.hpp
    src/levelloader.cpp
    src/levelloader.hpp
    src/physics.cpp
    src/physics.hpp
    src/Platform.cpp
    src/Platform.hpp
    src/PlatformerGame.cpp
    src/PlatformerGame.hpp
    src/Player.cpp
    src/Player.hpp
)
set (MAIN_SOURCE
    src/main.cpp
)

add_executable (platformer ${MAIN_SOURCE} ${SOURCES})
set_target_properties(platformer PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/"
)

target_link_libraries(platformer PRIVATE
    sfml-graphics)

set (GNU_COMPILE_OPTIONS
    -ansi
    -pedantic
    -Wall
    -Wextra
    -Wshadow
)
set (CLANG_COMPILE_OPTIONS
    -ansi
    -pedantic
    -Wall
    -Wextra
)
set (MSVC_COMPILE_OPTIONS
    /W4
)

if (GNU)
    target_compile_options (${platformer} PRIVATE ${GNU_COMPILE_OPTIONS})
elseif (clang)
    target_compile_options (${platformer} PRIVATE ${CLANG_COMPILE_OPTIONS})
elseif (MSVC)
    target_compile_options (${platformer} PRIVATE ${MSVC_COMPILE_OPTIONS})
endif ()
