#pragma once
#include "Items.h"
__interface IGUIFactory {
	Button* createButton(const string& title) = 0;
	CheckBox* createCheckBox(const string& title) = 0;
};
class MacFactory : public IGUIFactory {
	Button* createButton(const string& title)override {
		return new WinButton(title);
	}
	CheckBox* createCheckBox(const string& title) {
		return new CheckBox(title);
	}

};

