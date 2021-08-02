#include "Nodo.h"
#include <iostream>

using namespace std; 

class ArbolB {
    public: 
        ArbolB()=default;
        Nodo * createNode(int val,Nodo *child);
        void addValToNode(int val, int pos, Nodo *node, Nodo *child);
        void splitNode(int val, int *pval, int pos, Nodo *node,Nodo *child, Nodo **newNode);
        int setValueInNode(int val, int *pval,Nodo *node, Nodo **child);
        void insertion(int val);
        void copySuccessor(Nodo *myNode, int pos);
        void removeVal(Nodo *myNode, int pos);
        void doRightShift(Nodo *myNode, int pos);
        void doLeftShift(Nodo *myNode, int pos);
        void mergeNodes(Nodo *myNode, int pos);
        void adjustNode(Nodo*myNode, int pos);
        int delValFromNode(int val,Nodo *myNode);
        void deletion(int val,Nodo *myNode);
        void searching(int val, int *pos,Nodo *myNode);
        void traversal(Nodo *myNode);
        void deletion1(int val);
        void searching1(int,int *);
        void transversal1();
};
Nodo* root;

void ArbolB::deletion1(int val){
    deletion(val,root);
}

void ArbolB::searching1(int val,int *opt){
    searching(val,opt,root);
}

