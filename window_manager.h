#ifndef WINDOW
#define WINDOW

#include <iostream>
#include <vector>
#include <string>
#include "screen.h"

typedef struct Window_manager window_manager;
struct Screen; typedef struct Screen screen;

/**
 * window_manager - a vector of screens
 * @screens: a vector of Screen elements
 *
 * Description: a window mananger using the screen type
 */
struct Window_manager
{
	public:
		typedef std::vector<screen>::size_type ScreenIndex;
	private:
	public:
		void clear(ScreenIndex);
		ScreenIndex addScreen(const screen &);
	private:
		std::vector<screen> screens{screen(24, 80, ' ')};

};

/**
 * member functions
 */
void window_manager::clear(ScreenIndex i)
{
	screen &s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}

window_manager::ScreenIndex window_manager::addScreen(const screen &s)
{
	screens.push_back(s);
	return (screens.size() - 1);
}

/**
 * Non member functions
 */

#endif
