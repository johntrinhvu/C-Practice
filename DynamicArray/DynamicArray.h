// DynamicArray.h
#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <iostream>
#include <stdexcept>
#include <utility>

class DynamicArray {
private:
  int *arr; // ptr for dynamic allocated array
  int size; // # elements currently stored
  int cap; // max # elements before resize

public:
  // 1. Default Constructor (Empty)
  DynamicArray();

  // 2. Parameterized Constructor (Array with given capacity)
  DynamicArray(int initialCapacity);

  // 3. Copy Constructor (Deep copy of another DynamicArray)
  DynamicArray(const DynamicArray &other);

  // 4. Move Constructor (Transfer ownership from another DynamicArray)
  DynamicArray(DynamicArray &&other) noexcept;

  // 5. Destructor (Free allocated memory)
  ~DynamicArray();

  // Assignment Operators, copy and Move
  DynamicArray &operator=(const DynamicArray &other);
  DynamicArray &operator=(DynamicArray &&other) noexcept;

  int &operator[](int i);
  const int &operator[](int i) const;

  void push_back(int n);
  int pop_back();
  void resize();
  int getSize() const;
  int getCapacity() const;
  
  void print() const;
};

#endif // DYNAMICARRAY_H

