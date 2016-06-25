/*
5:48 2016-06-25 Make by Bllight
*/
//추가 : 깊이 메모리제거

#pragma once

#include <iostream>

using namespace std;

namespace Bllight
{
	template <typename T>
	class TNode{
	private:
		int Parentnumber;//parent에서 몇번째 인지
		int NumberChild;

	protected:
		TNode* Parents;//nullptr이면 깊이 =1
		TNode* Child[100];

		int Depth;
		T Mine;
	#define DPushbackChild
		void PushBackChild(int back);

	public:
	#define Getter
		int GetDepth(){return Depth;}
		T GetMine(){return Mine;}


	#define DSearchObjectNumber
		int SearchObjectNumber(TNode* object);
		/*
		object를 사용하여 Child가 몇번째인지 알 수 있다.
		자식노드가 부모노드에서 몇번째인지 알고 싶을때 사용
		*/
	#define DRemove
		void RemoveChild(int numberChild);
		void RemoveObject(TNode* object);
		/*
		numberChild를 사용하여 object를 제거 가능

		*/
	#define DCreate
		static TNode<T>* Create(T mine);
		static TNode<T>* Create();
		/*

		*/
	#define DTNode
		TNode();
		TNode(T mine);
		/*

		*/
	#define DMakeChild
		void MakeChild(T childT);
		void MakeChild(TNode* childT);
		/*

		*/
	#define DSetParent
		void SetParent(TNode* ParentT);
		/*

		*/
	};
}
