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

# Include any dependencies generated for this target.
include lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/depend.make

# Include the progress variables for this target.
include lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/flags.make

lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/MipsInstPrinter.cpp.o: lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/flags.make
lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/MipsInstPrinter.cpp.o: /ollvm6.0/ollvm-tll/lib/Target/Mips/InstPrinter/MipsInstPrinter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/ollvm6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/MipsInstPrinter.cpp.o"
	cd /ollvm6.0/build/lib/Target/Mips/InstPrinter && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMMipsAsmPrinter.dir/MipsInstPrinter.cpp.o -c /ollvm6.0/ollvm-tll/lib/Target/Mips/InstPrinter/MipsInstPrinter.cpp

lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/MipsInstPrinter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMMipsAsmPrinter.dir/MipsInstPrinter.cpp.i"
	cd /ollvm6.0/build/lib/Target/Mips/InstPrinter && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /ollvm6.0/ollvm-tll/lib/Target/Mips/InstPrinter/MipsInstPrinter.cpp > CMakeFiles/LLVMMipsAsmPrinter.dir/MipsInstPrinter.cpp.i

lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/MipsInstPrinter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMMipsAsmPrinter.dir/MipsInstPrinter.cpp.s"
	cd /ollvm6.0/build/lib/Target/Mips/InstPrinter && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /ollvm6.0/ollvm-tll/lib/Target/Mips/InstPrinter/MipsInstPrinter.cpp -o CMakeFiles/LLVMMipsAsmPrinter.dir/MipsInstPrinter.cpp.s

# Object files for target LLVMMipsAsmPrinter
LLVMMipsAsmPrinter_OBJECTS = \
"CMakeFiles/LLVMMipsAsmPrinter.dir/MipsInstPrinter.cpp.o"

# External object files for target LLVMMipsAsmPrinter
LLVMMipsAsmPrinter_EXTERNAL_OBJECTS =

lib/libLLVMMipsAsmPrinter.a: lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/MipsInstPrinter.cpp.o
lib/libLLVMMipsAsmPrinter.a: lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/build.make
lib/libLLVMMipsAsmPrinter.a: lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/ollvm6.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../libLLVMMipsAsmPrinter.a"
	cd /ollvm6.0/build/lib/Target/Mips/InstPrinter && $(CMAKE_COMMAND) -P CMakeFiles/LLVMMipsAsmPrinter.dir/cmake_clean_target.cmake
	cd /ollvm6.0/build/lib/Target/Mips/InstPrinter && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMMipsAsmPrinter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/build: lib/libLLVMMipsAsmPrinter.a

.PHONY : lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/build

lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/clean:
	cd /ollvm6.0/build/lib/Target/Mips/InstPrinter && $(CMAKE_COMMAND) -P CMakeFiles/LLVMMipsAsmPrinter.dir/cmake_clean.cmake
.PHONY : lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/clean

lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/depend:
	cd /ollvm6.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /ollvm6.0/ollvm-tll /ollvm6.0/ollvm-tll/lib/Target/Mips/InstPrinter /ollvm6.0/build /ollvm6.0/build/lib/Target/Mips/InstPrinter /ollvm6.0/build/lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/Mips/InstPrinter/CMakeFiles/LLVMMipsAsmPrinter.dir/depend
