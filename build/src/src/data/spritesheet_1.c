#pragma bank 255
// SpriteSheet: ice platform
  
#include "gbs_types.h"
#include "data/tileset_3.h"

BANKREF(spritesheet_1)

#define SPRITE_1_STATE_DEFAULT 0
#define SPRITE_1_STATE_MAIN_MENU 0

const metasprite_t spritesheet_1_metasprite_0[]  = {
    { 5, 31, 0, 0 }, { -16, 0, 2, 0 }, { 16, -8, 4, 0 }, { -16, 0, 6, 0 }, { 16, -8, 8, 0 }, { -16, 0, 10, 0 }, { 16, -8, 12, 0 }, { -16, 0, 14, 0 }, { 16, -8, 16, 0 }, { -16, 0, 18, 0 }, { 16, -8, 20, 0 }, { -16, 0, 22, 0 }, { 16, -8, 24, 0 }, { -16, 0, 26, 0 }, { 16, -8, 28, 0 }, { -16, 0, 30, 0 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_1_metasprites[] = {
    spritesheet_1_metasprite_0
};

const struct animation_t spritesheet_1_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    }
};

const UWORD spritesheet_1_animations_lookup[] = {
    SPRITE_1_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_1 = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = spritesheet_1_metasprites,
    .animations = spritesheet_1_animations,
    .animations_lookup = spritesheet_1_animations_lookup,
    .bounds = {
        .left = -22,
        .bottom = 3,
        .right = 34,
        .top = -13
    },
    .tileset = TO_FAR_PTR_T(tileset_3),
    .cgb_tileset = { NULL, NULL }
};
