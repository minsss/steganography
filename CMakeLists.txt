cmake_minimum_required(VERSION 2.8)
project( dataMash )
find_package( OpenCV REQUIRED )

set( NAME_SRC
	src/main.cpp
	src/imageProcess.cpp
	src/msgProcess.cpp
	src/cryptProcess.cpp
	src/decoder.cpp
)
set( NAME_HEADERS
	include/imageProcess.hpp
	include/msgProcess.hpp
	include/cryptProcess.hpp
	include/decoder.hpp
)

INCLUDE_DIRECTORIES( ${CMAKE_CURRENT_SOURCE_DIR}/include )
link_directories( ${CMAKE_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
add_executable( image ${NAME_SRC} ${NAME_HEADERS} )

target_link_libraries( image ${OpenCV_LIBS} )
