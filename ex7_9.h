#ifndef PEARSON
#define PEARSON

#include <string>

typedef struct Pearson Pearson;
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

std::ostream &print(std::ostream &out, const Pearson &p)
{
	out << p.name << " at " << p.address << std::endl;
	return (out);
}

std::istream &read(std::istream &in, Pearson &p)
{
	in >> p.name >> p.address;
	return (in);
}

#endif
