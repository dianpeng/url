# Copyright (c) Glyn Matthews 2018-20.
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE_1_0.txt or copy at
# http://www.boost.org/LICENSE_1_0.txt)

include(${Skyr_SOURCE_DIR}/cmake/SkyrFunctions.cmake)

set(
        EXAMPLES
        example_01.cpp
        example_02.cpp
        example_03.cpp
        example_04.cpp
        example_05.cpp
        example_06.cpp
        example_07.cpp
        example_08.cpp
        example_09.cpp
        example_10.cpp
    )

foreach(file_name ${EXAMPLES})
    remove_extension(${file_name} example)
    add_executable(${example} ${example}.cpp)
    add_dependencies(${example} Skyr::skyr-url)
    target_link_libraries(
        ${example}
        PRIVATE
            Skyr::skyr-url
    )
    set_target_properties(
        ${example}
        PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY ${Skyr_BINARY_DIR}/examples
    )
endforeach()
