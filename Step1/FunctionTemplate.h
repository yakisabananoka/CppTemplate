#pragma once
#include <iostream>

template<typename T>
void Print(T val)
{
	std::cout << "Type:" << typeid(T).name() << ",Value:" << val << std::endl;
}
