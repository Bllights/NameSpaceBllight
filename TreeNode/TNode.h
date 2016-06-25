/*
오후 5:48 2016-06-25 Make by Bllight 
*/

#pragma once

#include <iostream>

using namespace std;

namespace Bllight
{
	template <typename T>
	class TNode{
	private:
		int Parentnumber;//parent에서 자신이 몇번인지
		int NumberChild;

	protected:
		TNode* Parents;//nullptr이면 상위계층
		TNode* Child[100];

		T Mine;
	#define DPushbackChild
		void PushBackChild(int back);

	public:
	#define DSearchObjectNumber
		int SearchObjectNumber(TNode* object);
		/*
		object를 이용해서 Child에 있는 번호를 찾아줍니다.
		자식노드에서 부모노드한테 번호를 받을 때 사용
		*/
	#define DRemove
		void RemoveChild(int numberChild);
		void RemoveObject(TNode* object);
		/*
		numberChild 번호와 object를 이용해 자식노드를 없앱니다.
		부모클래스에서 필요없는 자식노드를 버릴때 사용(가지치기)
		*/
	#define DCreate
		static TNode<T>* Create(T mine);
		static TNode<T>* Create();
		/*
		한번에 만들때 사용
		*/
	#define DTNode
		TNode();
		TNode(T mine);
		/*
		생성자
		*/
	#define DMakeChild
		void MakeChild(T childT);
		void MakeChild(TNode* childT);
		/*
		자식을 만들때 사용
		*/
	#define DSetParent
		void SetParent(TNode* ParentT);
		/*
		부모를 지정할때 사용
		*/
	};
}
