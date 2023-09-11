#pragma once
#include <iostream>

class TestClass
{
public:
	TestClass() = default;
	~TestClass() = default;

	template<typename T>
	void Print(T val)
	{
		std::cout << typeid(std::remove_pointer_t<decltype(this)>).name() << std::endl;
		std::cout << "\tType:" << typeid(T).name() << ",Value:" << val << std::endl;
	}

};
