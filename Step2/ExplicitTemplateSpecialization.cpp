#include <iostream>
#include "ExplicitTemplateSpecialization.h"

void TestClass1<int>::Print()
{
	std::cout << "特殊化されてるよー" << std::endl;
}

void Print()
{
	std::cout << "特殊化されてるよー" << std::endl;
}

