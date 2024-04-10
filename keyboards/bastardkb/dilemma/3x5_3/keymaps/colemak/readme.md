# Dilemma `colemak` keymap

The Dilemma `colemak` keymap is based on a Colemak [Miryoku layers](https://github.com/manna-harbour/miryoku), and some features and changes specific to the Dilemma.

This layout also supports VIA.

## Notes for Miryoku users
This keymap does not support all the Miryoku features; it's based on my own usage.

The main difference is that the mouse layer is replaced by the Dilemma mouse layer and is enabled by holding `Z`, this means that `tab` on the thumb cluster no longer activates the mouse layer. It is a valid candidate for enabling layer 7 in VIA and adding personal stuff.

## Customizing the keymap

### Clipboard features

This keymap supports the official [Miryoku customizations for clipboard features](https://github.com/manna-harbour/miryoku/tree/master/docs/reference#clipboard).

#### Default

The main clipboard keys (`cut`, `copy`, and `paste`) use the CUA bindings and should work in general unix and windows applications, emacs, and terminal emulators. The additional keys (`undo`, `redo`) use Fun Cluster keycodes and usually require rebinding in the application.

#### Fun Cluster
```
MIRYOKU_CLIPBOARD=FUN
```

#### Mac

```
MIRYOKU_CLIPBOARD=MAC
```

#### Windows

```
MIRYOKU_CLIPBOARD=WIN
```

### Dynamic DPI scaling

Use the following keycodes to change the default DPI:

-   `POINTER_DEFAULT_DPI_FORWARD`: increases the DPI; decreases when shifted;
-   `POINTER_DEFAULT_DPI_REVERSE`: decreases the DPI; increases when shifted.

There's a maximum of 16 possible values for the sniping mode DPI. See the [Dilemma documentation](../../README.md) for more information.

Use the following keycodes to change the sniping mode DPI:

-   `POINTER_SNIPING_DPI_FORWARD`: increases the DPI; decreases when shifted;
-   `POINTER_SNIPING_DPI_REVERSE`: decreases the DPI; increases when shifted.

There's a maximum of 4 possible values for the sniping mode DPI. See the [Dilemma documentation](../../README.md) for more information.

### Drag-scroll

Use the `DRAGSCROLL_MODE` keycode to enable drag-scroll on hold. Use the `DRAGSCROLL_TOGGLE` keycode to enable/disable drag-scroll on key press.

### Circular scroll

By default, the firmware is configured to enable the circular scroll feature on Cirque trackpad.

To disable this, add the following to your keymap:

```c
#undef POINTING_DEVICE_GESTURES_SCROLL_ENABLE
```

### Sniping

Use the `SNIPING_MODE` keycode to enable sniping mode on hold. Use the `SNIPING_MODE_TOGGLE` (aliased as `SNP_TOG`) keycode to enable/disable sniping mode on key press.

Change the value of `DILEMMA_AUTO_SNIPING_ON_LAYER` to automatically enable sniping mode on layer change. By default, sniping mode is enabled on the pointer layer:

```c
#define DILEMMA_AUTO_SNIPING_ON_LAYER LAYER_POINTER
```
