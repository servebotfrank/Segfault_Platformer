# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/erintolman/Desktop/Segfault_Platformer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/platformer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/platformer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/platformer.dir/flags.make

CMakeFiles/platformer.dir/src/main.cpp.o: CMakeFiles/platformer.dir/flags.make
CMakeFiles/platformer.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/platformer.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platformer.dir/src/main.cpp.o -c /Users/erintolman/Desktop/Segfault_Platformer/src/main.cpp

CMakeFiles/platformer.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platformer.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/erintolman/Desktop/Segfault_Platformer/src/main.cpp > CMakeFiles/platformer.dir/src/main.cpp.i

CMakeFiles/platformer.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platformer.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/erintolman/Desktop/Segfault_Platformer/src/main.cpp -o CMakeFiles/platformer.dir/src/main.cpp.s

CMakeFiles/platformer.dir/src/configloader.cpp.o: CMakeFiles/platformer.dir/flags.make
CMakeFiles/platformer.dir/src/configloader.cpp.o: ../src/configloader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/platformer.dir/src/configloader.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platformer.dir/src/configloader.cpp.o -c /Users/erintolman/Desktop/Segfault_Platformer/src/configloader.cpp

CMakeFiles/platformer.dir/src/configloader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platformer.dir/src/configloader.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/erintolman/Desktop/Segfault_Platformer/src/configloader.cpp > CMakeFiles/platformer.dir/src/configloader.cpp.i

CMakeFiles/platformer.dir/src/configloader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platformer.dir/src/configloader.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/erintolman/Desktop/Segfault_Platformer/src/configloader.cpp -o CMakeFiles/platformer.dir/src/configloader.cpp.s

CMakeFiles/platformer.dir/src/GameObject.cpp.o: CMakeFiles/platformer.dir/flags.make
CMakeFiles/platformer.dir/src/GameObject.cpp.o: ../src/GameObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/platformer.dir/src/GameObject.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platformer.dir/src/GameObject.cpp.o -c /Users/erintolman/Desktop/Segfault_Platformer/src/GameObject.cpp

CMakeFiles/platformer.dir/src/GameObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platformer.dir/src/GameObject.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/erintolman/Desktop/Segfault_Platformer/src/GameObject.cpp > CMakeFiles/platformer.dir/src/GameObject.cpp.i

CMakeFiles/platformer.dir/src/GameObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platformer.dir/src/GameObject.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/erintolman/Desktop/Segfault_Platformer/src/GameObject.cpp -o CMakeFiles/platformer.dir/src/GameObject.cpp.s

CMakeFiles/platformer.dir/src/gameobjectfactory.cpp.o: CMakeFiles/platformer.dir/flags.make
CMakeFiles/platformer.dir/src/gameobjectfactory.cpp.o: ../src/gameobjectfactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/platformer.dir/src/gameobjectfactory.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platformer.dir/src/gameobjectfactory.cpp.o -c /Users/erintolman/Desktop/Segfault_Platformer/src/gameobjectfactory.cpp

CMakeFiles/platformer.dir/src/gameobjectfactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platformer.dir/src/gameobjectfactory.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/erintolman/Desktop/Segfault_Platformer/src/gameobjectfactory.cpp > CMakeFiles/platformer.dir/src/gameobjectfactory.cpp.i

CMakeFiles/platformer.dir/src/gameobjectfactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platformer.dir/src/gameobjectfactory.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/erintolman/Desktop/Segfault_Platformer/src/gameobjectfactory.cpp -o CMakeFiles/platformer.dir/src/gameobjectfactory.cpp.s

CMakeFiles/platformer.dir/src/jsonHelper.cpp.o: CMakeFiles/platformer.dir/flags.make
CMakeFiles/platformer.dir/src/jsonHelper.cpp.o: ../src/jsonHelper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/platformer.dir/src/jsonHelper.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platformer.dir/src/jsonHelper.cpp.o -c /Users/erintolman/Desktop/Segfault_Platformer/src/jsonHelper.cpp

