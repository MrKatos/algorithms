#include <iostream>
#include <vector>

void print_vector(std::vector<double> arg_vector)
{
    std::cout << "{";
    for(size_t i = 0; i < arg_vector.size(); ++i)
    {
        std::cout << " \"" << arg_vector[i] << "\" ";
    }
    std::cout << "}" << std::endl;
}

void bubble_sort(std::vector<double>& v)
{
    for(int i = 0; i < 5; ++i)
    {
        for(int j = 0; j < 4; ++j)
        {
            if(v[j] > v[j + 1])
            {
                double num2 = v[j];
                v[j] = v[j + 1];
                v[j + 1] = num2;
            }
        }
    } 
}

int main()
{
    std::vector<double> v;
    for (int i = 0; i < 5; ++i)
    {
        double num;
        std::cin >> num;
        v.push_back(num);
    }   
    
    bubble_sort(v);

    print_vector(v);
    
    return 0;
}
