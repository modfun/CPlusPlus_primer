#include <iostream>
#include <string>
#include <vector>
#include <cstddef>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::string;
using std::vector;
using std::begin; using std::end;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	bool b_val = true;
	char c_val = 'c'; wchar_t wc_val = 'c';
	char16_t c16_val = 'c'; char32_t c32_val = 'c';
	short s_val = 0; int i_val = 0; long l_val = 0; long long ll_val = 0;
	float f_val = 0.0; double d_val = 0.0; long double ld_val = 0.0;

	int &ri_val = i_val;
	void *ptr = nullptr;
	void *arr[16];
	void (*fn)();
	struct st { int i; bool c;} x;

	cout << sizeof b_val << " " << sizeof c_val << " " << sizeof wc_val;
	cout << " " << sizeof c16_val << " " << sizeof c32_val << endl;
	cout << sizeof s_val << " " << sizeof i_val << " " << sizeof l_val;
	cout << " " << sizeof ll_val << endl;
	cout << sizeof f_val << " " << sizeof d_val << " " << sizeof ld_val;
	cout << endl;
	cout << sizeof ri_val << " " << sizeof ptr << " " << sizeof arr << " ";
	cout << sizeof fn << " " << sizeof x << endl;

	return (0);
}
