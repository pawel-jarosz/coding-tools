include_directories(${CMAKE_SOURCE_DIR}/includes/)

add_subdirectory(Common)
add_subdirectory(IncludeFinder)

add_executable(CppTools main.cpp)
target_link_libraries(CppTools include_finder common)