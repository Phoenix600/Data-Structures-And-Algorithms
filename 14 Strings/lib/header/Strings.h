#ifndef STRINGS_H
#define STRINGS_H

#include<stdbool.h>
/// @brief String Data Structure
typedef struct String String;

/// @date 12-02-2024
/// @author Parth Pathak
/// @brief  String data structure implemented with character array embodied with user defined structure
/// @param int maximum capacity of char array
/// @param int len Length of string
/// @param char str[255] Array of characters to represent the string
/// @file Strings.h
struct String
{
    int size;
    int len;
    char str[255];
};

/// @brief It is recommended to use init method before using the string data structure, it just creates the 
/// @brief basic configuration for string Data Structure 
/// @param s 
void init(String s);

/// @brief  print method is used to print the content of the string
/// @param String
/// @return String
void print(String s);

/// @brief read() function is used to read the stream of characters from the keyboard
/// @param String s
/// @return void
void read(String s);

/// @brief getLength() function returns the total number of characters present in the string, simplt it returns the length of string
/// @param String s
/// @return int len
int getLength(String s);

/// @brief this method counts the total number of characters present in the string
/// @param String s
/// @return int charCount
int countCharacters(String s);

/// @brief This method converts the passed String into upper case string
/// @param String s
/// @return String result
String toUpperCase(String s);

/// @brief This method converts the passed String into to lower case string
/// @param String s
/// @return String result
String toLowerCase(String s);

/// @brief This method toggles the cases of the passed string and returns the new string
/// @param String s
/// @return String result
String toggleCase(String s);

/// @brief This method returns the word count in the passed string
/// @param String s
/// @return int count;
int getWordCount(String s);

/// @brief This method returns the space count in the string
/// @param String s
/// @return int count
int getSpacesCount(String s);

/// @brief This method returns the consonent count in the string
/// @param String s
/// @return int count
int getConsonentCount(String s);

/// @brief This method returns the vowels count in the passed string
/// @param String s
/// @return int count
int getVowelsCount(String s);

/// @brief This method checks the whether the given string is valid or not
/// @param String s
/// @return bool
bool isValidString(String s);

/// @brief This method returns the new string in reverse manner
/// @param String s
/// @return String result
String reverseString(String s);

/// @brief
/// @param s
/// @return
bool isPalindrome(String s);

/// @brief This method prints the duplicate elements present in the stream of chracters 
/// @param String s
/// @return void 
void findDuplicate(String s);

/// @brief this method returns the boolean value true if both string are anagram of each other 
/// @param str1 
/// @param str2 
/// @return bool 
bool isAnagram(String str1, String str2);

/// @brief This method prints the permutation of a string using the recursive function calls 
/// @param str 
/// @return void 
void permutationOfString(String str);

#endif