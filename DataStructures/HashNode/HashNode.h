#ifndef HASHNODE_H
#define HASHNODE_H

template <class Key, class Value>
class HashNode {

private:
	const Key* key;
	const Value* value;

public:
	//---------------------------------
	//		Constructors and Destructors
	//---------------------------------
	HashNode(const Key&, const Value&);
	~HashNode();

	//---------------------------------
	//		Key - Getters and Setters
	//---------------------------------
	Key& get_key();
	HashNode& set_key(const Key&);

	//---------------------------------
	//		Value - Getters and Setters
	//---------------------------------
	Value& get_value();
	HashNode& set_value(const Value&);
	
};

#include "HashNode.cpp"

#endif // !HASHNODE_H
