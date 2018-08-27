#ifndef HASHNODE_CPP
#define HASHNODE_CPP

#include "HashNode.h"

template <class Key, class Value>
HashNode<Key, Value>::HashNode(const Key& k, const Value& v): key(&k), value(&v){
}

template <class Key, class Value>
HashNode<Key, Value>::~HashNode() {
	delete key;
	delete value;
}
/**
	Returns by reference the key

	@param void
	@return Key
*/
template <class Key, class Value>
const Key& HashNode<Key, Value>::get_key() const{
	return *key;
}
/**
	 Sets the key

	@param Key
	@return The HashNode
*/
template <class Key, class Value>
HashNode<Key, Value>& HashNode<Key, Value>::set_key(const Key& k) {
	this->key = k;
	return *(this);
}

/**
	Returns by reference the Value

	@param void
	@return Value
*/
template <class Key, class Value>
const Value& HashNode<Key, Value>::get_value() const{
	return *value;
}

/**
	Sets the Value

	@param Key
	@return The HashNode
*/
template <class Key, class Value>
HashNode<Key, Value>& HashNode<Key, Value>::set_value(const Value& v) {
	this->value = v;
	return *(this);
}

/**
	Compares the HashNode to another using only keys

	@param Comparison HashNode
	@return Boolean
*/
template <class Key, class Value>
bool HashNode<Key, Value>::operator==(const HashNode<Key, Value>& b) const{
	return this-> get_key() == b.get_key();
}


#endif // !HASHNODE_CPP
