# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_SOURCE_DIR = /Users/dina/CLionProjects/Tasks

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dina/CLionProjects/Tasks/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Oving1b.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Oving1b.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Oving1b.dir/flags.make

CMakeFiles/Oving1b.dir/Oving1/b.cpp.o: CMakeFiles/Oving1b.dir/flags.make
CMakeFiles/Oving1b.dir/Oving1/b.cpp.o: ../Oving1/b.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dina/CLionProjects/Tasks/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Oving1b.dir/Oving1/b.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Oving1b.dir/Oving1/b.cpp.o -c /Users/dina/CLionProjects/Tasks/Oving1/b.cpp

CMakeFiles/Oving1b.dir/Oving1/b.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oving1b.dir/Oving1/b.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dina/CLionProjects/Tasks/Oving1/b.cpp > CMakeFiles/Oving1b.dir/Oving1/b.cpp.i

CMakeFiles/Oving1b.dir/Oving1/b.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oving1b.dir/Oving1/b.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dina/CLionProjects/Tasks/Oving1/b.cpp -o CMakeFiles/Oving1b.dir/Oving1/b.cpp.s

# Object files for target Oving1b
Oving1b_OBJECTS = \
"CMakeFiles/Oving1b.dir/Oving1/b.cpp.o"

# External object files for target Oving1b
Oving1b_EXTERNAL_OBJECTS =

Oving1b: CMakeFiles/Oving1b.dir/Oving1/b.cpp.o
Oving1b: CMakeFiles/Oving1b.dir/build.make
Oving1b: CMakeFiles/Oving1b.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dina/CLionProjects/Tasks/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Oving1b"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Oving1b.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Oving1b.dir/build: Oving1b

.PHONY : CMakeFiles/Oving1b.dir/build

CMakeFiles/Oving1b.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Oving1b.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Oving1b.dir/clean

CMakeFiles/Oving1b.dir/depend:
	cd /Users/dina/CLionProjects/Tasks/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dina/CLionProjects/Tasks /Users/dina/CLionProjects/Tasks /Users/dina/CLionProjects/Tasks/cmake-build-debug /Users/dina/CLionProjects/Tasks/cmake-build-debug /Users/dina/CLionProjects/Tasks/cmake-build-debug/CMakeFiles/Oving1b.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Oving1b.dir/depend

