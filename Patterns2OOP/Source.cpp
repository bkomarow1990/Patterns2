#include <iostream>
#include <vector>
#include "AbstractFactory.h"
using namespace std;
class Application {
	Application(IGUIFactory * factory)
		:factory(factory)
	{

	}
	void addButton(const string& title) {
		buttons.push_back(factory->createButton(title));
	}
	void addCheckBox(const string& title) {
		checkBoxes.push_back(factory->createCheckBox(title));
	}
	void paint() {
		for (auto& i : buttons)
		{
			i->paint();
		}
		for (auto& i : checkBoxes)
		{
			i->paint();
		}
	}
private:
	vector<Button*> buttons;
	vector<CheckBox* >checkBoxes;
	IGUIFactory* factory;
};
int main() {

}