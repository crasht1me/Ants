#include"map.h"
//global map?
#include<stdlib.h>
#include<stdio.h>
int *get_point(int x, int y,int *map, settings *Set)
{
    int point;
    
    point =(y*Set->cols + x);
    
    return &map[point];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
}

void write_map(int *map, int x, int y, enum celltype type, settings *Set)
{
    int *cell = get_point(x,y,map, Set);
    *cell = type;
    
    
    
}

worldmap *init_map(int x, int y)
{
    
      worldmap *temp= (worldmap*)calloc(1,sizeof(int));
      
      temp->map = (int*)calloc(x*y,sizeof(int));
    return temp;
}

void print_map(worldmap *map, settings *Set)
{
    for(int i = 0; i < map->rows; i++){
        for(int j = 0; j < map->cols; j++)
            switch(*get_point(i,j,map->map, Set))
            {
                case UNSEEN: printf("?"); break;
                case WATER: printf("%%"); break;
                case ANT: printf("a"); break;
                case FOOD: printf("*"); break;
                case HILL: printf("0");  break;
                case ANT_HILL: printf("A"); break;
                case DIRT: printf("."); break;
                case DEAD: printf("!"); break;
                
                default: printf("x"); break;
                
            }
            printf("\n");
    }
}
void clean_map(worldmap *map)
{
    free(map);
}

settings *init_settings()
{
    return (settings*)calloc(1,sizeof(settings));
}

void free_settings(settings *s)
{
    free(s);
}
