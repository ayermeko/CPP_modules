#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        std::string output;
        for (int i = 1; i < argc; ++i)
        {
            std::string input = argv[i];
            for (size_t j = 0; j < input.size(); ++j)
                output += std::toupper(input[j]);
            if (i + 1 < argc)
                output += " ";
        }
        std::cout << output << std::endl;
    }
    return (0);
}