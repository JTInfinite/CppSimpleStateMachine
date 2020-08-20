#pragma once
#include "State.h"
class StartState : State
{
public:
	void OnEnter() override;
	void Run() override;
	void OnLeave() override;
};

