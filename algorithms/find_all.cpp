#include <iostream>
#include <vector>

std::vector<size_t> find_all(std::string input, char c)
{
    std::vector<size_t> vector;
    size_t last_char_position = 0;

    for(size_t i = 0; i < input.length(); ++i)
    {
        if(input.find(c, last_char_position + 1) != std::string::npos)
        {
            vector.push_back(input.find(c, last_char_position + 1));
            last_char_position = input.find(c, last_char_position + 1);
            std::cout << input << std::endl;
        }
        else
        {
            break;
        }
    }

    return vector;
}

void print(std::vector<size_t> vector)
{
    for(size_t i = 0; i < vector.size(); ++i)
    {
        std::cout << vector[i] << " ";
    }
}

int main()
{
    std::string input = "Ala ma kota";
    std::vector<size_t> pos = find_all(input, 'a');

    print(pos);
    
    return 0;
}