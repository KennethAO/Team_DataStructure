
template <typename T>
class Node{
    private:
        T data;
        Node *next = nullptr;
        Node *previous = nullptr;

    public:

        Node(T _data);

        T getValor();
        void setValor(T newData);
        
        Node *getNext();
        void setNext(Node *newNext);
        
        Node *getPrevious();
        void setPrevious(Node *newPrevious); 
};
