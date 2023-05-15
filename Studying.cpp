#include <iostream>
#include "SaleSystem.h"
#include "Stack.h"
using namespace std;

SaleSystem ss;
Stack stack;

void deleteProduct(string name)
{
    if (ss.findProduct(name) != -1) 
    {
        stack.push(ss.products[ss.findProduct(name)]);
        cout << "Pushed { " << stack.products[stack.top].name << " } to the stack.\n";
        for (size_t i = ss.findProduct(name); i < ss.numProduct; i++)
        {
            ss.products[i] = ss.products[i + 1];

        }
    }
    ss.numProduct--;
}
void undoDeleteProduct(int &numProduct)
{
    ss.products[numProduct] = stack.pop(numProduct);
    cout << "Popped { " << stack.products[stack.top].name << " } out of the stack.\n";
}

int main()
{
    
    Stack stack;
    Product p1 = { "iPhone x", 1, 20, 400.0 };
    Product p2 = { "iPhone 11", 2, 20, 400.0 };
    Product p3 = { "iPhone 6", 3, 20, 400.0 };
    Product p4 = { "iPhone XR", 4, 20, 400.0 };

    Product pn = { "iPhone xs", 1, 20, 400.0 };
    

    ss.addProduct(p1);
    ss.addProduct(p2);
    ss.addProduct(p3);
    ss.addProduct(p4);

    ss.editProduct("iPhone x", pn);
    deleteProduct("iPhone xs");
    undoDeleteProduct(ss.numProduct);

    for (size_t i = 0; i <= ss.numProduct; i++)
    {
        cout << ss.products[i].name << endl;
    }
    
    int index = ss.findProduct("iPhone xs");
    if (index != -1)
        cout << "Product found!. ID: " << ss.products[index].id;


    
}
