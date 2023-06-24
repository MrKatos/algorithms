#include <iostream>
#include <vector>

void min_max(std::vector<double> &argVector, double &MIN, double &MAX)
{
    for (size_t i = 0; i < argVector.size(); i++)
    {
        if (MIN > argVector[i])
        {
            MIN = argVector[i];
        }
        
        if (MAX < argVector[i])
        {
            MAX = argVector[i];
        }
    }
}

int main()
{   
    double min;
    double max;
    std::vector<double> values = {-1.0, 100, 3.14, -999.9, 21.37};
    min_max(values, min, max);
    std::cout << "Max value: " << max << " Min value: " << min << std::endl;
}