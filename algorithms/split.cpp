#include <iostream>
#include <vector>

void print_vector(std::vector<std::string> arg_vector)
{
    std::cout << "{";

    for(size_t i = 0; i < arg_vector.size(); ++i)
    {
        std::cout << " \"" << arg_vector[i] << "\" ";
    }

    std::cout << "}" << std::endl;
}

std::vector<std::string> split(std::string sentence, char delimiter = ' ')
{
    std::vector<std::string> tokens;
    size_t start = 0, end = 0;

    while((end = sentence.find(delimiter, start)) != std::string::npos)
    {
        if(end != start)
        {
            tokens.push_back(sentence.substr(start, end - start));
        }
        start = end + 1;
    }

    if(start != sentence.length())
    {
        tokens.push_back(sentence.substr(start));
    }

    return tokens;
}

int main()
{
    std::string sentence = "Ala ma kota";
    std::vector<std::string> words = split(sentence);
    print_vector(words);

    std::string csv = "Mount Everest,8848,1953";
    std::vector<std::string> data = split(csv, ',');
    print_vector(data);

    return 0;
} 