#include <stdio.h>

int main()
{
    int a = 0;
   while (1)
   {
       if (a==5){
           printf("5");
            a++;
           continue;
       }
       if(a==8){
           printf("8");
           break;
       }
       printf("%d",a);
       a++;
   }
   
    return 0;
}
