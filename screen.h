#ifndef SCREEN
#define SCREEN

#include <iostream>
#include <string>

typedef struct Screen Screen;
struct Window_manager; typedef struct Window_manager window_manager;

/**
 * Screen - a class representing a window on a display
 *
 * Description: a screen class that demonstrate abstractions and encapsulation.
 */
struct Screen
{
	public:
		typedef std::string::size_type pos;
	private:
		pos cursor = 0;
		pos height = 0, width = 0;
		std::string contents;
		mutable size_t access_control;
	public:
		char get() const
		{
			return (contents[cursor]);
		}
		inline char get(pos h, pos w) const;
		Screen &move(pos r, pos c);
		Screen &set(char);
		Screen &set(pos, pos, char);
		Screen &display(std::ostream &out)
		{
			do_display(out);
			return (*this);
		}
		const Screen &display(std::ostream &out) const
		{
			do_display(out);
			return (*this);
		}
		inline pos size() const;

		/**
		 * constructors
		 */
		Screen() = default;
		Screen(pos h, pos w):
			Screen(h, w, ' ') {}
		Screen(pos h, pos w, char c):
			height(h), width(w), contents(h * w, c) {}
	private:
		inline void do_display(std::ostream &out) const
		{
			out << contents;
		}
	
	friend window_manager;
};

/**
 * member functions
 */
inline Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return (contents[row + c]);
}

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return (*this);
}

inline Screen &Screen::set(pos r, pos col, char c)
{
	contents[r * width + col] = c;
	return (*this);
}

inline screen::pos screen::size() const
{
	return (height * width);
}

#endif
