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

template<typename T>
Iterator<T>::Iterator()
{

}

template<typename T>
Iterator<T>::Iterator(Node<T>* ptr)
{
	current = ptr;
}

template<typename T>
T Iterator<T>::operator*()
{
	return current->info;
}

template<typename T>
Iterator<T> Iterator<T>::operator++()
{
	return current = current->next;
}

template<typename T>
Iterator<T> Iterator<T>::operator--()
{
	current = current->previous;
}

template<typename T>
bool Iterator<T>::operator==(const Iterator<T>& iter)const
{
	return current == iter.current;
}

template<typename T>
bool Iterator<T>::operator!=(const Iterator<T>& iter)const
{
	return != iter.current;
}