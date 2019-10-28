#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   char s[100];
   int x=0, times;
   scanf("%d", &times);
   while (times--){
        scanf("%s", s);
        if (s[1] == '+') ++x;
        else  --x;
   }
   printf("%d", x);
   return 0;
}
