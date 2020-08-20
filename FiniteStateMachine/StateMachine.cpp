#include <iostream>
#include <vector>
#include "StateMachine.h"
#include "State.h"

StateMachine::StateMachine(int capacity)
{
	m_Capacity = capacity;
}

StateMachine::~StateMachine()
{
}

void StateMachine::SetInitialState(int index)
{
	m_CurrentState = &m_States[index];
	m_CurrentState->Enter();
	if (bIsRunning())		
	{
		m_CurrentState->Run();
	}
}

void StateMachine::SetNewState(std::string stateName)
{
	m_CurrentState->Leave();
	std::vector<State>::iterator iterator = std::find_if(m_States.begin(), m_States.end(), [&](State& s) 
	{
		return s.GetName() == stateName;
	});
	if (iterator == m_States.end()) {
		// the id wasn't found
	}
	else {
		// the id was found
		// (*iterator) is a reference to the Player object in the vector
		m_CurrentState = &(*iterator);
		m_CurrentState->Enter();
		if (bIsRunning())
		{
			m_CurrentState->Run();
		}
	}
}

void StateMachine::Run()
{
	m_bIsRunning = true;
	m_CurrentState->Run();
}
