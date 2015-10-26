//Made by Darren Tam (ID 5037702)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;
using std::string;

#define MAX 100
#define true 1
#define false 0

typedef int BOOL;
typedef string WORD;
typedef WORD DICT[MAX];

extern DICT dictionary;  //your dictionary 
extern WORD word;        // 
extern int count[MAX];   //tracks word frequencies
extern int temp;         //used for a swap during the DumpDictionary function.
extern int numWord;	 //the number of different words in the dictionary.
extern int sumWord; 	 //the total frequency used for word limit.

int LocateWord(DICT, WORD);
BOOL FullDictionary(DICT);
BOOL InsertWord(DICT, WORD);
WORD GetNextWord(void);
void DumpDictionary(DICT, int[]);
