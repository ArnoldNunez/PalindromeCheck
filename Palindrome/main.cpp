/**
 * \file main.cpp
 *
 * \author Arnold Nunez
 */

#include "PalindromeCheck.h"


using namespace Palindrome;

/** The entry point of our program
 *
 * \param argc The count of arguments passed in
 * \param argv The array of the arguments
 */
int main(int argc, char* argv[])
{
	bool exit = false;		///< The program exit flag
	std::string in1;		///< The inputs to our program

	/// The string of valid characters that our inputs can have
	std::string validChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (!exit)
	{
		/// These get the inputs and do error checking
		in1 = GetValidInput(validChars);

		if (!PalindromeCheck(in1))
		{
			std::cout << "Not Palindromes" << std::endl;
		}
		else
		{
			std::cout << "They are Palindromes" << std::endl;
		}

	}
	return 0;
}