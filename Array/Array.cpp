#include "Array.h"

ar::array::array()
{

}

ar::array::array(const std::initializer_list<int>& ilist)
{
	size_t i = 0;
	for (auto iter = ilist.begin(); iter != ilist.end(); iter++)
	{
		m_elements[i] = *iter;
		i++;
	}

}

int& ar::array::operator[](size_t position) const
{

}

int& ar::array::at(size_t position)
{
	// TODO: insert return statement here
}

const int& ar::array::at(size_t position) const
{
	// TODO: insert return statement here
}

int& ar::array::front()
{
	// TODO: insert return statement here
}

int& ar::array::back()
{
	// TODO: insert return statement here
}

int* ar::array::data()
{
	return nullptr;
}

void ar::array::fill(int value)
{
}

void ar::array::swap(array& other)
{
}

bool ar::array::empty() const
{
	return false;
}

size_t ar::array::size() const
{
	return size_t();
}
