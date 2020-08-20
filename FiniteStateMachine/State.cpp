#include <iostream>
#include <string>
#include "State.h"

void State::Enter()
{
	OnEnter();
}

void State::OnEnter()
{
	std::cout << "Entering " << m_Name << " state" << std::endl;
}

void State::Run()
{
	std::cout << "Running " << m_Name << " state" << std::endl;
}

void State::Leave()
{
	std::cout << "Leaving " << m_Name << " state" << std::endl;
}

void State::OnLeave()
{
	std::cout << "On leave event firing " << std::endl;
}
