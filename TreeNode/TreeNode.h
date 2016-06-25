#pragma once

/*
5:48 2016-06-25 Make by Bllight
*/

#include "TNode.h"

namespace Bllight{

	class TreeNode{
	public:
		TNode<int>* Tnode[6];

		void SetChild(int num , TNode<int>* tnode);
		void SetChild(int num, int childnum);

		int Checknumbernode(TNode<int>* tnode);
	};

}
