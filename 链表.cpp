#include <stdio.h>
#include <stdlib.h>

// 定义链表节点的结构
//链表的第一个一般是空 
struct Node {
    int data;           // 数据元素
    struct Node* next;  // 指向下一个节点的指针，一个指针，以定义的结构体为类型 
};

// 在链表末尾插入一个节点
void insertAtEnd(struct Node** head, int data) {
    // 创建一个新节点
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    //给新的节点 赋值 
    newNode->data = data;
    newNode->next = NULL;

    // 如果链表为空，则将新节点作为头节点
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // 遍历链表，找到最后一个节点
    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    // 将新节点插入到最后一个节点的后面
    current->next = newNode;
}


void insertAtPosition(struct Node** head, int data, int position) {
    // 创建新节点
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    // 如果插入位置为链表头部，则直接将新节点作为头节点
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    // 寻找插入位置的前一个节点
    struct Node* previous = *head;
    for (int i = 0; i < position - 1 && previous != NULL; i++) {
        previous = previous->next;
    }

    // 如果插入位置超出链表长度，则插入到链表末尾
    if (previous == NULL) {
        printf("无法插入到指定位置。\n");
        return;
    }

    // 更新节点指针，完成插入操作
    newNode->next = previous->next;
    previous->next = newNode;
}

// 打印链表中的所有节点
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
// 删除链表中的任意节点
void deleteNode(struct Node** head, int position) {
    // 如果链表为空，直接返回
    if (*head == NULL) {
        printf("链表为空，无法删除节点。\n");
        return;
    }

    // 如果删除的是头节点
    if (position == 0) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    // 寻找要删除节点的前一个节点
    struct Node* previous = *head;
    struct Node* current = *head;
    int count = 0;
    while (current != NULL && count < position) {
        previous = current;
        current = current->next;
        count++;
    }

    // 如果删除位置超过链表长度，给出错误提示
    if (current == NULL) {
        printf("无法删除指定位置的节点。\n");
        return;
    }

    // 更新节点指针，完成删除操作
    previous->next = current->next;
    free(current);
}

int main() {
	//指向Node类型的指针 
    struct Node* head = NULL;

    // 插入节点
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    printf("链表中的节点：");
    printList(head);
    insertAtPosition(&head,50,0);
    insertAtPosition(&head,90,1);
    printf("链表中的节点（添加后）：");
    printList(head);
    deleteNode(&head,1);
    // 打印链表
    printf("链表中的节点（删除后）：");
    printList(head);

    return 0;
}
