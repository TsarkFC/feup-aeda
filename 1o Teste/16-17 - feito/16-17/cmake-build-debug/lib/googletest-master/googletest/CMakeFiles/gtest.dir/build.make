# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\digas\OneDrive\Documentos\FEUP\2o ano - 2019-20\1o Semestre\AEDA\1o Teste\16-17 - feito\16-17"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\digas\OneDrive\Documentos\FEUP\2o ano - 2019-20\1o Semestre\AEDA\1o Teste\16-17 - feito\16-17\cmake-build-debug"

# Include any dependencies generated for this target.
include lib/googletest-master/googletest/CMakeFiles/gtest.dir/depend.make

# Include the progress variables for this target.
include lib/googletest-master/googletest/CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include lib/googletest-master/googletest/CMakeFiles/gtest.dir/flags.make

lib/googletest-master/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj: lib/googletest-master/googletest/CMakeFiles/gtest.dir/flags.make
lib/googletest-master/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj: lib/googletest-master/googletest/CMakeFiles/gtest.dir/includes_CXX.rsp
lib/googletest-master/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj: ../lib/googletest-master/googletest/src/gtest-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\digas\OneDrive\Documentos\FEUP\2o ano - 2019-20\1o Semestre\AEDA\1o Teste\16-17 - feito\16-17\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/googletest-master/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj"
	cd /d C:\Users\digas\OneDrive\DOCUME~1\FEUP\2OANO-~1\1OSEME~1\AEDA\1OTEST~1\16-17-~1\16-17\CMAKE-~1\lib\GOOGLE~1\GOOGLE~2 && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\gtest.dir\src\gtest-all.cc.obj -c "C:\Users\digas\OneDrive\Documentos\FEUP\2o ano - 2019-20\1o Semestre\AEDA\1o Teste\16-17 - feito\16-17\lib\googletest-master\googletest\src\gtest-all.cc"

lib/googletest-master/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest.dir/src/gtest-all.cc.i"
	cd /d C:\Users\digas\OneDrive\DOCUME~1\FEUP\2OANO-~1\1OSEME~1\AEDA\1OTEST~1\16-17-~1\16-17\CMAKE-~1\lib\GOOGLE~1\GOOGLE~2 && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\digas\OneDrive\Documentos\FEUP\2o ano - 2019-20\1o Semestre\AEDA\1o Teste\16-17 - feito\16-17\lib\googletest-master\googletest\src\gtest-all.cc" > CMakeFiles\gtest.dir\src\gtest-all.cc.i

lib/googletest-master/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/src/gtest-all.cc.s"
	cd /d C:\Users\digas\OneDrive\DOCUME~1\FEUP\2OANO-~1\1OSEME~1\AEDA\1OTEST~1\16-17-~1\16-17\CMAKE-~1\lib\GOOGLE~1\GOOGLE~2 && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\digas\OneDrive\Documentos\FEUP\2o ano - 2019-20\1o Semestre\AEDA\1o Teste\16-17 - feito\16-17\lib\googletest-master\googletest\src\gtest-all.cc" -o CMakeFiles\gtest.dir\src\gtest-all.cc.s

# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/src/gtest-all.cc.obj"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

lib/libgtestd.a: lib/googletest-master/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj
lib/libgtestd.a: lib/googletest-master/googletest/CMakeFiles/gtest.dir/build.make
lib/libgtestd.a: lib/googletest-master/googletest/CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\digas\OneDrive\Documentos\FEUP\2o ano - 2019-20\1o Semestre\AEDA\1o Teste\16-17 - feito\16-17\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ..\..\libgtestd.a"
	cd /d C:\Users\digas\OneDrive\DOCUME~1\FEUP\2OANO-~1\1OSEME~1\AEDA\1OTEST~1\16-17-~1\16-17\CMAKE-~1\lib\GOOGLE~1\GOOGLE~2 && $(CMAKE_COMMAND) -P CMakeFiles\gtest.dir\cmake_clean_target.cmake
	cd /d C:\Users\digas\OneDrive\DOCUME~1\FEUP\2OANO-~1\1OSEME~1\AEDA\1OTEST~1\16-17-~1\16-17\CMAKE-~1\lib\GOOGLE~1\GOOGLE~2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gtest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/googletest-master/googletest/CMakeFiles/gtest.dir/build: lib/libgtestd.a

.PHONY : lib/googletest-master/googletest/CMakeFiles/gtest.dir/build

lib/googletest-master/googletest/CMakeFiles/gtest.dir/clean:
	cd /d C:\Users\digas\OneDrive\DOCUME~1\FEUP\2OANO-~1\1OSEME~1\AEDA\1OTEST~1\16-17-~1\16-17\CMAKE-~1\lib\GOOGLE~1\GOOGLE~2 && $(CMAKE_COMMAND) -P CMakeFiles\gtest.dir\cmake_clean.cmake
.PHONY : lib/googletest-master/googletest/CMakeFiles/gtest.dir/clean

lib/googletest-master/googletest/CMakeFiles/gtest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\digas\OneDrive\Documentos\FEUP\2o ano - 2019-20\1o Semestre\AEDA\1o Teste\16-17 - feito\16-17" "C:\Users\digas\OneDrive\Documentos\FEUP\2o ano - 2019-20\1o Semestre\AEDA\1o Teste\16-17 - feito\16-17\lib\googletest-master\googletest" "C:\Users\digas\OneDrive\Documentos\FEUP\2o ano - 2019-20\1o Semestre\AEDA\1o Teste\16-17 - feito\16-17\cmake-build-debug" "C:\Users\digas\OneDrive\Documentos\FEUP\2o ano - 2019-20\1o Semestre\AEDA\1o Teste\16-17 - feito\16-17\cmake-build-debug\lib\googletest-master\googletest" "C:\Users\digas\OneDrive\Documentos\FEUP\2o ano - 2019-20\1o Semestre\AEDA\1o Teste\16-17 - feito\16-17\cmake-build-debug\lib\googletest-master\googletest\CMakeFiles\gtest.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : lib/googletest-master/googletest/CMakeFiles/gtest.dir/depend

