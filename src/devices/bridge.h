#ifndef INCLUDE_BRIDGE_H
#define INCLUDE_BRIDGE_H

#ifdef BRIDGE_arduino
    #include "bridge/arduino.h"
#else
    #include "bridge/term.h"
#endif

#endif