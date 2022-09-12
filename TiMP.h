#pragma once
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <cctype>
#include <locale>
#include <codecvt>
class TiMP
{
private:
    int kluch; // кол-во столбцов 
public:
    TiMP()=delete; // запрет конструктора без параметров
    TiMP(const int& key) :kluch(key) {}; 
    std::wstring encrypt(const std::wstring& open_text); // зашифрование
    std::wstring decrypt(const std::wstring& cipher_text); // расшифрование
};
