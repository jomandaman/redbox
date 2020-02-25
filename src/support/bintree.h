// ---------------------------- bintree.h -------------------------------------
// Rossini Higgins, CSS 502A
// Created Date: January 19, 2020
// Modified Date: January 30, 2020
// ----------------------------------------------------------------------------
// Purpose - BinTree Class design
// Implementation of Binary Tree Operations
// ----------------------------------------------------------------------------
// Specification can be found in: 
// https://canvas.uw.edu/courses/1368243/files/61207178/download?wrap=1
// 
// Assumptions and Limitations:
//  - All functions, with the exception of getHeight, 
//    can only be used for Binary Search Trees
//  - Conversion of container functions (arrayToBST and bstToArray)
//    does not have size checking for arrays
// 
// Please see class member documentation for other Assumptions and Usage
// ----------------------------------------------------------------------------

// ------------------------------- bintree.h -----------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: January 19, 2020
// Modified: January 30, 2020
// ------------------------------------------------------------------------
// Purpose: Header file for the BinTree class.
// ------------------------------------------------------------------------
// Implementation of Binary Tree Operations
// ------------------------------------------------------------------------

#ifndef BINTREE_H
#define BINTREE_H

#include <iostream>
#include "nodedata.h"
using namespace std;

class BinTree {				

    	friend ostream& operator<<(ostream&, const BinTree&);

	public:
		BinTree();					// constructor
		BinTree(const BinTree &);	// copy constructor
		~BinTree();					// destructor, calls makeEmpty	
		bool isEmpty() const;		// true if tree is empty, otherwise false
		void makeEmpty();			// make the tree empty so isEmpty() = true
		BinTree& operator=(const BinTree &);
		bool operator==(const BinTree &) const;
		bool operator!=(const BinTree &) const;
		bool insert(NodeData*);
		bool retrieve(const NodeData &, NodeData* &);
		void displaySideways() const;	// displays the tree sideways
		int getHeight (const NodeData &) const;
		void bstreeToArray(NodeData* []);
		void arrayToBSTree(NodeData* []);
	
	private:
		struct Node {
			// Node constructor with NULL as children's default value
			Node(NodeData*, Node* = NULL, Node* = NULL);
			NodeData* data;				// pointer to data object
			Node* left;					// left subtree pointer
			Node* right;				// right subtree pointer
		};
		Node* root;						// root of the tree
		// utility functions
		// Node traversal for searching NodeData on BST
		bool findNode(const Node*, const NodeData &, const Node* &) const;
		// BST / Subtree equality checker 
		bool equalityChecker(const Node*, const Node*) const;
		// helper for insert()
		bool insertHelper(Node* &, NodeData*);
		// ostream<< inorder traversal
		void inorderHelper(ostream&, const Node*) const;    
		// Node traversal for deep copy
		void copyHelper(const Node*, Node* &);
		// helper for makeEmpty()
		void deleteSubTree(Node* &);
		// helper for getHeight()
		int getHeightHelper(const Node*) const;
		// helper to get last element in array that is not NULL
		int getArrayLastPos(int, int, NodeData* []) const;
		// helper for converting array to BST
		Node* arrayToTreeHelper(int, int, NodeData* []);
		// helper for converting BST to array
		void treeToArrayHelper(Node* &, NodeData* [], int&);
		// helper for displaySideways()
		void sideways(Node*, int) const;
};

#endif