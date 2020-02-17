#pragma once
#include "Node.h"
#include"Iterator.h"

template<typename T>
class List
{
protected:

	//length of list
	int mCount;
	Node<T>* first;
	Node<T>* last;

public:
	void initializeList();
	bool isEmptyList();
	int Length();
	T front();
	T back();
	virtual bool search(const T& iter) = 0;
	virtual void insertFirst(const T& iter) = 0;
	virtual void insertLast(const T& iter) = 0;
	virtual void deleteNode(const T& iter) = 0;
	Iterator<T> begin();
	Iterator<T> end();
	List();
	List(List<T>& list);
	~List();

private:
	void copyList(List<T>&);
};

//Initializes the list
template<typename T>
void List<T>::initializeList()
{
	mCoutn = 0;
	first = last;
	last = nullptr;
}

//returns if the list is empty
template<typename T>
bool List<T>::isEmptyList()
{
	if (mCount == 0)
		return true;
	else
		return false;
}

//returns the length of the list
template<typename T>
int List<T>::Length()
{
	return mCount;
}

//
template<typename T>
T List<T>::front()
{
	return first;
}

//
template<typename T>
T List<T>::back()
{
	return last;
}

//
template<typename T>
Iterator<T> List<T>::begin()
{
	Iterator<T> iter = new Iterator<T>(first);
	return iter;
}

//
template<typename T>
Iterator<T> List<T>::end()
{
	Iterator<T> iter = new Iterator(last);
	return iter;
}

//default constructor
template<typename T>
List<T>::List()
{

}

//custom constructor
template<typename T>
List<T>::List(List<T>& list)
{

}

//Deconstructor
template<typename T>
List<T>::~List()
{

}

//copy the list
template<typename T>
void List<T>::copyList(List<T>& list)
{
	Node<T>* iter = &(*this->first);
	Node<T>* iter2 = &(*other.first);
}