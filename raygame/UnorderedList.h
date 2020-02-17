#pragma once
#include "List.h"

template<typename T>
class UnorderedList : List<T>
{
public:
	bool search(const T&)const override;
	void insertFirst(const T&) override;
	void insertLast(const T&)override;
	void deleteNode(const T&)override;
	UnorderedList();
	~UnorderedList();
};

