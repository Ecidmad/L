#include "Enum.h"
void Type::type(Direction d)
{
    if (d == Direction::ONEHANDED) std::cout << "����������";
    else if (d == Direction::TWOHANDED) std::cout << "���������";
    else if (d == Direction::BOW) std::cout << "���";
    else if (d == Direction::CROSSBOW) std::cout << "�������";
    std::cout << "\n";
}