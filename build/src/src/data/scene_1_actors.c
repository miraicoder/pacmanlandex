#pragma bank 255

// Scene: Scene 2
// Actors

#include "gbs_types.h"
#include "data/spritesheet_1.h"
#include "data/spritesheet_0.h"
#include "data/spritesheet_1.h"

BANKREF(scene_1_actors)

const struct actor_t scene_1_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 64 * 16,
            .y = 216 * 16
        },
        .bounds = {
            .left = -22,
            .bottom = 3,
            .right = 34,
            .top = -13
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_1),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .reserve_tiles = 0
    },
    {
        // Actor 2,
        .pos = {
            .x = 8 * 16,
            .y = 232 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_RIGHT,
        .sprite = TO_FAR_PTR_T(spritesheet_0),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .reserve_tiles = 0
    },
    {
        // Actor 3,
        .pos = {
            .x = 208 * 16,
            .y = 176 * 16
        },
        .bounds = {
            .left = -22,
            .bottom = 3,
            .right = 34,
            .top = -13
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_1),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .reserve_tiles = 0
    }
};
