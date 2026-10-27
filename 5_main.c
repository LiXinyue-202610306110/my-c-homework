#include <stdio.h>

int main()
{
float a, b;
    char c;
    scanf("%f %c %f", &a, &c, &b);
    if (c == '+')
    {
        printf("%.2f\n", a + b);
    }
    else if (c == '-')
    {
        printf("%.2f\n", a - b);
    }
    else if (c == '*')
    {
        printf("%.2f\n", a * b);
    }
    else if (c == '/')
    {
    if (b == 0)
    {
            printf("错误：除数不能为 0\n");
    }
    else
    {
            printf("%.2f\n", a / b);
    }
    }
    else
    {
        printf("错误：不支持的运算符\n");
    }
    return 0;
}