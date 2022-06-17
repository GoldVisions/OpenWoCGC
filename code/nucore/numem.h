#ifndef NUMEM_H
#define NUMEM_H

#include "../types.h"
#include <stdlib.h>
#include <memory.h>

/*
  800be5ec 000110 800be5ec  4 NuMemAlloc 	Global
*/

extern void* memexternal;
extern void* memext[2];
extern void* highallocaddr;
extern void* peakallocaddr;
extern u32 totalloc;
extern u32 malloced;

// Set memory to be external, with a pointer and ending point.
void NuMemSetExternal(void* ptr, void* end);

// Allocate memory.
void* NuMemAlloc(size_t size); // TODO: FINISH NuMemAlloc!!!

// Free memory.
void NuMemFree(void* data);

// Allocate memory.
void* malloc_x(size_t size);

// Free memory.
void free_x(void* data);

#endif // !NUMEM_H