add_library(request request.cpp)

# cpprestsdk
find_package(cpprestsdk CONFIG REQUIRED)
target_link_libraries(request PRIVATE cpprestsdk::cpprest cpprestsdk::cpprestsdk_zlib_internal cpprestsdk::cpprestsdk_boost_internal cpprestsdk::cpprestsdk_openssl_internal)
