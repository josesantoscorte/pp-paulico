#include "cache.h"

#define TRUE 1
#define FALSE 0

int isEqual(Cache *self, Cache *other) {
    if (self->code != other->code) {
        return FALSE;
    }

    return TRUE;
}