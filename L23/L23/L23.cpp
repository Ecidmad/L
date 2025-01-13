#include <iostream>
int g(int w = 1)
{
    int s = 0;
    if (w == 1)
    {
        std::cout << 1 << "\n";
        return 1;
    }
    if (w > 0)
    {
        for (int i = 1; i <= w; i++)
        {
            s = s + i;
        }
        std::cout << s << "\n";
        return s;
    }
    else
    {
        std::cout << 0 << "\n";
        return 0;
    }
}
void h(int y, int x, int& q, int& p)
{
    q = y + x;
    p = y * x;

}
int main()
{
    setlocale(LC_ALL, "Russian");
    int array[2][3] = { {1,3,4},{0,2,7} };
    int t[3];
    int s = 0;
    float y = 20.84;
    float& u = y;
    float& o = y;
    int a = 4;
    int b = 6;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            s = s + array[i][j];
        }
    }
    std::cout << s << "\n";
    for (int i = 0; i < 3; i++)
    {
        t[i] = array[0][i] + array[1][i];
    }
    std::cout << t[0] << " " << t[1] << " " << t[2] << "\n";
    u = 66.6;
    std::cout << u << " " << o << " " << y << "\n";
    g();
    h(3, 5, a, b);
    std::cout << a << " " << b << "\n";
    std::string v = "Joke";
    std::cout << v << "\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout << v << "\n";
        int o = 1;
        std::cout << o << "\n";
    }
    std::cout << o;
}