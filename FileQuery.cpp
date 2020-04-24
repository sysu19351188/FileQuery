#include"FileQuery.h"
#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<string>
#include<sstream>
#include<fstream>
#include<algorithm>
using namespace std;

void FileQuery::PrintSentencesOrdered(){
	vector<string> copySentence;
	copySentence.assign(sentences_.begin(), sentences_.end());
	sort(copySentence.begin(), copySentence.end());
	cout << "\nIn order：" << endl;
	for (int i = 0; i < copySentence.size(); ++i)
	{
		cout << copySentence[i] << endl;
	}
}

void FileQuery::PrintSentencesFilted(const std::string& str)
{
	vector<string>search;
	string word = "";
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] != ',')
			word += str[i];
		else
		{
			search.push_back(word);
			word = "";
		}
	}
	search.push_back(word);
	for (int i = 0; i < search.size(); ++i)
	{
		auto loc = wm.find(search[i]);
		if (loc != wm.end())
		{
			cout << "\nFind " << search[i] << " in:" << endl;
			for (auto num : loc->second)
				cout << sentences_[num] << endl;//改为vector以后second为int
		}
		else cout << "Do not find " << search[i] << "." << endl;
	}
}

void FileQuery::PrintWordCount() {
	std::map <std::string, size_t> word_count;
	for (auto s : sentences_) {
		std::istringstream in(s);
		std::string word;
		while (in >> word) {
			std::string::iterator itl;
			for (itl = word.begin(); itl != word.end(); itl++) {
				*itl = tolower(*itl);
			}
			word.erase(remove_if(word.begin(), word.end(), ispunct), word.end());
			++word_count[word];
		}
	}

	void FileQuery::ReplaceWord(const std::string& old, const std::string& new1)
	{

		for (int i = 0; i < sentences_.size(); i++)
		{
			int start;
			int end;
			start = sentences_[i].find(old);
			while (start != sentences_[i].npos)
			{

				sentences_[i].replace(start, old.size(), new1);
				end = start + new1.size() - 1;
				start = sentences_[i].find(old, end);
			}

		}
	}