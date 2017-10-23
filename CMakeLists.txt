cmake_minimum_required(VERSION 2.8)

project(test1)
add_executable(test1 test1.cpp)


find_package(PkgConfig REQUIRED)
pkg_search_module(GLFW REQUIRED glfw3)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
find_package(GLEW REQUIRED)
find_path(GLEW_INCLUDE_DIR GL/glew.h)
find_library(GLEW_LIBRARY NAMES GLEW glew32 glew glew32s PATH_SUFFIXES lib64)


    


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)

include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
include_directories(${GLFW_INCLUDE_DIRS})
include_directories(${GLEW_INCLUDE_DIRS})

target_link_libraries(test1 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} Threads::Threads)
target_link_libraries(test1 ${GLFW_LIBRARIES})
target_link_libraries(test1 ${GLFW_STATIC_LIBRARIES})
target_link_libraries(test1 ${GLEW_LIBRARIES})

