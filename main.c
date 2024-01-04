#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "cache.h"

#define TRUE 1
#define FALSE 0

int main()
{

    // TODO: implement menu and call subprograms for each operation

    while (TRUE)
    {
        break;
    }
    printf("I'm missing a menu! :( \n");

    return EXIT_SUCCESS;
}

//void load(Cache *caches)
//{
//    if (caches != NULL)
//    {
//        printf("<Cache data exists. Please clear it first>\n");
//        return;
//    }
//    caches = malloc(MAX_CACHE * sizeof(Cache)); // Diz no enunciado que não haverão mais de 2000 caches
//    char *filename = malloc(100 * sizeof(char));
//    char **cacheCodes = (char **)malloc(2000 * sizeof(char *));
//
//    readString(filename, 100);
//    FILE *file = fopen(filename, "r");
//    if (file == NULL)
//    {
//        printf("File not found");
//        return NULL;
//    }
//    char *line = malloc(100 * sizeof(char));
//    fscanf(file, "%s", line);
//    int counter;                                                      // Passa uma linha á frente
//    for (counter = 0; fscanf(file, "%s", filename) != EOF; counter++) // Cada linha é uma cache
//    {
//        if (counter == 0)
//            continue;
//        Cache *cache = malloc(sizeof(Cache));
//        char **splited = splitString(filename, 15, ";");
//        cache->code = malloc(100 * sizeof(char));
//        for (int i = 0; i < counter; i++)
//        {
//            if (strcmp(splited[0], cacheCodes[i]) == 0)
//            {
//                free(cache->code);
//                free(cache);
//                continue;
//            }
//        }
//        cache->code = splited[0];
//        cacheCodes[counter] = splited[0];
//        cache->name = malloc(100 * sizeof(char));
//        cache->name = splited[1];
//        cache->state = malloc(100 * sizeof(char));
//        cache->state = splited[2];
//        cache->owner = malloc(100 * sizeof(char));
//        cache->owner = splited[3];
//        cache->kind = malloc(100 * sizeof(char));
//        cache->kind = splited[6];
//        cache->status = malloc(100 * sizeof(char));
//        cache->status = splited[10];
//        // TODO Por o tempo em time_t e guardar na cache
//        cache->lat = atof(splited[4]);
//        cache->lon = atof(splited[5]);
//        cache->size = malloc(100 * sizeof(char));
//        cache->size = splited[7];
//        cache->difficulty = atof(splited[8]);
//        cache->terrain = atof(splited[9]);
//        cache->founds = atoi(splited[12]);
//        cache->not_founds = atoi(splited[13]);
//        cache->favourites = atoi(splited[14]);
//        caches[counter] = *cache;
//        free(splited);
//    }
//    free(filename);
//    free(line);
//    fclose(file);
//    for (int i = 0; i < counter; i++)
//    {
//        free(cacheCodes[i]);
//    }
//    free(cacheCodes);
//    printf("%d unique caches loaded>\n", counter);
//}