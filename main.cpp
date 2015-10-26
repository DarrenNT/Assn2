#include "global.h"

/****************************************************
Author: Darren Tam
Assignment #2
Purpose: To let the user input up to 100 words 
         and receive what words were put in and
         at what frequency in alphabetic order.
****************************************************/

DICT dictionary;  //your dictionary 
WORD word;        // 
int count[MAX];   //tracks word frequencies
int temp;         //used for a swap during the DumpDictionary function.
int numWord;	  //the number of different words in the dictionary.
int sumWord = 0;  //the total frequency used for word limit.

int main (void) {
    int pos;

    while (1) {
       word = GetNextWord();
       if ( 0 == word.length() )  {
           DumpDictionary(dictionary,count);
           break;
       }
       if ((pos = LocateWord(dictionary,word)) >=  0 ) 
           count[pos]++;
       else
           if (!InsertWord(dictionary,word)) cout << "dictionary full " << word << " cannot be added\n";
    }
    return 0;
}
