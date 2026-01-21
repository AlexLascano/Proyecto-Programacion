# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\gestionPeliculas_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\gestionPeliculas_autogen.dir\\ParseCache.txt"
  "gestionPeliculas_autogen"
  )
endif()
