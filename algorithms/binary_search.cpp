#include <iostream>
#include <vector>


int binary_search(const std::vector<double>& vector, double target)
{
    int left = 0;
    int right = vector.size() - 1;
    while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(vector[mid] == target)
            {
                return mid;
            } 
            else if(vector[mid] < target)
            {
                left = mid + 1;
            } 
            else
            {
                right = mid - 1;
            }
        }
    return -1;
}

int main()
{

    std::vector<double> vector = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

    double target = 7.0;

    int position = binary_search(vector, target);

    if(position == -1)
        {
            std::cout << "Target not found " << target << std::endl;
        }
        else
        {
            std::cout << "Position of " << target << " : " << position << ".\n";
        }

    return 0;
}