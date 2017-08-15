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

int main()
{
//    test_constr_destr();
    test_insert();
    return 0;
}
