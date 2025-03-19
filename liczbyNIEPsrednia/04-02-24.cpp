#include <iostream>
#include <string>
#include <windows.h>
#include <set>

/**
 * ************************************************
 * Klasa: StringTools
 * Opis: Klasa narzędziowa dla operacji na łańcuchach znaków.
 * Metody:
 * - countVowels(const std::string& input) - Zwraca liczbę samogłosek w łańcuchu.
 * - removeDuplicates(const std::string& input) - Zwraca łańcuch bez powtórzeń sąsiadujących znaków.
 * Autor: EE-Informatyk.pl
 * ************************************************
 */
class StringTools {
public:
    static int countVowels(const std::string& input) {
        if (input.empty())
            return 0;

        const std::set<char> vowels = { 'a', 'ą', 'e', 'ę', 'i', 'o', 'ó', 'u', 'y',
                                       'A', 'Ą', 'E', 'Ę', 'I', 'O', 'Ó', 'U', 'Y' };
        int count = 0;

        for (char c : input) {
            if (vowels.find(c) != vowels.end()) {
                count++;
            }
        }

        return count;
    }

    static std::string removeDuplicates(const std::string& input) {
        if (input.empty())
            return "";

        std::string result;
        result += input[0];

        for (size_t i = 1; i < input.size(); ++i) {
            if (input[i] != input[i - 1]) {
                result += input[i];
            }
        }

        return result;
    }
};

int main() {
    std::cout << "Podaj lancuch znakow: ";
    std::string userInput;
    std::getline(std::cin, userInput);

    int vowelCount = StringTools::countVowels(userInput);
    std::string noDuplicates = StringTools::removeDuplicates(userInput);

    std::cout << "Liczba samoglosek: " << vowelCount << std::endl;
    std::cout << "Lancuch bez powtorzen : " << noDuplicates << std::endl;

    return 0;
}