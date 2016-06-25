#include "TreeNode.h"

namespace Bllight{

void TreeNode::SetChild(int num , TNode<int>* tnode){
	Tnode[num]->MakeChild(tnode);
}

void TreeNode::SetChild(int num, int childnum){
	Tnode[num]->MakeChild(Tnode[childnum]);
}

int TreeNode::Checknumbernode(TNode<int>* tnode){
	int tmp=0;
	for(TNode<int>* a: Tnode){
		if(tnode==a) return tmp;
		tmp++;
	}
}

}