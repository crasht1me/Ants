#include"input.h"
#include<stdio.h>
#include<string.h>
#include"decision.h"
#include"map.h"



int main ()
{
    worldmap *map;
    settings *Settings;
// 

 Settings = init_settings();
 read_init(Settings);
 print_settings(Settings);
 
 
  map=init_map(Settings->rows,Settings->cols);
  map->rows = Settings->rows;
  map->cols = Settings->cols;
 
   // while(there is input)
    //    process_input();
    
  write_map(map->map,0,0,WATER,Settings);
   print_map(map,Settings);
  //  clean_map();
    
    return 0;
}