#include <iostream>

std::string find_longest_word(std::string input)
{
    std::string longest;
    std::string token;
    size_t position = 0;

    while(input.find(" ") != std::string::npos)
    {
        token = input.substr(0, position);
        if (token.length() > longest.length())
        {
            longest = token;
        }
        input.erase(0, position + 1);
    }
    if(input.length() > longest.length())
    {
        longest = input;
    }

    return longest;
}

int main()
{
    std::string input = "Ala ma kota kot jezdzi na Roombie";

    std::string longest = find_longest_word(input);
    std::cout << longest;
    
    return 0;
}