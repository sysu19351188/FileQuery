#pragma once
#ifndef  FILEQUERY_H
#define FILEQUERY_H

#include<iostream>
#include<vector>
#include <map>
#include <set>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cctype>

class FileQuery {
	using line_no = std::vector<std::string>::size_type;
	std::vector<std::string>sentences_;
    std::map<std::string, std::set<line_no>> wm; 
public:
	using line_no = std::vector<std::string>::size_type;
	FileQuery(std::ifstream& infile);
	void PrintSentencesOrdered();
	void PrintSentencesFilted(const std::string& str);
	void PrintWordCount();
	void ReplaceWord(const std::string& old, const std::string& new1);
};

#endif 
