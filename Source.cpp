#include "Rectangle.h"
#include "DataStructures\LinkedList\LinkedList.h"
#include "DataStructures\Node\Node.h"
#include "DataStructures\BinaryTree\BinaryTree.h"

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

	Node<Rectangle> *n = new Node<Rectangle>(*(new Rectangle(2.2, 3.0)));
	n->getData().setLength(2.5);

	LinkedList<int> *list = (new LinkedList<int>);
	list->insert(1);
	list->insert(2);
	list->remove(2);

	int a = 2, b = 1, c = 3;
	BinaryTree<int> *btree = new BinaryTree<int>;
	btree->insert(a);
	btree->insert(3);

	system("pause");
	return 0;
}