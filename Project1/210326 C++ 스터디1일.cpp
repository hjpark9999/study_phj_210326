#include<iostream>

using namespace std;

void main() {
	int var1, var2;

	std::cout << "첫번째 값을 입력해주세요 >>";
	std::cin >> var1;
	std::cout << "두번째 값을 입력해주세요 >>";
	std::cin >> var2;

	std::cout << var1 << " + " << var2 << " = " << var1 + var2 << endl;
	std::cout << var1 << " * " << var2 << " = " << var1 * var2 << endl;
	std::cout << var1 << " - " << var2 << " = " << var1 - var2 << endl;
	std::cout << var1 << " / " << var2 << " = " << var1 / var2 << endl;

}