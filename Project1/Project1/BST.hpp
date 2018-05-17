#pragma once
#pragma once
#include "TreeNode.hpp"

const int EMPTY_NODE = -1;
class BST
{
public:
	BST();
	~BST();

	bool searchValue(int, TreeNode*);
	void addValue(int);

private:
	TreeNode* mRoot;
	void closedAddValue(int, TreeNode*);
	bool closedSearchValue(int);
};

