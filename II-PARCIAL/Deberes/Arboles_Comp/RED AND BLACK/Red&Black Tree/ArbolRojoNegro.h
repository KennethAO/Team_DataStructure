#include <fstream>
#include "Nodo.h"

class ArbolRojoNegro {
   private:
      Nodo *root;
      Nodo *TNULL;
      ofstream archivo;
  public:
      void initializeNULLNode(Nodo *node, Nodo *parent);
      void preOrderHelper(Nodo *node);
      void inOrderHelper(Nodo *node);
      void postOrderHelper(Nodo *node);
      Nodo* searchTreeHelper(Nodo *node, int key);
      void deleteFix(Nodo *x);
      void rbTransplant(Nodo *u, Nodo *v);
      void deleteNodeHelper(Nodo *node, int key);
      void insertFix(Nodo *k);
      void printHelper(Nodo *root, string indent, bool last);
      ArbolRojoNegro();
      void preorder();
      void inorder();
      void postorder();
      Nodo* searchTree(int k);
      Nodo* minimum(Nodo *node);
      Nodo* maximum(Nodo *node);
      Nodo* successor(Nodo *x);
      Nodo* predecessor(Nodo *x);
      void leftRotate(Nodo *x);
      void rightRotate(Nodo *x);
      void insert(int key);
      Nodo* getRoot();
      void deleteNode(int data);
      void printTree();
      void encontrarValor(int data);

      void generarGrafico();

