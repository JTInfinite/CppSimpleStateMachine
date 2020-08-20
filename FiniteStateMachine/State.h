#pragma once
#include <string>
#include "StateMachine.h"

class State
{
public:
	State(std::string name)
		: m_Name(name) {};

	void Enter();
	virtual void OnEnter();
	virtual void Run();
	virtual void Leave();
	virtual void OnLeave();
	std::string GetName() { return m_Name; };

private:
	std::string m_Name;

};

