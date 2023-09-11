#include <iostream>
#include <vector>

#include "ClassTemplate.h"
#include "FunctionTemplate.h"
#include "MemberFunctionTemplate.h"
#include "VariableTemplate.h"
#include "AliasTemplate.h"

int main()
{
	std::cout << "クラステンプレート--------------------------" << std::endl;

	ClassTemplate<int> ctInt{};
	ctInt.SetValue(3);
	ctInt.Print();

	ClassTemplate<float> ctFloat{};
	ctFloat.SetValue(5.6f);
	ctFloat.Print();

	ClassTemplate<std::vector<int>> ctVector{};
	ctVector.SetValue({ 1,2,3,4,5 });
	//ctVector.Print();								//std::vector<int>は<<演算子が定義されていないのでコンパイルエラーになる

	std::cout << std::endl;


	std::cout << "関数テンプレート----------------------------" << std::endl;

	Print<int>(7);

	Print(8.1);

	std::cout <<  std::endl;


	std::cout << "メンバ関数テンプレート----------------------" << std::endl;

	TestClass tc{};
	tc.Print(9);

	std::cout << std::endl;


	std::cout << "変数テンプレート----------------------------" << std::endl;

	std::cout << "PI<int>:" << PI<int> << std::endl;
	std::cout << "PI<float>:" << PI<float> << std::endl;

	std::cout << std::endl;


	std::cout << "エイリアステンプレート----------------------" << std::endl;

	std::cout << "Type:" << typeid(Pair<int, float>).name() << std::endl;

	std::cout << std::endl;


	std::cout << "ジェネリックラムダ--------------------------" << std::endl;

	constexpr auto sum = [](auto x, auto y) { return x + y; };
	std::cout << typeid(sum(3, 4)).name() << std::endl;

	std::cout << std::endl;

	system("pause");

	return 0;
}