      void graficarArbol(Nodo *nodo);

      
//////////////////////////////////////////////////////////////////////////////////
};

  void ArbolRojoNegro::initializeNULLNode(Nodo *node, Nodo *parent) {
    node->setDato(0);
    node->setNodoPadre(parent);
    node->setNodoIzquierda(nullptr);
    node->setNodoDerecha(nullptr);
    node->setColor(0);
  }

  // Preorder
  void ArbolRojoNegro::preOrderHelper(Nodo *node) {
    if (node != TNULL) {
      cout << node->getDato() << " ";
      preOrderHelper(node->getNodoIzquierda());
      preOrderHelper(node->getNodoDerecha());
    }
  }

  // Inorder
  void ArbolRojoNegro::inOrderHelper(Nodo *node) {
    if (node != TNULL) {
      inOrderHelper(node->getNodoIzquierda());
      cout << node->getDato() << " ";
      inOrderHelper(node->getNodoDerecha());
    }
  }

  // Post order
  void ArbolRojoNegro::postOrderHelper(Nodo *node) {
    if (node != TNULL) {
      postOrderHelper(node->getNodoIzquierda());
      postOrderHelper(node->getNodoDerecha());
      cout << node->getDato() << " ";
    }
  }

  Nodo* ArbolRojoNegro::searchTreeHelper(Nodo *node, int key) {
    if (node == TNULL || key == node->getDato()) {
      return node;
    }

    if (key < node->getDato()) {
      return searchTreeHelper(node->getNodoIzquierda(), key);
    }
    return searchTreeHelper(node->getNodoDerecha(), key);
  }

  // For balancing the tree after deletion
  void ArbolRojoNegro::deleteFix(Nodo *x) {
    Nodo *s;
    while (x != root && x->getColor() == 0) {
      if (x == x->getNodoPadre()->getNodoIzquierda()) {
        s = x->getNodoPadre()->getNodoDerecha();
        if (s->getColor()== 1) {
          s->setColor(0);
          x->getNodoPadre()->setColor(1);
          leftRotate(x->getNodoPadre());
          s = x->getNodoPadre()->getNodoDerecha();
        }

        if (s->getNodoIzquierda()->getColor()== 0 && s->getNodoDerecha()->getColor() == 0) {
          s->setColor(1);
          x = x->getNodoPadre();
        } else {
          if (s->getNodoDerecha()->getColor() == 0) {
            s->getNodoIzquierda()->setColor(0);
            s->setColor(1);
            rightRotate(s);
            s = x->getNodoPadre()->getNodoDerecha();
          }

          s->setColor(x->getNodoPadre()->getColor());
          x->getNodoPadre()->setColor(0);
          s->getNodoDerecha()->setColor(0);
          leftRotate(x->getNodoPadre());
          x = root;
        }
      } else {
        s = x->getNodoPadre()->getNodoIzquierda();
        if (s->getColor() == 1) {
          s->setColor(0);
          x->getNodoPadre()->setColor(1);
          rightRotate(x->getNodoPadre());
          s = x->getNodoPadre()->getNodoIzquierda();
        }

        if (s->getNodoDerecha()->getColor() == 0 && s->getNodoDerecha()->getColor() == 0) {
          s->setColor(1);
          x = x->getNodoPadre();
        } else {
          if (s->getNodoIzquierda()->getColor() == 0) {
            s->getNodoDerecha()->setColor(0);
            s->setColor(1);
            leftRotate(s);
            s = x->getNodoPadre()->getNodoIzquierda();
          }

          s->setColor(x->getNodoPadre()->getColor());
          x->getNodoPadre()->setColor(0);
          s->getNodoIzquierda()->setColor(0);
          rightRotate(x->getNodoPadre());
          x = root;
        }
      }
    }
    x->setColor(0);
  }

  void ArbolRojoNegro::rbTransplant(Nodo *u, Nodo *v) {
    if (u->getNodoPadre() == nullptr) {
      root = v;
    } else if (u == u->getNodoPadre()->getNodoIzquierda()) {
      u->getNodoPadre()->setNodoIzquierda(v);
    } else {
      u->getNodoPadre()->setNodoDerecha(v);
    }
    v->setNodoPadre(u->getNodoPadre());
  }

  void ArbolRojoNegro::deleteNodeHelper(Nodo *node, int key) {
    Nodo *z = TNULL;
    Nodo *x, *y;
    while (node != TNULL) {
      if (node->getDato() == key) {
        z = node;
      }
      if (node->getDato() <= key) {
        node = node->getNodoDerecha();
      } else {
        node = node->getNodoIzquierda();
      }
    }
    if (z == TNULL) {
      cout << "Key not found in the tree" << endl;
      return;
    }
    y = z;
    int y_original_color = y->getColor();
    if (z->getNodoIzquierda() == TNULL) {
      x = z->getNodoDerecha();
      rbTransplant(z, z->getNodoDerecha());
    } else if (z->getNodoDerecha() == TNULL) {
      x = z->getNodoIzquierda();
      rbTransplant(z, z->getNodoIzquierda());
    } else {
      y = minimum(z->getNodoDerecha());
      y_original_color = y->getColor();
      x = y->getNodoDerecha();
      if (y->getNodoPadre() == z) {
        x->setNodoPadre(y);
      } else {
        rbTransplant(y, y->getNodoDerecha());
        y->setNodoDerecha(z->getNodoDerecha());
        y->getNodoDerecha()->setNodoPadre(y);
      }

      rbTransplant(z, y);
      y->setNodoIzquierda(z->getNodoIzquierda());
      y->getNodoIzquierda()->setNodoPadre(y);
      y->setColor(z->getColor());
    }
    delete z;
    if (y_original_color == 0) {
      deleteFix(x);
    }
  }

  // For balancing the tree after insertion
  void ArbolRojoNegro::insertFix(Nodo *k) {
    Nodo *u;
    while (k->getNodoPadre()->getColor() == 1) {
      if (k->getNodoPadre() == k->getNodoPadre()->getNodoPadre()->getNodoDerecha()) {
        u = k->getNodoPadre()->getNodoPadre()->getNodoIzquierda();
        if (u->getColor() == 1) {
          u->setColor(0);
          k->getNodoPadre()->setColor(0);
          k->getNodoPadre()->getNodoPadre()->setColor(1);
          k = k->getNodoPadre()->getNodoPadre();
        } else {
          if (k == k->getNodoPadre()->getNodoIzquierda()) {
            k = k->getNodoPadre();
            rightRotate(k);
          }
          k->getNodoPadre()->setColor(0);
          k->getNodoPadre()->getNodoPadre()->setColor(1);
          leftRotate(k->getNodoPadre()->getNodoPadre());
        }
      } else {
        u = k->getNodoPadre()->getNodoPadre()->getNodoDerecha();

        if (u->getColor() == 1) {
          u->setColor(0);
          k->getNodoPadre()->setColor(0);
          k->getNodoPadre()->getNodoPadre()->setColor(1);
          k = k->getNodoPadre()->getNodoPadre();
        } else {
          if (k == k->getNodoPadre()->getNodoDerecha()) {
            k = k->getNodoPadre();
            leftRotate(k);
          }
          k->getNodoPadre()->setColor(0);
          k->getNodoPadre()->getNodoPadre()->setColor(1);
          rightRotate(k->getNodoPadre()->getNodoPadre());
        }
      }
      if (k == root) {
        break;
      }
    }
    root->setColor(0);
  }

  void ArbolRojoNegro::printHelper(Nodo *root, string indent, bool last) {
    if (root != TNULL) {
      cout << indent;
      if (last) {
        cout << "Derecha----";
        indent += "   ";
      } else {
        cout << "Izquierda----";
        indent += "|  ";
      }
      string sColor = root->getColor() ? "Rojo" : "Negro";
      cout << root->getDato() << "(" << sColor << ")" << endl;
      printHelper(root->getNodoIzquierda(), indent, false);
      printHelper(root->getNodoDerecha(), indent, true);
    }
  }

  ArbolRojoNegro::ArbolRojoNegro() {
    TNULL = new Nodo;
    TNULL->setColor(0);
    TNULL->setNodoIzquierda(nullptr);
    TNULL->setNodoDerecha(nullptr);
    root = TNULL;
  }

  void ArbolRojoNegro::preorder() {
    preOrderHelper(this->root);
  }

  void ArbolRojoNegro::inorder() {
    inOrderHelper(this->root);
  }

  void ArbolRojoNegro::postorder() {
    postOrderHelper(this->root);
  }

  Nodo* ArbolRojoNegro::searchTree(int k) {
    return searchTreeHelper(this->root, k);
  }

  Nodo* ArbolRojoNegro::minimum(Nodo *node) {
    while (node->getNodoIzquierda() != TNULL) {
      node = node->getNodoIzquierda();
    }
    return node;
  }

  Nodo* ArbolRojoNegro::maximum(Nodo *node) {
    while (node->getNodoDerecha() != TNULL) {
      node = node->getNodoDerecha();
    }
    return node;
  }

  Nodo* ArbolRojoNegro::successor(Nodo *x) {
    if (x->getNodoDerecha() != TNULL) {
      return minimum(x->getNodoDerecha());
    }

    Nodo *y = x->getNodoPadre();
    while (y != TNULL && x == y->getNodoDerecha()) {
      x = y;
      y = y->getNodoPadre();
    }
    return y;
  }

  Nodo* ArbolRojoNegro::predecessor(Nodo *x) {
    if (x->getNodoIzquierda() != TNULL) {
      return maximum(x->getNodoIzquierda());
    }

    Nodo *y = x->getNodoPadre();
    while (y != TNULL && x == y->getNodoIzquierda()) {
      x = y;
      y = y->getNodoPadre();
    }
    return y;
  }

  void ArbolRojoNegro::leftRotate(Nodo *x) {
    Nodo *y = x->getNodoDerecha();
    x->setNodoDerecha(y->getNodoIzquierda());
    if (y->getNodoIzquierda()!= TNULL) {
      y->getNodoIzquierda()->setNodoPadre(x);
    }
    y->setNodoPadre(x->getNodoPadre());
    if (x->getNodoPadre() == nullptr) {
      this->root = y;
    } else if (x == x->getNodoPadre()->getNodoIzquierda()) {
      x->getNodoPadre()->setNodoIzquierda(y);
    } else {
      x->getNodoPadre()->setNodoDerecha(y);
    }
    y->setNodoIzquierda(x);
    x->setNodoPadre(y);
  }

  void ArbolRojoNegro::rightRotate(Nodo *x) {
    Nodo *y = x->getNodoIzquierda();
    x->setNodoIzquierda(y->getNodoDerecha());
    if (y->getNodoDerecha() != TNULL) {
      y->getNodoDerecha()->setNodoPadre(x);
    }
    y->setNodoPadre(x->getNodoPadre());
    if (x->getNodoPadre() == nullptr) {
      this->root = y;
    } else if (x == x->getNodoPadre()->getNodoDerecha()) {
      x->getNodoPadre()->setNodoDerecha(y);
    } else {
      x->getNodoPadre()->setNodoIzquierda(y);
    }
    y->setNodoDerecha(x);
    x->setNodoPadre(y);
  }

  // Inserting a node
  void ArbolRojoNegro::insert(int key) {
    Nodo *node = new Nodo;
    node->setNodoPadre(nullptr);
    node->setDato(key);
    node->setNodoIzquierda(TNULL);
    node->setNodoDerecha(TNULL);
    node->setColor(1);

    Nodo *y = nullptr;
    Nodo *x = this->root;

    while (x != TNULL) {
      y = x;
      if (node->getDato() < x->getDato()) {
        x = x->getNodoIzquierda();
      } else {
        x = x->getNodoDerecha();
      }
    }

    node->setNodoPadre(y);
    if (y == nullptr) {
      root = node;
    } else if (node->getDato() < y->getDato()) {
      y->setNodoIzquierda(node);
    } else {
      y->setNodoDerecha(node);
    }

    if (node->getNodoPadre() == nullptr) {
      node->setColor(0);
      return;
    }

    if (node->getNodoPadre()->getNodoPadre() == nullptr) {
      return;
    }

    insertFix(node);
  }

  Nodo* ArbolRojoNegro::getRoot() {
    return this->root;
  }

  void ArbolRojoNegro::deleteNode(int data) {
    deleteNodeHelper(this->root, data);
  }

  void ArbolRojoNegro::printTree() {
    if (root) {
      printHelper(this->root, "", true);
    }
  }

