/*
���� 5:48 2016-06-25 Make by Bllight 
*/

#pragma once

#include <iostream>

using namespace std;

namespace Bllight
{
	template <typename T>
	class TNode{
	private:
		int Parentnumber;//parent���� �ڽ��� �������
		int NumberChild;

	protected:
		TNode* Parents;//nullptr�̸� ��������
		TNode* Child[100];

		T Mine;
	#define DPushbackChild
		void PushBackChild(int back);

	public:
	#define DSearchObjectNumber
		int SearchObjectNumber(TNode* object);
		/*
		object�� �̿��ؼ� Child�� �ִ� ��ȣ�� ã���ݴϴ�.
		�ڽĳ�忡�� �θ������� ��ȣ�� ���� �� ���
		*/
	#define DRemove
		void RemoveChild(int numberChild);
		void RemoveObject(TNode* object);
		/*
		numberChild ��ȣ�� object�� �̿��� �ڽĳ�带 ���۴ϴ�.
		�θ�Ŭ�������� �ʿ���� �ڽĳ�带 ������ ���(����ġ��)
		*/
	#define DCreate
		static TNode<T>* Create(T mine);
		static TNode<T>* Create();
		/*
		�ѹ��� ���鶧 ���
		*/
	#define DTNode
		TNode();
		TNode(T mine);
		/*
		������
		*/
	#define DMakeChild
		void MakeChild(T childT);
		void MakeChild(TNode* childT);
		/*
		�ڽ��� ���鶧 ���
		*/
	#define DSetParent
		void SetParent(TNode* ParentT);
		/*
		�θ� �����Ҷ� ���
		*/
	};
}
