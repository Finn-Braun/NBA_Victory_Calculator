cmake_minimum_required(VERSION 3.23)
project(NBA_Victory_Calculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(NBA_Victory_Calculator main.cpp)

set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ -lwsock32 -lws2_32 ${CMAKE_CXX_STANDARD_LIBRARIES}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive")