#include <stdio.h>

void fun1()
{
    printf("NANR\n");
}

void fun2(int a)
{
    printf("ANR: %d\n", a);
}

int fun3()
{
    return 10;
}

int fun4(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    fun1();

    fun2(20);

    result = fun3();
    printf("NAWR: %d\n", result);

    result = fun4(10, 20);
    printf("AWR: %d\n", result);

    return 0;
}
