#ifndef HASHTABLE_CPP
#define HASHTABLE_CPP

#include "HashTable.h"

/**
	HashTable constructor

	@param void
	@return void
*/
template <class Key, class Value, class Structure = LinkedList<HashNode<Key, Value>>>
HashTable<Key, Value, Structure>::HashTable() : SIZE(50) {
	table = new Structure[SIZE];
}

/**
	HashTable constructor

	@param int
	@return void
*/
template <class Key, class Value, class Structure = LinkedList<HashNode<Key, Value>>>
HashTable<Key, Value, Structure>::HashTable(int s) : SIZE(s) {
	table = new Structure[SIZE];
}

/**
	HashTable destructor

	@param void
	@return void
*/
template <class Key, class Value, class Structure = LinkedList<HashNode<Key, Value>>>
HashTable<Key, Value, Structure>::~HashTable() {
	delete[] table;
}

/**
	Inserts the value and the key into the table

	@param Key, Value
	@return The HashTable
*/
template <class Key, class Value, class Structure = LinkedList<HashNode<Key, Value>>>
HashTable<Key, Value, Structure>& HashTable<Key, Value, Structure>::insert(const Key& k, const Value& v) {
	table[hash(k)].insert(*(new HashNode<Key, Value>(k, v)));
	return *(this);
}

template <class Key, class Value, class Structure = LinkedList<HashNode<Key, Value>>>
Value& HashTable<Key, Value, Structure>::get_value(const Key& k) {
	HashNode<Key, Value> n(k, *(new Value));
	table[hash(k)].getNode(n);
	char c = 'a';
	return c;
}

//-----------------------------------------
//			Hash Functions
//----------------------------------------

/*
	This library contains basic hashing functions for basic data types
	and strings. If you want to use one of your custom classes as a "Key",
	you willneed to create the hash function of that class to return an Integer
*/

/**
	Hashes the key if the Key is an Integer

	@param Key
	@return Integer
*/
template <class Key, class Value, class Structure = LinkedList<HashNode<Key, Value>>>
int HashTable<Key, Value, Structure>::hash_number(const Key& k) {
	return (hash(k) % SIZE);
}

//----------------------------------------------
//		Hashing Functions for Basic Datatypes
//----------------------------------------------

/**
	Hashes the integer

	@param int
	@return int
*/
template <class Key, class Value, class Structure = LinkedList<HashNode<Key, Value>>>
int HashTable<Key, Value, Structure>::hash(const int k) {
	return k;
}

/**
	Hashes the char

	@param char
	@return int
*/
template <class Key, class Value, class Structure = LinkedList<HashNode<Key, Value>>>
int HashTable<Key, Value, Structure>::hash(const char k) {
	int ascii_value = k;
	return ascii_value;
}

/**
	Hashes the float

	@param float
	@return int
*/
template <class Key, class Value, class Structure = LinkedList<HashNode<Key, Value>>>
int HashTable<Key, Value, Structure>::hash(const float k) {
	int rounded = k;
	return rounded;
}

/**
	Hashes the double

	@param double
	@return int
*/
template <class Key, class Value, class Structure = LinkedList<HashNode<Key, Value>>>
int HashTable<Key, Value, Structure>::hash(const double k) {
	int rounded = k;
	return rounded;
}

/**
	Hashes the string

	@param string
	@return int
*/
template <class Key, class Value, class Structure = LinkedList<HashNode<Key, Value>>>
int HashTable<Key, Value, Structure>::hash(const std::string k) {
	int sum = 0;
	for (int i = 0; i < k.length(); i++)
		sum += k[i];
	return sum;
}


#endif // !HASHTABLE_CPP
