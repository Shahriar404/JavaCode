#ifndef INTPRINT_H
#define INTPRINT_H
#include "types.h"
#include "system.h"
#include "string.h"
#include "screen.h"


int digitcount(int num)
{
    int count=0;
    if(num==0)
    {
        return 1;
    }
    else
    {
        while(num>0)
        {
            count++;
            num=num/10;
        }
        return count;
    }
}

void inttoarray(int num, string number)
{
    int digit_cou=digitcount(num);
    int index=digit_cou-1;
    char x;
    if(num==0 && digit_cou==1)
    {
       number[index]='0';
       number[digit_cou]=' ';
       number[digit_cou+1]='\0';

    }
    if(num>0){
        while(num>0)
        {
            x=(char)num%10;
            number[index]=x + '0';
            //number[index]='k';
            //number[index]=x;
            index--;
            num=num/10;
        }
       number[digit_cou]=' ';
       number[digit_cou+1]='\0';
       
        
}

}


void printint(int numbe)
{
     string num_str;
     inttoarray(numbe,num_str);
     print(num_str);

}


uint32 streql(string ch1,string ch2)                     
{
        uint32 result = 1;
        uint32 size = strlength(ch1);
        if(1)
        {
        uint32 i = 0;
        for(i;i<size-1;i++)
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

uint32 strlen(string ch)
{


        uint32 i = 1;
        if(ch=="\0")
          {
             return 0;
          }
        while(ch[i++]);
        return --i;
}







#endif
