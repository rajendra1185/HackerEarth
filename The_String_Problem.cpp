#include "header.h"

void String_Problem(std:: string str,int number)
{	
	while (number > 0)
	{
		if ((str.find('a') != std::string::npos) &&
			(str.find('e') != std::string::npos) &&
			(str.find('i') != std::string::npos) &&
			(str.find('o') != std::string::npos) &&
			(str.find('u') != std::string::npos))
		{
			cout << "lovely string" << endl;
		}
		else if ((str.find('A') != std::string::npos) &&
			(str.find('E') != std::string::npos) &&
			(str.find('I') != std::string::npos) &&
			(str.find('O') != std::string::npos) &&
			(str.find('U') != std::string::npos)) {
			cout << "lovely string" << endl;
		}
		else
		{
			cout << "ugly string" << endl;
		}
		number--;
	}
}