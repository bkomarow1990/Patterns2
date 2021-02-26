#pragma once
#include <iostream>
#include <vector>
using namespace std;
class BadParser{
public:
	SportInfo parse(const vector<string>& info) {
		SportInfo result;
		if (info[0]=="Soccer")
		{
			//parse soccer
		}
		else if (info[0] == "Basketball" )
		{
			//parse basketball
		}
		return result;
	}
};
class SportInfo {
public:
	SportInfo(const string& info=""){
		this->info.push_back(info);
	}
	SportInfo(const vector<string>& info) {
		this->info = info;
	}
private:
	vector<string> info;
};
