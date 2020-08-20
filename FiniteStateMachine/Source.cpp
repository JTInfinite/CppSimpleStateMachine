#include <iostream>
#include <string>
#include<vector>
#include "StateMachine.h"
#include "State.h"

int main()
{
	StateMachine FSM(3); // Initialise the FSM with the amount of state it can hold
	std::vector<State> vec;
	vec.reserve(FSM.GetCapacity());

	vec.emplace_back(std::string("Start"));
	vec.emplace_back(State(std::string("Play")));
	vec.emplace_back(State(std::string("End")));

	FSM.SetStates(vec);
	FSM.SetInitialState(0);
	FSM.Run(); // I think states should be managed from the state machine level

	


	

	return 0;
}