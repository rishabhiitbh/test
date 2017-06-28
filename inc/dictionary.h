#ifndef INC_DICTIONARY_H
#define INC_DICTIONARY_H
 
#include <fstream>
#include <string>
#include <set>

class dictionary
{
	private:
		std::set<std::string> words;
	public:
		dictionary(const std::string & fname)
		{
			std::ifstream wlist(fname.c_str());
			std::string word;
			while(std::getline(wlist,word))
				words.insert(word);
		}
		bool Check (const std::string & isWord)
		{
			return words.find(isWord)!=words.end();
		}

};

#endif