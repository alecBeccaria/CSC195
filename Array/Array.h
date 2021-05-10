#pragma once
#include <initializer_list>
#include <vector>
namespace ar
{
	template<typename T, size_t Size>
	class array
	{
	public:
		array();
		array(const std::initializer_list<T>& ilist);
		T& operator [] (T position);
		T& at(size_t position);
		const T& at(size_t position) const;

		T& front();
		T& back();

		T* data();

		void fill(T value);
		void swap(array& other);

		bool empty() const;
		size_t size() const;
	

	private:
		static const T m_size = 10;
		T m_elements[m_size]{};
	};

	template<typename T, size_t Size>
	array<T, Size>::array()
	{

	};

	template<typename T, size_t Size>
	array<T, Size>::array::array(const std::initializer_list<T>& ilist)
	{
		size_t i = 0;
		for (auto iter = ilist.begin(); iter != ilist.end(); iter++)
		{
			m_elements[i] = *iter;
			i++;
		}

	}

	template<typename T, size_t Size>
	T& array<T, Size>::array::operator[](T position) 
	{
		return m_elements[position];
	}

	template<typename T, size_t Size>
	T& array<T, Size>::array::at(size_t position)
	{
		return m_elements[position];
	}

	template<typename T, size_t Size>
	const T& array<T, Size>::array::at(size_t position) const
	{
		return m_elements[position];
	}

	template<typename T, size_t Size>
	T& array<T, Size>::array::front()
	{
		return m_elements[0];
	}

	template<typename T, size_t Size>
	T& array<T, Size>::array::back()
	{
		return m_elements[m_size - 1];
	}

	template<typename T, size_t Size>
	T* array<T, Size>::array::data()
	{
		return m_elements;
	}

	template<typename T, size_t Size>
	void array<T, Size>::array::fill(T value)
	{
		for (int i = 0; i < m_size; i++)
		{
			m_elements[i] = value;
		}
	}

	template<typename T, size_t Size>
	void array<T, Size>::array::swap(array& other)
	{
		T temp;

		T temp2;
		for (int i = 0; i < m_size; i++)
		{
			temp = m_elements[i];
			temp2 = other[i];
			m_elements[i] = temp2;
			other[i] = temp;


		}

	}

	template<typename T, size_t Size>
	bool array<T, Size>::array::empty() const
	{
		for (int i = 0; i < m_size; i++)
		{
			if (m_elements[i] == NULL)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

	}

	template<typename T, size_t Size>
	size_t array<T, Size>::array::size() const
	{

		return m_size;
	}

}


