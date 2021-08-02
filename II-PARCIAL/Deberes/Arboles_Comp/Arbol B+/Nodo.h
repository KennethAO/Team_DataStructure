
#include <climits>
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;
int MAX = 3;

class Node {
  bool IS_LEAF;
  int *key, size;
  Node **ptr;
  friend class ArbolBMas;

   public:
    Node();
};

Node::Node() {
  key = new int[MAX];
  ptr = new Node *[MAX + 1];
}