CMakeFiles/platformer.dir/src/jsonHelper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platformer.dir/src/jsonHelper.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/erintolman/Desktop/Segfault_Platformer/src/jsonHelper.cpp > CMakeFiles/platformer.dir/src/jsonHelper.cpp.i

CMakeFiles/platformer.dir/src/jsonHelper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platformer.dir/src/jsonHelper.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/erintolman/Desktop/Segfault_Platformer/src/jsonHelper.cpp -o CMakeFiles/platformer.dir/src/jsonHelper.cpp.s

CMakeFiles/platformer.dir/src/levelloader.cpp.o: CMakeFiles/platformer.dir/flags.make
CMakeFiles/platformer.dir/src/levelloader.cpp.o: ../src/levelloader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/platformer.dir/src/levelloader.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platformer.dir/src/levelloader.cpp.o -c /Users/erintolman/Desktop/Segfault_Platformer/src/levelloader.cpp

CMakeFiles/platformer.dir/src/levelloader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platformer.dir/src/levelloader.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/erintolman/Desktop/Segfault_Platformer/src/levelloader.cpp > CMakeFiles/platformer.dir/src/levelloader.cpp.i

CMakeFiles/platformer.dir/src/levelloader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platformer.dir/src/levelloader.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/erintolman/Desktop/Segfault_Platformer/src/levelloader.cpp -o CMakeFiles/platformer.dir/src/levelloader.cpp.s

CMakeFiles/platformer.dir/src/physics.cpp.o: CMakeFiles/platformer.dir/flags.make
CMakeFiles/platformer.dir/src/physics.cpp.o: ../src/physics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/platformer.dir/src/physics.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platformer.dir/src/physics.cpp.o -c /Users/erintolman/Desktop/Segfault_Platformer/src/physics.cpp

CMakeFiles/platformer.dir/src/physics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platformer.dir/src/physics.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/erintolman/Desktop/Segfault_Platformer/src/physics.cpp > CMakeFiles/platformer.dir/src/physics.cpp.i

CMakeFiles/platformer.dir/src/physics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platformer.dir/src/physics.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/erintolman/Desktop/Segfault_Platformer/src/physics.cpp -o CMakeFiles/platformer.dir/src/physics.cpp.s

CMakeFiles/platformer.dir/src/Platform.cpp.o: CMakeFiles/platformer.dir/flags.make
CMakeFiles/platformer.dir/src/Platform.cpp.o: ../src/Platform.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/platformer.dir/src/Platform.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platformer.dir/src/Platform.cpp.o -c /Users/erintolman/Desktop/Segfault_Platformer/src/Platform.cpp

CMakeFiles/platformer.dir/src/Platform.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platformer.dir/src/Platform.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/erintolman/Desktop/Segfault_Platformer/src/Platform.cpp > CMakeFiles/platformer.dir/src/Platform.cpp.i

CMakeFiles/platformer.dir/src/Platform.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platformer.dir/src/Platform.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/erintolman/Desktop/Segfault_Platformer/src/Platform.cpp -o CMakeFiles/platformer.dir/src/Platform.cpp.s

CMakeFiles/platformer.dir/src/PlatformerGame.cpp.o: CMakeFiles/platformer.dir/flags.make
CMakeFiles/platformer.dir/src/PlatformerGame.cpp.o: ../src/PlatformerGame.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/platformer.dir/src/PlatformerGame.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platformer.dir/src/PlatformerGame.cpp.o -c /Users/erintolman/Desktop/Segfault_Platformer/src/PlatformerGame.cpp

CMakeFiles/platformer.dir/src/PlatformerGame.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platformer.dir/src/PlatformerGame.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/erintolman/Desktop/Segfault_Platformer/src/PlatformerGame.cpp > CMakeFiles/platformer.dir/src/PlatformerGame.cpp.i

