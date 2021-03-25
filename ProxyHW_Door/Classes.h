#pragma once
#include <iostream>
#include <string>
#include <map>
using namespace std;
__interface IDoor {
	void close();
	void open();
};
class Door : public IDoor {
public:
	void close() override {
		state = 0;
	}
	void open()override {
		state = 1;
	}
	Door(const bool& state=0)
		:state(state)
	{}
	const bool getStatus() const{
		return state;
	}
	void showStatus()const {
		if (state==1)
		{
			cout << "Door is opened" << endl;
		}
		else { cout << "Door is closed" << endl; }
	}
private:
	bool state;
};
class Login {
public:
	Login(const string& login)
	:login(login){

	}
	bool operator== (const Login& two) {
		return getLogin() == two.getLogin();
	}
	bool operator< (const Login& two) {
		return getLogin() < two.getLogin();
	}
	const string& getLogin()const {
		return login;
	}
private:
	string login;
};
class Password {
public:
	Password(const string& password) :password(password){

	}
	bool operator== (const Password& two) {
		return getPassword() == two.getPassword();
	}
	bool operator< (const Password& two) {
		return getPassword() < two.getPassword();
	}
	const string& getPassword()const {
		return password;
	}
private:
	string password;
};
class SecureProxy {
private:
	Door* door;
	map<Login,Password> users;
public:
	SecureProxy()
	{
		users.insert({Login("admin"),Password("admin")});
		users.insert({Login("user"),Password("qwerty")});
		door = new Door();
	}
	SecureProxy(Door * door)
		:SecureProxy()
	{
		if (door!= nullptr)
		{
			this->door = door;
		}
	}
	void close() {
		door->close();
	}
	const bool& getAuthorization(const Login& login, const Password& password) {
		auto it = users.find(login);
		if (it==users.end())
		{
			return false;
		}
		if (it->second == password)
		{
			return true;
		}
	}
	void open(const Login& login, const Password& password) {
		if (getAuthorization(login,password))
		{
			door->open();
		}
		cout << "the Door is locked " << endl;
	}
	void open(const string& login, const string& password) {
		if (getAuthorization(login, password))
		{
			door->open();
		}
		cout << "the Door is locked " << endl;
	}
	~SecureProxy()
	{
		if (door!= nullptr)
		{
			delete door;
			door = nullptr;
		}
	}
};