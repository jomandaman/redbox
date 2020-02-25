// ------------------------------- bintree.h -----------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: January 19, 2020
// Modified: February 24, 2020
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

	public:
		BinTree();					// constructor
		BinTree(const BinTree &);	// copy constructor
		~BinTree();					// destructor, calls makeEmpty	
		bool isEmpty() const;		// true if tree is empty, otherwise false
		void makeEmpty();			// make the tree empty so isEmpty() = true
		BinTree& operator=(const BinTree &);
		bool operator==(const BinTree &) const;
		bool operator!=(const BinTree &) const;
		bool insert(Movie*);
		bool retrieve(const Movie &, Movie* &);
	
	private:
		struct Node {
			// Node constructor with NULL as children's default value
			Node(Movie*, Node* = NULL, Node* = NULL);
			Movie* data;				// pointer to data object
			Node* left;					// left subtree pointer
			Node* right;				// right subtree pointer
		};
		Node* root;						// root of the tree
		// utility functions
		// Node traversal for searching Movie on BST
		bool findNode(const Node*, const Movie &, const Node* &) const;
		// BST / Subtree equality checker 
		bool equalityChecker(const Node*, const Node*) const;
		// helper for insert()
		bool insertHelper(Node* &, Movie*);
		// ostream<< inorder traversal
		void inorderHelper(ostream&, const Node*) const;    
		// Node traversal for deep copy
		void copyHelper(const Node*, Node* &);
		// helper for makeEmpty()
		void deleteSubTree(Node* &);
		// helper for getHeight()
		int getHeightHelper(const Node*) const;
		// helper to get last element in array that is not NULL
		int getArrayLastPos(int, int, Movie* []) const;
};

#endif