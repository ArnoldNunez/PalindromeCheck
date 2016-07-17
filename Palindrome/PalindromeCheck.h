#pragma once

#include <algorithm>
#include <string>
#include <iostream>


namespace Palindrome {

	/**
	* Checks whether two strings are palindromes of eachother
	* \param str1 The first string
	* \param str2 The second string
	* \return bool Whether the strings are palindromes
	*/
	bool PalindromeCheck(std::string str1)
	{
		std::string reversed;

		/// Once they are sorted, if the strings are palindromes
		/// They will have the same sorted sequence of chars
		for (size_t i = 0; i < str1.length(); ++i)
		{

		}

		return true;
	}

	/**
	* Checks whether we have received a valid string
	* \param charset
	*/
	std::string GetValidInput(std::string charset)
	{
		std::string input;

		std::cout << "Provide a string: ";
		std::cin >> input;

		/// We want to continously check until we get a valid string
		while (true) {

			if (input.find_first_not_of(charset) != std::string::npos)
			{
				/// Found invalid character
				std::cout << "Found invalid character" << std::endl;
				std::cout << "Provide a string without special characters or numbers:" << std::endl;
				std::cin >> input;
			}
			else
			{
				/// String is valid
				return input;
			}


		}

		return "";
	}




}