/**********************
	COMP 315L - Analysis and Design of Data Structures and Algorithms Laboratory
	Binary Search Tree
******************/

#include "BSTree.h"

int main()
{
	BSTree<int> BST;
	int i, k;	

	for (i = 1; i < 15; i++)
	{
		k = rand() % 100;
		cout << endl << "Insert: " << k;
		BST.insert(k);
	}
	cout << endl;
	cout << endl << "**** Inorder Traversal ****" << endl;
	BST.printInOrder();
	cout << endl;
		
	cout << endl << "**** Pre-order Traversal ****" << endl;
	BST.printPreOrder();
	cout << endl;

	cout << endl << "**** Post-order Traversal ****" << endl;
	BST.printPostOrder();
	cout << endl;
	
	int sVal;
	cout << endl << "Insert value to be searched: ";
	cin >> sVal;
	if (BST.search(sVal) != 0)
		cout << sVal << " found!" << endl;
	else
		cout << "Not found!" << endl;

	cout << endl << "Delete value: ";
	cin >> sVal;
	if (BST.remove(sVal))
		cout << sVal << " found!" << endl;
	else
		cout << "Not found!" << endl;

	cout << endl << "**** Inorder Traversal ****" << endl;
	BST.printInOrder();
	cout << endl;

	cout << endl << "Goodbye!" << endl;
	return 0;
}

