#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int rozmiar;

void fill_progressive(vector<int> &ArgVector) 
{
    for (size_t i = 0; i < ArgVector.size(); i++)
    {
        static int liczba =1;
        ArgVector[i] = liczba;
        liczba++;
    }
    
}

void print_vector(vector<int> &ArgVector)
{
     for (size_t i = 0; i < ArgVector.size(); i++)
    {
        cout<< ArgVector[i] << ", ";
    }   
}

int main()
{   
    cout<<"Podaj wielosc vectora \n";
    cin>>rozmiar;
    vector<int> UserVector(rozmiar);
    
    fill_progressive(UserVector);
    print_vector(UserVector);

    return 0;    
}