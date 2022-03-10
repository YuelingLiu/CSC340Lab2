//
//  stringOPs.cpp
//  implement (or define) the following functions declared within the file stringOPs.hpp
//  Created by [Your Name] on [Date].
//

#include "stringOPs.h"  //need to include your header file; otherwise, the compiler is
                          //going to complain.
#include <sstream>   //if you want to use stringstreams to tokenize a string (i.e., the getNumOfWords())

#include <algorithm>
namespace StringOPs_NS{

//[TO-DOs: implement (or define) each of the functions declared in "stringOPs.h"
//-for each function definition, please briefly comment on the main idea/algorithm]
//You can copy-'n-paste the pseucode included in your Design Doc here, provided that
//(1) a third person can clearly understand your intent and implement your algorithm as you
//intend them to; and (2) it is not too redundant when combined with your actual C++ code

// definition of GetNumOfNonWSCharacters take a reference parameter
int GetNumOfNonWSCharacters(std::string  & str){
        char ch;// initialize a character
        int num = 0;// initialize a num 0
        unsigned int i; //initialize an unsigned int i
        for (i = 0; i<str.length();i++){
            ch = str[i];
            num++; // increment
            if(ch==' '){  // if there' a white space
                num--;
            }

        }

    cout<<"The number of non-space words are: "<<num<<endl;  // print out  the result

    return num;

}

//FindText function definition and takes two reference parameters
int FindText( const std::string  &needle, const std::string  &haystack){
   
    int numWords=0;   // initilize a numwords 0
    // edge case
    if(haystack.length()==0){  // if the haystack is nothing there
        return 0;             // return 0
    }

      size_t index = haystack.find(needle); //  by using find method to find the neddle and  initilize its size
             while(index != string::npos){       // while size hasn't reached the end of string
           numWords++;                    // incrementing word
           index=haystack.find(needle,index+1); // increment size
             }
    
    std::cout<<"The number of mores have occurred  : " <<numWords; // print out the number of words
    return numWords;

}

//  ReplaceExclamation definiton take a reference parameter
void ReplaceExclamation(std::string &sentence){
   // By using replace method scan thru begining to the end,
   // to place ! to .
     std::replace(sentence.begin(), sentence.end(), '!', '.');
  // print out result
      std::cout<<"After replacing '!' to '.' : " <<std::endl;
      std::cout<<sentence<<std::endl;
}

void ShortenSpace(std::string &str){

   unsigned long int n =str.length(); // initilize the str length 
   unsigned int i;            
       for(i=0; i<n;++i){        // looping thru index 0 the end of string length
        if(str[i]==' '&& str[i+1]==' '){     // if current position char and next char is empty
            str.erase(i,1);                  // erase this char which is space   
            i--;                             // decrementing the string length
        }
       
    }
        //print out result
      std::cout<<"After shortening the space: "<<str<<std::endl;
}
 
   
int GetNumOfWords(const std::string &str){
       std::stringstream  stream(str); // to break word
      std::string  oneWord;
         unsigned int count = 0;//To store words
        while(stream >> oneWord) { ++count;} 
        std::cout<<"The total number of words in this sentence is : "<<count<<std::endl;
        return count;
}


// print out menu
void Menu(){
   std:: cout<< "Menu" <<std::endl;
    std:: cout << "c -Number of non-whitespace characters" <<std::endl;
    std:: cout << "w - Number of words" << std::endl;
    std:: cout<< "f - Find text" << std::endl;
    std:: cout<< "r - Replace all !'s" << std::endl;
    std:: cout << "s - Shorten spaces" << std::endl;
    std::cout << "q - Quit" << std::endl;

}
//UserInteraction function allows user to make choice
void UserInteraction(){

     Menu();
     char option = ' ';
     do{
         std::cout<<std::endl;
        // Menu();
         std::cout << "Choose an option: " << std::endl;
         std::cin >> option;

         switch (option) {
             case 'c': {
                 std::cin.ignore();  //ignore the newline so that it won't be taken in by the getline() statement below
                 std::cout << "Type your input string here:";
                  std::string inStr = " ";
                 std::getline(std::cin, inStr);
                 StringOPs_NS::GetNumOfNonWSCharacters(inStr);
                 break;
             }
             case 'w': {
                 std::cin.ignore();  //ignore the newline so that it won't be taken in by the getline() statement below
                 std::cout << "Type your input string here:";
                 std::string inStr = " ";
                 std::getline(std::cin, inStr);
                 StringOPs_NS::GetNumOfWords(inStr);
                 break;
             }
             case 'f': {
                 std::cin.ignore();  //ignore the newline so that it won't be taken in by the getline() statement below
                 std::cout << "Type your input string here:";
                 std::string inStr = " ";
                 std::getline(std::cin, inStr);

                 std::cout << "Type the word you are looking for :";
                 std::string typeAWord;
                 std::getline(std::cin, typeAWord);
                 StringOPs_NS::FindText(typeAWord, inStr);
                 break;
             }

             case 'r': {
                 std::cin.ignore();  //ignore the newline so that it won't be taken in by the getline() statement below
                 std::cout << "Type your input string here:";
                 std::string inStr = " ";
                 std::getline(std::cin, inStr);
                  StringOPs_NS::ReplaceExclamation(inStr);
                 break;
             }
             case 's': {
                 std::cin.ignore();  //ignore the newline so that it won't be taken in by the getline() statement below
                 std::cout << "Type your input string here:";
                 std::string inStr = " ";
                 std::getline(std::cin, inStr);
                 StringOPs_NS::ShortenSpace(inStr);
                 break;
             }
             default:
               {
                 std::cout << "Invalid option! Please choose a correct option!" << std::endl;
               }

         }
     }while(option!='q');


}
}//end of namespace StringOPs_NS