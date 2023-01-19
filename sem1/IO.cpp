#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int x;
    double y;
    char c;
    std::string s;
    std::cout << "Enter integer: ";
    std::cin >> x;
    std::cout << "You entered: " << x << std::endl;
    std::cin.ignore(1000, '\n');

    std::cout << "Enter four integers: ";
    std::cin >> x;
    std::cout << "You entered: " << x;
    std::cin >> x;
    std::cout << " " << x;
    std::cin >> x;
    std::cout << " " << x;
    std::cin >> x;
    std::cout << " " << x << std::endl;
    std::cin.ignore(1000, '\n');

    std::cout << "Enter one integer and one real number: ";
    std::cin >> x >> y;
    std::cout << "The real is:" << std::setw(10) << std::setprecision(4) << y << std::endl;
    std::cout << "The integer is:" << std::setw(7) << x << std::endl;
    std::cin.ignore(1000, '\n');

    std::cout << "Enter one real and one integer number: ";
    std::cin >> y >> x;
    std::cout << "The real is:" << std::setfill('.') << std::setw(10) << std::fixed << std::setprecision(3) << y << std::endl;
    std::cout << "The integer is:" << std::setfill('.') << std::setw(7) << x << std::endl;
    std::cin.ignore(1000, '\n');

    std::cout << "Enter a character: ";
    std::cin >> c;
    std::cout << "You entered: " << c << std::endl;
    std::cin.ignore(1000, '\n');

    std::cout << "Enter a word: ";
    std::cin >> s;
    std::cout << "The word '" << s << "' has " << s.length() << " characters." << std::endl;
    std::cin.ignore(1000, '\n');

    std::cout << "Enter an integer and a word: ";
    std::cin >> x >> s;
    std::cout << "You entered '" << x << "' and '" << s << "'." << std::endl;
    std::cin.ignore(1000, '\n');

    std::cout << "Enter a character and a word: ";
    std::cin >> c >> s;
    std::cout << "You entered the string '" << s << "' and the character '" << c << "'." << std::endl;
    std::cin.ignore(1000, '\n');

    std::cout << "Enter a word and real number: ";
    std::cin >> s >> y;
    std::cout << "You entered '" << s << "' and '" << std::setprecision(3) << y << "'." << std::endl;
    std::cin.ignore(1000, '\n');

    std::cout << "Enter a text-line: ";
    std::getline(std::cin, s);
    std::cout << "You entered: \"" << s << "\"" << std::endl;

    std::cout << "Enter a second line of text: ";
    std::getline(std::cin, s);
    std::cout << "You entered: \"" << s << "\"" << std::endl;

    std::cout << "Enter three words: ";
    std::cin >> s;
    std::cout << "You entered: \"" << s;
    std::cin >> s;
    std::cout << " " << s;
    std::cin >> s;
    std::cout << " " << s << "\"" << std::endl;
}