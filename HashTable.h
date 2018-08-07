#ifndef HASHTABLE_H
#define HASHTABLE_H

template <class Key, class Value, class Structure = int>
class HashTable {
protected:
	const int SIZE;
	Structure[] * table;

public:
	HashTable();
	HashTable(int);
	~HashTable();
};

#endif // !HASHTABLE_H

