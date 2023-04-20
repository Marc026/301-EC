#include "FamilySet.h"

string FamilySet::getRandomWord()
{
	int ind = rand() % wordlist->size();
	return wordlist->at(ind);
}

int FamilySet::numWords()
{
	return wordlist->size();
}

int FamilySet::numFamilies()
{
	return dictionaries.size();
}

vector<string> FamilySet::getWords() {
    return *wordlist;
}

FamilySet::FamilySet(string dictFile, int len) {
    ifstream file(dictFile);

    // Allocate memory for the vector
    wordlist = new vector<string>;

    // Read words from the file and add them to the vector if they have the required length
    string word;
    while (file >> word) {
        if (word.length() == len) {
            wordlist->push_back(word);
        }
    }

    // Close the file
    file.close();
}

FamilySet::~FamilySet() {

}

void FamilySet::filterFamilies(string letter, string guessPattern) {

}

void FamilySet::setFamily(string family) {
    if (dictionaries.count(family) > 0) {
        wordlist = dictionaries[family];
        dictionaries.clear();
    }
    else{
        return;
    }
}

int FamilySet::familySize(string family) {
    return 0;
}

void FamilySet::resetFamilyIter() {

}

string FamilySet::getNextFamily() {
    return std::string();
}

