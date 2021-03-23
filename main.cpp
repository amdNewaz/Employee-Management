#include <iostream>
#include <fstream>
#include <queue>
#include "student.h"
using namespace std;

class SNode
{

public:
    student stud;

    SNode *next;
};

class LinkedList
{

public:
    SNode *head = NULL;

    LinkedList(){};
    void push(SNode **head_ref, student s)
    {
        /* 1. allocate node */
        SNode *new_node = new SNode();

        /* 2. put in the data */
        new_node->stud = s;

        /* 3. Make next of new node as head */
        new_node->next = (*head_ref);

        /* 4. move the head to point to the new node */
        (*head_ref) = new_node;
    }

    void printList(SNode *node)
    {
        while (node != NULL)
        {
            cout << "----" << endl;
            cout << "----" << endl;
            cout << "----" << endl;
            node->stud.display();
            node = node->next;
        }
    }
    void deleteNode(SNode **head_ref, student s)
    {

        // Store head node
        SNode *temp = *head_ref;
        SNode *prev = NULL;

        // If head node itself holds
        // the key to be deleted
        if (temp != NULL && temp->stud.name == s.name)
        {
            *head_ref = temp->next; // Changed head
            delete temp;            // free old head
            return;
        }

        // Else Search for the key to be deleted,
        // keep track of the previous node as we
        // need to change 'prev->next' */
        else
        {
            while (temp != NULL && temp->stud.name != s.name)
            {
                prev = temp;
                temp = temp->next;
            }

            // If key was not present in linked list
            if (temp == NULL)
                return;

            // Unlink the node from linked list
            prev->next = temp->next;

            // Free memory
            delete temp;
        }
    }
    student search(SNode *head, student stud)
    {
        SNode *current = head; // Initialize current
        while (current != NULL)
        {
            if (current-> == x)
                return true;
            current = current->next;
        }
        return false;
    }
};
struct Node
{
    student stud;
    Node *left;
    Node *right;
};

class Tree
{

private:
    Node *root;

public:
    Tree()
    {
        root = NULL;
    }
    ~Tree()
    {
        Destroy(root);
    }
    void Destroy(Node *&tree)
    {
        if (tree != NULL)
        {
            Destroy(tree->left);
            Destroy(tree->right);
            delete (tree);
        }
    }

    bool IsEmpty() const
    {
        if (root == NULL)
            return true; // tree is empty
        else
            return false; // tree is not empty
    }
    InsertItem(student stud)
    {
        Insert(root, stud);
    }
    void Insert(Node *&tree, student stud)
    {
        if (tree == NULL)
        { // base case
            tree = new Node();
            tree->right = NULL;
            tree->left = NULL;
            tree->stud = stud;
        }
        else if (stud.total < tree->stud.total)
            Insert(tree->left, stud);
        else
            Insert(tree->right, stud);
    }

    void PrintTree()
    {
        Print(root);
    }

    void Print(Node *tree)
    {

        if (tree != NULL)
        {

            Print(tree->left);
            tree->stud.display();
            Print(tree->right);
        }
    }
};

int main()
{

    SNode *head = NULL;
    Node *root = NULL;
    string name;
    string kp;
    double LE, test1, LT, FIN, ASG, QZ, Proj, total;
    double cTotal;
    LinkedList studentlist;
    Tree studentTree;
    ifstream theFile("student.txt");

    int count = 0;
    while (theFile >> kp >> name >> LE >> test1 >> LT >> FIN >> ASG >> QZ >> Proj)
    {
        student temp;

        void display();
        temp.setStudent(kp, name, LE, test1, LT, FIN, ASG, QZ, Proj);
        studentlist.push(&head, temp);
        studentTree.InsertItem(temp);
        cTotal = cTotal + temp.total;
        count++;
    }

    studentlist.printList(head);

    cout << "Average number is " << (cTotal / count) << endl;
    studentTree.PrintTree();
    system("pause");
    return 0;
}