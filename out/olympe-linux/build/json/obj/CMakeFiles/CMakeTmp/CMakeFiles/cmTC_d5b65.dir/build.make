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


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /home/zxli/code/Parrot-groundSDK/out/olympe-linux/build/json/obj/CMakeFiles/CMakeTmp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zxli/code/Parrot-groundSDK/out/olympe-linux/build/json/obj/CMakeFiles/CMakeTmp

# Include any dependencies generated for this target.
include CMakeFiles/cmTC_d5b65.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cmTC_d5b65.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmTC_d5b65.dir/flags.make

CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.o: CMakeFiles/cmTC_d5b65.dir/flags.make
CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.o: CheckIncludeFile.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/home/zxli/code/Parrot-groundSDK/out/olympe-linux/build/json/obj/CMakeFiles/CMakeTmp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.o   -c /home/zxli/code/Parrot-groundSDK/out/olympe-linux/build/json/obj/CMakeFiles/CMakeTmp/CheckIncludeFile.c

CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zxli/code/Parrot-groundSDK/out/olympe-linux/build/json/obj/CMakeFiles/CMakeTmp/CheckIncludeFile.c > CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.i

CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zxli/code/Parrot-groundSDK/out/olympe-linux/build/json/obj/CMakeFiles/CMakeTmp/CheckIncludeFile.c -o CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.s

CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.o.requires:

.PHONY : CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.o.requires

CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.o.provides: CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.o.requires
	$(MAKE) -f CMakeFiles/cmTC_d5b65.dir/build.make CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.o.provides.build
.PHONY : CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.o.provides

CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.o.provides.build: CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.o


# Object files for target cmTC_d5b65
cmTC_d5b65_OBJECTS = \
"CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.o"

# External object files for target cmTC_d5b65
cmTC_d5b65_EXTERNAL_OBJECTS =

cmTC_d5b65: CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.o
cmTC_d5b65: CMakeFiles/cmTC_d5b65.dir/build.make
cmTC_d5b65: CMakeFiles/cmTC_d5b65.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/home/zxli/code/Parrot-groundSDK/out/olympe-linux/build/json/obj/CMakeFiles/CMakeTmp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cmTC_d5b65"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmTC_d5b65.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmTC_d5b65.dir/build: cmTC_d5b65

.PHONY : CMakeFiles/cmTC_d5b65.dir/build

CMakeFiles/cmTC_d5b65.dir/requires: CMakeFiles/cmTC_d5b65.dir/CheckIncludeFile.c.o.requires

.PHONY : CMakeFiles/cmTC_d5b65.dir/requires

CMakeFiles/cmTC_d5b65.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cmTC_d5b65.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cmTC_d5b65.dir/clean

CMakeFiles/cmTC_d5b65.dir/depend:
	cd /home/zxli/code/Parrot-groundSDK/out/olympe-linux/build/json/obj/CMakeFiles/CMakeTmp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zxli/code/Parrot-groundSDK/out/olympe-linux/build/json/obj/CMakeFiles/CMakeTmp /home/zxli/code/Parrot-groundSDK/out/olympe-linux/build/json/obj/CMakeFiles/CMakeTmp /home/zxli/code/Parrot-groundSDK/out/olympe-linux/build/json/obj/CMakeFiles/CMakeTmp /home/zxli/code/Parrot-groundSDK/out/olympe-linux/build/json/obj/CMakeFiles/CMakeTmp /home/zxli/code/Parrot-groundSDK/out/olympe-linux/build/json/obj/CMakeFiles/CMakeTmp/CMakeFiles/cmTC_d5b65.dir/DependInfo.cmake
.PHONY : CMakeFiles/cmTC_d5b65.dir/depend

