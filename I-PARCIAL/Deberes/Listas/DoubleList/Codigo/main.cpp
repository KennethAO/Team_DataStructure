#include <iostream>
#include "DoubleList.cpp"

using namespace std;
int main(int, char**) {
    
    DoubleList<int> lst;
    lst.insertFinal(1);
    lst.insertFinal(3);
    lst.insertFinal(4);
    lst.insertFinal(5);
    lst.insertFinal(6);
    lst.insertFinal(7); 
    lst.printList(); 
    cout<<"\n\n";
    lst.insertBetween(100,15);
    lst.printList(); 
    lst.deleteNode(0);
    cout<<"\n\n";
    lst.printList(); 

}
