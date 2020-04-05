
#ifndef _LINKSTACK_H_
#define _LINKSTACK_H_


/*
*		
*		链栈
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

	LinkStack();//初始化栈

	~LinkStack();//销毁栈

	 bool isEmpty();//判断栈是否为空

	 ElemType getTop();//得到栈顶元素

	 bool clear();//清空栈

	 int Length();//检测栈长度

	 bool push(ElemType& e);//入栈

	 bool pop(ElemType& e);//出栈

	 void Traverse();



};


#endif
