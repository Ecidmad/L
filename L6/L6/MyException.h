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
        if (code == MyError::belowZero) return "����� ������ ����!\n";
        else if (code == MyError::future) return "�� ��� �� ��������\n";
        else if (code == MyError::zero) return "2025 ��� ��� �����\n";
        else if (code == MyError::below1850) return "���-�� �� �������...\n";
        else return "����������� ������!\n";
    }
};

