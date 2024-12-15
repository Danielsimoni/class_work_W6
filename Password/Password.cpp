#include <iostream>
// Input: 16 chars + enter  
// Reason: Buffer holds 16 chars, but the 17th (null) overflows,
//  modifying 'incorrect' to false and bypassing restrictions. 
struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
