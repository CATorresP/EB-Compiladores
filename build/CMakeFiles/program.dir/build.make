# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cessart/eb/pregunta1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cessart/eb/pregunta1/build

# Include any dependencies generated for this target.
include CMakeFiles/program.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/program.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/program.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/program.dir/flags.make

CMakeFiles/program.dir/ExprBaseVisitor.cpp.o: CMakeFiles/program.dir/flags.make
CMakeFiles/program.dir/ExprBaseVisitor.cpp.o: /home/cessart/eb/pregunta1/ExprBaseVisitor.cpp
CMakeFiles/program.dir/ExprBaseVisitor.cpp.o: CMakeFiles/program.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cessart/eb/pregunta1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/program.dir/ExprBaseVisitor.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/program.dir/ExprBaseVisitor.cpp.o -MF CMakeFiles/program.dir/ExprBaseVisitor.cpp.o.d -o CMakeFiles/program.dir/ExprBaseVisitor.cpp.o -c /home/cessart/eb/pregunta1/ExprBaseVisitor.cpp

CMakeFiles/program.dir/ExprBaseVisitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/program.dir/ExprBaseVisitor.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cessart/eb/pregunta1/ExprBaseVisitor.cpp > CMakeFiles/program.dir/ExprBaseVisitor.cpp.i

CMakeFiles/program.dir/ExprBaseVisitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/program.dir/ExprBaseVisitor.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cessart/eb/pregunta1/ExprBaseVisitor.cpp -o CMakeFiles/program.dir/ExprBaseVisitor.cpp.s

CMakeFiles/program.dir/ExprLexer.cpp.o: CMakeFiles/program.dir/flags.make
CMakeFiles/program.dir/ExprLexer.cpp.o: /home/cessart/eb/pregunta1/ExprLexer.cpp
CMakeFiles/program.dir/ExprLexer.cpp.o: CMakeFiles/program.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cessart/eb/pregunta1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/program.dir/ExprLexer.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/program.dir/ExprLexer.cpp.o -MF CMakeFiles/program.dir/ExprLexer.cpp.o.d -o CMakeFiles/program.dir/ExprLexer.cpp.o -c /home/cessart/eb/pregunta1/ExprLexer.cpp

CMakeFiles/program.dir/ExprLexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/program.dir/ExprLexer.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cessart/eb/pregunta1/ExprLexer.cpp > CMakeFiles/program.dir/ExprLexer.cpp.i

CMakeFiles/program.dir/ExprLexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/program.dir/ExprLexer.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cessart/eb/pregunta1/ExprLexer.cpp -o CMakeFiles/program.dir/ExprLexer.cpp.s

CMakeFiles/program.dir/ExprParser.cpp.o: CMakeFiles/program.dir/flags.make
CMakeFiles/program.dir/ExprParser.cpp.o: /home/cessart/eb/pregunta1/ExprParser.cpp
CMakeFiles/program.dir/ExprParser.cpp.o: CMakeFiles/program.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cessart/eb/pregunta1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/program.dir/ExprParser.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/program.dir/ExprParser.cpp.o -MF CMakeFiles/program.dir/ExprParser.cpp.o.d -o CMakeFiles/program.dir/ExprParser.cpp.o -c /home/cessart/eb/pregunta1/ExprParser.cpp

CMakeFiles/program.dir/ExprParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/program.dir/ExprParser.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cessart/eb/pregunta1/ExprParser.cpp > CMakeFiles/program.dir/ExprParser.cpp.i

CMakeFiles/program.dir/ExprParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/program.dir/ExprParser.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cessart/eb/pregunta1/ExprParser.cpp -o CMakeFiles/program.dir/ExprParser.cpp.s

CMakeFiles/program.dir/ExprVisitor.cpp.o: CMakeFiles/program.dir/flags.make
CMakeFiles/program.dir/ExprVisitor.cpp.o: /home/cessart/eb/pregunta1/ExprVisitor.cpp
CMakeFiles/program.dir/ExprVisitor.cpp.o: CMakeFiles/program.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cessart/eb/pregunta1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/program.dir/ExprVisitor.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/program.dir/ExprVisitor.cpp.o -MF CMakeFiles/program.dir/ExprVisitor.cpp.o.d -o CMakeFiles/program.dir/ExprVisitor.cpp.o -c /home/cessart/eb/pregunta1/ExprVisitor.cpp

CMakeFiles/program.dir/ExprVisitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/program.dir/ExprVisitor.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cessart/eb/pregunta1/ExprVisitor.cpp > CMakeFiles/program.dir/ExprVisitor.cpp.i

CMakeFiles/program.dir/ExprVisitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/program.dir/ExprVisitor.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cessart/eb/pregunta1/ExprVisitor.cpp -o CMakeFiles/program.dir/ExprVisitor.cpp.s

CMakeFiles/program.dir/language.cpp.o: CMakeFiles/program.dir/flags.make
CMakeFiles/program.dir/language.cpp.o: /home/cessart/eb/pregunta1/language.cpp
CMakeFiles/program.dir/language.cpp.o: CMakeFiles/program.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cessart/eb/pregunta1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/program.dir/language.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/program.dir/language.cpp.o -MF CMakeFiles/program.dir/language.cpp.o.d -o CMakeFiles/program.dir/language.cpp.o -c /home/cessart/eb/pregunta1/language.cpp

CMakeFiles/program.dir/language.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/program.dir/language.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cessart/eb/pregunta1/language.cpp > CMakeFiles/program.dir/language.cpp.i

CMakeFiles/program.dir/language.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/program.dir/language.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cessart/eb/pregunta1/language.cpp -o CMakeFiles/program.dir/language.cpp.s

# Object files for target program
program_OBJECTS = \
"CMakeFiles/program.dir/ExprBaseVisitor.cpp.o" \
"CMakeFiles/program.dir/ExprLexer.cpp.o" \
"CMakeFiles/program.dir/ExprParser.cpp.o" \
"CMakeFiles/program.dir/ExprVisitor.cpp.o" \
"CMakeFiles/program.dir/language.cpp.o"

# External object files for target program
program_EXTERNAL_OBJECTS =

program: CMakeFiles/program.dir/ExprBaseVisitor.cpp.o
program: CMakeFiles/program.dir/ExprLexer.cpp.o
program: CMakeFiles/program.dir/ExprParser.cpp.o
program: CMakeFiles/program.dir/ExprVisitor.cpp.o
program: CMakeFiles/program.dir/language.cpp.o
program: CMakeFiles/program.dir/build.make
program: CMakeFiles/program.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/cessart/eb/pregunta1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable program"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/program.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/program.dir/build: program
.PHONY : CMakeFiles/program.dir/build

CMakeFiles/program.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/program.dir/cmake_clean.cmake
.PHONY : CMakeFiles/program.dir/clean

CMakeFiles/program.dir/depend:
	cd /home/cessart/eb/pregunta1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cessart/eb/pregunta1 /home/cessart/eb/pregunta1 /home/cessart/eb/pregunta1/build /home/cessart/eb/pregunta1/build /home/cessart/eb/pregunta1/build/CMakeFiles/program.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/program.dir/depend

