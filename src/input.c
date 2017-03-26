#include"map.h"
#include"input.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void read_init(settings *Settings)
{
    char *line=0;
    size_t linelenght;
    
   
    char *delim = " " ;
    
    char *ValueStr ;
    char  *Command ;
    
    unsigned int Value;
    
    while(getline(&line, &linelenght, stdin) != 0 )
    {
    
     
        
     if( strcmp(line, "\n") == 0 ) continue;
        Command = strtok_r(line, delim, &ValueStr);
     
     if(strcmp(Command, "ready") == 0 )break;
     
     else if (strcmp(Command, "loadtime") == 0 )
     {
         Value = strtol(ValueStr, NULL, 10);
         Settings->loadtime = Value;
     }
       
     else if(strcmp(Command, "turntime") == 0 )
        {
             Value = strtol(ValueStr, NULL, 10);
             Settings->turntime = Value;
        }
      else if(strcmp(Command, "rows") == 0 )
        {
            Value = strtol(ValueStr, NULL, 10);
            Settings->rows = Value;
        }
       else if(strcmp(Command, "cols") == 0 ) 
        {
            Value = strtol(ValueStr, NULL, 10);
            Settings->cols = Value;
        }
       else if(strcmp(Command, "turns") == 0 )
       {
           Value = strtol(ValueStr, NULL, 10);
           Settings->turns = Value;
       }
       else if(strcmp(Command, "viewradius2") == 0 )
       {
           Value = strtol(ValueStr, NULL, 10);
           Settings->viewradius2 = Value;
       }
       else if(strcmp(Command, "attackradius2") == 0 )
       {
           Value = strtol(ValueStr, NULL, 10);
           Settings->attackradius2 = Value;
       }
       else if(strcmp(Command, "spawnradius2") == 0 )
       {
           Value = strtol(ValueStr, NULL, 10);
           Settings->spawnradius2 = Value;
       }
       else if(strcmp(Command, "player_seed") == 0 )
       {
           Value = strtol(ValueStr, NULL, 10);
           Settings->turns = Value;
       }
    }
    
    free(line);
}


void process_input()
{
}