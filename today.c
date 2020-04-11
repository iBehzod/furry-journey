#include <stdio.h>
  #include <stdlib.h>

  struct cStackNode {
        int data;
        struct cStackNode *next;
  };

  struct cStackNode *head = NULL;

  struct cStackNode * createNode(int data) {
        struct cStackNode *newnode;
        newnode = (struct cStackNode *)malloc(sizeof (struct cStackNode));
        newnode->data = data;
        newnode->next = NULL;
  }

  /* Insert node into the stack */
  void push(int data) {
        struct cStackNode *newnode, *tmp;
        int tmpData;
        if (!head) {
                head = createNode(data);
                head->next = head;
        } else {
                /*
                 * swap the contents of newnode
                 * and temp.  Insert the newnode
                 * next to head.  It's equivalent
                 * to adding node at the front
                 */
                newnode = createNode(data);
                tmp = head->next;
                head->next = newnode;
                newnode->next = tmp;
                tmpData = newnode->data;
                newnode->data = head->data;
                head->data = tmpData;
        }
  }

  /* Delete node at the front */
  void pop() {
        struct cStackNode *tmp;
        int tmpdata;
        if (!head) {
                printf("Circular Stack is empty\n");
                return;
        }
        if (head->next == head) {
                free(head);
                head = NULL;
                return;
        }
        tmp = head->next;
        head->data = tmp->data;
        head->next = tmp->next;
        free(tmp);
  }

  /* Display the contents of the Circular stack */
  void display() {
        struct cStackNode *tmp = head;
        if (!head) {
                printf("Circular Stack is empty\n");
                return;
        }
        printf("%-3d", head->data);
        tmp = tmp->next;
        while (tmp != head) {
                printf("%-3d", tmp->data);
                tmp = tmp->next;
        }
        printf("\n");
        return;
  }


  int main() {

        int data, ch;

        while (1) {
                printf("1. Push   \t2.Pop\n");
                printf("3. Display\t4.Exit\n");
                printf("Please enter your choice:");
                scanf("%d", &ch);
                switch (ch) {
                        case 1:
                                printf("Enter the data to insert:");
                                scanf("%d", &data);
                                push(data);
                                break;
                        case 2:
                                pop();
                                break;
                        case 3:
                                display();
                                break;
                        case 4:
                                exit(0);
                        default:
                                printf("Please enter correct option\n");
                                break;
                }
        }
        return 0;
  }