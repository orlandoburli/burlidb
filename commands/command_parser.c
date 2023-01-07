//
// Created by Orlando Burli Júnior on 07/01/23.
//

#include "command_parser.h"
#include "string.h"
#include "stdio.h"
#include "command_exit.h"

void print_unrecognized_command(char *command) {
    printf("Unrecognized command '%s'", command);
}

void parse_and_execute(char *command) {
    if (strcmp(command, ".exit") == 0) {
        execute_command_exit(command);
    } else {
        print_unrecognized_command(command);
    }
}

