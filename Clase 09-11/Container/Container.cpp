
#include "Container.h"

template <typename T>
Container<T>::Container(const T arg)
{
	elt = arg;
}

template <typename T>
T Container<T>::inc()
{
	return elt+1;
}

Container<char>::Container(const char arg)
{
	elt = arg;
}

char Container<char>::uppercase()
{
	return toupper(elt);
}

template class Container<int>;