
template <typename T, int N>
class ArrayContainer {
private:
	T elts[N];
public:
	T set(const int i, const T val);
	T get(const int i);
};