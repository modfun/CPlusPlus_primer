#ifndef PEARSON
#define PEARSON

#include <string>

typedef struct Pearson Pearson;
std::ostream &print(std::ostream &out, const Pearson &p);
std::istream &read(std::istream &in, Pearson &p);

/**
 * struct Pearson - ADT
 * @name: a string
 * @address: a string
 *
 * Description: someone somewhere.
 */
struct Pearson
{
	public:
	private:
		std::string name;
		std::string address;

	public:
		std::string &getName() const {return name;}
		std::string &getAddress() const {return address;}

		/**
		 * constructors
		 */
		Pearson():
			name(""), address("NA") {}
		Pearson(const std::string &str):
			name(str), address("NA") {}
		Pearson(const std::string &str, const std::string &addr):
			name(str), address(addr) {}
		explicit Pearson(std::istream &in)
		{
			read(in, *this);
		}

	friend std::ostream &print(std::ostream &out, const Pearson &p);
	friend std::istream &read(std::istream &in, Pearson &p);
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
