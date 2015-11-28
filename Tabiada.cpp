#include <stdio.h>
#include <stdlib.h>
main() {
   int x=1, y, z;
       printf("digite o numero:");
       scanf(" %d", &y);
   do {
   z=x*y;  
   printf ("%d x %d = %d\n", y,x,z);
    x++;
    } while(x<=10);
    system("pause>>null");
    
}
       