void ArbolB::transversal1(){
    traversal(root);
}
Nodo * ArbolB::createNode(int val, Nodo *child) {
    Nodo *newNode = new Nodo;
    newNode->val[1] = val;
    newNode->count = 1;
    newNode->link[0] = root;
    newNode->link[1] = child;
    return newNode;
}
void ArbolB::addValToNode(int val, int pos, Nodo *node, Nodo *child) {
    int j = node->count;
    while (j > pos) {
        node->val[j + 1] = node->val[j];
        node->link[j + 1] = node->link[j];
        j--;
    }
    node->val[j + 1] = val;
    node->link[j + 1] = child;
    node->count++;
}
void ArbolB::splitNode(int val, int *pval, int pos, Nodo *node,Nodo *child, Nodo **newNode) {
    int median, j;
 
    if (pos > MIN)
        median = MIN + 1;
    else
        median = MIN;
 
    *newNode = new Nodo;
    j = median + 1;
    while (j <= MAX) {
        (*newNode)->val[j - median] = node->val[j];
        (*newNode)->link[j - median] = node->link[j];
        j++;
    }
    node->count = median;
    (*newNode)->count = MAX - median;
 
    if (pos <= MIN) {
        addValToNode(val, pos, node, child);
    }
    else {
        addValToNode(val, pos - median, *newNode, child);
    }
    *pval = node->val[node->count];
    (*newNode)->link[0] = node->link[node->count];
    node->count--;
}
int ArbolB::setValueInNode(int val, int *pval,Nodo *node, Nodo **child) {
 
    int pos;
    if (!node) {
        *pval = val;
        *child = NULL;
        return 1;
    }
 
    if (val < node->val[1]) {
        pos = 0;
    }
    else {
        for (pos = node->count;
            (val < node->val[pos] && pos > 1); pos--);
        if (val == node->val[pos]) {
            cout<<"Duplicates not allowed\n";
            return 0;
        }
    }
    if (setValueInNode(val, pval, node->link[pos], child)) {
        if (node->count < MAX) {
            addValToNode(*pval, pos, node, *child);
        }
        else {
            splitNode(*pval, pval, pos, node, *child, child);
            return 1;
        }
    }
    return 0;
}
void ArbolB::insertion(int val) {
    int flag, i;
    Nodo *child;
 
    flag = setValueInNode(val, &i, root, &child);
    if (flag)
        root = createNode(i, child);
}
void ArbolB::copySuccessor(Nodo *myNode, int pos) {
    Nodo *dummy;
    dummy = myNode->link[pos];
 
    for (; dummy->link[0] != NULL;)
        dummy = dummy->link[0];
    myNode->val[pos] = dummy->val[1];
 
}
void ArbolB::removeVal(Nodo *myNode, int pos) {
    int i = pos + 1;
    while (i <= myNode->count) {
        myNode->val[i - 1] = myNode->val[i];
        myNode->link[i - 1] = myNode->link[i];
        i++;
    }
    myNode->count--;
}
void ArbolB::doRightShift(Nodo *myNode, int pos) {
    Nodo *x = myNode->link[pos];
    int j = x->count;
 
    while (j > 0) {
        x->val[j + 1] = x->val[j];
        x->link[j + 1] = x->link[j];
    }
    x->val[1] = myNode->val[pos];
    x->link[1] = x->link[0];
    x->count++;
 
    x = myNode->link[pos - 1];
    myNode->val[pos] = x->val[x->count];
    myNode->link[pos] = x->link[x->count];
    x->count--;
    return;
}
void ArbolB::doLeftShift(Nodo *myNode, int pos) {
    int j = 1;
    Nodo *x = myNode->link[pos - 1];
 
    x->count++;
    x->val[x->count] = myNode->val[pos];
    x->link[x->count] = myNode->link[pos]->link[0];
 
    x = myNode->link[pos];
    myNode->val[pos] = x->val[1];
    x->link[0] = x->link[1];
    x->count--;
 
    while (j <= x->count) {
        x->val[j] = x->val[j + 1];
        x->link[j] = x->link[j + 1];
        j++;
    }
    return;
}
void ArbolB::mergeNodes(Nodo *myNode, int pos) {
    int j = 1;
    Nodo *x1 = myNode->link[pos], *x2 = myNode->link[pos - 1];
 
    x2->count++;
    x2->val[x2->count] = myNode->val[pos];
    x2->link[x2->count] = myNode->link[0];
 
    while (j <= x1->count) {
        x2->count++;
        x2->val[x2->count] = x1->val[j];
        x2->link[x2->count] = x1->link[j];
        j++;
    }
 
    j = pos;
    while (j < myNode->count) {
        myNode->val[j] = myNode->val[j + 1];
        myNode->link[j] = myNode->link[j + 1];
        j++;
    }
    myNode->count--;
    free(x1);
}
void ArbolB::adjustNode(Nodo *myNode, int pos) {
    if (!pos) {
        if (myNode->link[1]->count > MIN) {
            doLeftShift(myNode, 1);
        }
        else {
            mergeNodes(myNode, 1);
        }
    }
    else {
        if (myNode->count != pos) {
            if (myNode->link[pos - 1]->count > MIN) {
                doRightShift(myNode, pos);
            }
            else {
                if (myNode->link[pos + 1]->count > MIN) {
                    doLeftShift(myNode, pos + 1);
                }
                else {
                    mergeNodes(myNode, pos);
                }
            }
        }
        else {
            if (myNode->link[pos - 1]->count > MIN)
                doRightShift(myNode, pos);
            else
                mergeNodes(myNode, pos);
        }
    }
}
int ArbolB::delValFromNode(int val,Nodo *myNode) {
    int pos, flag = 0;
    if (myNode) {
        if (val < myNode->val[1]) {
            pos = 0;
            flag = 0;
        }
        else {
            for (pos = myNode->count;
                (val < myNode->val[pos] && pos > 1); pos--);
            if (val == myNode->val[pos]) {
                flag = 1;
            }
            else {
                flag = 0;
            }
        }
        if (flag) {
            if (myNode->link[pos - 1]) {
                copySuccessor(myNode, pos);
                flag = delValFromNode(myNode->val[pos], myNode->link[pos]);
                if (flag == 0) {
                    cout<<"Given data is not present in B-Tree\n";
                }
            }
            else {
                removeVal(myNode, pos);
            }
        }
        else {
            flag = delValFromNode(val, myNode->link[pos]);
        }
        if (myNode->link[pos]) {
            if (myNode->link[pos]->count < MIN)
                adjustNode(myNode, pos);
        }
    }
    return flag;
}
void ArbolB::deletion(int val,Nodo *myNode) {
    Nodo *tmp;
    if (!delValFromNode(val, myNode)) {
        cout<<"El valor dado no esta en el arbol\n";
        return;
    }
    else {
        if (myNode->count == 0) {
            tmp = myNode;
            myNode = myNode->link[0];
            free(tmp);
        }
    }
    root = myNode;
    return;
}
void ArbolB::searching(int val, int *pos,Nodo *myNode) {
    if (!myNode) {
        return;
    }
 
    if (val < myNode->val[1]) {
        *pos = 0;
    }
    else {
        for (*pos = myNode->count;
            (val < myNode->val[*pos] && *pos > 1); (*pos)--);
        if (val == myNode->val[*pos]) {
            cout << "Dato encontrado\n";
            return;
        }
    }
    searching(val, pos, myNode->link[*pos]);
    return;
}
void ArbolB::traversal(Nodo *myNode) {
    int i;
    if (myNode) {
        for (i = 0; i < myNode->count; i++) {
            traversal(myNode->link[i]);
            cout<< myNode->val[i + 1]<<' ';
        }
        traversal(myNode->link[i]);
    }
}