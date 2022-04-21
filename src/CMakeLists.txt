cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# build
set(APP_PROJECT_NAME
    tcal_app
)
set(APP_SOURCE_DIR
    ${CMAKE_CURRENT_SOURCE_DIR}
)
set(APP_SOURCE
    ${APP_SOURCE_DIR}/app.cpp
)
project(${APP_PROJECT_NAME})
add_executable(${APP_PROJECT_NAME} ${APP_SOURCE})
target_link_libraries(${APP_PROJECT_NAME} tcal httplib)

# install
install(TARGETS ${APP_PROJECT_NAME} DESTINATION bin)
