#ifndef HASHNODE_CPP
#define HASHNODE_CPP

#include "HashNode.h"

template <class Key, class Value>
HashNode<Key, Value>::HashNode(const Key& k, const Value& v): key(&k), value(&v){

}
#endif // !HASHNODE_CPP
