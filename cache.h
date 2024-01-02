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
    VIRTUAL,
    WEBCAM
};

enum Size
{
    MICRO,
    SMALL,
    REGULAR,
    LARGE,
    OTHER_SIZE,
    VIRTUAL,
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
    Kind kind;
    float lon;
    Size size;
    int difficulty;
    int terrain;
    Status status;
    time_t time;
    long int founds;
    long int not_founds;
    long int favourites;
    float altitude;
} Cache;