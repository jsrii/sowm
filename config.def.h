#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask

//const char* menu[]    = {"rofi", "-show", "drun", "-theme", "~/.config/rofi/style.rasi", 0};
const char* menu[]    = {"rofi", "-show", "-drun", 0};
const char* term[]    = {"alacritty",             0};
const char* scrot[]   = {"scr",            0};
const char* briup[]   = {"bri", "10", "+", 0};
const char* bridown[] = {"bri", "10", "-", 0};
const char* voldown[] = {"amixer", "sset", "Master", "5%-",         0};
const char* volup[]   = {"amixer", "sset", "Master", "5%+",         0};
const char* volmute[] = {"amixer", "sset", "Master", "toggle",      0};
const char* exit_sowm[] = {"killall", "Xorg", 0}; 
// const char* initializaion[] = {"~/.config/sowm/init.sh"};                                            

static struct key keys[] = {
    {MOD,      XK_c,   win_kill,   {0}},
    {MOD,      XK_g,   win_center, {0}},
    {MOD,      XK_f,   win_fs,     {0}},

    {Mod1Mask,           XK_Tab, win_next,   {0}},
    {Mod1Mask|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD, XK_Return,      run, {.com = menu}},
    {MOD, XK_p,           run, {.com = scrot}},
    {MOD, XK_q,           run, {.com = term}},

    {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
    {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
    {0,   XF86XK_AudioMute,         run, {.com = volmute}},
    {0,   XF86XK_MonBrightnessUp,   run, {.com = briup}},
    {0,   XF86XK_MonBrightnessDown, run, {.com = bridown}},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},


    // New window management functionality
    {MOD,     XK_Left,    win_align,     {.i = 0}},
    {MOD,     XK_Right,   win_align,     {.i = 1}},
    {MOD,     XK_Up,      win_fs_part,   {0}},

    {MOD|ShiftMask, XK_Up,    win_key_move,     {.i = 0}},
    {MOD|ShiftMask, XK_Right, win_key_move,     {.i = 1}},
    {MOD|ShiftMask, XK_Down,  win_key_move,     {.i = 2}},
    {MOD|ShiftMask, XK_Left,  win_key_move,     {.i = 3}},

    {MOD|Mod1Mask, XK_Up,     win_key_resize,   {.i = 0}},
    {MOD|Mod1Mask, XK_Right,  win_key_resize,   {.i = 1}},
    {MOD|Mod1Mask, XK_Down,   win_key_resize,   {.i = 2}},
    {MOD|Mod1Mask, XK_Left,   win_key_resize,   {.i = 3}},

    {MOD,     XK_m,       run,  {.com = exit_sowm}},

    {MOD,     XK_i,       run,  {.com = initializaion}},
};

#endif
