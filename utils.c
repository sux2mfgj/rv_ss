#include "utils.h"

#include "stdio.h"
#include "sbi.h"

void panic(const char * text)
{
    put_string(text);
    put_char('\n');
    sbi_shutdown();
}

uint32_t big2little_32(uint32_t value)
{
    uint32_t tmp;
    uint32_t result = 0;
    for (int i = 0; i < sizeof(uint32_t); ++i) {
        tmp = (value >> (8 * i)) & 0xff;
        result |= tmp << ((sizeof(uint32_t) - i - 1) * 8);
    }

    return result;
}
