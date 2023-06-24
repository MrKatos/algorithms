#include <iostream>

void draw_square(int side_length, bool letft, bool right) {
    for (int i = 0; i < side_length; i++) {
        if (i == 0 || i == side_length - 1) {
            std::cout << std::string(side_length, '#') << std::endl;
        } else {

            if (letft && right)
            {
                for (int j = 0; j < side_length; j++) {
                    if (i == j || i == side_length - 1 - j) {
                        std::cout << "#";
                    } 
                    else if (j == 0 || j == side_length - 1)
                    {
                        std::cout << "#";
                    }
                    else {
                        std::cout << " ";
                    }
                }
                std::cout << std::endl;
            }
            else if (letft)
            {
                std::cout << "#" << std::string( i-1 , ' ') << '#' << std::string( side_length -i-2, ' ') << "#" << std::endl;
            }
            else if (right)
            {
                std::cout << "#" << std::string( side_length -i-2, ' ') << '#' << std::string( i-1 , ' ') << "#" << std::endl;
            }
            else
            {
                std::cout << "#" << std::string(side_length - 2, ' ') << "#" << std::endl;
            }
        }
    }
}

int main()
{   
    draw_square(13, true, true);
    return 0;
}