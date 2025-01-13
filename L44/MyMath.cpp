#include "MyMath.h"
int MyMath::Add(int x, int y)
{
    K++;
    return x+y;
}

int MyMath::Sub(int x, int y)
{
    K++;
    return x-y;
}

int MyMath::Mult(int x, int y)
{
    K++;
    return x*y;
}

int MyMath::Div(int x, int y)
{
    K++;
    return x/y;
}
