#include <iostream>
#include "DLList.h"

using namespace std;

void test_constr_destr()
{
    DLList myList;
}

void test_insert()
{
    DLList myList;
    for(int i = 1; i < 20; ++i)
        myList.insertNum(i);
    // head insert
    myList.insertNum(0);
    // middle insert
    myList.insertNum(10);
    // tail insert
    myList.insertNum(30);
    cout << "forward print" << endl;
    myList.print();
    cout << "reverse print" << endl;
    myList.revPrint();
}

void test_isEmpty()
{
    DLList myList;
    cout << "isEmpty() returns " << myList.isEmpty() << " for empty list" << endl;
    myList.insertNum(0);
    cout << "isEmpty() returns " << myList.isEmpty() << " for nonempty list" << endl;
}

void test_isLength()
{
    DLList myList;
    cout << "length of empty list: " << myList.getLength() << endl;
    myList.insertNum(0);
    cout << "length of nonempty list: " << myList.getLength() << endl;

}

int main()
{
//    test_constr_destr();
    test_insert();
//    test_isEmpty();
//    test_isLength();
    return 0;
}
