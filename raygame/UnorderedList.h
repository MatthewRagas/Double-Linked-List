#pragma once
#include "List.h"

template<typename T>
class UnorderedList : List<T>
{
public:
	bool search(const T& iter)const override;
	void insertFirst(const T& iter) override;
	void insertLast(const T& iter)override;
	void deleteNode(const T& iter)override;
	UnorderedList();
	~UnorderedList();
};



template<typename T>
inline bool UnorderedList<T>::search(const T & iter) const
{
	return false;
}

template<typename T>
inline void UnorderedList<T>::insertFirst(const T & iter)
{
}

template<typename T>
inline void UnorderedList<T>::insertLast(const T & iter)
{
}

template<typename T>
inline void UnorderedList<T>::deleteNode(const T & iter)
{
}
