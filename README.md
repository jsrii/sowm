# sowm (*~~Simple~~ Shitty Opinionated Window Manager*)

<a href="https://user-images.githubusercontent.com/6799467/66687576-9747c200-ec72-11e9-947d-5b96753eab03.jpg"><img src="https://user-images.githubusercontent.com/6799467/66687576-9747c200-ec72-11e9-947d-5b96753eab03.jpg" width="43%" align="right"></a>

An itsy bitsy floating window manager (*220~ sloc!*).

- Floating only.
- Fullscreen toggle.
- Window centering.
- Mix of mouse and keyboard workflow.
- Focus with cursor.
- Rounded corners (*[through patch](https://github.com/dylanaraps/sowm/pull/58)*)
- Titlebars (*[through patch](https://github.com/dylanaraps/sowm/pull/57)*)
- Added by [jsrii](https://github.com/jsrii):
    - New window management shortcuts
    - Window resizing with arrow-keys
    - Moving window with arrow-keys
    - Centering mouse inside window when moved via keybinds
    - To come:
        - Better window resizing (w/ mouse)
        - Better window killing (killing specific child process instead of parent)

<a href="https://user-images.githubusercontent.com/6799467/66687814-8cd9f800-ec73-11e9-97b8-6ae77876bd1b.jpg"><img src="https://user-images.githubusercontent.com/6799467/66687814-8cd9f800-ec73-11e9-97b8-6ae77876bd1b.jpg" width="43%" align="right"></a>

- Alt-Tab window focusing.
- All windows die on exit.
- No window borders.
- [No ICCCM](https://web.archive.org/web/20190617214524/https://raw.githubusercontent.com/kfish/xsel/1a1c5edf0dc129055f7764c666da2dd468df6016/rant.txt).
- No EWMH.
- etc etc etc


<br>

Patches available here: https://github.com/dylanaraps/sowm/pulls

## Default Keybindings

**Window Management / Functionality**

| combo                      | action                 |
| -------------------------- | -----------------------|
| `Mouse`                    | focus under cursor     |
| `MOD4` + `Left Mouse`      | move window            |
| `MOD4` + `Right Mouse`     | resize window          |
| `MOD4` + `Left Arrow`      | move window left       |
| `MOD4` + `Right Arrow`     | move window right      |
| `MOD4` + `f`               | maximize toggle        |
| `MOD4` + `g`               | center window          |
| `MOD4` + `c`               | kill window            |
| `MOD4` + `1-6`             | desktop swap           |
| `MOD4` + `Shift` +`1-6`    | send window to desktop |
| `MOD1` + `TAB` (*alt-tab*) | focus cycle            |
| `MOD4` + `m`               | exit sowm              |

**Programs**

| combo                    | action           | program        |
| ------------------------ | ---------------- | -------------- |
| `MOD4` + `Return`        | menu             | `rofi`         |
| `MOD4` + `d`             | terminal         | `alacritty`    |
| `MOD4` + `p`             | scrot            | `scr`          |
| `XF86_AudioLowerVolume`  | volume down      | `amixer`       |
| `XF86_AudioRaiseVolume`  | volume up        | `amixer`       |
| `XF86_AudioMute`         | volume toggle    | `amixer`       |
| `XF86_MonBrightnessUp`   | brightness up    | `bri`          |
| `XF86_MonBrightnessDown` | brightness down  | `bri`          |


## Dependencies

- `xlib` (*usually `libX11`*).


## Installation

1) Copy `config.def.h` to `config.h` and modify it to suit your needs.
2) Run `make` to build `sowm`.
3) Copy it to your path or run `make install`.
    - `DESTDIR` and `PREFIX` are supported.
4) (Optional) Apply patch with `git apply patches/patch-name`
    - In case of applying multiple patches, it has to be done **manually**.

If you are using GDM, save the following to `/usr/share/xsessions/sowm.desktop`. It is still recommended to start `sowm` from `.xinitrc` or through
[your own xinit implementation](https://github.com/dylanaraps/bin/blob/dfd9a9ff4555efb1cc966f8473339f37d13698ba/x).

```
[Desktop Entry]
Name=sowm
Comment=This session runs sowm as desktop manager
Exec=sowm
Type=Application
```


## Thanks

- [2bwm](https://github.com/venam/2bwm)
- [SmallWM](https://github.com/adamnew123456/SmallWM)
- [berry](https://github.com/JLErvin/berry)
- [catwm](https://github.com/pyknite/catwm)
- [dminiwm](https://github.com/moetunes/dminiwm)
- [dwm](https://dwm.suckless.org)
- [monsterwm](https://github.com/c00kiemon5ter/monsterwm)
- [openbox](https://github.com/danakj/openbox)
- [possum-wm](https://github.com/duckinator/possum-wm)
- [swm](https://github.com/dcat/swm)
- [tinywm](http://incise.org/tinywm.html)
