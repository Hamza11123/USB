#include <conio.h>
#include <iostream>
using namespace std;

class BST
{
public:
    int data;
    BST *r, *l;

    // void constructor
    BST()
    {
        this->r = NULL, this->l = NULL;
    }
    // pramatrized constructor to store an Item
    BST(int item)
    {
        this->r = NULL, this->l = NULL;
        this->data = item;
    }

    // insertion By Recursive-way!
    BST *insert(BST *root, int val)
    {
        if (root == NULL)
        {
            // if the root has no-Node, assign it a "Node"
            return (new BST(val));
        }
        if (root->data > val)
        {
            root->l = insert(root->l, val);
        }
        else
        {
            root->r = insert(root->r, val);
        }
        return root;
    }
    // insertion By Iterative-way!
    void insert2(BST *root, int val)
    {
        BST *prev = NULL;
        while (root != NULL)
        {

            // You Must Concentrate that WHERE to Use "prev" and Where to USe "root",
            // Try Not Confuse in  Using  Please [Take-Care] :), I've Been "Stuck" for "half and hour!"
            prev = root;
            if (root->data == val)
            {
                cout << "sorry can't insert!1\n";
                return;
            }
            else if (root->data > val)
            {
                root = root->l;
            }
            else
            {
                root = root->r;
            }
        }
        cout << "end" << prev->data;

        BST *newNode = new BST(val);
        if (prev->data > val)
        {
            prev->l = newNode;
        }
        else
        {
            prev->r = newNode;
        }
    }

    void insert22(BST *root, int key)
    {
        BST *prev = NULL;
        while (root != NULL)
        {
            prev = root;
            if (root->data == key)
            {
                printf("Cannot insert %d, already in BST", key);
                return;
            }
            else if (key < root->data)
            {
                root = root->l;
            }
            else
            {
                root = root->r;
            }
        }
        BST *newNode = new BST(key);
        if (key < prev->data)
        {
            prev->l = newNode;
        }
        else
        {
            prev->l = newNode;
        }
    }

    void inorder(BST *root)
    {
        if (root == NULL) // or if(!root) return;
            return;
        inorder(root->l);
        cout << root->data << endl;
        inorder(root->r);
    }
};

int main()
{
    BST *root = NULL;
    // a random "Obj" is created to Use Method's Of the Class
    BST obj;
    root = obj.insert(root, 45);
    obj.insert(root, 56);
    obj.insert(root, 100);
    obj.inorder(root);

    obj.insert2(root, 78);
    obj.insert2(root, 34);
    obj.insert2(root, 22);

    cout << "final inorder travresal:\n";
    obj.inorder(root);
    return 0;
}