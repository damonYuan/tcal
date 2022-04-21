cmake_minimum_required(VERSION 3.10)

# lib conf
set(LIBRARY_NAME
    tcal
)
set(LIBRARY_HEADERS_DIR
    include/${LIBRARY_NAME}
)
set(LIBRARY_HEADERS
${LIBRARY_HEADERS_DIR}/all.hpp
    ${LIBRARY_HEADERS_DIR}/utils.hpp
)
set(LIBRARY_SOURCE_DIR
    src
)
set(LIBRARY_SOURCE
    ${LIBRARY_SOURCE_DIR}/utils.cpp
)

# lib 
project(${LIBRARY_NAME} VERSION 1.0)
configure_file(tcal_conf.h.in tcal_conf.h)
add_library(${LIBRARY_NAME}
    ${LIBRARY_SOURCE}
)
target_include_directories(${LIBRARY_NAME} PRIVATE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/${LIBRARY_NAME}>
    $<INSTALL_INTERFACE:include/${LIBRARY_NAME}>
    "${CMAKE_CURRENT_BINARY_DIR}"
)
target_include_directories(${LIBRARY_NAME} INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

# install rules
install(TARGETS ${LIBRARY_NAME} DESTINATION lib)
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/tcal_conf.h" DESTINATION include)