#include <iostream>
#include <string>


int main()
{
    std::cout << "Willkommen. Hier kannst du etwas eingeben." << std::endl;
    std::string line;
    if (std::getline(std::cin, line))
    {
        if (line.length() > 30)
        {
            std::cout << "Error: input too long" << std::endl;
            return 1;
        }

        std::string upper = line;
        for (char &c : upper)
        {
            c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
        }
        if (!line.empty() && upper == line)
        {
            std::cout << "Error: all-uppercase input not allowed" << std::endl;
            return 1;
        }

        std::cout << line << std::endl;
    }
    return 0;
}
