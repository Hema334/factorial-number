/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
int main()
{
   int i=1,n,fact=1;
   printf("enter the value of n:");
   scanf("%d",&n);
   do
   {
       fact=fact*i;
       i++;
   }
   while(i<=1);
   
   printf("factorial= %d",fact);
   printf("%d",i);
   
}