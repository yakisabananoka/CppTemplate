#pragma once
#include <iostream>
#include <vector>

//クラステンプレート--------------------------------------------
template<typename T>
class TestClass1
{
public:
	void Print()
	{
		std::cout << "特殊化されてないよー" << std::endl;
	}
};

//完全特殊化
template<>
class TestClass1<int>
{
public:
	void Print();
};

//部分特殊化
template<typename T>
class TestClass1<T*>
{
public:
	void Print()
	{
		std::cout << "部分特殊化だよー" << std::endl;
	}
};

//関数テンプレート--------------------------------------------
template<typename T>
void Print()
{
	std::cout << "特殊化されてないよー" << std::endl;
}

//完全特殊化
template<>
void Print<int>();

//部分特殊化(できない)
//template<typename T>
//void Print<T*>()
//{
//	std::cout << "部分特殊化だよー" << std::endl;
//}

//メンバー関数テンプレート--------------------------------------------

//できない！！！！

//変数テンプレート--------------------------------------------

template<typename T>
constexpr T pi = static_cast<T>(3.1415926535897932385);

template<>
constexpr int pi<int> = 10;

template<typename T>
constexpr int pi<T*> = 20;

//エイリアステンプレート--------------------------------------------

//できない！！！

