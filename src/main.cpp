#include <iostream>
#include "Action1.h"
#include "Action2.h"
#include "Action3.h"
#include "CompositeAction.h"

int main() {
	Action1 action1;
	Action2 action2;
	Action3 action3;
	CompositeAction composite;
	composite.addAction(&action1);
	composite.addAction(&action2);
	composite.addAction(&action3);

	composite.exec();
}
