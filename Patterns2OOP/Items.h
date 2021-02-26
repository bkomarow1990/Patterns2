#pragma once
#include <iostream>
using namespace std;
class Item abstract
{
public:
	virtual void paint()=0;
	virtual void onClick()=0;
	void setTitle(const string& title) {
		if (title.empty())
		{
			return;
		}
		this->title = title;
	}
	const string& getTitle()const {
		return title;
	}
	Item(const string& title)
	{
		setTitle(title);
	}
private:
	string title;
};
class Button : public Item {
public:
	Button(const string& title)
		:Item(title){}
};
class WinButton : public Button {
public:
	WinButton(const string& title="Win button"):Button(title){}
	void onClick() override {
		cout << "Win button:" << getTitle() << endl;
	}
	void paint() override {
		cout << "Win button :" << getTitle() << " Painted" << endl;
	}
};
class CheckBox : public Item {
	public:
		CheckBox(const string& title = "Check box", const bool checked = false) :Item(title), cheked(checked) {};
		const bool getChecked()const { return cheked; }
		void setChecked(const bool& checked) { this->cheked = checked; }
		virtual void onClick() override {
			if (cheked==0)
			{
				cheked = 1;
			}
			else {
				cheked = 0;
			}
		}
		virtual void paint()override {
			cout << "CheckBox Painted" << endl;
		}
	private:
		bool cheked;
};
class MacCheckBox : public CheckBox {
public:
	MacCheckBox(const string& title = "Mac Check box")
		: CheckBox(title) {};
	void onClick() override {
		cout << "Mac check box :" <<getTitle()<< endl;
		CheckBox::onClick();
	}
	void paint() override {
		cout << "Mac check box :" << getTitle()<<" Painted" << endl;
	}
};