# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\matth\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.6262.62\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\matth\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.6262.62\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\matth\CLionProjects\CIS-161\Casting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\matth\CLionProjects\CIS-161\Casting\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Casting.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Casting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Casting.dir/flags.make

CMakeFiles/Casting.dir/Casting.cpp.obj: CMakeFiles/Casting.dir/flags.make
CMakeFiles/Casting.dir/Casting.cpp.obj: CMakeFiles/Casting.dir/includes_CXX.rsp
CMakeFiles/Casting.dir/Casting.cpp.obj: ../Casting.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\matth\CLionProjects\CIS-161\Casting\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Casting.dir/Casting.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Casting.dir\Casting.cpp.obj -c C:\Users\matth\CLionProjects\CIS-161\Casting\Casting.cpp

CMakeFiles/Casting.dir/Casting.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Casting.dir/Casting.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\matth\CLionProjects\CIS-161\Casting\Casting.cpp > CMakeFiles\Casting.dir\Casting.cpp.i

CMakeFiles/Casting.dir/Casting.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Casting.dir/Casting.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\matth\CLionProjects\CIS-161\Casting\Casting.cpp -o CMakeFiles\Casting.dir\Casting.cpp.s

# Object files for target Casting
Casting_OBJECTS = \
"CMakeFiles/Casting.dir/Casting.cpp.obj"

# External object files for target Casting
Casting_EXTERNAL_OBJECTS =

Casting.exe: CMakeFiles/Casting.dir/Casting.cpp.obj
Casting.exe: CMakeFiles/Casting.dir/build.make
Casting.exe: CMakeFiles/Casting.dir/linklibs.rsp
Casting.exe: CMakeFiles/Casting.dir/objects1.rsp
Casting.exe: CMakeFiles/Casting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\matth\CLionProjects\CIS-161\Casting\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Casting.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Casting.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Casting.dir/build: Casting.exe

.PHONY : CMakeFiles/Casting.dir/build

CMakeFiles/Casting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Casting.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Casting.dir/clean

CMakeFiles/Casting.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\matth\CLionProjects\CIS-161\Casting C:\Users\matth\CLionProjects\CIS-161\Casting C:\Users\matth\CLionProjects\CIS-161\Casting\cmake-build-debug C:\Users\matth\CLionProjects\CIS-161\Casting\cmake-build-debug C:\Users\matth\CLionProjects\CIS-161\Casting\cmake-build-debug\CMakeFiles\Casting.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Casting.dir/depend

