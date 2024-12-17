# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/guy/software/nptool/NPSimulation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/guy/software/nptool/NPSimulation

# Include any dependencies generated for this target.
include Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/compiler_depend.make

# Include the progress variables for this target.
include Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/progress.make

# Include the compile flags for this target's objects.
include Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/flags.make

Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/SharcDev.cc.o: Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/flags.make
Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/SharcDev.cc.o: Detectors/SharcDev/SharcDev.cc
Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/SharcDev.cc.o: Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/software/nptool/NPSimulation/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/SharcDev.cc.o"
	cd /home/guy/software/nptool/NPSimulation/Detectors/SharcDev && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/SharcDev.cc.o -MF CMakeFiles/NPSSharcDev.dir/SharcDev.cc.o.d -o CMakeFiles/NPSSharcDev.dir/SharcDev.cc.o -c /home/guy/software/nptool/NPSimulation/Detectors/SharcDev/SharcDev.cc

Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/SharcDev.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NPSSharcDev.dir/SharcDev.cc.i"
	cd /home/guy/software/nptool/NPSimulation/Detectors/SharcDev && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/software/nptool/NPSimulation/Detectors/SharcDev/SharcDev.cc > CMakeFiles/NPSSharcDev.dir/SharcDev.cc.i

Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/SharcDev.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NPSSharcDev.dir/SharcDev.cc.s"
	cd /home/guy/software/nptool/NPSimulation/Detectors/SharcDev && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/software/nptool/NPSimulation/Detectors/SharcDev/SharcDev.cc -o CMakeFiles/NPSSharcDev.dir/SharcDev.cc.s

# Object files for target NPSSharcDev
NPSSharcDev_OBJECTS = \
"CMakeFiles/NPSSharcDev.dir/SharcDev.cc.o"

# External object files for target NPSSharcDev
NPSSharcDev_EXTERNAL_OBJECTS =

lib/libNPSSharcDev.so: Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/SharcDev.cc.o
lib/libNPSSharcDev.so: Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/build.make
lib/libNPSSharcDev.so: lib/libNPSCore.so
lib/libNPSSharcDev.so: lib/libNPSScorers.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4Tree.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4FR.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4GMocren.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4visHepRep.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4RayTracer.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4VRML.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4ToolsSG.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4OpenGL.so
lib/libNPSSharcDev.so: /usr/lib/x86_64-linux-gnu/libGL.so
lib/libNPSSharcDev.so: /usr/lib/x86_64-linux-gnu/libQt5OpenGL.so.5.15.3
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4vis_management.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4modeling.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4interfaces.so
lib/libNPSSharcDev.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
lib/libNPSSharcDev.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
lib/libNPSSharcDev.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4mctruth.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4geomtext.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4gdml.so
lib/libNPSSharcDev.so: /usr/lib/x86_64-linux-gnu/libxerces-c.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4error_propagation.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4readout.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4physicslists.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4run.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4event.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4tracking.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4parmodels.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4processes.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4analysis.so
lib/libNPSSharcDev.so: /usr/lib/x86_64-linux-gnu/libexpat.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4digits_hits.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4track.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4particles.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4geometry.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4materials.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4graphics_reps.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4intercoms.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4global.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4clhep.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4zlib.so
lib/libNPSSharcDev.so: /home/guy/software/geant4/geant4-v11.2.2-gdml-mt-install/lib/libG4ptl.so.2.3.3
lib/libNPSSharcDev.so: Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/guy/software/nptool/NPSimulation/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../lib/libNPSSharcDev.so"
	cd /home/guy/software/nptool/NPSimulation/Detectors/SharcDev && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NPSSharcDev.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/build: lib/libNPSSharcDev.so
.PHONY : Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/build

Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/clean:
	cd /home/guy/software/nptool/NPSimulation/Detectors/SharcDev && $(CMAKE_COMMAND) -P CMakeFiles/NPSSharcDev.dir/cmake_clean.cmake
.PHONY : Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/clean

Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/depend:
	cd /home/guy/software/nptool/NPSimulation && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/guy/software/nptool/NPSimulation /home/guy/software/nptool/NPSimulation/Detectors/SharcDev /home/guy/software/nptool/NPSimulation /home/guy/software/nptool/NPSimulation/Detectors/SharcDev /home/guy/software/nptool/NPSimulation/Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Detectors/SharcDev/CMakeFiles/NPSSharcDev.dir/depend

