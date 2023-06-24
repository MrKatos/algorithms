#include <iostream>
#include <vector>
#include <algorithm>

enum class PlantType { Fruit, Vegetable };

struct Plant {
    PlantType type;
    std::string name;
    friend std::ostream& operator<<(std::ostream &os, const Plant &plant);
};

using Basket = std::vector<Plant>;

bool only_fruits(const Basket &basket) {
    return std::all_of(basket.begin(), basket.end(), [](const Plant &plant)
        { return plant.type == PlantType::Fruit; } );
}

bool only_vegetables(const Basket &basket) {
    return std::all_of(basket.begin(), basket.end(), [](const Plant &plant)
        { return plant.type == PlantType::Vegetable; } );
}

bool is_there_fruit(const Basket &basket) {
    return std::any_of(basket.begin(), basket.end(), [](const Plant &plant)
        { return plant.type == PlantType::Fruit; } );
}

bool is_there_vegeteble(const Basket &basket) {
    return std::any_of(basket.begin(), basket.end(), [](const Plant &plant)
        { return plant.type == PlantType::Vegetable; } );
}

bool does_have_no_fruit(const Basket &basket) {
    return std::none_of(basket.begin(), basket.end(), [](const Plant &plant)
        { return plant.type == PlantType::Fruit; } );
}

bool does_have_no_vegetables(const Basket &basket) {
    return std::none_of(basket.begin(), basket.end(), [](const Plant &plant)
        { return plant.type == PlantType::Vegetable; } );
}

void questions(const Basket &basket)
{
    if(only_fruits(basket))
    {
        std::cout << "Only fruits" << std::endl;
    }
    else
    {
        std::cout << "Fruits and Vegetables" << std::endl;
    }

    if(only_vegetables(basket))
    {
        std::cout << "Only Vegetables" << std::endl;
    }
    else
    {
        std::cout << "Vegetables and Fruits" << std::endl;
    }

    if(is_there_fruit(basket))
    {
        std::cout << "There is a fruit" << std::endl;
    }
    else
    {
        std::cout << "There is no fruit" << std::endl;
    }

    if(is_there_vegeteble(basket))
    {
        std::cout << "There is a vegetable" << std::endl;
    }
    else
    {
        std::cout << "There is no vegetable" << std::endl;
    }

    if(does_have_no_fruit(basket))
    {
        std::cout << "There is no fruit" << std::endl;
    }
    else
    {
        std::cout << "There are a fruits" << std::endl;
    }

    if(does_have_no_vegetables(basket))
    {
        std::cout << "There is no vegetable" << std::endl;
    }
    else
    {
        std::cout << "There are a vegetables" << std::endl;
    }
}

int main()
{
    Basket basket_mix;
    Basket basket_only_fruits;
    Basket basket_only_vegetables;
    basket_mix = { 
        {PlantType::Fruit, "Tangerine"},
        {PlantType::Vegetable, "Carrot"},
        {PlantType::Fruit, "Mango"},
        {PlantType::Vegetable, "Lettuce"}
        };

    basket_only_fruits = { 
        {PlantType::Fruit, "Strawberry"},
        {PlantType::Fruit, "Raspberry"},
        {PlantType::Fruit, "Mango"},
        {PlantType::Fruit, "Blackberry"}
        };

    basket_only_vegetables = { 
        {PlantType::Vegetable, "Pepper"},
        {PlantType::Vegetable, "Cucumber"},
        {PlantType::Vegetable, "Broccoli"},
        {PlantType::Vegetable, "Cauliflower"}
        };

    std::cout << "---- basket_mix ----" << std::endl;
    questions(basket_mix);

    std::cout << "---- basket_only_fruits ----" << std::endl;
    questions(basket_only_fruits);

    std::cout << "---- basket_only_vegetables ----" << std::endl;
    questions(basket_only_vegetables);

    return 0;
}