#include"linkstack.h"
#include<iostream>


int main()
{
	std::cout << "1.��ջ             " << "2.��ջ        " << "3.�õ�ջ��Ԫ��             ح" << std::endl;
	std::cout << "                                                            ح" << std::endl;
	std::cout << "4.��ѯջ��ǰ����   " << "5.����        " << "6.���ջ                   ح" << std::endl;
	std::cout << "                                                            ح" << std::endl;
	std::cout << "7.      (��)       " << "8.   ���գ�   " << "9.�˳�                     ح" << std::endl;
	std::cout << "============================================================ح" << std::endl;
	int i;
	LinkStack* p = new LinkStack;
	std::cout << "��ѡ����Ĳ�����";
	std::cin >> i;
	while (i != 9)
	{
		if (i == 1)
		{
			int k;
			std:: cout << "��������ջ���ݣ�";
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

		std::cout << "��ѡ����Ĳ�����";
		std::cin >> i;
	}

	return 0;
}
