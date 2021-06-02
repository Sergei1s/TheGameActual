#pragma once
#include <iostream>
#include <list>
#include <string>
#include <string>

using namespace std;

class IObserver
{
public:
	virtual ~IObserver() {};
	virtual void Update(const std::string& message_from_subject) = 0;

private:

};

class ISubject {
public:
	//virtual ~ISubject() {};
	virtual void Attach(IObserver* observer) = 0;
	virtual void Detach(IObserver* observer) = 0;
	virtual void Notify() = 0;

private:
	std::list<IObserver*> list_observer_;
};

class event 
{
public:
	string message;

};