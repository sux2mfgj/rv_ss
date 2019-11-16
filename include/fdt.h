#pragma once

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

typedef struct property
{
    struct property *next;
    uint32_t *value;
    size_t len;
    char *name;
} property_t;

bool init_fdt(uint64_t fdt_base);
property_t* get_property(const char* node_path, const char* prop_name);


