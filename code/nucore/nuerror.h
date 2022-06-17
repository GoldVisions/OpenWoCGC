#ifndef NUERROR_H
#define NUERROR_H

#include "../types.h"
#include "nucoretypes.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

extern char txt[0x400];
extern char captxt[0x100];
extern char* nufile;
extern u32 nuline;

// Print an error to the console.
void NuErrorFunction(char message[0x60], ...);

// Prepare to run an error.
error_func NuErrorProlog(char* file, u32 line);

#endif // !NUERROR_H