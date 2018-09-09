#include "Rectangle.h"
#include "DataStructures\LinkedList\LinkedList.h"
#include "DataStructures\Node\Node.h"
#include "DataStructures\BinaryTree\BinaryTree.h"
#include "DataStructures\HashTable\HashMap.h"
#include "DataStructures\HashNode\HashNode.h"

int main() {

	HashMap<int, char> *table = new HashMap<int, char>;
	table->insert(1, 'a');
	table->get_value(1);
	system("pause");
	return 0;
}