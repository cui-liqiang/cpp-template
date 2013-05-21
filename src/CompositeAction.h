#ifndef COMPOSITEACTION_H_
#define COMPOSITEACTION_H_

#include "Action.h"
#include <vector>

struct CompositeAction : Action{

	void addAction(Action*);

	void exec() const;
private:
	std::vector<Action*> actions;
};

struct DummyClass{};

template<typename ACTION1=DummyClass, typename ACTION2=DummyClass, typename ACTION3=DummyClass>
struct GenericCompositeAction : CompositeAction
{
	GenericCompositeAction()
	{
		addAction(&action1);
		addAction(&action2);
		addAction(&action3);
	}
private:
	ACTION1 action1;
	ACTION2 action2;
	ACTION3 action3;
};

template<typename ACTION1>
struct GenericCompositeAction<ACTION1, DummyClass, DummyClass> : CompositeAction
{
	GenericCompositeAction()
	{
		addAction(&action1);
	}
private:
	ACTION1 action1;
};

template<typename ACTION1, typename ACTION2>
struct GenericCompositeAction<ACTION1, ACTION2, DummyClass> : CompositeAction
{
	GenericCompositeAction()
	{
		addAction(&action1);
		addAction(&action2);
	}
private:
	ACTION1 action1;
	ACTION2 action2;
};


#endif /* COMPOSITEACTION_H_ */
