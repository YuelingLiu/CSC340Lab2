//
//  designDoc.h
//  lab2-demo
//
//  Created by [Yueling Liu] on [2/27/2022].
//

//This file is for documenting purpose only. It will be ignored by the compiler.
//Our Teaching Assistant will check this file manually and grade it for a total of 10 points.

//Please make sure that your include the entire content of this file as comments.

/* Design Doc: communicate your thought process in English.
 
-------------Problem analysis and algorithm design------------
For each of the first 5 functions (i.e., no need to discuss the UserInteraction() function here),
answer the following questions:

1. What's the input data of this problem?
   The input date of these functions are the string.
2. What's the output data of this problem?
   The output of these functions are based on what does the user choose.
   GetNumberofnonSpace function returns the number of characters in the input string, excluding all whitespace.
   GetNumOfWords function returns the total words in this string.
   FindText function finds the occurrence of this word in the string.
   ReplaceExclamation function replaces all the exclamation to the period.
   ShortenSpace function erases the extra spaces in the string.
   
3. List 5 sample inputs  and their corresponding output
   
   GetNumOfNonWSCharacters function 
   The input is a string typed by user:
   Hi, how are you doing today?
   Outout: The number of non-space words are: 23
   
   GetNumOfWords function:
   The input is same as the previous function,which is 
   Hi, how are you doing today? 
   But this time is to test how moany words in this string. 
   The output is : The total number of words in this sentence is : 6
   
   FindText function:
   The input example is a string and a word from this string entered by user
   User input: Can you count how many hair do I have here?
   User input(for the word): hair
   output: 1
   
   ReplaceExclamation function takes a string entered by user and replace
   all the exclamation to period.
   User input: What a great day!
   Output: What a great day.
   
   ShortenSpace function erases the extra spaces in the string.
   User input:I have some spaces   here,  can you find it?
   output: I have some spaces here, can you find it?
   
   
   
4. What's your algorithm (described in pseudocode)?
  
  GetNumOfNonWSCharacters()
   char ch;
   int i;
   int num;
   for(i=0, i<str.length,++i)
         ch= str[i];
         num++ // increment the num
         chech if str[i] == a space
           num--
           
   return num; 
         
   FindText()
     size_t index = haystack.find(needle); //  by using find method to find the neddle and  initilize its size
     while(index != string::npos){       // while size hasn't reached the end of string
           numWords++;                    // incrementing word
           index=haystack.find(needle,index+1); // increment size
       }

   ReplaceExclamation()
   loop through each ch:
      if ch == '!"
            ch =='.'
            
   ShortenSpace()
     // loop through each ch in string
     for(int i =0 ;i < str.length, i++)
         if(str[i]==' ' &&  str[i+] ==' ')
            erase i,1
            i--
     
   GetNumOfWords() 
      By using stringstream 
      stream>> word
       count++
         
   
      
5. Using the above 5 sample inputs, does your algorithm produce the expected outputs?
   Yes, my algorithms produce the expected outputs.
   
6. What's the time complexity of your algorithm?
   For the functions which are used for loop, the time complexity is O(N).

------------Implementation strategies in C++: example questions----------------------
7. What built-in and/or user-defined data types are you going to use and why?
8. What will be the function prototype?
*/

/*
-----------Code Review by yourself as you are coding and after you finish coding ----------------
1. Have you included comments to enhance your code's readability?
   Yes
   
2. Have you included three distinct test cases (negative and positive cases) in your own unit tests?
   Yes
3. Have  you hard-coded the input and output pair to "fool" the unit tests?  (The correct answer is "No, I value academic integrity.")
   No, I value academic integrity.
4. Have you followed these core guidelines (URL: https://docs.google.com/document/d/16OoMJK0DkuGRw-7v3YERYdaQ3IeOwTzD18JO5S_B_Iw/edit?usp=sharing)
   Yes
*/
