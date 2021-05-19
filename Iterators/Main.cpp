#include <iostream>
#include <list>
#include <algorithm>

template<typename T, size_t Size>
class array
{
public:
	struct iterator
	{
		iterator(T* ptr) : _ptr{ ptr } {}

		
		iterator& operator ++ () { _ptr++; return *this; } //prefix
		iterator operator ++ (int)
		{
			iterator temp = *this;
			_ptr++;
			return temp;
		}//post fix

		T& operator * () const { return *_ptr; }
		T* operator -> () { return _ptr; }

		friend bool operator == (const iterator& a, const iterator& b) { return a._ptr == b._ptr; }
		friend bool operator != (const iterator& a, const iterator& b) { return a._ptr != b._ptr; }



		T * _ptr{};
	};
	

public:
	T& operator [] (size_t position) { return _values[position]; }

	iterator begin() { return iterator{ _values }; } //this returns the pointer to the first item in the array
	iterator end() { return iterator{ &_values[Size] }; }

private:
	T _values[Size];
};


int main()
{
	array<int, 5> numbers;
	numbers[0] = 9;
	numbers[1] = 15;
	numbers[2] = 97;
	numbers[3] = 54;
	numbers[4] = 2;
	auto iter = numbers.begin();
	iter++;
	//std::cout << *iter << std::endl;
	

	for (auto iter = numbers.begin(); iter != numbers.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}

	std::list<float> pay{ 4.5f, 6.23f, 10.0f };
	for (auto iter = pay.begin(); iter != pay.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}

	auto it = std::find(numbers.begin(), numbers.end(), 97);
	if (it != numbers.end())
	{
		std::cout << *it << std::endl;
	}
	
}