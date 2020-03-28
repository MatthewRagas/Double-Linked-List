#pragma once
#include "Node.h"

template<typename T>
class Iterator
{
public:
	Iterator();
	Iterator(Node<T>* ptr);
	T operator*();
	Iterator<T> operator++();
	Iterator<T> operator--();
	bool operator ==(const Iterator<T>& iter)const;
	bool operator !=(const Iterator<T>& iter)const;
	~Iterator() {}

private:
	Node<T>* current;
};

//Default constructor
template<typename T>
Iterator<T>::Iterator()
{
	current = nullptr;
}

//custom constructor
template<typename T>
Iterator<T>::Iterator(Node<T>* ptr)
{
	current = ptr;
}

//overloading the '*' operator
template<typename T>
T Iterator<T>::operator*()
{
	return current->info;
}

//overloading the addition operator "++"
template<typename T>
Iterator<T> Iterator<T>::operator++()
{
	if (current->next != nullptr)
	{
		current = current->next;
		return *this;
	}		
	return nullptr;
}

//overloading the subtraction operator "--"
template<typename T>
Iterator<T> Iterator<T>::operator--()
{
	if (current->previous != nullptr) {
		current = current->previous;
		return *this;
	}
	return nullptr;
}

//overloading the equals operator "=="
template<typename T>
bool Iterator<T>::operator==(const Iterator<T>& iter)const
{
	if (currentNode != nullptr && currentIterator.currentNode != nullptr 
		&& &currentNode->info == &currentIterator.currentNode->info)
	{
		return true;
	}
	else return false;
}

//overloading the not equals operator "!="
template<typename T>
bool Iterator<T>::operator!=(const Iterator<T>& iter)const
{
	if (currentNode != nullptr && currentIterator.currentNode != nullptr 
		&& &currentNode->info != &currentIterator.currentNode->info) {
		return true;
	}
	else return false;
}