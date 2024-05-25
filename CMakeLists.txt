cmake_minimum_required(VERSION 3.26)
project(lab C)

set(CMAKE_C_STANDARD 11)

add_executable(lab main.c
        libs/data_structures/vector/vector.h
        libs/data_structures/vector/vector.c
        libs/data_structures/vector/vectorVoid.c
        libs/data_structures/vector/vectorVoid.h
        libs/data_structures/matrix/matrix.h
        libs/data_structures/matrix/matrix.c
        libs/string/tasks/string_.c
        libs/string/tasks/string_.h
        libs/L_W_20/tasks/L_W_20.c
        libs/L_W_20/tasks/L_W_20.h
        libs/L_W_20/tests/L_W_20_test.c
        libs/L_W_20/tests/L_W_20_test.h
)

add_subdirectory(libs)
target_link_libraries(lab data_structures)
target_link_libraries(lab algorithms)
target_link_libraries(lab string)
target_link_libraries(lab file_io)
target_link_libraries(lab L_W_20)