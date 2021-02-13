cmake_minimum_required(VERSION 3.16)
project(milendall)

find_package(nlohmann_json 3.2.0 REQUIRED)

find_package(Boost 1.40 COMPONENTS program_options REQUIRED)


# add the executable
add_executable(milendall_build_room_gltf generator/src/build_room_gltf.cxx)

target_link_libraries(milendall_build_room_gltf ${Boost_LIBRARIES} nlohmann_json::nlohmann_json)