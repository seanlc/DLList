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
    myList.insertNum(0);
    myList.print();
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
//    test_insert();
//    test_isEmpty();
    test_isLength();
    return 0;
}
