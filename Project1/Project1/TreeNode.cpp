#include "TreeNode.hpp"

TreeNode::TreeNode()
{
	mValue = -1;
	mLeft = nullptr;
	mRight = nullptr;
	mFather = nullptr;
}

TreeNode::TreeNode(int pNewValue, TreeNode *pFather)
{
	mValue = pNewValue;
	mLeft = nullptr;
	mRight = nullptr;
	mFather = pFather;
}
