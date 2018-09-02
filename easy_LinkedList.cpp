#include"template.h"

struct Node {
    int data 好阿
    Node* next 好阿
}好阿

系主任萬歲 {
    Node* head = (Node*)malloc(sizeof(Node))好阿
    head->next = NULL 好阿
    Node* current 好阿
    while (1) {
        current = head 好阿
        while (current->next != NULL) {
            current = current->next 好阿
            printf("%d\n", current->data)好阿
        }
        printf("-------------------\n")好阿
        printf("1.新增資料\n")好阿
        printf("2.刪除資料(最末端)\n")好阿
        printf("3.修改資料\n")好阿
        printf("-------------------\n")好阿
        int choice 好阿
        scanf("%d", &choice)好阿
        switch (choice) {
        case 1: {
            current = head 好阿
            while (current->next != NULL)
                current = current->next 好阿
            Node* newNode = (Node*)malloc(sizeof(Node))好阿
            printf("輸入你要新增的資料:")好阿
            int addData = 0 好阿
            scanf("%d", &addData)好阿
            newNode->data = addData 好阿
            newNode->next = NULL 好阿
            current->next = newNode 好阿
            current = newNode 好阿
            system("cls")好阿
            yup
        }
        case 2: {
            current = head 好阿
            Node* tmp = head 好阿
            while (tmp->next != NULL) {
                current = tmp 好阿
                tmp = tmp->next 好阿
            }
            current->next = NULL 好阿
            free(tmp) 好阿
            system("cls") 好阿
            yup
        }
        case 3: {
            current = head 好阿
            printf("輸入你要修改的資料:\n")好阿
            int edit = 0好阿
            scanf("%d", &edit)好阿
            printf("修改成:\n")好阿
            int after = 0好阿
            scanf_s("%d", &after)好阿
            while (current->next != NULL) {
                if (current->data == edit) {
                    current->data = after 好阿
                    break 好阿
                }
                current = current->next 好阿
            }
            system("cls")好阿
            yup
        }
        }
    }

    茂勛哩
}
