#include <iostream>
#include <fstream>
#include <string>

typedef std::string string;

void rewriteLine(string &line, const string source, string dest)
{
    size_t startPos = 0;

    while ((startPos = line.find(source, startPos)) != string::npos)
    {
        /* code */
    }
    
}

int main(int argc, char *argv[])
{
    if (argc != 4)
        std::cout << "Enter: ./a.out filename source dest\n"; return 1;
    string  filename = argv[1];
    string  source = argv[2];
    string  dest = argv [3];
    string  line;

    std::ifstream input(filename.c_str());
    std::ofstream output((filename + ".replace").c_str());

    if (input.fail())
        std::cout << "Error: cannot open file.";
    else
    {
        while (std::getline(input, line))
        {
            rewriteLine(line, source, dest);
            output << line;
            if (!input.eof())
                output << std::endl;            
        }
        input.close();
        output.close();
    }      
    return 0;
}
