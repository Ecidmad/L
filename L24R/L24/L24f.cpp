#include <iostream>
namespace Ms {
    void r(int q)
    {
        static int y = 0;
        std::cout << q + y << "\n";
        y = q;
    }
}