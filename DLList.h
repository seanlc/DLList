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
    DLList();
    ~DLList();
    void insertNum(int n);
    void deleteNum(int n);
    bool findNum(int n);
    int getLength();
    void makeEmpty();
    bool isEmpty();
    void print();
  private:
    Node * head;
    Node * tail;
    int numNodes;
};
