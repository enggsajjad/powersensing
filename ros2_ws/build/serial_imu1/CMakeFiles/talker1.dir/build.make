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
CMAKE_SOURCE_DIR = /home/sajjad/Downloads/demo_ros2/ros2_ws/src/serial_imu1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sajjad/Downloads/demo_ros2/ros2_ws/build/serial_imu1

# Include any dependencies generated for this target.
include CMakeFiles/talker1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/talker1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/talker1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/talker1.dir/flags.make

CMakeFiles/talker1.dir/src/serial_port.cpp.o: CMakeFiles/talker1.dir/flags.make
CMakeFiles/talker1.dir/src/serial_port.cpp.o: /home/sajjad/Downloads/demo_ros2/ros2_ws/src/serial_imu1/src/serial_port.cpp
CMakeFiles/talker1.dir/src/serial_port.cpp.o: CMakeFiles/talker1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sajjad/Downloads/demo_ros2/ros2_ws/build/serial_imu1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/talker1.dir/src/serial_port.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/talker1.dir/src/serial_port.cpp.o -MF CMakeFiles/talker1.dir/src/serial_port.cpp.o.d -o CMakeFiles/talker1.dir/src/serial_port.cpp.o -c /home/sajjad/Downloads/demo_ros2/ros2_ws/src/serial_imu1/src/serial_port.cpp

CMakeFiles/talker1.dir/src/serial_port.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/talker1.dir/src/serial_port.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sajjad/Downloads/demo_ros2/ros2_ws/src/serial_imu1/src/serial_port.cpp > CMakeFiles/talker1.dir/src/serial_port.cpp.i

CMakeFiles/talker1.dir/src/serial_port.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/talker1.dir/src/serial_port.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sajjad/Downloads/demo_ros2/ros2_ws/src/serial_imu1/src/serial_port.cpp -o CMakeFiles/talker1.dir/src/serial_port.cpp.s

CMakeFiles/talker1.dir/src/ch_serial.c.o: CMakeFiles/talker1.dir/flags.make
CMakeFiles/talker1.dir/src/ch_serial.c.o: /home/sajjad/Downloads/demo_ros2/ros2_ws/src/serial_imu1/src/ch_serial.c
CMakeFiles/talker1.dir/src/ch_serial.c.o: CMakeFiles/talker1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sajjad/Downloads/demo_ros2/ros2_ws/build/serial_imu1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/talker1.dir/src/ch_serial.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/talker1.dir/src/ch_serial.c.o -MF CMakeFiles/talker1.dir/src/ch_serial.c.o.d -o CMakeFiles/talker1.dir/src/ch_serial.c.o -c /home/sajjad/Downloads/demo_ros2/ros2_ws/src/serial_imu1/src/ch_serial.c

CMakeFiles/talker1.dir/src/ch_serial.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/talker1.dir/src/ch_serial.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sajjad/Downloads/demo_ros2/ros2_ws/src/serial_imu1/src/ch_serial.c > CMakeFiles/talker1.dir/src/ch_serial.c.i

CMakeFiles/talker1.dir/src/ch_serial.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/talker1.dir/src/ch_serial.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sajjad/Downloads/demo_ros2/ros2_ws/src/serial_imu1/src/ch_serial.c -o CMakeFiles/talker1.dir/src/ch_serial.c.s

# Object files for target talker1
talker1_OBJECTS = \
"CMakeFiles/talker1.dir/src/serial_port.cpp.o" \
"CMakeFiles/talker1.dir/src/ch_serial.c.o"

# External object files for target talker1
talker1_EXTERNAL_OBJECTS =

