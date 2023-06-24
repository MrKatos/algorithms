#include <iostream>
#include <string>

//Zadanie 1
void lower_case(std::string &word)
{
    for(size_t i = 0; i < word.length(); ++i)
    {
        word[i] = tolower(word[i]);
    }
}

void space_delete(std::string &word)
{
    size_t space_position;

    for(size_t i = 0; i < word.length(); ++i)
    {
        if(word.find(" ") != std::string::npos)
        {
            space_position = word.find(" ");
            word.erase(space_position, space_position - 1);
        }
        else
        {
            break;
        }
    }
}

bool is_palindrome(std::string word)
{
    lower_case(word);
    space_delete(word);

    for(size_t i = 0; i < word.length()/2; ++i)
    {
        if (word[i] != word[word.length() - 1 - i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    std::string word = "Never odd or even";

    if(is_palindrome(word))
    {
        std::cout << "To palindrom!" << std::endl;
    }
    else
    {
        std::cout << "Nope" << std::endl;
    }
    
    return 0;
}

