#include "CompositeAction.h"

void CompositeAction::addAction(Action* action)
{
	actions.push_back(action);
}

void CompositeAction::exec() const
{
	typedef std::vector<Action*>::const_iterator Iterator;

	for(Iterator iter = actions.begin();iter != actions.end();iter++)
	{
		(*iter)->exec();
	}
}

