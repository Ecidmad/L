#include "Enum.h"
void Type::type(Direction d)
{
    if (d == Direction::ONEHANDED) std::cout << "Одноручное";
    else if (d == Direction::TWOHANDED) std::cout << "Двуручное";
    else if (d == Direction::BOW) std::cout << "Лук";
    else if (d == Direction::CROSSBOW) std::cout << "Арбалет";
    std::cout << "\n";
}