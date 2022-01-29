#pragma bank 255

// Scene: Scene 2
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_1.h"
#include "data/spritesheet_0.h"

BANKREF(scene_1_sprites)

const far_ptr_t scene_1_sprites[] = {
    TO_FAR_PTR_T(spritesheet_1),
    TO_FAR_PTR_T(spritesheet_0)
};
