// DynamicArray.cpp
#include "DynamicArray.h"
#include <algorithm>
#include <iostream>

// 1. Default Constructor:
// Since I want to behave like vector, use nullptr for memory default
DynamicArray::DynamicArray()
  : arr(nullptr)
  , size(0)
  , cap(0)
{
}

// 2. Parameterized Constructor:
DynamicArray::DynamicArray(int initialCapacity)
  : arr(new int[initialCapacity])
  , size(0)
  , cap(initialCapacity)
{
  if (initialCapacity <= 0) throw std::invalid_argument("Capacity must be greater than 0");
}

// 3. Copy Constructor (Deep copy everything from other array)
DynamicArray::DynamicArray(const DynamicArray &other)
  : arr(new int[other.cap])
  , size(other.size)
  , cap(other.cap)
{
  // Now copy each ele individually
  for (int i = 0; i < size; ++i) {
    arr[i] = other.arr[i];
  }
}

// 4. Move Constructor
DynamicArray::DynamicArray(DynamicArray &&other) noexcept
  : arr(other.arr)
  , size(other.size)
  , cap(other.cap)
{
  // then, invalidate the other object
  other.arr = nullptr;
  other.size = 0;
  other.cap = 0;
}

// 5. Destructor
DynamicArray::~DynamicArray() {
  delete[] arr;
}

DynamicArray &DynamicArray::operator=(const DynamicArray &other) {
  // prevent self assignment:
  if (this == &other) return *this;

  // free the existing memory:
  delete[] arr;

  // copy data from other object:
  arr = new int[other.cap];
  size = other.size;
  cap = other.cap;

  for (int i = 0; i < size; ++i) {
    arr[i] = other.arr[i];
  }

  return *this; // return ref to curr obj
}

DynamicArray &DynamicArray::operator=(DynamicArray &&other) noexcept {
  // prevent self assignment:
  if (this == &other) return *this;

  // have to free memory, must delete before stealing:
  delete[] arr;

  // steal data from other obj
  arr = other.arr;
  size = other.size;
  cap = other.cap;

  // invalidate other data
  other.arr = nullptr;
  other.size = 0;
  other.cap = 0;

  return *this;
}
