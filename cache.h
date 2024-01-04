#ifndef CACHE_H
#define CACHE_H

#include <time.h>

#define UNKNOWN -9999999
#define MAX_CACHE 2000

enum Kind
{
    EARTHCACHE,
    LETTERBOX,
    MULTI,
    PUZZLE,
    TRADITIONAL,
    VIRTUAL_KIND,
    WEBCAM
};

enum Size
{
    MICRO,
    SMALL,
    REGULAR,
    LARGE,
    OTHER_SIZE,
    VIRTUAL_SIZE,
    NOT_CHOSEN
};

enum Status
{
    AVAILABLE,
    DISABLED
};

typedef struct Cache
{
    int code;
    char *name;
    char *state;
    char *owner;
    float lat;
    enum Kind kind;
    float lon;
    enum Size size;
    int difficulty;
    int terrain;
    enum Status status;
    time_t time;
    long int founds;
    long int not_founds;
    long int favourites;
    float altitude;
} Cache;

#endif