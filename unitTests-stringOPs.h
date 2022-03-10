//
//  unitTests-stringOPs.h
//
//  3 unit tests for each of the first five functions required by this project
//           (no need to write a unit test for the UserInteraction() function)
//
// Note: Instead of creating two separate files to separate these unit tests' prototypes from
//  their defnitions, we are going to take a shortcut by implement all the unit tests
//  in this header file.
//
//  Created by [your name] on [date].
//

#ifndef stringOPs_UnitTests_h
#define stringOPs_UnitTests_h

#include "stringOPs.h"  //need to include the list of string OPs function prototypes

namespace UnitTests_StringOPs_NS{ //declare a new namespace for all the unit tests.

   //the following using-directive helps to simplify the coding experience a bit
   using namespace StringOPs_NS;
    
     bool test1_GetNumOfNonWSCharacters(){
         std::string str = "hi, good morning!";  // Define a string
         int result =StringOPs_NS::GetNumOfNonWSCharacters(str);  // call GetNumOfNonWSCharacters and pass this str
        
        if(result == 15){  // check if the result is the same
           return true;
        }
        return false;
      
   }
   bool test2_GetNumOfNonWSCharacters(){
       std::string str = "Hi, have a great day!";  // Define a string
       
       // call GetNumOfNonWSCharacters and pass this str
       int result =StringOPs_NS::GetNumOfNonWSCharacters(str);//check if the result is the same
       if(result==17){
          return true;
       }
       return false;
       
   }
   bool test3_GetNumOfNonWSCharacters(){
       std::string str = "aaabbbccc";
       int result =StringOPs_NS::GetNumOfNonWSCharacters(str);
       if(result==9){
          return true;
       }
       return false;
      
   }
   bool test1_GetNumOfWords(){
      std::string str = "Hi, how are you doing?";
      int result =StringOPs_NS::GetNumOfWords(str);
      if(result ==5){
         return true;
      }
      return false;
   }
   bool test2_GetNumOfWords(){
      
      std::string str = "Hi?";
      int result = StringOPs_NS::GetNumOfWords(str);
        if(result ==1){
         return true;
      }
      return false;
   }
   bool test3_GetNumOfWords(){
      
        std::string str = "Grab a coffee?";
         int result = StringOPs_NS::GetNumOfWords(str);
         if(result ==3){
         return true;
      }
      return false;  
   }
   
   bool test1_FindText(){
      std::string str = "hi, there, hi, again?";
      std::string word="hi";
      int result =StringOPs_NS::FindText("hi",str);
      if(result==2){
         return true;
      }
      return false;
   }
   bool test2_FindText(){
      std::string str = "I like to work at Starbucks";
      std::string word="like";
      int result =StringOPs_NS::FindText("like",str);
      if(result==1){
         return true;
      }
      return false;
   } 
      
   
   bool test3_FindText(){
        std::string str = "I had a craving for fish";
      std::string word="fish";
      int result =StringOPs_NS::FindText("fish",str);
      if(result==1){
         return true;
      }
      return false;
      
      
   }
   
   
   bool test1_ReplaceExclamation(){
      
       std::string str = "I had a craving for fish!";
    
       StringOPs_NS::ReplaceExclamation(str);
     
       std::string newStr = "I had a craving for fish.";
       
       if(str==newStr){
          return true;
       }
       return false;
      
   }
   bool test2_ReplaceExclamation(){
       std::string str = "I had a craving for fish!";
    
       StringOPs_NS::ReplaceExclamation(str);
     
       std::string newStr = "I had a craving for fish.";
       
       if(str==newStr){
          return true;
       }
       return false;
      
      
   }
   bool test3_ReplaceExclamation(){
      
       std::string str = "I had a craving for fish!";
    
       StringOPs_NS::ReplaceExclamation(str);
     
       std::string newStr = "I had a craving for fish.";
       
       if(str==newStr){
          return true;
       }
       return false;
      
      
   }
   
   
   bool test1_ShortenSpace(){
       std::string str = "I  had a craving for fish!";
    
       StringOPs_NS::ShortenSpace(str);
     
       std::string newStr = "I had a craving for fish!";
       
       if(str==newStr){
          return true;
       }
       return false;
      
   }
   bool test2_ShortenSpace(){
       std::string str = "I  had a  craving for fish!";
    
       StringOPs_NS::ShortenSpace(str);
     
       std::string newStr = "I had a craving for fish!";
       
       if(str==newStr){
          return true;
       }
       return false;
      
   }
   bool test3_ShortenSpace(){
       std::string str = "Happy  fun";
    
       StringOPs_NS::ShortenSpace(str);
     
       std::string newStr = "Happy fun";
       
       if(str==newStr){
          return true;
       }
       return false;
      
      
   }
   
   
   
   

//TO-DOs: add your unit tests below
//- for each of the first five required functions in this project, include three unit tests.
//- follow the naming requirement for your unit test functions:  test[1|2|3]_[name of function under testing]();
//  For example, the three unit tests for the FindText() function should have the following prototype:
//     bool test1_FindText();
//     bool test2_FindText();
//     bool test3_FindText();
//  For each of the above unit tests, you test the FindText() function by passing in some sample input.
//  If FindText() correctly returns the expected result, the test*() returns true; false otherwise.


}//end of UnitTests_StringOPs_NS
#endif /* stringOPs_UnitTests_h */