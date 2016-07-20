/**
 * \file PalindromeCheck.h
 *
 * \author Arnold Nunez
 *
 * \brief This is where our palindrome functions will go
 */

#pragma once

#include <algorithm>
#include <string>
#include <iostream>
#include <cctype>


namespace Palindrome 
{
	/**
	* Checks whether two strings are palindromes of eachother
	* \param str1 The first string
	* \param str2 The second string
	* \return bool Whether the strings are palindromes
	*/
	bool PalindromeCheck(std::string str1)
	{
		int len = str1.length();	///< The length of the string

		
		for (int i = 0; i < len; ++i)
		{	
			/// We dont care about case
			if (tolower(str1[i]) != tolower(str1[len - 1 - i]))
			{
				/// Not palindromes
				return false;
			}
			
		}

		return true;
	}

	/**
	* Checks whether we have received a valid string
	* \param charset
	* return input The valid input or 'Q' which is quit
	*/
	std::string GetValidInput(std::string charset)
	{
		std::string input;		///< The input

		std::cout << "Provide a word or enter 'Q' to quit: ";
		std::cin >> input;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		

		/// We want to continously check until we get a valid string
		while (true) {
			
			if (input == "Q") {
				/// User wants to quit
				return input;
			}
			else if (input.find_first_not_of(charset) != std::string::npos)
			{
				/// Found invalid character
				std::cout << "----Error: Found invalid character-----" << std::endl;
				std::cout << "Provide a string without special characters or numbers:";
				std::cin >> input;
				std::cin.clear();
				std::cin.ignore(10000, '\n');
			}
			else
			{
				/// String is valid
				return input;
			}
			
		}
		
	}
	
	
}