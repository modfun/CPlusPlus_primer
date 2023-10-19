#ifndef PEARSON
#define PEARSON

#include <string>

/**
 * struct Pearson - ADT
 * @name: a string
 * @address: a string
 *
 * Description: someone somewhere.
 */
struct Pearson
{
	std::string name;
	std::string address;

	std::string &getName() const {return name;}
	std::string &getAddress() const {return address;}
}

#endif
