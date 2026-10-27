//202610306110
//李鑫玥
#include<stdio.h>
#include <stdlib.h>
int main()
{
    system("chcp 65001 >nul");
float a,b,c;
scanf("%f %f %f",&a,&b,&c);
if (a+b>c&&a+c>b&&b+c>a)
{
    printf("能构成三角形\n");
}
else
{
    printf("不能构成三角形\n");

}
    return 0;
}