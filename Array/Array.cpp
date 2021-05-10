#include "Array.h"

//ar::array::array()
//{
//
//}
//
//ar::array::array(const std::initializer_list<int>& ilist)
//{
//	size_t i = 0;
//	for (auto iter = ilist.begin(); iter != ilist.end(); iter++)
//	{
//		m_elements[i] = *iter;
//		i++;
//	}
//
//}
//
//int& ar::array::operator[](size_t position) 
//{
//	return m_elements[position];
//}
//
//int& ar::array::at(size_t position)
//{
//	return m_elements[position];
//}
//
//const int& ar::array::at(size_t position) const
//{
//	return m_elements[position];
//}
//
//int& ar::array::front()
//{
//	return m_elements[0];
//}
//
//int& ar::array::back()
//{
//	return m_elements[m_size - 1];
//}
//
//int* ar::array::data()
//{
//	return m_elements;
//}
//
//void ar::array::fill(int value)
//{
//	for (int i = 0; i < m_size; i++)
//	{
//		m_elements[i] = value;
//	}
//}
//
//void ar::array::swap(array& other)
//{
//	int temp;
//
//	int temp2;
//	for (int i = 0; i < m_size; i++)
//	{
//		temp = m_elements[i];
//		temp2 = other[i];
//		m_elements[i] = temp2;
//		other[i] = temp;
//		 
//
//	}
//
//}
//
//bool ar::array::empty() const
//{
//	for (int i = 0; i < m_size; i++)
//	{
//		if (m_elements[i] == NULL)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	
//}
//
//size_t ar::array::size() const
//{
//	
//	return m_size;
//}
