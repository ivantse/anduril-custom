// Emisar D4S V2 tint-ramping config options for Anduril (based on Noctigon K9.3)
#include "../../bzr/anduril2/ToyKeeper/spaghetti-monster/anduril/cfg-emisar-d4sv2-tintramp.h"

// Disable 200% Turbo
#undef RAMP_SMOOTH_CEIL
#define RAMP_SMOOTH_CEIL 130
#undef RAMP_DISCRETE_CEIL
#define RAMP_DISCRETE_CEIL 130

// Setting ramp floors
#undef RAMP_SMOOTH_FLOOR
#define RAMP_SMOOTH_FLOOR 1
#undef RAMP_DISCRETE_FLOOR
#define RAMP_DISCRETE_FLOOR 1

// Set Turbo Style to only ceiling
#undef DEFAULT_2C_STYLE
#define DEFAULT_2C_STYLE 0

#undef DEFAULT_AUTOLOCK_TIME
#define DEFAULT_AUTOLOCK_TIME 10 // minutes

// https://www.reddit.com/r/flashlight/comments/sxr1wu/comment/hxu66q6/?utm_source=share&utm_medium=web2x&context=3
#undef RGB_LED_OFF_DEFAULT
#define RGB_LED_OFF_DEFAULT 0x20 // high, red
#undef RGB_LED_LOCKOUT_DEFAULT
#define RGB_LED_LOCKOUT_DEFAULT 0x19 // low, voltage