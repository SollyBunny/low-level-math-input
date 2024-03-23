#ifndef INCLUDE_INPUT_H
#define INCLUDE_INPUT_H

#ifdef INPUT_8x4
    #include "input/8x4.h"
#else
    #include "input/term.h"
#endif

#endif