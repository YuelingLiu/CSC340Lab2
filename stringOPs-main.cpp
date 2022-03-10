//
// stringOPs-main.cpp
//    test and run the program.
//
//  Created by [Yueling Liu] on [2/28/2022].
//

#include <iostream>
#include <string>
#include "stringOPs.h"
#include "unitTests-stringOPs.h"


int main() {
    
    //TO-DOs:
    //        1. call your unit tests to test your functions.
    //        2. after you have passed all your tests, call StringOPs_NS::UserInteraction();
    //           to interact with your program
      
   UnitTests_StringOPs_NS::test1_GetNumOfNonWSCharacters();
   UnitTests_StringOPs_NS::test2_GetNumOfNonWSCharacters();
   UnitTests_StringOPs_NS::test3_GetNumOfNonWSCharacters();
   UnitTests_StringOPs_NS::test1_GetNumOfWords();
   UnitTests_StringOPs_NS::test2_GetNumOfWords();
   UnitTests_StringOPs_NS::test3_GetNumOfWords();
   UnitTests_StringOPs_NS::test1_FindText();
   UnitTests_StringOPs_NS::test2_FindText();
   UnitTests_StringOPs_NS::test3_FindText();
   UnitTests_StringOPs_NS::test1_ReplaceExclamation();
   UnitTests_StringOPs_NS::test2_ReplaceExclamation();
   UnitTests_StringOPs_NS::test3_ReplaceExclamation();
   UnitTests_StringOPs_NS::test1_ShortenSpace();
   UnitTests_StringOPs_NS::test2_ShortenSpace();
   UnitTests_StringOPs_NS::test3_ShortenSpace();
   
   
    StringOPs_NS::UserInteraction();
}