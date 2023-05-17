#pragma once

struct node
{
    int data;
    node* next;
    node* prev;
};

class List
{
public:
	List();
	~List();
    node* head;
    void InsertAtHead(int data)
    {
        node* nNode = new node();
        nNode->data = data;
        nNode->next = NULL;
        nNode->prev = NULL;
        if (head == NULL)
        {
            head = nNode;
            return;
        }
        head->prev = nNode;
        nNode->next = head;
        head = nNode;

    }

private:

};

List::List()
{
}

List::~List()
{
}
