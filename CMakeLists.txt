cmake_minimum_required(VERSION 3.3)
project(LogicKing)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp Metody.cpp Metody.h)
add_executable(LogicKing ${SOURCE_FILES} Metody.cpp Metody.h)

INCLUDE_DIRECTORIES(allegro/5.0.11/include)

LINK_DIRECTORIES(allegro/5.0.11/lib)

TARGET_LINK_LIBRARIES(LogicKing
        allegro_acodec
        allegro_audio
        allegro_color
        allegro_dialog
        allegro_image
        allegro_main
        allegro_memfile
        allegro_physfs
        allegro_primitives
        allegro_ttf
        allegro_font
        allegro)