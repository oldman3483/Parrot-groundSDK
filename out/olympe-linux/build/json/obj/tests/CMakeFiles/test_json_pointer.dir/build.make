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

# Include any dependencies generated for this target.
include tests/CMakeFiles/test_json_pointer.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test_json_pointer.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test_json_pointer.dir/flags.make

tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o: tests/CMakeFiles/test_json_pointer.dir/flags.make
tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o: /home/zxli/code/parrot-groundsdk/packages/common/json/tests/test_json_pointer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o"
	cd /home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o   -c /home/zxli/code/parrot-groundsdk/packages/common/json/tests/test_json_pointer.c

tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/test_json_pointer.dir/test_json_pointer.c.i"
	cd /home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zxli/code/parrot-groundsdk/packages/common/json/tests/test_json_pointer.c > CMakeFiles/test_json_pointer.dir/test_json_pointer.c.i

tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/test_json_pointer.dir/test_json_pointer.c.s"
	cd /home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zxli/code/parrot-groundsdk/packages/common/json/tests/test_json_pointer.c -o CMakeFiles/test_json_pointer.dir/test_json_pointer.c.s

tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o.requires:

.PHONY : tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o.requires

tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o.provides: tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o.requires
	$(MAKE) -f tests/CMakeFiles/test_json_pointer.dir/build.make tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o.provides.build
.PHONY : tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o.provides

tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o.provides.build: tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o


# Object files for target test_json_pointer
test_json_pointer_OBJECTS = \
"CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o"

# External object files for target test_json_pointer
test_json_pointer_EXTERNAL_OBJECTS =

tests/test_json_pointer: tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o
tests/test_json_pointer: tests/CMakeFiles/test_json_pointer.dir/build.make
tests/test_json_pointer: libjson-c.so.5.1.0
tests/test_json_pointer: tests/CMakeFiles/test_json_pointer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test_json_pointer"
	cd /home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_json_pointer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/test_json_pointer.dir/build: tests/test_json_pointer

.PHONY : tests/CMakeFiles/test_json_pointer.dir/build

tests/CMakeFiles/test_json_pointer.dir/requires: tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o.requires

.PHONY : tests/CMakeFiles/test_json_pointer.dir/requires

tests/CMakeFiles/test_json_pointer.dir/clean:
	cd /home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_json_pointer.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_json_pointer.dir/clean

tests/CMakeFiles/test_json_pointer.dir/depend:
	cd /home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zxli/code/parrot-groundsdk/packages/common/json /home/zxli/code/parrot-groundsdk/packages/common/json/tests /home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj /home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj/tests /home/zxli/code/parrot-groundsdk/out/olympe-linux/build/json/obj/tests/CMakeFiles/test_json_pointer.dir/DependInfo.cmake
.PHONY : tests/CMakeFiles/test_json_pointer.dir/depend

