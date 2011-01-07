#pragma once


// Windows
//
#include <windows.h>
#include <cassert>
#include <cmath>


// STL
//
#include <exception>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <exception>
#include <string>
#include <cassert>
#include <cmath>
#include <algorithm>
#include <list>
#include <bitset>
#include <sstream>


// Boost
//
#include <boost/shared_ptr.hpp>
#include <boost/noncopyable.hpp>


// Exception
//
#define THROW( message ) {												\
	std::ostringstream fullMessage;										\
	std::string file( __FILE__ );										\
	file = file.substr( file.find_last_of( "\\/" ) + 1 );				\
	fullMessage << message << " <" << file << "@" << __LINE__ << ">";	\
	throw Exception( fullMessage.str() );								\
}
