# Copyright 2019 Manna Harbour
# https://github.com/manna-harbour/miryoku

ifeq ($(strip $(KEYBOARD)), cantor)
	# workaround for https://github.com/qmk/qmk_firmware/issues/16406
	NO_SUSPEND_POWER_DOWN =yes
endif
