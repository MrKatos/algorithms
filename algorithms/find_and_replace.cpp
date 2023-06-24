#include <iostream>
#include <string>

std::string findAndReplace(const std::string& input, const std::string& find, const std::string& replace)
{
    std::string output = input;
    size_t pos = 0;

    while((pos = output.find(find, pos)) != std::string::npos)
    {
        output.replace(pos, find.length(), replace);
        pos += replace.length();
    }
    
    return output;
};

int main()
{
    std::string input = "Ala ma kota, kot zjadl Ale!";
    std::string output = findAndReplace(input, "kot", "hefalump");
    std::cout << output << std::endl;

    return 0;
}