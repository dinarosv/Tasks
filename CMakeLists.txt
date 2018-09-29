cmake_minimum_required(VERSION 3.6)

set(PROJECT_NAME
        "Oving1"
        )

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES Oving2/cube.cpp)

add_executable(Oving1 Oving1/main.cpp)
add_executable(Oving1b Oving1/b.cpp)
add_executable(Oving2 Oving2/cube.cpp)
add_executable(Oving3 Oving3/rubiks.cpp)
add_executable(Oving4 Oving4/rubiksoglys.cpp)
add_executable(Oving5 Oving5/rubiksogmaterial.cpp)
add_executable(Oving6 Oving6/rubikstexture.cpp)


find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})

target_link_libraries(Oving1 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
target_link_libraries(Oving1b ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
target_link_libraries(Oving2 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
target_link_libraries(Oving3 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
target_link_libraries(Oving4 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
target_link_libraries(Oving5 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
target_link_libraries(Oving6 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})





