#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <utility>

// will be of type ints for now, switch to template later

class ListNode {
private:
  int val;
  ListNode *next;

public:
  // 1. Default Constructor
  ListNode();

  // 2. Parameterized Constructor
  ListNode(int val);
};

class LinkedList {

};
