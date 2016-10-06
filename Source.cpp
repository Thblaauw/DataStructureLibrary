#include "Rectangle.h"
#include "Node.h"
#include "LinkedList.h"

int main() {

	LinkedList<Rectangle> *list = (new LinkedList<Rectangle>);
	Rectangle r(1.0, 2.5);
	list->add( r );
	Rectangle r2(1.4, 2.333);
	list->add(r2);
	list->printList();
	Rectangle r3(1.4, 10);
	list->pop();
	list->printList();

	system("pause");
	return 0;
}