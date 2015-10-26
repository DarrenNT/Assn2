#include "global.h"

BOOL InsertWord(DICT dict, WORD word){
/* 
  adds word to dictionary , if word can't be added returns false else returns true
*/
if(FullDictionary(dictionary) == true){
	return false;
}
else{
	for(int i = 0; i < MAX; i++){
		if(dict[i].compare(word) == 0){ //problem
			count[i]++;
			break;
		}else{
			if(dict[i].empty()){
				dict[i] = word;
				count[i]++; 
				numWord++;
				break;
			}
		}
	}
	return true;
}
}

void DumpDictionary(DICT dict, int count[]){
/* 
  will sort the dictionary, and display the contents
*/
for(int i = 0; i < MAX; i++){
	for(int b = 0; b < MAX; b++){
		if(dict[b].compare(dict[i]) > 0 && dict[i] != ""){
			dict[b].swap(dict[i]);
			temp = count[b];
			count[b] = count[i];
			count[i] = temp;
		}
	}
}

for(int i = 0; i < numWord; i++){
	if(count[i] != 0){ 
		printf("Word: %-12s Frequency: %-2i", dict[i].c_str(), count[i]);
		cout << endl;
	}
}

}

WORD GetNextWord(void){
	getline(cin, word);
	if(word.length() == 0){
		return "";
	}else{
		return word;
	}
}

BOOL FullDictionary(DICT dict){
	sumWord = 0;
	for(int i = 0; i < numWord; i++){
		sumWord = sumWord + count[i];
	}
	if(sumWord >= 100){
		return true;
	}else{
		return false;
	}
}

int LocateWord(DICT dict, WORD word){
	for(int i = 0; i < numWord; i++){
		cout<< "you are in";
		if( word.compare(dict[i]) == 0){
			cout << " completely" << endl;
			return i;		
		}
	}
	return -1;
}
