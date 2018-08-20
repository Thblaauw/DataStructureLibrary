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
Key& HashNode<Key, Value>::get_key() {
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
Value& HashNode<Key, Value>::get_value() {
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


#endif // !HASHNODE_CPP
