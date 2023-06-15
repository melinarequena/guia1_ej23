//
// Created by Administrador on 14/6/2023.
//Diseñar una función que elimina todas las ocurrencias de un determinado elemento
//en una lista.

#ifndef GUIA1_EJ223_LIST_H
#define GUIA1_EJ223_LIST_H

typedef struct node{
    int num;
    struct node * next;
}Node;

typedef struct list{
    Node * header;
}List;


Node * newNode(int num);
List * newList();
void enlist(List * list, Node * nodeToList);
void delete(List * list, int numDelete);
void print(List * list);
#endif //GUIA1_EJ223_LIST_H
