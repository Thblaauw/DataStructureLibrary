#include "Rectangle.h"
#include "DataStructures\LinkedList\LinkedList.h"
#include "DataStructures\Node\Node.h"
#include "DataStructures\BinaryTree\BinaryTree.h"
#include "DataStructures\HashMap\HashMap.h"
#include "DataStructures\HashNode\HashNode.h"

#include <iostream>

using namespace std;

int main() {

	HashMap<int, char> *table = new HashMap<int, char>;
	table->insert(1, 'a');
	cout << table->get_value(1) << endl;
	table->set_value(1, 'b');
	cout << table->get_value(1) << endl;
	system("pause");
	return 0;
}