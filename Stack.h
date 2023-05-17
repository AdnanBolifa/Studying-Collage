#pragma once
#include <iostream>
#include "SaleSystem.h"
class Stack
{
public:
	static const int MAX = 100;			
	int top = -1;

	Product products[MAX];

	Product pop(int& numProduct)
	{
		if (top >= 0)
		{
			return products[top];
			top--;
		}
		else
		{
			cout << "Stack is empty\n";
		}
	}
	void push(Product p)
	{
		if (top < 100)
		{
			top++;
			products[top] = p;
		}
		else
		{
			cout << "Stack is Full!..\n";
		}
		
	}

private:

};
