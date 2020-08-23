#pragma once
#include <string>
#include<vector>

class State;


class StateMachine
{
public:
	StateMachine(int capacity);
	~StateMachine();

	int GetCapacity() { return m_Capacity; };
	State* GetCurrentState() { return m_CurrentState; };

	void SetStates(std::vector<State> states) { m_States = states; };
	void SetInitialState(int index);
	void SetNewState(std::string stateName);

	void Run();
	void Stop(); // This won't work currently. Needs more
	bool bIsRunning() { return m_bIsRunning; };
	

private:
	int m_Capacity = 0;
	bool m_bIsRunning = false;
	std::vector<State> m_States;
	State* m_CurrentState = nullptr;
};


