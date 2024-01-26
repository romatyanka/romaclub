#include "Header.h"
namespace rb
{
	int numer()
	{
		std::ifstream num("numer.txt");
		std::string s;
		num >> s;
		std::ofstream out("numer.txt", std::ios::app);
		out << '.';
		return s.length();
	}
	void datta()
	{
		std::ofstream tim("timee.txt", std::ios::app);
		time_t rnow = time(NULL);
		tm date = *localtime(&rnow);
		tim << date.tm_year + 1970 << "-" << 1 + date.tm_mon << "-" << date.tm_mday << "-" << 1 + date.tm_hour << "-" << 1 + date.tm_min << "-" << 1 + date.tm_sec << std::endl;
	}
}
