#ifndef WYLIODRIN_H
#define WYLIODRIN_H

#include <stdlib.h>

// Signals library
#include <Wyliodrin/signals.h>

// Include the wiring library
#include <Wyliodrin/wiring.h>

// Plugins
#include <Wyliodrin/lcd.h>

#ifdef __cplusplus
extern "C" {
#endif

// Intialize wyliodrin
void wyliodrinSetup (void);

int get_version_major();
int get_version_minor();

//  send signal value

#ifdef __cplusplus
}
#endif

#endif // WYLIODRIN_H

