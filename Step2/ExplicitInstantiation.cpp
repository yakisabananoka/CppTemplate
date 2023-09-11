#include <iostream>
#include "ExplicitInstantiation.h"

template <typename T>
void TestClass2<T>::Print()
{
	std::cout << "TestClass2::Print()" << std::endl;
}

//template class TestClass2<int>;
