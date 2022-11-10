#include "annotations.h"
#include <malloc.h>

_Ret_maybenull_ LinkedList* AllocateNode()
{
    LinkedList* result = static_cast<LinkedList*>(malloc(sizeof(LinkedList)));
    return result;
}

LinkedList* AddTail(LinkedList* node, int value)
{
    // finds the last node
    while (node->next != nullptr)
    {
        node = node->next;
    }

    // appends the new node
    LinkedList* newNode = AllocateNode();
    newNode->data = value;
    newNode->next = 0;
    node->next = newNode;

    return newNode;
}