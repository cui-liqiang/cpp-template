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

#endif /* COMPOSITEACTION_H_ */
