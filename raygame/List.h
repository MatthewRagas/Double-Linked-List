#pragma once
#include "Node.h"

template<typename T>
class List
{
protected:
	int mCount;
	Node<T>* first;
	Node<T>* last;

public:
	void initializeList();
	bool isEmptyList();
	int Length();
	T front();
	T back();
	virtual bool search(const T&) = 0;
	virtual void insertFirst(const T&) = 0;
	virtual void insertLast(const T&) = 0;
	virtual void deleteNode(const T&) = 0;
	iterator<T> begin();
	iterator<T> end();
	List();
	List(List<T>&);
	~List();

private:
	void copyList(List<T>&);
};

template<typename T>
void List<T>::initializeList()
{
	mCoutn = 0;
	first = last;
	last = nullptr;
}