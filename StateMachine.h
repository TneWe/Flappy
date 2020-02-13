#pragma once
#include"State.h"
#include<stack>
#include<memory>	

namespace toni
{
	typedef std::unique_ptr<State> StateRef;

	class StateMachine
	{
	public:
		StateMachine();
		~StateMachine();

		void addState(StateRef newState, bool isReplacing = true);
		void removeState();
		void proccesState();
		StateRef& getActiveState();

	private:
		std::stack<StateRef> states;
		StateRef newState;
		bool isRemoving;
		bool isAdding;
		bool isReplacing;
	};
}

