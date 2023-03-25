// Copyright 2023 Alessio Caiazza (@nolith)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "quantum.h"

#if defined(KEYBOARD_cantor)
void suspend_wakeup_init_user(void) {
// Workaround for https://github.com/qmk/qmk_firmware/issues/16406
    NVIC_SystemReset();
}
#endif
