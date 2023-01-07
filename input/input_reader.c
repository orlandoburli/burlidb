//
// Created by Orlando Burli Júnior on 07/01/23.
//

#include <stdio.h>
#include <stdlib.h>
#include "input_reader.h"


void read_input(InputBuffer* inputBuffer) {
    ssize_t bytes_read = getline(&(inputBuffer->buffer), &(inputBuffer->buffer_length), stdin);

    if (bytes_read <= 0) {
        printf("Error reading input\n");
        exit(EXIT_FAILURE);
    }

    inputBuffer->input_length = bytes_read - 1;
    inputBuffer->buffer[bytes_read - 1] = 0;
}

void close_input_buffer(InputBuffer* inputBuffer) {
    free(inputBuffer->buffer);
    free(inputBuffer);
}