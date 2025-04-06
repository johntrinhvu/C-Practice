#include "DynamicArray.h"
#include <iostream>
#include <utility>

using namespace std;

int main() {
  // 1. Test default constructor:
  cout << "Testing Default Constructor: " << endl;
  DynamicArray arr1;
  cout << "Array 1: ";
  arr1.print();
  cout << "Size: " << arr1.getSize() << ", Capacity: " << arr1.getCapacity() << endl;
  cout << endl;

  // 2. Test Parameterized Constructor
  cout << "Testing Parameterized Constructor: " << endl;
  DynamicArray arr2(5);
  cout << "Array 2: ";
  arr2.print();
  cout << "Size: " << arr2.getSize() << ", Capacity: " << arr2.getCapacity() << endl;
  cout << endl;

  // 3. Test push_back and resize
  cout << "Testing push_back and resize" << endl;
  for (int i = 0; i < 20; ++i) {
    arr2.push_back(i + 1);
  }
  cout << "Array 2 after pushing ele and resizing: ";
  arr2.print();
  cout << "Size: " << arr2.getSize() << ", Capacity: " << arr2.getCapacity() << endl;
  cout << endl;

  // 4. Test pop_back()
  cout << "Testing pop_back(): " << endl;
  cout << "Array 2 before pop_back 2 elements: ";
  arr2.print();
  cout << endl;

  arr2.pop_back();
  arr2.pop_back();

  cout << "Array 2 after pop_back: ";
  arr2.print();
  cout << "Size: " << arr2.getSize() << ", Capacity: " << arr2.getCapacity() << endl;
  cout << endl;

  // 5. Test operator[]
  cout << "Testing operator[]: " << endl;
  cout << "Element at index 2: " << arr2[2] << endl;
  arr2[2] = 99;
  arr2.print();
  cout << endl;

  // 6. Test Copy Constructor
  cout << "Testing Copy Constructor: " << endl;
  DynamicArray arr3 = arr2; // copy arr2 into arr3
  arr3.print();
  cout << "Size: " << arr3.getSize() << ", Capacity: " << arr3.getCapacity() << endl;
  cout << endl;

  // 7. Test Copy Assignment Operator
  cout << "Testing Copy Assignment Operator: " << endl;
  DynamicArray arr4(2);
  arr4 = arr3;
  arr4.print();
  cout << "Size: " << arr4.getSize() << ", Capacity: " << arr4.getCapacity() << endl;
  cout << endl;

  // 8. Test Move Constructor
  cout << "Testing Move Constructor: " << endl;
  cout << "Array 5: ";
  DynamicArray arr5 = std::move(arr4);
  arr5.print();
  cout << "Size: " << arr5.getSize() << ", Capacity: " << arr5.getCapacity() << endl;
  cout << endl;
  cout << "Array 4: ";
  arr4.print();
  cout << "Size: " << arr4.getSize() << ", Capacity: " << arr4.getCapacity() << endl;
  cout << endl;

  // 9. Test Move Assignment Operator

  return 0;
}
