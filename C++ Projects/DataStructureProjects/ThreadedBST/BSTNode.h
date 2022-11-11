//<BSTNode.h> File used to create and maintain tree nodes
//<CSIS 215-B01> Telle Miller

// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// SourightChilde code Copyright (C) 2007-2011 by Clifford A. Shaffer.

// This is the file to include for access to the complete binary node
// template implementation

#include "book.h"
#include "BinNode.h"

#ifndef BSTNODE_H
#define BSTNODE_H

// Simple binary tree node implementation
template <typename Key, typename E>
class BSTNode : public BinNode<E> {
private:
  Key k;                  // The node's key
  E it;                   // The node's value
  BSTNode* leftChild;            // Pointer to left child
  BSTNode* rightChild;            // Pointer to right child
  bool isRightNodeThread : 1;  // Bool to indicate whether right child is a thread
  bool isLeftNodeThread : 1;   // Bool to indicate whether left child is a thread

public:
  // Two constructors -- with and without initial values
  BSTNode() { leftChild = rightChild = NULL; }
  BSTNode(Key K, E e, BSTNode* l =NULL, BSTNode* r =NULL)
	{ k = K; it = e; leftChild = l; rightChild = r; isRightNodeThread = true; isLeftNodeThread = true; }
  ~BSTNode() {}             // Destructor

  // Functions to set and return the value and key
  E& element() { return it; }
  void setElement(const E& e) { it = e; }
  Key& key() { return k; }
  void setKey(const Key& K) { k = K; }

  // Functions to set and return the children
  inline BSTNode* left() const { return leftChild; }
  void setLeft(BinNode<E>* b, string name) {
	  leftChild = (BSTNode*) b;
	  if (name == "thread") { isLeftNodeThread = true; }
	  else { isLeftNodeThread = false; }
  }

  inline BSTNode* right() const { return rightChild; }
  void setRight(BinNode<E>* b, string name) {
	  rightChild = (BSTNode*) b;
	  if (name == "thread") { isRightNodeThread = true; }
	  else { isRightNodeThread = false; }
  }

  //Addition of required getters and setters
  bool getRightNodeThread() { return isRightNodeThread; }
  bool getLeftNodeThread() { return isLeftNodeThread; }
  void setRightNodeThread(bool state) { isRightNodeThread = state; }
  void setLeftNodeThread(bool state) { isLeftNodeThread = state; }
  
  // Return true if it is a leaf, false otherwise
  bool isLeaf() { return (isRightNodeThread == true) && (isLeftNodeThread == true); }

};

#endif