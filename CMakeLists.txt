cmake_minimum_required(VERSION 3.16)

project(Basket2D LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_POLICY_VERSION_MINIMUM 3.5)

include(FetchContent)

FetchContent_Declare(
	SFML
	GIT_REPOSITORY https://github.com/SFML/SFML.git
	GIT_TAG 3.0.0
	GIT_SHALLOW ON
)

FetchContent_MakeAvailable(SFML)

add_executable(Tappa01 Tappa01/main.cpp)
target_link_libraries(Tappa01 PRIVATE SFML::Graphics)

add_executable(Tappa02 Tappa02/main.cpp)
target_link_libraries(Tappa02 PRIVATE SFML::Graphics)

add_executable(Tappa03 Tappa03/main.cpp)
target_link_libraries(Tappa03 PRIVATE SFML::Graphics)

add_executable(Tappa04 Tappa04/main.cpp)
target_link_libraries(Tappa04 PRIVATE SFML::Graphics)

add_executable(Tappa05 Tappa05/main.cpp)
target_link_libraries(Tappa05 PRIVATE SFML::Graphics)