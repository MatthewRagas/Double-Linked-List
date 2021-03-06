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
	~List();

private:
	void copyList(List<T>&);
};

//Initializes the list
template<typename T>
void List<T>::initializeList()
{
	mCoutn = 0;
	first = nullptr;
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

//returns the first node of the list
template<typename T>
T List<T>::front()
{
	return first ->info;
}

//returns the last node of the list
template<typename T>
T List<T>::back()
{
	return last->info;
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
	initializeList();
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
	this->first = &(*list->first);
	this->last = &(*list->last);
	mCount = list.Length();
	delete list;
}