#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(){
    int ele;
    if(top==MAX-1){
        printf("Stack Overflow\n");
    }
    else{
        printf("Enter the element to be pushed");
        scanf("%d",&ele);
        top++;
        stack[top]=ele;
        printf("Element pushed successfully");
    }
}
void pop(){
    if (top==-1){
        printf("Stack underflow");
    }
    else{
        printf("Deleted element %d",stack[top]);
        top--;
    }
}
void display(){
    int i;
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements are:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
int main(){
    int choice;
    while(1)
    {
        printf("\n---STACK MENU---\n");
        printf("1 .Push\n");
        printf("2 .Pop\n");
        printf("3 .Display\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            return 0;
            default:
            printf("Invalid choice\n");
            
            
        }
    }
    return 0;
}



OUTPUT:
STACK OVERFLOW
---STACK MENU---
1 .Push
2 .Pop
3 .Display
4.Exit
Enter your choice:1
Enter the element to be pushed1
Element pushed successfully
---STACK MENU---
1 .Push
2 .Pop
3 .Display
4.Exit
Enter your choice:1
Enter the element to be pushed2
Element pushed successfully
---STACK MENU---
1 .Push
2 .Pop
3 .Display
4.Exit
Enter your choice:1
Enter the element to be pushed3
Element pushed successfully
---STACK MENU---
1 .Push
2 .Pop
3 .Display
4.Exit
Enter your choice:1
Enter the element to be pushed4
Element pushed successfully
---STACK MENU---
1 .Push
2 .Pop
3 .Display
4.Exit
Enter your choice:1
Enter the element to be pushed5
Element pushed successfully
---STACK MENU---
1 .Push
2 .Pop
3 .Display
4.Exit
Enter your choice:1
Stack Overflow


OUPUT:
STACK UNDERFLOW
---STACK MENU---
1 .Push
2 .Pop
3 .Display
4.Exit
Enter your choice:2
Deleted element 5
---STACK MENU---
1 .Push
2 .Pop
3 .Display
4.Exit
Enter your choice:2
Deleted element 4
---STACK MENU---
1 .Push
2 .Pop
3 .Display
4.Exit
Enter your choice:2
Deleted element 3
---STACK MENU---
1 .Push
2 .Pop
3 .Display
4.Exit
Enter your choice:2
Deleted element 2
---STACK MENU---
1 .Push
2 .Pop
3 .Display
4.Exit
Enter your choice:2
Deleted element 1
---STACK MENU---
1 .Push
2 .Pop
3 .Display
4.Exit
Enter your choice:2
Stack underflow
