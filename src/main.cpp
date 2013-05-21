#include <iostream>
#include "Action1.h"
#include "Action2.h"
#include "Action3.h"
#include "CompositeAction.h"

int main() {
	GenericCompositeAction<Action1, Action2> action1;
	action1.exec();

	std::cout<<std::endl;

	GenericCompositeAction<Action1, Action2, Action3> action2;
	action2.exec();

	std::cout<<std::endl;

	GenericCompositeAction<Action3> action3;
	action3.exec();
}
