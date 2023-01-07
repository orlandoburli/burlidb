#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "input/input_buffer.h"
#include "prompt/prompt_helper.h"
#include "input/input_reader.h"

int main(int argc, char* argv[]) {

    InputBuffer* inputBuffer = new_input_buffer();

    while (true) {
        prompt_print();

        read_input(inputBuffer);

        if (strcmp(inputBuffer->buffer, ".exit") == 0) {
            close_input_buffer(inputBuffer);
            exit(EXIT_SUCCESS);
        } else {
            printf("Unrecognized command '%s'", inputBuffer->buffer);
        }
    }

    return 0;
}
