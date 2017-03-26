#ifndef MAP_H
#define MAP_H
enum celltype {UNSEEN , WATER, ANT , FOOD, HILL , ANT_HILL, DIRT, DEAD } ;

typedef struct {

int*map;
unsigned int rows ;
unsigned int cols ;
} worldmap ;

typedef struct {
   
    unsigned int loadtime;
    unsigned int turntime;
    unsigned int rows;
    unsigned int cols;
    unsigned int turns;
    unsigned int viewradius2;
    unsigned int attackradius2;
    unsigned int spawnradius2;
    unsigned int player_seed;
    
} settings;

int *get_point(int x, int y,int *map, settings *Set);

worldmap *init_map();
settings *init_settings();
void free_settings();

void print_map(worldmap *map, settings *Set);
void clean_map(worldmap *map);

void write_map(int *map, int x, int y,enum celltype type, settings *Set);
#endif