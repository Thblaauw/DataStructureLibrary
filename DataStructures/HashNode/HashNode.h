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
	const Key& get_key() const;
	HashNode& set_key(const Key&);

	//---------------------------------
	//		Value - Getters and Setters
	//---------------------------------
	const Value& get_value() const;
	HashNode& set_value(const Value&);
	
	//---------------------------------
	//		Operators
	//---------------------------------
	bool operator==(const HashNode&)const;
};

#include "HashNode.cpp"

#endif // !HASHNODE_H
