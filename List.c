//
// Created by Administrador on 14/6/2023.
//

#include "List.h"
#include <stdio.h>
#include <stdlib.h>

Node *newNode(int num) {
    Node * aux = NULL;
    aux = malloc(sizeof(Node));
    if(aux == NULL){
        printf("Error de asignacion\n");
        exit (-1);
    }
    aux-> num = num;
    aux-> next = NULL;
    return aux;
}

List *newList() {
    List * aux = NULL;
    aux = malloc(sizeof(List));
    if(aux == NULL){
        printf("Error\n");
        exit(-1);
    }
    aux-> header = NULL;

    return aux;
}

void enlist(List *list, Node * nodeToList) {
    if(list->header == NULL){
        list->header = nodeToList;
    }else{
        Node * aux = list->header;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = nodeToList;
    }
}

void delete(List *list, int numDelete) {
    Node * previous = list->header;
    Node * current = previous;

    if(list->header == NULL){
        printf("List is empty\n");
    }else{
        while (current != NULL){
            if(current->num == numDelete){
                if(current == list->header){
                    list->header = current->next;
                }else{
                    if(current->next == NULL){
                        previous->next = NULL;
                    }else{
                        previous->next = current->next;

                    }
                }
            }
            previous = current;
            current = current->next;
        }
    }
}

void print(List *list) {
    Node * aux = list->header;
    while(aux != NULL){
        printf("%d -> ", aux->num);
        aux = aux->next;
    }
    printf("NULL\n");
}

