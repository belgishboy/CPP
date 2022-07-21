#include <iostream>
#include "easyfind.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    std::list<int> il;

    il.push_back(3);
    il.push_back(4);
    il.push_back(6);
    il.push_back(7);
    il.push_back(10);
    try
    {
        std::cout << "6";
        easyfind(il, 6);
        std::cout << " Found. \n5";
        easyfind(il, 5);
        std::cout << " Found." << std::endl;
    }
    catch (NotFound& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
