#include <iostream>
void f(int* begin, int* end) 
{
    for (int* p = begin; p < end; p++) 
    {
        std::cout << *p << "\n";
    }
}
float sum(float a, float b) 
{
    std::cout << a + b << "\n";
    return a + b;
}
float dif(float a, float b) 
{
    std::cout << a - b << "\n";
    return a - b;
}
 auto *sim(char a) 
{
    if (a == '+')
    {
        return sum;
    }
    if (a == '-')
    {
        return dif;
    }
}
int main()
{
    int array[] = { 1, 5, 8, 10 };
    f(std::begin(array),std::end(array));
    float (*testf)(float a, float b) = sim('+');
    testf(3,7);
    testf = sim('-');
    testf(7,3);
    float* c = new float(90);
    std::cout << *c << "\n";
    delete c;
}