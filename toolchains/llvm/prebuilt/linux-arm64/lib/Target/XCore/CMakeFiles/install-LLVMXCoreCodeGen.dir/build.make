# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /ollvm6.0/ollvm-tll

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /ollvm6.0/build

# Utility rule file for install-LLVMXCoreCodeGen.

# Include the progress variables for this target.
include lib/Target/XCore/CMakeFiles/install-LLVMXCoreCodeGen.dir/progress.make

lib/Target/XCore/CMakeFiles/install-LLVMXCoreCodeGen: lib/libLLVMXCoreCodeGen.a
	cd /ollvm6.0/build/lib/Target/XCore && /usr/bin/cmake -DCMAKE_INSTALL_COMPONENT="LLVMXCoreCodeGen" -P /ollvm6.0/build/cmake_install.cmake

install-LLVMXCoreCodeGen: lib/Target/XCore/CMakeFiles/install-LLVMXCoreCodeGen
install-LLVMXCoreCodeGen: lib/Target/XCore/CMakeFiles/install-LLVMXCoreCodeGen.dir/build.make

.PHONY : install-LLVMXCoreCodeGen

# Rule to build all files generated by this target.
lib/Target/XCore/CMakeFiles/install-LLVMXCoreCodeGen.dir/build: install-LLVMXCoreCodeGen

.PHONY : lib/Target/XCore/CMakeFiles/install-LLVMXCoreCodeGen.dir/build

lib/Target/XCore/CMakeFiles/install-LLVMXCoreCodeGen.dir/clean:
	cd /ollvm6.0/build/lib/Target/XCore && $(CMAKE_COMMAND) -P CMakeFiles/install-LLVMXCoreCodeGen.dir/cmake_clean.cmake
.PHONY : lib/Target/XCore/CMakeFiles/install-LLVMXCoreCodeGen.dir/clean

lib/Target/XCore/CMakeFiles/install-LLVMXCoreCodeGen.dir/depend:
	cd /ollvm6.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /ollvm6.0/ollvm-tll /ollvm6.0/ollvm-tll/lib/Target/XCore /ollvm6.0/build /ollvm6.0/build/lib/Target/XCore /ollvm6.0/build/lib/Target/XCore/CMakeFiles/install-LLVMXCoreCodeGen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/XCore/CMakeFiles/install-LLVMXCoreCodeGen.dir/depend
