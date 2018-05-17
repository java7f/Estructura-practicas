#pragma once
struct TreeNode
{
	//Constructors
	TreeNode();
	TreeNode(int, TreeNode*);

	//Attributes
	int mValue;
	TreeNode* mLeft;
	TreeNode* mRight;
	TreeNode* mFather;
};
