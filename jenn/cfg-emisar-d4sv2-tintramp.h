// Emisar D4S V2 tint-ramping config options for Anduril (based on Noctigon K9.3)
#include "../../bzr/anduril2/ToyKeeper/spaghetti-monster/anduril/cfg-emisar-d4sv2-tintramp.h"

#undef RAMP_SMOOTH_CEIL
#define RAMP_SMOOTH_CEIL 100
#undef RAMP_DISCRETE_CEIL
#define RAMP_DISCRETE_CEIL 100

// https://www.reddit.com/r/flashlight/comments/sxr1wu/comment/hxu66q6/?utm_source=share&utm_medium=web2x&context=3
#undef RGB_LED_OFF_DEFAULT
#define RGB_LED_OFF_DEFAULT 0x25 // high, purple
#undef RGB_LED_LOCKOUT_DEFAULT
#define RGB_LED_LOCKOUT_DEFAULT 0x19 // low, voltage
