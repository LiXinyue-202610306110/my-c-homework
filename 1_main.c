#include<stdio.h>
#include <stdlib.h>
int main()
{
    system("chcp 65001 >nul");
   float a;
scanf("%f",&a);
float b=a*9.0/5+32;
printf("%.1f\n",b);
    return 0;
}