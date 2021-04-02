#ifndef CHOMPJS_BUFFER_H
#define CHOMPJS_BUFFER_H

#include <stdbool.h>
#include <stddef.h>

struct CharBuffer {
    char* data;
    size_t size;
    size_t index;
};

void init_char_buffer(struct CharBuffer* buffer, size_t initial_depth_buffer_size);

void release_char_buffer(struct CharBuffer* buffer);

void push(struct CharBuffer* buffer, char value);

void push_string(struct CharBuffer* buffer, char* value, size_t len);

void pop(struct CharBuffer* buffer);

char top(struct CharBuffer* buffer);

bool empty(struct CharBuffer* buffer);

void clear(struct CharBuffer* buffer);

#endif
