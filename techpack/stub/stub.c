// SPDX-License-Identifier: GPL-2.0-only

#include <linux/types.h>

#if (defined(CONFIG_TOUCHSCREEN_DOUBLETAP2WAKE) || defined(CONFIG_TOUCHSCREEN_SWEEP2WAKE))
bool gesture_incall = false;
#endif

static void _techpack_stub(void)
{
}
