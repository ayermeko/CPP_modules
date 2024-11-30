/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:17:34 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/30 13:20:09 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : _data(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()), _size(n) {}

template <typename T>
Array<T>::Array(Array<T> const &src) : _data(new T[src._size]), _size(src._size)
{
	for (unsigned int i = 0; i < _size; i++)
		_data[i] = src._data[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &src)
{
	if (this != &src)
	{
		delete[] _data;
		_size = src._size;
		_data = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_data[i] = src.data[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _data;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Array index out of bounds");
	return (_data[index]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Array index out of bounds");
	return (_data[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}