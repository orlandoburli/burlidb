//
// Created by Orlando Burli Júnior on 07/01/23.
//

#ifndef BURLIDB_INPUT_BUFFER_H
#define BURLIDB_INPUT_BUFFER_H


typedef struct {
    char *buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer();

#endif //BURLIDB_INPUT_BUFFER_H
