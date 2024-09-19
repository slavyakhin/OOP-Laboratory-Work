#include <iostream>
#include <string>
#include "include/function.hpp"

// Вариант 4
// Функция возвращает количество гласных букв в заданной строке (на английском).
// Входная строка будет состоять только из строчных букв и/или пробелов.

int main(int argc, char* argv[]) {

    std::string str;
    std::getline(std::cin, str);            // line may consist only of spaces
    std::cout << function(str) << std::endl;

    return 0;
}