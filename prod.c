#include "prod.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_greeter12(int a, int b)
{
    int sum;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    sum = a+b;
    printf("Hello world, your sum is:%d\n", sum);
}