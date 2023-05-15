#pragma once
#include <string>
#include <iostream>
using namespace std;

struct Product
{
    string name;
    int id;
    int amount;
    double price;
};
class SaleSystem
{
public:
    static const int MAX_PRODUCTS = 100;
    int numProduct = 0;
    Product products[MAX_PRODUCTS];

    void addProduct(Product p)
    {
        products[numProduct++] = p;
    }
    int findProduct(string name)
    {
        for (size_t i = 0; i < numProduct; i++)
        {
            if (products[i].name == name)
                return i;
        }
        return -1;
    }
    void editProduct(string name, Product newProcut)
    {
        for (size_t i = 0; i < numProduct; i++)
        {
            if (products[i].name == name)
                products[i] = newProcut;
        }
    }

private:

};
