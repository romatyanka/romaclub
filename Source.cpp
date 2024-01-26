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
	void datta(int n)
	{
		std::ofstream tim("timee.txt", std::ios::app);
		time_t rnow = time(NULL);
		tm date = *localtime(&rnow);
		tim << n << "-" << date.tm_year + 1900 << "-" << 1 + date.tm_mon << "-" << date.tm_mday << "-" << date.tm_hour << "-" << date.tm_min << "-" << date.tm_sec << std::endl;
	}
}
