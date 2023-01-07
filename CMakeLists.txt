cmake_minimum_required(VERSION 3.24)
project(burlidb C)

set(CMAKE_C_STANDARD 11)

add_executable(burlidb main.c input/input_buffer.h input/input_buffer.c prompt/prompt_helper.c prompt/prompt_helper.h constants.h input/input_reader.c input/input_reader.h commands/command_exit.c commands/command_exit.h commands/command_parser.c commands/command_parser.h commands/command_parser.h commands/command_exit.c)
