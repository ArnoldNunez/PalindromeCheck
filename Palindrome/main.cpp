/**
 * \file main.cpp
 *
 * \author Arnold Nunez
 */

#include "PalindromeCheck.h"


using namespace Palindrome;

/** The entry point of our program */
int main(int argc, char* argv[])
{
	bool exit = false;		///< The program exit flag
	std::string in1;		///< The inputs to our program

	/// The string of valid characters that our inputs can have
	std::string validChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (!exit)
	{
		/// Get the input and do error checking
		in1 = GetValidInput(validChars);
		
		/// Q means user requested to quit
		if (in1 == "Q") {
			return 0;
		}
		else if (!PalindromeCheck(in1))
		{
			std::cout << in1 << " Is Not a palindrome" << std::endl;
			std::cout << std::endl;
		}
		else
		{
			std::cout << in1 << " Is a palindrome" << std::endl;
			std::cout << std::endl;
		}

	}
	return 0;
}