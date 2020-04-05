
#ifndef _LINKSTACK_H_
#define _LINKSTACK_H_


/*
*		
*		��ջ
*
*/


class LinkStack
{
public:
	typedef int ElemType;


protected:
	struct StackNode {
		ElemType data;
		struct StackNode* next;
	};

	StackNode* head;
	int length;
public:

	LinkStack();//��ʼ��ջ

	~LinkStack();//����ջ

	 bool isEmpty();//�ж�ջ�Ƿ�Ϊ��

	 ElemType getTop();//�õ�ջ��Ԫ��

	 bool clear();//���ջ

	 int Length();//���ջ����

	 bool push(ElemType& e);//��ջ

	 bool pop(ElemType& e);//��ջ

	 void Traverse();



};


#endif
