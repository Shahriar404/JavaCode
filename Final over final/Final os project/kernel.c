#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
#include "include/intprint.h"

int nirobmain()
{
       
       
       clearscreen();
       int pint,i;
       pint=0;
       print("Welcome to Nirob's operating system\nPlease enter a command\n");
       string ch;
       print("\nPlease enter a key to start...\n");
       ch = readStr();
       string inp;
       inp[1000];
       i=0;
       for(i;i<1000;i++)
          {
             inp[i]='\0';
          }
       while (1)
       {
                print("\nNirob> ");

                ch = readStr();

                if(streql(ch,"cal len"))
                {      i=0;
                       print("\nEnter the string:\n"); 
                       inp = readStr();
                       pint =(int)strlength(inp);
                       print("\nLength is :");
                       printint(pint);
                       print("\n"); 
                       while(inp[i])
                       {
                           inp[i]='\0';
                           i++;
                       }
                         
                }
                else if(streql(ch,"cmd"))
                {
                       print("\nIn cmd...\n");
                         
                }
                else if(streql(ch,"clr"))
                {
                      clearscreen();
                         
                }
                else
                {
                        print("\nBad command!\n");
                }

                print("\n");
                
       }
return 0;
}
