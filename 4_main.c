//202610306110
//李鑫玥
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("chcp 65001 >nul");
float a;
scanf("%f",&a);
if(a<0||a>100)
{
    printf("输入无效");
}
else if(a>=90)
{
    printf("A");
}
else if(a>=80)
{
    printf("B");
}
else if(a>=70)
{
    printf("C");

}
else if(a>=60)
{
    printf("D");
}
else
{
    printf("E");
}
    return 0;
}