#include "Rectangle.h"
#include "DataStructures\LinkedList\LinkedList.h"
#include "DataStructures\Node\Node.h"
#include "DataStructures\BinaryTree\BinaryTree.h"
#include "DataStructures\HashTable\HashTable.h"
#include "DataStructures\HashNode\HashNode.h"

int main() {

	HashTable<int, char> *table = new HashTable<int, char>;
	table->insert(1, 'a');
	table->get_value(1);
	system("pause");
	return 0;
}