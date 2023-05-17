#include <iostream>
#include "SaleSystem.h"
#include "Stack.h"
#include "Linkedlist.h"

using namespace std;

SaleSystem ss;
Stack stack;

void deleteProduct(string name, int &numProduct)
{
    if (ss.findProduct(name) != -1) 
    {
        stack.push(ss.products[ss.findProduct(name)]);
        cout << "Pushed { " << stack.products[stack.top].name << " } to the stack.\n";
        for (size_t i = ss.findProduct(name); i < numProduct; i++)
        {
            ss.products[i] = ss.products[i + 1];

        }
    }
    numProduct--;
}
void undoDeleteProduct(int &numProduct)
{
    ss.products[numProduct] = stack.pop(numProduct);
    cout << "Popped { " << stack.products[stack.top].name << " } out of the stack.\n";
}

struct leaf
{
    leaf* right;
    leaf* left;
    int data;
};

void Insert(leaf* rootPtr, int data)
{
}

int main()
{  
    return 0;
}