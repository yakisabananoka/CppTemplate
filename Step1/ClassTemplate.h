#pragma once
#include <iostream>

template<typename T>
class ClassTemplate
{
public:
	ClassTemplate() = default;
	~ClassTemplate() = default;

	void SetValue(T val)
	{
		value_ = val;
	}

	void Print(void)
	{
		std::cout << "Type:" << typeid(T).name() << ",Value:" << value_ << std::endl;
	}

private:
	T value_;
};
