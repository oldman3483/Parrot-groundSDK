# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zxli/code/parrot-groundsdk/packages/common/json

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj

# Utility rule file for NightlyMemCheck.

# Include the progress variables for this target.
include CMakeFiles/NightlyMemCheck.dir/progress.make

CMakeFiles/NightlyMemCheck:
	/usr/bin/ctest -D NightlyMemCheck

NightlyMemCheck: CMakeFiles/NightlyMemCheck
NightlyMemCheck: CMakeFiles/NightlyMemCheck.dir/build.make

.PHONY : NightlyMemCheck

# Rule to build all files generated by this target.
CMakeFiles/NightlyMemCheck.dir/build: NightlyMemCheck

.PHONY : CMakeFiles/NightlyMemCheck.dir/build

CMakeFiles/NightlyMemCheck.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NightlyMemCheck.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NightlyMemCheck.dir/clean

CMakeFiles/NightlyMemCheck.dir/depend:
	cd /home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zxli/code/parrot-groundsdk/packages/common/json /home/zxli/code/parrot-groundsdk/packages/common/json /home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj /home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj /home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj/CMakeFiles/NightlyMemCheck.dir/DependInfo.cmake
.PHONY : CMakeFiles/NightlyMemCheck.dir/depend

