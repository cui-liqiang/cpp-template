#include <iostream>
#include "Action1.h"
#include "Action2.h"
#include "Action3.h"
#include "CompositeAction.h"

int main() {
	GenericCompositeAction<Action1, Action2> action;
	action.exec();
}
