#pragma once
#include "Node.h"

template<typename T>
class Iterator
{
public:
	Iterator();
	Iterator(Node* ptr);
	T operator*();
	Iterator operator++();
	Iterator operator--();
	bool operator==(const Iterator<T>& iter)const;
	bool operator!=(const Iterator<T>& iter)const;
	~Iterator();

private:
	Node* current;
};

//Default constructor
template<typename T>
Iterator<T>::Iterator()
{

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
	return current = current->next;
}

//overloading the subtraction operator "--"
template<typename T>
Iterator<T> Iterator<T>::operator--()
{
	current = current->previous;
}

//overloading the equals operator "=="
template<typename T>
bool Iterator<T>::operator==(const Iterator<T>& iter)const
{
	return current == iter.current;
}

//overloading the not equals operator "!="
template<typename T>
bool Iterator<T>::operator!=(const Iterator<T>& iter)const
{
	return != iter.current;
}