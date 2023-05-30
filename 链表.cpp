#include <stdio.h>
#include <stdlib.h>

// ��������ڵ�Ľṹ
//����ĵ�һ��һ���ǿ� 
struct Node {
    int data;           // ����Ԫ��
    struct Node* next;  // ָ����һ���ڵ��ָ�룬һ��ָ�룬�Զ���Ľṹ��Ϊ���� 
};

// ������ĩβ����һ���ڵ�
void insertAtEnd(struct Node** head, int data) {
    // ����һ���½ڵ�
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    //���µĽڵ� ��ֵ 
    newNode->data = data;
    newNode->next = NULL;

    // �������Ϊ�գ����½ڵ���Ϊͷ�ڵ�
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // ���������ҵ����һ���ڵ�
    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    // ���½ڵ���뵽���һ���ڵ�ĺ���
    current->next = newNode;
}


void insertAtPosition(struct Node** head, int data, int position) {
    // �����½ڵ�
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    // �������λ��Ϊ����ͷ������ֱ�ӽ��½ڵ���Ϊͷ�ڵ�
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    // Ѱ�Ҳ���λ�õ�ǰһ���ڵ�
    struct Node* previous = *head;
    for (int i = 0; i < position - 1 && previous != NULL; i++) {
        previous = previous->next;
    }

    // �������λ�ó��������ȣ�����뵽����ĩβ
    if (previous == NULL) {
        printf("�޷����뵽ָ��λ�á�\n");
        return;
    }

    // ���½ڵ�ָ�룬��ɲ������
    newNode->next = previous->next;
    previous->next = newNode;
}

// ��ӡ�����е����нڵ�
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
// ɾ�������е�����ڵ�
void deleteNode(struct Node** head, int position) {
    // �������Ϊ�գ�ֱ�ӷ���
    if (*head == NULL) {
        printf("����Ϊ�գ��޷�ɾ���ڵ㡣\n");
        return;
    }

    // ���ɾ������ͷ�ڵ�
    if (position == 0) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    // Ѱ��Ҫɾ���ڵ��ǰһ���ڵ�
    struct Node* previous = *head;
    struct Node* current = *head;
    int count = 0;
    while (current != NULL && count < position) {
        previous = current;
        current = current->next;
        count++;
    }

    // ���ɾ��λ�ó��������ȣ�����������ʾ
    if (current == NULL) {
        printf("�޷�ɾ��ָ��λ�õĽڵ㡣\n");
        return;
    }

    // ���½ڵ�ָ�룬���ɾ������
    previous->next = current->next;
    free(current);
}

int main() {
	//ָ��Node���͵�ָ�� 
    struct Node* head = NULL;

    // ����ڵ�
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    printf("�����еĽڵ㣺");
    printList(head);
    insertAtPosition(&head,50,0);
    insertAtPosition(&head,90,1);
    printf("�����еĽڵ㣨��Ӻ󣩣�");
    printList(head);
    deleteNode(&head,1);
    // ��ӡ����
    printf("�����еĽڵ㣨ɾ���󣩣�");
    printList(head);

    return 0;
}