talker1: CMakeFiles/talker1.dir/src/serial_port.cpp.o
talker1: CMakeFiles/talker1.dir/src/ch_serial.c.o
talker1: CMakeFiles/talker1.dir/build.make
talker1: /opt/ros/humble/lib/librclcpp.so
talker1: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_fastrtps_c.so
talker1: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_fastrtps_cpp.so
talker1: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
talker1: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
talker1: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_cpp.so
talker1: /opt/ros/humble/lib/libstd_msgs__rosidl_generator_py.so
talker1: /home/sajjad/Downloads/demo_ros2/ros2_ws/install/custom_msg1/lib/libcustom_msg1__rosidl_typesupport_fastrtps_c.so
talker1: /home/sajjad/Downloads/demo_ros2/ros2_ws/install/custom_msg1/lib/libcustom_msg1__rosidl_typesupport_introspection_c.so
talker1: /home/sajjad/Downloads/demo_ros2/ros2_ws/install/custom_msg1/lib/libcustom_msg1__rosidl_typesupport_fastrtps_cpp.so
talker1: /home/sajjad/Downloads/demo_ros2/ros2_ws/install/custom_msg1/lib/libcustom_msg1__rosidl_typesupport_introspection_cpp.so
talker1: /home/sajjad/Downloads/demo_ros2/ros2_ws/install/custom_msg1/lib/libcustom_msg1__rosidl_typesupport_cpp.so
talker1: /home/sajjad/Downloads/demo_ros2/ros2_ws/install/custom_msg1/lib/libcustom_msg1__rosidl_generator_py.so
talker1: /opt/ros/humble/lib/liblibstatistics_collector.so
talker1: /opt/ros/humble/lib/librcl.so
talker1: /opt/ros/humble/lib/librmw_implementation.so
talker1: /opt/ros/humble/lib/libament_index_cpp.so
talker1: /opt/ros/humble/lib/librcl_logging_spdlog.so
talker1: /opt/ros/humble/lib/librcl_logging_interface.so
talker1: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
talker1: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
talker1: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
talker1: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
talker1: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_cpp.so
talker1: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_py.so
talker1: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_c.so
talker1: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_c.so
talker1: /opt/ros/humble/lib/librcl_yaml_param_parser.so
talker1: /opt/ros/humble/lib/libyaml.so
talker1: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
talker1: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
talker1: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
talker1: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
talker1: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
talker1: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_py.so
talker1: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_c.so
talker1: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_c.so
talker1: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_c.so
talker1: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_cpp.so
talker1: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
talker1: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
talker1: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
talker1: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_py.so
talker1: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_c.so
talker1: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_c.so
talker1: /opt/ros/humble/lib/libtracetools.so
talker1: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
talker1: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
talker1: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
talker1: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
talker1: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
talker1: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_c.so
talker1: /opt/ros/humble/lib/libstd_msgs__rosidl_generator_c.so
talker1: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_py.so
talker1: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
talker1: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_c.so
talker1: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_c.so
talker1: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_cpp.so
talker1: /opt/ros/humble/lib/libfastcdr.so.1.0.24
talker1: /opt/ros/humble/lib/librmw.so
talker1: /opt/ros/humble/lib/librosidl_typesupport_introspection_cpp.so
talker1: /opt/ros/humble/lib/librosidl_typesupport_introspection_c.so
talker1: /opt/ros/humble/lib/librosidl_typesupport_cpp.so
talker1: /home/sajjad/Downloads/demo_ros2/ros2_ws/install/custom_msg1/lib/libcustom_msg1__rosidl_typesupport_c.so
talker1: /home/sajjad/Downloads/demo_ros2/ros2_ws/install/custom_msg1/lib/libcustom_msg1__rosidl_generator_c.so
talker1: /opt/ros/humble/lib/librosidl_typesupport_c.so
talker1: /opt/ros/humble/lib/librcpputils.so
talker1: /opt/ros/humble/lib/librosidl_runtime_c.so
talker1: /opt/ros/humble/lib/librcutils.so
talker1: /usr/lib/x86_64-linux-gnu/libpython3.10.so
talker1: CMakeFiles/talker1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sajjad/Downloads/demo_ros2/ros2_ws/build/serial_imu1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable talker1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/talker1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/talker1.dir/build: talker1
.PHONY : CMakeFiles/talker1.dir/build

CMakeFiles/talker1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/talker1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/talker1.dir/clean

CMakeFiles/talker1.dir/depend:
	cd /home/sajjad/Downloads/demo_ros2/ros2_ws/build/serial_imu1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sajjad/Downloads/demo_ros2/ros2_ws/src/serial_imu1 /home/sajjad/Downloads/demo_ros2/ros2_ws/src/serial_imu1 /home/sajjad/Downloads/demo_ros2/ros2_ws/build/serial_imu1 /home/sajjad/Downloads/demo_ros2/ros2_ws/build/serial_imu1 /home/sajjad/Downloads/demo_ros2/ros2_ws/build/serial_imu1/CMakeFiles/talker1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/talker1.dir/depend
