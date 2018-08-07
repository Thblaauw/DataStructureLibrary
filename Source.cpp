#include "Rectangle.h"
#include "Node.h"
#include "LinkedList.h"
#include "BinaryTree.h"
#include "HashTable.h"

int main() {

	/*LinkedList<Rectangle> *list = (new LinkedList<Rectangle>);
	Rectangle r(1.0, 2.5);
	list->add( r );
	Rectangle r2(1.4, 2.333);
	list->add(r2);
	list->printList();
	Rectangle r3(1.4, 10);
	list->pop();
	list->printList();*/

	LinkedList<Rectangle> *list = (new LinkedList<Rectangle>);

	int a = 2, b = 1, c = 3;
	BinaryTree<int> *btree = new BinaryTree<int>;
	btree->insert(a);
	btree->insert(3);

	system("pause");
	return 0;
}