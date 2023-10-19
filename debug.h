#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>
#include <string>

typedef struct Debug Debug;
/**
 * Debug
 * @hw:
 * @io:
 * @other:
 *
 * Description:
 */
struct Debug
{
	private:
		bool hw, io, other;
	public:
	private:
	public:
		void set_hw(bool b) {hw = b;}
		void set_io(bool b) {io = b;}
		void set_other(bool b) {other = b;}

		constexpr bool any()
		{
			return (hw || io || other);
		}

		/**
		 * constructors
		 */
		constexpr Debug(bool b = true):
			hw(b), io(b), other(b) {}
		constexpr Debug(bool h, bool i, bool o):
			hw(h), io(i), other(o) {}

};

#endif
