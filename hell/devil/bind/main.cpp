#include <iostream>
#include "Bind.hpp"

int test0()
{
    std::cout << "Test0 " << std::endl;
    return 0;
}

int test1(int n)
{
    std::cout << "Test1 " << n << std::endl;
    return 1;
}

int test2(int n1, int n2)
{
    std::cout << "Test2 " << n1 << " " << n2 << std::endl;
    return 2;
}

int test3(int n1, int n2, int n3)
{
    std::cout << "Test3 " << n1 << " " << n2 << " " << n3 << std::endl;
    return 3;
}

int test4(int n1, int n2, int n3, int n4)
{
    std::cout << "Test3 " << n1 << " " << n2 << " " << n3 << " " << n4 << std::endl;
    return 4;
}

int test5(int n1, int n2, int n3, int n4, int n5)
{
    std::cout << "Test3 " << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << std::endl;
    return 5;
}

int test6(int n1, int n2, int n3, int n4, int n5, int n6)
{
    std::cout << "Test3 " << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << " " << n6 << std::endl;
    return 6;
}

int main()
{
    std::cout << bind(test0)() << std::endl;
    std::cout << bind(test1, 41)() << std::endl;
    std::cout << bind(test2, 41, 42)() << std::endl;
    std::cout << bind(test3, 41, 42, 43)() << std::endl;
    std::cout << bind(test4, 41, 42, 43, 44)() << std::endl;
    std::cout << bind(test5, 41, 42, 43, 44, 45)() << std::endl;
    std::cout << bind(test6, 41, 42, 43, 44, 45, 46)() << std::endl;
    return 0;
}