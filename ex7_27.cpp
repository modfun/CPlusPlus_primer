#include "screen.h"
#include "window_manager.h"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::string;

/**
 * main - the entry point
 *
 * Description: the start of the program
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main()
{
	Screen myScreen(5, 5, 'X');
	myScreen.move(4,0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";

	return (EXIT_SUCCESS);
}
