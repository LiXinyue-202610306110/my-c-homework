//202610306110
//李鑫玥

#include <stdio.h>

int main()
{
    system("chcp 65001 >nul");
float c;
scanf("%f",&c);
if(c<0)
{
printf("负数");
}
else if(c==0)
{
    printf("零");
}
else
{
    printf("正数");
}
return 0;
}