#include "StateMachine.h"
namespace toni {
	StateMachine::StateMachine() : isAdding(true), isRemoving(false), isReplacing(true)
	{
	}


	StateMachine::~StateMachine()
	{
	}


	void StateMachine::addState(StateRef newState, bool isReplacing)
	{
		isAdding = true;
		this->isReplacing = isReplacing;
		this->newState = std::move(newState);
	}

	void StateMachine::removeState()
	{
		isRemoving = true;
	}

	void StateMachine::proccesState()
	{
		if (isRemoving && !states.empty()) //if removing is true and state aren't empty
			//pop
		{
			states.pop();
			if (!states.empty())
			{
				//resume previous state
				states.top()->resume();
			}
			//reset flag
			isRemoving = false;
		}//or add state?
		if (isAdding)
		{
			if (!states.empty())
			{
				if (isReplacing)
				{
					states.pop();
				}
				else
				{
					states.top()->pause();
				}
			}
			states.push(std::move(newState));
			states.top()->init();
			isAdding = false;
		}
	}
	StateRef& StateMachine::getActiveState()
	{
		return states.top();
	}
}