#include "patches.h"

RECOMP_PATCH bool viewport_isBoundingBoxInFrustum(f32 arg0[3], f32 arg1[3]) {
    return TRUE;
}
