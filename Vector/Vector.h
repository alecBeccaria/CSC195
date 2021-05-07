#pragma once
#include <initializer_list>
#include <limits>

namespace nc
{
    template<typename T>
    class vector
    {
    public:
        vector() {}
        vector(size_t capacity);
        vector(const std::initializer_list<T>& ilist);
        vector(const vector& other);
        ~vector();

        //vector& operator = (const vector& other);

        T& operator [] (size_t position) { return _elements[position];  }
        const T& operator [] (size_t position) const { return _elements[position]; }

        T& at(size_t position) { return _elements[position]; }
        const T& at(size_t position) const { return _elements[position]; }

        T& front() { return _elements[0]; }
        T& back() { return _elements[_size - 1]; }

        T* data() { return _elements; }
    
        void push_back(const T& value);
        void pop_back();

        void reserve(size_t capacity);
        void resize(size_t new_size, const T& value);
        void clear();

        void swap(vector& other) {}

        bool empty() const { return (_size == 0); }
        size_t size() const { return _size; }
        size_t capacity() const { return _capacity; }
        size_t max_size() const { return std::numeric_limits<size_t>::max() / sizeof(T); }

    private:
        T* _elements{ nullptr };
        size_t _size{0};
        size_t _capacity{0};
    };

    template<typename T>
    vector<T>::vector(size_t capacity)
    {
        _elements = new T[capacity];
    }
    template<typename T>
    vector<T>::vector(const std::initializer_list<T>& ilist)
    {

    }
    template<typename T>
    vector<T>::vector(const vector& other)
    {

    }
    template<typename T>
    vector<T>::~vector()
    {
        if (_elements)
        {
            delete[] _elements;
        }
        
    }

    template<typename T>
    void vector<T>::push_back(const T& value)
    {
        if (_size == _capacity)
        {
            reserve(_capacity + 5);
        }
        _elements[_size] = value;
        _size++;
    }
    template<typename T>
    void vector<T>::pop_back()
    {
        if (_size > 0)
        {
            _size--;
        }
        
    }

    template<typename T>
    void vector<T>::reserve(size_t capacity)
    {
        if (capacity <= _capacity) return;

        T* new_elements = new T[capacity];
        for (size_t i = 0; i < _size; i++)
        {
            new_elements[i] = _elements[i];
        }
        if(_elements) delete[] _elements;

        _elements = new_elements;
        _capacity = capacity;
    }
    template<typename T>
    void vector<T>::resize(size_t new_size, const T& value)
    {

    }
    template<typename T>
    void vector<T>::clear()
    {

    }

}

