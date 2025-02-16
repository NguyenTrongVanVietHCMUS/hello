cmake_minimum_required(VERSION 3.16) 

project("DATAVISUALIZER")
    
file(GLOB_RECURSE HEADER_FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)
file(GLOB_RECURSE SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/picture
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})


add_executable(${PROJECT_NAME} ${HEADER_FILES} ${SOURCE_FILES})

add_subdirectory("raylib")

target_link_libraries(${PROJECT_NAME} PUBLIC raylib)


# cmake_minimum_required(VERSION 3.11)
# project(MyProject)

# # Set source files
# set(SOURCE_FILES
#     src/main.cpp
# )

# # Copy image file to build directory

# # Add executable
# add_executable(MyProject ${SOURCE_FILES})
