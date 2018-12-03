#ifndef STRING_H
#define STRING_H

#include "types.h"
uint32 strlength(string ch)
{


        uint32 i = 1;
        if(ch[0]=='\0')
          {
             return 0;
          }
        else
           {
              while(ch[i++]);
              return --i;
           }
        
}

/* Added in episode 3*/ /*This function compares two strings and returns true (1) if they are equal or false (0) if they are not equal */

uint32 strEql(string ch1,string ch2)                     
{
        uint32 result = 1;
        uint32 size = strlength(ch1);
        if(1)
        {
        uint32 i = 0;
        for(i;i<size;i++)
        {
                if(ch1[i] != ch2[i]) 
                  {
                      result = 0;
                      break;
                  }
        }
        }
        return result;
}


#endif
