# CMake generated Testfile for 
# Source directory: C:/Users/z/Desktop/藤椅璇/CS351/project0/1402_CS351_Project0
# Build directory: C:/Users/z/Desktop/藤椅璇/CS351/project0/1402_CS351_Project0/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[RunAllTests]=] "C:/Users/z/Desktop/藤椅璇/CS351/project0/1402_CS351_Project0/build/Debug/twosum_tests.exe")
  set_tests_properties([=[RunAllTests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/z/Desktop/藤椅璇/CS351/project0/1402_CS351_Project0/CMakeLists.txt;34;add_test;C:/Users/z/Desktop/藤椅璇/CS351/project0/1402_CS351_Project0/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[RunAllTests]=] "C:/Users/z/Desktop/藤椅璇/CS351/project0/1402_CS351_Project0/build/Release/twosum_tests.exe")
  set_tests_properties([=[RunAllTests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/z/Desktop/藤椅璇/CS351/project0/1402_CS351_Project0/CMakeLists.txt;34;add_test;C:/Users/z/Desktop/藤椅璇/CS351/project0/1402_CS351_Project0/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[RunAllTests]=] "C:/Users/z/Desktop/藤椅璇/CS351/project0/1402_CS351_Project0/build/MinSizeRel/twosum_tests.exe")
  set_tests_properties([=[RunAllTests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/z/Desktop/藤椅璇/CS351/project0/1402_CS351_Project0/CMakeLists.txt;34;add_test;C:/Users/z/Desktop/藤椅璇/CS351/project0/1402_CS351_Project0/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[RunAllTests]=] "C:/Users/z/Desktop/藤椅璇/CS351/project0/1402_CS351_Project0/build/RelWithDebInfo/twosum_tests.exe")
  set_tests_properties([=[RunAllTests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/z/Desktop/藤椅璇/CS351/project0/1402_CS351_Project0/CMakeLists.txt;34;add_test;C:/Users/z/Desktop/藤椅璇/CS351/project0/1402_CS351_Project0/CMakeLists.txt;0;")
else()
  add_test([=[RunAllTests]=] NOT_AVAILABLE)
endif()
