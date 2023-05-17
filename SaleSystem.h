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
        for (size_t i = findProduct(name); i < numProduct; i++)
        {
            if (products[i].name == name)
                return i;
        }
        return -1;
    }
    void editProduct(string name, Product newProcut)
    {
        if (findProduct(name) != -1)
        {
            for (size_t i = findProduct(name); i < numProduct; i++)
            {
                if (products[i].name == name)
                    products[i] = newProcut;
            }
        }
    }
    void saleProduct(string name)
    {
        if (findProduct(name) != -1)
        {
            for (size_t i = findProduct(name); i < numProduct; i++)
            {
                products[i] = products[i + 1];

            }
        }
    }
    void buyProduct()
    {

    }

private:

};
