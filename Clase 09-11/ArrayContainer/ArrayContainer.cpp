
#include "ArrayContainer.h"

template <typename T, int N>
T ArrayContainer<T, N>::set(const int i, const T val)
{
	elts[i] = val;
}

template <typename T, int N>
T ArrayContainer<T, N>::get(const int i)
{
	return elts[i];
}

template class ArrayContainer<int, int>;