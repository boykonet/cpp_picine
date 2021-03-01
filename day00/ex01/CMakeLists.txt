cmake_minimum_required(VERSION 2.5)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex01 contact.cpp
                    phonebook.cpp
                    add_new_contact.cpp
                    print_contact_data.cpp
                    print_list.cpp
                    )
