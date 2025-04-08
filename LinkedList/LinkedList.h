// LinkedList.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <stdexcept>
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

  // 3. Paramterized Constructor w/ next pointer
  ListNode(int val, ListNode *next);


};

class LinkedList {
private:
  ListNode *head;
  ListNode *tail;

public:
  // 1. Default Constructor
  LinkedList();

};
