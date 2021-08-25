#pragma once

struct violation
{
    char* violat;
    violation* next;
};

struct node
{
    int number;
    node* parent;
    node* left;
    node* right;

    violation* head;
    violation* tail;
};

class database
{
private:
    int size;
    node* root;

public:
    database();
    ~database();

    void Add(int);
    void PrintAll(node*, int);
    void PrintNumber(int);
    void PrintRangeNumber(node*);
    node* ReturnRoot();
    void DeleteAll(node* temp);
};