CMakeFiles/platformer.dir/src/PlatformerGame.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platformer.dir/src/PlatformerGame.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/erintolman/Desktop/Segfault_Platformer/src/PlatformerGame.cpp -o CMakeFiles/platformer.dir/src/PlatformerGame.cpp.s

CMakeFiles/platformer.dir/src/Player.cpp.o: CMakeFiles/platformer.dir/flags.make
CMakeFiles/platformer.dir/src/Player.cpp.o: ../src/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/platformer.dir/src/Player.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platformer.dir/src/Player.cpp.o -c /Users/erintolman/Desktop/Segfault_Platformer/src/Player.cpp

CMakeFiles/platformer.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platformer.dir/src/Player.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/erintolman/Desktop/Segfault_Platformer/src/Player.cpp > CMakeFiles/platformer.dir/src/Player.cpp.i

CMakeFiles/platformer.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platformer.dir/src/Player.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/erintolman/Desktop/Segfault_Platformer/src/Player.cpp -o CMakeFiles/platformer.dir/src/Player.cpp.s

# Object files for target platformer
platformer_OBJECTS = \
"CMakeFiles/platformer.dir/src/main.cpp.o" \
"CMakeFiles/platformer.dir/src/configloader.cpp.o" \
"CMakeFiles/platformer.dir/src/GameObject.cpp.o" \
"CMakeFiles/platformer.dir/src/gameobjectfactory.cpp.o" \
"CMakeFiles/platformer.dir/src/jsonHelper.cpp.o" \
"CMakeFiles/platformer.dir/src/levelloader.cpp.o" \
"CMakeFiles/platformer.dir/src/physics.cpp.o" \
"CMakeFiles/platformer.dir/src/Platform.cpp.o" \
"CMakeFiles/platformer.dir/src/PlatformerGame.cpp.o" \
"CMakeFiles/platformer.dir/src/Player.cpp.o"

# External object files for target platformer
platformer_EXTERNAL_OBJECTS =

../bin/platformer: CMakeFiles/platformer.dir/src/main.cpp.o
../bin/platformer: CMakeFiles/platformer.dir/src/configloader.cpp.o
../bin/platformer: CMakeFiles/platformer.dir/src/GameObject.cpp.o
../bin/platformer: CMakeFiles/platformer.dir/src/gameobjectfactory.cpp.o
../bin/platformer: CMakeFiles/platformer.dir/src/jsonHelper.cpp.o
../bin/platformer: CMakeFiles/platformer.dir/src/levelloader.cpp.o
../bin/platformer: CMakeFiles/platformer.dir/src/physics.cpp.o
../bin/platformer: CMakeFiles/platformer.dir/src/Platform.cpp.o
../bin/platformer: CMakeFiles/platformer.dir/src/PlatformerGame.cpp.o
../bin/platformer: CMakeFiles/platformer.dir/src/Player.cpp.o
../bin/platformer: CMakeFiles/platformer.dir/build.make
../bin/platformer: /usr/local/lib/libsfml-graphics.2.5.1.dylib
../bin/platformer: /usr/local/lib/libsfml-audio.2.5.1.dylib
../bin/platformer: /usr/local/lib/libsfml-window.2.5.1.dylib
../bin/platformer: /usr/local/lib/libsfml-system.2.5.1.dylib
../bin/platformer: CMakeFiles/platformer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable ../bin/platformer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/platformer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/platformer.dir/build: ../bin/platformer

.PHONY : CMakeFiles/platformer.dir/build

CMakeFiles/platformer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/platformer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/platformer.dir/clean

CMakeFiles/platformer.dir/depend:
	cd /Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/erintolman/Desktop/Segfault_Platformer /Users/erintolman/Desktop/Segfault_Platformer /Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug /Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug /Users/erintolman/Desktop/Segfault_Platformer/cmake-build-debug/CMakeFiles/platformer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/platformer.dir/depend
