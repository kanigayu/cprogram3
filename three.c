#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter the number");
scanf("%d%d%d",&x,&y,&z);
if(x>y)
{
if(x<z)
printf("x is greatest");
else
printf("z is greater");
}
else
{
if(y>z)
printf("y is greater");
else
printf("z is greater");
}
}
