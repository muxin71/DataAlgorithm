# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hanyuanfei/room/da

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hanyuanfei/room/da/build

# Utility rule file for coverage.

# Include the progress variables for this target.
include CMakeFiles/coverage.dir/progress.make

CMakeFiles/coverage:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/hanyuanfei/room/da/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating code coverage report"
	lcov --capture --directory . --output-file coverage.info --rc lcov_branch_coverage=1
	genhtml --branch-coverage coverage.info --output-directory coverage

coverage: CMakeFiles/coverage
coverage: CMakeFiles/coverage.dir/build.make

.PHONY : coverage

# Rule to build all files generated by this target.
CMakeFiles/coverage.dir/build: coverage

.PHONY : CMakeFiles/coverage.dir/build

CMakeFiles/coverage.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/coverage.dir/cmake_clean.cmake
.PHONY : CMakeFiles/coverage.dir/clean

CMakeFiles/coverage.dir/depend:
	cd /home/hanyuanfei/room/da/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hanyuanfei/room/da /home/hanyuanfei/room/da /home/hanyuanfei/room/da/build /home/hanyuanfei/room/da/build /home/hanyuanfei/room/da/build/CMakeFiles/coverage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/coverage.dir/depend
