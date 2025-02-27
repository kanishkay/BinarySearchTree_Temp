template<class T>
void TreeT<T>::Add(T value) {
    Node *currN = root;
    Node *newNode = new Node;
    newNode -> value = value;
    ++numNodes;

    // Tree's Empty
    if (root == nullptr) {
        root = new Node;
        return;
    }
    while (currN != nullptr) {
        if (value < currN->value) {
            if (currN -> left == nullptr) {
                currN -> left = new Node;
                return;
            }
            currN = currN -> left;
        }
        else if (value > currN-> value) {
            if (currN -> right == nullptr) {
                currN -> right = new Node;
                return;
            }
            currN = currN -> right;
        }
        else {
            delete newNode;
            --numNodes;
            return;         // Already exists
        }
    }

}

template<class T>
void TreeT<T>::Remove(T value) {

}

template<class T>
bool TreeT<T>::Contains(T value) {
    Node *currN = root;
    while (currN != nullptr) {
        if (value == currN->value) {
            return true;
        }
        else if (value < currN->value) {
            currN = currN -> left;
        }
        else {
            currN = currN -> right;
        }
    }
    return false;
}

template<class T>
int TreeT<T>::Size() {
}

template<class T>
void TreeT<T>::ResetIterator(Order traverseOrder) {
}

template<class T>
T TreeT<T>::GetNextItem() {
}
