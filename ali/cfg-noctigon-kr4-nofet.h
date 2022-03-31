// Noctigon KR4 (fetless) config options for Anduril
// (and Noctigon KR1)
// (and Emisar D4v2 E21A, a.k.a. "D4v2.5")
#include "../../bzr/anduril2/ToyKeeper/spaghetti-monster/anduril/cfg-noctigon-kr4-nofet.h"

// **** Ali Customizations ****
#undef USE_LOCKOUT_MODE
#undef USE_AUTOLOCK
#undef RGB_LED_OFF_DEFAULT
#define RGB_LED_OFF_DEFAULT 0x15 // low, purple

#define OVERRIDES_FILE ali.c