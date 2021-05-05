#pragma once
#include <algorithm>

template<typename T>

class Point
{
public:
	Point() : x{ 0 }, y{ 0 } {}
	Point(T x, T y) : x{ x }, y{ y } {}

	bool operator > (const Point& point) const { return x > point.x&& y > point.y; }

	void set(T x, T y);// { this->x = x; this->y = y; }
private:
	T x, y;

};

template<typename T>
void Point<T>::set(T x, T y)
{
	this->x = x; this->y = y;
}

template<typename T, size_t Size>
class array
{
public:
	T& operator [] (int position) { return m_elements[position]; }
	const T& operator [] (int position) const { return m_elements[position]; }

	void swap(array& other);


private:
	T m_elements[Size];
};

template<typename T, size_t Size>
void array<T, Size>::swap(array& other)
{
	for (size_t i = 0; i < Size; i++)
	{
		T temp = m_elements[i];

	}
}