void ArbolRojoNegro::encontrarValor(int data){
    bool compare = false; 
    Nodo *z = this->root;

    while (z != TNULL) {
      if (z->getDato() == data) {
        compare = true; 
        break; 
      }
      if (z->getDato() <= data) {
        z = z->getNodoDerecha();
      }else {
        z = z->getNodoIzquierda();
      }
    }
    if(compare==false){
      cout<<"No se ha encontrado el dato: "<<data<<endl;
    } else{
      cout<<"Si se ha encontrado el dato: "<<data<<endl; 
    }
}

void ArbolRojoNegro::generarGrafico(){
    
    archivo.open("RojoNegro.dot", ios::out);
    archivo<<"digraph G {\n";
    graficarArbol(root);
    archivo<<"}";
    archivo.close();

    system("dot.exe -Tpng RojoNegro.dot -o RojoNegro.png");

    
}


void ArbolRojoNegro::graficarArbol(Nodo *nodo){
    if (nodo == TNULL)
      {
          return;
      }
      if (nodo->getColor())
        {
                archivo<<"x"<<nodo<<"[label=\""<<nodo->getDato()<<"\",style=filled,fillcolor=lightcoral];"<<endl;
    }else{
                archivo<<"x"<<nodo<<"[label=\""<<nodo->getDato()<<"\",style=filled,fillcolor=gray];"<<endl;
        }
            
      
        if (nodo->getNodoIzquierda() != TNULL)
        {
            
            archivo<<"x"<<nodo<<"->"<<"x"<<nodo->getNodoIzquierda()<<"[arrowhead = normaltee];"<<endl;
        }

        if (nodo->getNodoDerecha() != TNULL)
        {
            archivo<<"x"<<nodo<<"->"<<"x"<<nodo->getNodoDerecha()<<"[arrowhead = normaltee];"<<endl;
        }

        graficarArbol(nodo->getNodoIzquierda());
        graficarArbol(nodo->getNodoDerecha());
}