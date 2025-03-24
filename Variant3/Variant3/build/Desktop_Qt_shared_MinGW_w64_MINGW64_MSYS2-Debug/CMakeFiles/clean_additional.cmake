# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Variant3_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Variant3_autogen.dir\\ParseCache.txt"
  "Variant3_autogen"
  )
endif()
