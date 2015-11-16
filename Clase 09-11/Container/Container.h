
#include <cctype>

template <typename T>
class Container {
private:
	T elt;
public:
	Container(const T arg);
	T inc();
};

template <>
class Container <char> {
private:
	char elt;
public:
	Container(const char arg);
	char uppercase();
};