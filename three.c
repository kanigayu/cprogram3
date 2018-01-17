#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter the x,y,z values");
scanf("%d%d%d",&x,&y,&z);
if((x>y)&&(x>z))
{
printf("x is greatest than y and z");
}
else if((y>x)&&(y>z))
{
  printf("\n y is greater than x and z");
}
else
       {
         printf("\n z is greater than x and y");
       }
