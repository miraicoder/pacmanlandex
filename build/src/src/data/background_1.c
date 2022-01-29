#pragma bank 255

// Background: stars

#include "gbs_types.h"
#include "data/tileset_1.h"
#include "data/tilemap_1.h"

BANKREF(background_1)

const struct background_t background_1 = {
    .width = 32,
    .height = 32,
    .tileset = TO_FAR_PTR_T(tileset_1),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_1),
    .cgb_tilemap_attr = { NULL, NULL }
};
