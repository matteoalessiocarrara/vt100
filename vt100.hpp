/*
 * Copyright 2016 Matteo Alessio Carrara <sw.matteoac@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

# include <string>


namespace vt100
{
	using std::string;


	const string reset		= "\033[0m";
		
		
	namespace attrs
	{

		const string bright		= "\033[1m";
		const string dim		= "\033[2m";
		const string underscore	= "\033[4m";
		const string blink		= "\033[5m";
		const string reverse	= "\033[7m";
		const string hidden		= "\033[8m";
	}


	namespace fg
	{
		const string black		= "\033[30m";
		const string red		= "\033[31m";
		const string green		= "\033[32m";
		const string yellow		= "\033[33m";
		const string blue		= "\033[34m";
		const string magenta	= "\033[35m";
		const string cyan		= "\033[36m";
		const string white		= "\033[37m";
	}


	namespace bg
	{
		const string black		= "\033[40m";
		const string red		= "\033[41m";
		const string green		= "\033[42m";
		const string yellow		= "\033[43m";
		const string blue		= "\033[44m";
		const string magenta	= "\033[45m";
		const string cyan		= "\033[46m";
		const string white		= "\033[47m";
	}
}
