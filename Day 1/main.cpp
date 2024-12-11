#include "LinkedList.h"
#include <iostream>
using namespace std;
#include <stdexcept>


int main()
{
    LinkedList l;
    l.addNode(5);
    l.addNode(10);
    l.addNode(15);
    l.addNode(20);
    l.addNode(25);
    l.display();



    cout << "insert 80 before 10\n";

    l.InsertBefore(80, 5);
    l.display();
    l.InsertAfter(30, 5);
    cout << "insert 30 after first element\n";
    l.display();
    cout << "insert 70 after data which is not exist\n";

    l.InsertAfter(70, 70);
    l.display();
    cout << "Length of linkedList: " << l.GetCountNode() << endl;

    try
    {
        int value = l.GetDataByIndex(20); 
        cout << "Value at index 5: " << value << endl;
    }
    catch (const std::out_of_range& e)
    {
        cerr << "Error: " << e.what() << endl;
    }

}
