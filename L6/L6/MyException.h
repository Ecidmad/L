#pragma once
#include <exception>
#include <iostream>
enum class MyError
{
    belowZero,
    future,
    zero,
    below1850
};
class MyException : public std::exception
{
private:
    MyError code;
public:
    MyException(MyError code) : code(code) {}
    const char* what() const throw() override
    {
        if (code == MyError::belowZero) return "Число меньше нуля!\n";
        else if (code == MyError::future) return "Вы еще не родились\n";
        else if (code == MyError::zero) return "2025 лет это много\n";
        else if (code == MyError::below1850) return "Что-то не верится...\n";
        else return "Неизвестная ошибка!\n";
    }
};

