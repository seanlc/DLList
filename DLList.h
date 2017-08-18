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
        makeEmpty();
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
	    for(trav = head; trav != nullptr && newNode->data > trav->data; trav = trav->next)
	        trail = trav;
	    // head insert
	    if(trav == head)
	    {
	        trav->last = newNode;
		newNode->next = trav;
		head = newNode;
	    }
	    // tail insert
	    else if(trav == nullptr)
	    {
	        trail->next = newNode;
		newNode->last = trail;
		tail = newNode;
	    }
	    // middle insert
	    else
	    {
	        newNode->last = trail;
		trail->next = newNode;
		newNode->next = trav;
		trav->last = newNode;
	    }
	}
	++numNodes;
    }
    void deleteNum(int n)
    {
        Node * trav = nullptr;
	Node * trail = nullptr;
	for(trav = head; trav != nullptr && trav->data != n; trav = trav->next)
	    trail = trav;
	if(trav == nullptr)
	    cout << "not found" << endl;
	// head delete
	else if(trav == head)
	{
	    trav->next->last = nullptr;
	    head = head->next;
	    delete trav;
	}
	// tail delete
	else if(trav == tail)
	{
	    trail->next = nullptr;
	    delete trav;
	    tail = trail;
	}
	// middle delete
	else
	{
	    trav->next->last = trail;
	    trail->next = trav->next;
	    delete trav;
	}
	--numNodes;
    }
    bool findNum(int n)
    {
        Node * trav = nullptr;
	for(trav = head; trav != nullptr && trav->data != n; trav=trav->next)
		;
	if(trav != nullptr)
	    return true;
	return false;
    }
    int getLength()
    {
        return numNodes;
    }
    void makeEmpty()
    {
        Node * tmp = head;
	while(tmp != nullptr)
	{
	    head = head->next;
	    delete tmp;
	    tmp = head;
	}
	numNodes = 0;
    }
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
    void revPrint()
    {
        Node * trav = tail;
        while(trav != nullptr)
	{
	    cout << "node with val " << trav->data << endl;
	    trav = trav->last;
	}	
    }
  private:
    Node * head;
    Node * tail;
    int numNodes;
};
