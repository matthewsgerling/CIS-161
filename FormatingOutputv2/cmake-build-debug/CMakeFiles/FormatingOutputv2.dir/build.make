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
CMAKE_SOURCE_DIR = C:\Users\matth\CLionProjects\CIS-161\FormatingOutputv2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\matth\CLionProjects\CIS-161\FormatingOutputv2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FormatingOutputv2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FormatingOutputv2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FormatingOutputv2.dir/flags.make

CMakeFiles/FormatingOutputv2.dir/Formattingoutputv2.cpp.obj: CMakeFiles/FormatingOutputv2.dir/flags.make
CMakeFiles/FormatingOutputv2.dir/Formattingoutputv2.cpp.obj: CMakeFiles/FormatingOutputv2.dir/includes_CXX.rsp
CMakeFiles/FormatingOutputv2.dir/Formattingoutputv2.cpp.obj: ../Formattingoutputv2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\matth\CLionProjects\CIS-161\FormatingOutputv2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FormatingOutputv2.dir/Formattingoutputv2.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\FormatingOutputv2.dir\Formattingoutputv2.cpp.obj -c C:\Users\matth\CLionProjects\CIS-161\FormatingOutputv2\Formattingoutputv2.cpp

CMakeFiles/FormatingOutputv2.dir/Formattingoutputv2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FormatingOutputv2.dir/Formattingoutputv2.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\matth\CLionProjects\CIS-161\FormatingOutputv2\Formattingoutputv2.cpp > CMakeFiles\FormatingOutputv2.dir\Formattingoutputv2.cpp.i

CMakeFiles/FormatingOutputv2.dir/Formattingoutputv2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FormatingOutputv2.dir/Formattingoutputv2.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\matth\CLionProjects\CIS-161\FormatingOutputv2\Formattingoutputv2.cpp -o CMakeFiles\FormatingOutputv2.dir\Formattingoutputv2.cpp.s

# Object files for target FormatingOutputv2
FormatingOutputv2_OBJECTS = \
"CMakeFiles/FormatingOutputv2.dir/Formattingoutputv2.cpp.obj"

# External object files for target FormatingOutputv2
FormatingOutputv2_EXTERNAL_OBJECTS =

FormatingOutputv2.exe: CMakeFiles/FormatingOutputv2.dir/Formattingoutputv2.cpp.obj
FormatingOutputv2.exe: CMakeFiles/FormatingOutputv2.dir/build.make
FormatingOutputv2.exe: CMakeFiles/FormatingOutputv2.dir/linklibs.rsp
FormatingOutputv2.exe: CMakeFiles/FormatingOutputv2.dir/objects1.rsp
FormatingOutputv2.exe: CMakeFiles/FormatingOutputv2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\matth\CLionProjects\CIS-161\FormatingOutputv2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FormatingOutputv2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\FormatingOutputv2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FormatingOutputv2.dir/build: FormatingOutputv2.exe

.PHONY : CMakeFiles/FormatingOutputv2.dir/build

CMakeFiles/FormatingOutputv2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\FormatingOutputv2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/FormatingOutputv2.dir/clean

CMakeFiles/FormatingOutputv2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\matth\CLionProjects\CIS-161\FormatingOutputv2 C:\Users\matth\CLionProjects\CIS-161\FormatingOutputv2 C:\Users\matth\CLionProjects\CIS-161\FormatingOutputv2\cmake-build-debug C:\Users\matth\CLionProjects\CIS-161\FormatingOutputv2\cmake-build-debug C:\Users\matth\CLionProjects\CIS-161\FormatingOutputv2\cmake-build-debug\CMakeFiles\FormatingOutputv2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FormatingOutputv2.dir/depend

