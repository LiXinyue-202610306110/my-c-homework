#include <stdio.h>

int main()
{
float c;
scanf("%f",&c);
if(c<0)
{
printf("负数\n");
}
else if(c==0)
{
    printf("零\n");
}
else
{
    printf("正数\n");
}
return 0;
}