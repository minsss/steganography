# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/csrc/Desktop/image

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csrc/Desktop/image

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/csrc/Desktop/image/CMakeFiles /home/csrc/Desktop/image/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/csrc/Desktop/image/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named image

# Build rule for target.
image: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 image
.PHONY : image

# fast build rule for target.
image/fast:
	$(MAKE) -f CMakeFiles/image.dir/build.make CMakeFiles/image.dir/build
.PHONY : image/fast

src/cryptProcess.o: src/cryptProcess.cpp.o

.PHONY : src/cryptProcess.o

# target to build an object file
src/cryptProcess.cpp.o:
	$(MAKE) -f CMakeFiles/image.dir/build.make CMakeFiles/image.dir/src/cryptProcess.cpp.o
.PHONY : src/cryptProcess.cpp.o

src/cryptProcess.i: src/cryptProcess.cpp.i

.PHONY : src/cryptProcess.i

# target to preprocess a source file
src/cryptProcess.cpp.i:
	$(MAKE) -f CMakeFiles/image.dir/build.make CMakeFiles/image.dir/src/cryptProcess.cpp.i
.PHONY : src/cryptProcess.cpp.i

src/cryptProcess.s: src/cryptProcess.cpp.s

.PHONY : src/cryptProcess.s

# target to generate assembly for a file
src/cryptProcess.cpp.s:
	$(MAKE) -f CMakeFiles/image.dir/build.make CMakeFiles/image.dir/src/cryptProcess.cpp.s
.PHONY : src/cryptProcess.cpp.s

src/imageProcess.o: src/imageProcess.cpp.o

.PHONY : src/imageProcess.o

# target to build an object file
src/imageProcess.cpp.o:
	$(MAKE) -f CMakeFiles/image.dir/build.make CMakeFiles/image.dir/src/imageProcess.cpp.o
.PHONY : src/imageProcess.cpp.o

src/imageProcess.i: src/imageProcess.cpp.i

.PHONY : src/imageProcess.i

# target to preprocess a source file
src/imageProcess.cpp.i:
	$(MAKE) -f CMakeFiles/image.dir/build.make CMakeFiles/image.dir/src/imageProcess.cpp.i
.PHONY : src/imageProcess.cpp.i

src/imageProcess.s: src/imageProcess.cpp.s

.PHONY : src/imageProcess.s

# target to generate assembly for a file
src/imageProcess.cpp.s:
	$(MAKE) -f CMakeFiles/image.dir/build.make CMakeFiles/image.dir/src/imageProcess.cpp.s
.PHONY : src/imageProcess.cpp.s

src/main.o: src/main.cpp.o

.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) -f CMakeFiles/image.dir/build.make CMakeFiles/image.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles/image.dir/build.make CMakeFiles/image.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles/image.dir/build.make CMakeFiles/image.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/msgProcess.o: src/msgProcess.cpp.o

.PHONY : src/msgProcess.o

# target to build an object file
src/msgProcess.cpp.o:
	$(MAKE) -f CMakeFiles/image.dir/build.make CMakeFiles/image.dir/src/msgProcess.cpp.o
.PHONY : src/msgProcess.cpp.o

src/msgProcess.i: src/msgProcess.cpp.i

.PHONY : src/msgProcess.i

# target to preprocess a source file
src/msgProcess.cpp.i:
	$(MAKE) -f CMakeFiles/image.dir/build.make CMakeFiles/image.dir/src/msgProcess.cpp.i
.PHONY : src/msgProcess.cpp.i

src/msgProcess.s: src/msgProcess.cpp.s

.PHONY : src/msgProcess.s

# target to generate assembly for a file
src/msgProcess.cpp.s:
	$(MAKE) -f CMakeFiles/image.dir/build.make CMakeFiles/image.dir/src/msgProcess.cpp.s
.PHONY : src/msgProcess.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... image"
	@echo "... src/cryptProcess.o"
	@echo "... src/cryptProcess.i"
	@echo "... src/cryptProcess.s"
	@echo "... src/imageProcess.o"
	@echo "... src/imageProcess.i"
	@echo "... src/imageProcess.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/msgProcess.o"
	@echo "... src/msgProcess.i"
	@echo "... src/msgProcess.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

