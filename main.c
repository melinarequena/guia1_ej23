#include <stdio.h>
#include "List.h"

int main() {

    List * list = newList();
    int num;
    enlist(list, newNode(1));
    enlist(list, newNode(7));
    enlist(list, newNode(2));
    enlist(list, newNode(6));
    enlist(list, newNode(3));
    enlist(list, newNode(5));
    enlist(list, newNode(4));
    enlist(list, newNode(4));
    enlist(list, newNode(5));
    enlist(list, newNode(3));
    enlist(list, newNode(6));
    enlist(list, newNode(2));
    enlist(list, newNode(7));
    enlist(list, newNode(1));

    print(list);
    while (num != (-1)){
        printf("\nChoose number to delete from list\n");
        scanf("%d", &num);
        delete(list, num);
        print(list);
    }

    return 0;
}
