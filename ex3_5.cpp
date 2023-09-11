#include <iostream>
#include <string>

using namespace std;

/**
 * main - i
 *
 * Description:
 * Return:
 */
int main ()
{
	string inputString("");
	string final_string("");

	while (getline(cin, inputString))
	{
		final_string = final_string + inputString + " ";
	}
	cout << "Done!" << endl;
	cout << final_string << endl;

	return (0);
}
