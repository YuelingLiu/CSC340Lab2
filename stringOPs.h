//
//  stringOPs.h
//  Declare a namespace StringOPS_NS, within which declares a list of
//    free-standing (or stand-alone) functions that analyze or edit a string.
//
//  Created by [Your Name]  on [Date].
//

#ifndef stringOPs_hpp
#define stringOPs_hpp

#include <iostream>
#include <string>
#include<stdlib.h>

namespace StringOPs_NS{
using namespace std;  //feel free to include the using-directive within our own namespace
                      //to enhance programming experience.

//TO-DO: - declare below the list of function prototypes.
//       - remember to include a one line comment to describe the function's behavior
//       - note that you are free to include any helper functions. For instance, you may want to include
//         a function that trims away the leading/trailing space characters in a string.


void test1__GetNumOfNonWSCharacters(); 

// this function is designed to calculate  the number of characters in the input string,
// excluding all whitespace.
int GetNumOfNonWSCharacters(std::string  & str);

//This function returns the number of instances a word or phrase is found in the string.
int FindText( const std::string  &needle, const std::string  &haystack);

//This function replace '!' to '.'
void ReplaceExclamation(std::string &sentence);

//This function erase the extra spaces
void ShortenSpace(std::string &str);

//This function to count how many words in the sentence.
int GetNumOfWords(const std::string &str);

// Menu function to display Menu
void Menu();

// This function allows user to enter choice and the sentence 
void  UserInteraction();
}//end of namespace StringOPS_NS



#endif /* stringOPs_h */