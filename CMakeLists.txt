cmake_minimum_required(VERSION 3.22)
project(test CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH ~/vcpkg/installed/x64-osx)
set(CMAKE_OSX_DEPLOYMENT_TARGET "12.0" CACHE STRING "" FORCE)

add_executable(main src/main.cpp)
set_target_properties(main PROPERTIES OUTPUT_NAME "main.out")
target_compile_features(main PUBLIC cxx_std_11)
target_include_directories(main PRIVATE /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include)

# request
add_subdirectory(src/request)
target_link_libraries(main PRIVATE request)

# tiny-dnn
find_path(TINY_DNN_INCLUDE_DIRS "tiny_dnn/activations/activation_layer.h")
target_include_directories(main PRIVATE ${TINY_DNN_INCLUDE_DIRS})
