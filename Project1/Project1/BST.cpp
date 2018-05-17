#include "BST.hpp"

BST::BST()
{
	mRoot = new TreeNode();
}

BST::~BST()
{
}

bool BST::searchValue(int pSearchingValue, TreeNode* pCurrentNode)
{
	if (pCurrentNode->mValue == pSearchingValue)
	{
		return true;
	}

	if (pSearchingValue < pCurrentNode->mValue)
	{
		if (pCurrentNode->mLeft == nullptr)
		{
			return false;
		}
		else
		{
			closedSearchValue()
		}
	}
}

void BST::addValue(int pNewValue)
{
	closedAddValue(pNewValue, mRoot);
}

void BST::closedAddValue(int pNewValue, TreeNode *pCurrentNode)
{
	if (pCurrentNode->mValue == EMPTY_NODE)
	{
		pCurrentNode->mValue = pNewValue;
	}

	if (pNewValue < pCurrentNode->mValue)
	{
		if (pCurrentNode->mLeft == nullptr)
		{
			pCurrentNode->mLeft = new TreeNode(pNewValue, pCurrentNode);
		}
		else
		{
			closedAddValue(pNewValue, pCurrentNode->mLeft);
		}
	}

	if (pNewValue > pCurrentNode->mValue)
	{
		if (pCurrentNode->mRight == nullptr)
		{
			pCurrentNode->mRight = new TreeNode(pNewValue, pCurrentNode);
		}
		else
		{
			closedAddValue(pNewValue, pCurrentNode->mRight);
		}
	}
}

bool BST::closedSearchValue(int)
{
	
}
