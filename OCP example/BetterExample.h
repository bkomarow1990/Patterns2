#pragma once
#include <iostream>
#include <map>
#include <vector>
using namespace std;
class BetterParser {
private:
	map <string, ISportInfoBuilder*> builders;
	BetterParser(map <string, ISportInfoBuilder*> builders)
	{
		this->builders = builders;
	}
	void parse(const vector<string>& info) {
		ISportInfoBuilder* builder ;
	}
};
__interface ISportInfoBuilder {
	void build(const vector<string>& info);
};

class SportInfo {
public:
	SportInfo(const string& info = "") {
		this->info.push_back(info);
	}
	SportInfo(const vector<string>& info) {
		this->info = info;
	}
private:
	vector<string> info;
};
