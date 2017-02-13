/*
 * DataStructures
 * Binary Search Tree (simple)
 * https://en.wikipedia.org/wiki/Binary_search_tree
 * 
 * Written by Zhen Zhi Lee in C++11
 */

class BSTNode
{
  public:
    BSTNode()
    {
        this->Data = 0;
        this->Left = nullptr;
        this->Right = nullptr;
    }

    ~BSTNode() = default;

    int Data;
    BSTNode *Left;
    BSTNode *Right;
};

class BST
{
  public:
    BST()
    {
        this->_root = nullptr;
    }

    ~BST() = default;
    void Insert(const int &value);
    void Delete(const int &value);
    void Display();

  private:
    BSTNode *_root;

    void inOrderTraverse(BSTNode *root);
};