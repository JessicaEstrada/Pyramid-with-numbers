#include <stdio.h>
#include <stdlib.h>

void main()
{
   int i,a,b,rows,c,d=1;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   b=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(c=b;c>=1;c--)
            {
              printf(" ");
            }
	   for(a=1;a<=i;a++)
	   printf("%d ",d++);
	printf("\n");
    b--;
   }

}
