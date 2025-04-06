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

// 3. Copy Constructor
DynamicArray::DynamicArray(const DynamicArray &other)
