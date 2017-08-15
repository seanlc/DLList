#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * last;
};

class DLList
{
  public:
    DLList()
    : head (nullptr), tail (nullptr), numNodes (0)
    {}
    ~DLList()
    {
        Node * tmp = head;
	while(tmp != nullptr)
	{
	    head = head->next;
	    delete tmp;
	    tmp = head;
	}
    }
    void insertNum(int n)
    {
	Node * trail = nullptr;
	Node * trav = nullptr;
	Node * newNode = new Node;
	newNode->data = n;
	newNode->next = nullptr;
	newNode->last = nullptr;

	// empty list case
        if(head == nullptr && tail == nullptr)
	{
	    head = newNode;
	    tail = newNode;
	}
	else
	{

	    // find insertion spot
	    for(trav = head; newNode->data > trav->data; trav = trav->next)
            {
	        trail = trav;
	    }

	    if(trav == head)
	    {
	        trav->last = newNode;
		newNode->next = trav;
		head = newNode;
	    }
	}

	++numNodes;

    }
    void deleteNum(int n);
    bool findNum(int n);
    int getLength()
    {
        return numNodes;
    }
    void makeEmpty();
    bool isEmpty()
    {
        return numNodes == 0;
    }
    void print()
    {
        Node * trav = head;
	while(trav != nullptr)
	{
	    cout << "node with val " << trav->data << endl;
	    trav = trav->next;
	}
    }
  private:
    Node * head;
    Node * tail;
    int numNodes;
};
