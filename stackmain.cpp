#include"linkstack.h"
#include<iostream>


int main()
{
	std::cout << "1.入栈             " << "2.出栈        " << "3.得到栈顶元素             丨" << std::endl;
	std::cout << "                                                            丨" << std::endl;
	std::cout << "4.查询栈当前长度   " << "5.遍历        " << "6.清空栈                   丨" << std::endl;
	std::cout << "                                                            丨" << std::endl;
	std::cout << "7.      (空)       " << "8.   （空）   " << "9.退出                     丨" << std::endl;
	std::cout << "============================================================丨" << std::endl;
	int i;
	LinkStack* p = new LinkStack;
	std::cout << "请选择你的操作：";
	std::cin >> i;
	while (i != 9)
	{
		if (i == 1)
		{
			int k;
			std:: cout << "请输入入栈数据：";
			std::cin >> k;
			p->push(k);
		}
		if (i == 2)
		{
			LinkStack::ElemType g;
			p->pop(g);
		}
		if (i == 3)
		{
			std::cout << p->getTop() << std::endl;
		}
		if (i == 4)
		{
			std::cout << p->Length() << std::endl;
		}
		if (i == 5)
		{
			p->Traverse();
		}
		if (i == 6)
		{
			p->clear();
		}

		std::cout << "请选择你的操作：";
		std::cin >> i;
	}

	return 0;
}
