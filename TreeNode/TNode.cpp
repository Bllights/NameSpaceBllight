#include "TNode.h"

namespace Bllight{

#ifdef DPushbackChild
	template<typename T>
	void TNode<T>::PushBackChild(int back){
		for(int i=back;i<NumberChild;i++){
			Child[back]=Child[back+1];
		}
	}
#endif

#ifdef DSearchObjectNumber
	template<typename T>
	int TNode<T>::SearchObjectNumber(Tnode<T>* object){
		int tmp=0;
		for(TNode<int>* a: Child){
			if(object==a) return tmp;
			tmp++;
		}
		return -1;
	}
#endif

#ifdef DRemove
	template<typename T>
	void TNode<T>::RemoveChild(int numberChild){
		Child[numberChild]=nullptr;
		PushBackChild(numberChild);
		// numberchild--;
	}

	template<typename T>
	void TNode<T>::RemoveObject(TNode* object){
		int numberChild=SearchObjectNumber(object);
		Child[numberChild]=nullptr;
		PushBackChild(numberChild);
		// numberchild--;
	}
#endif

#ifdef DCreate
	template <typename T>
	inline TNode<T>* TNode<T>::Create(){
		return new TNode<T>();
	}

	template <typename T>
	inline TNode<T>* TNode<T>::Create(T mine){
		return new TNode<T>(mine);
	}
#endif

#ifdef DMakeChild
	template <typename T>
	void TNode<T>::MakeChild(T childT){
		TNode<T>* t=new TNode<T>(childT);
		t->SetParent(this);
		Child[NumberChild++]=t;
	}

	template <typename T>
	void TNode<T>::MakeChild(TNode<T>* childT){
		childT->SetParent(this);
		Child[NumberChild++]=childT;
	}
#endif

#ifdef DTNode
	template <typename T>
	TNode<T>::TNode(){
		Parentnumber=0;
		Parents=nullptr;
		Depth=1;
		Mine=0;//int
		NumberChild=0;
	}

	template <typename T>TNode<T>::TNode(T mine){
		Parentnumber=0;
		Parents=nullptr;
		Depth=1;
		Mine=mine;
		NumberChild=0;
	}
#endif

#ifdef DSetParent
	template <typename T>
	void TNode<T>::SetParent(TNode<T>* ParentT){
		this->Parents=ParentT;
		this->Depth=ParetnT->Depth+1;
	}
#endif


}
