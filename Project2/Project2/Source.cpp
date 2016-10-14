#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Bucket
{
public:
	Bucket(int);
	const int m_size;
	T items[m_size];
	bool Add(T);
};

template<typename T>
bool Bucket<T>::Add(T)
{
	items[0] = v;
	return true;
}


class Item
{
public:
bool operator == (const Item& theItem) const;
Item(string name);
string m_name;
};
template <typename T>
bool Bucket<T> ::Add(T a)
{
	return true;
}

int main()
{
	Bucket <int> a = Bucket <int>(20);
	int number = 5;

	Bucket<int>a;
	a.Add(number);
	return 1;
}