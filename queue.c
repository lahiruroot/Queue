#include <stdio.h>
#include <stdlib.h>
#define size 5

struct queue {
    int arr[size];
    int rear;
    int front;
}st;

void enqueue(int ele)
{
    st.rear++;
    st.arr[st.rear] = ele;
}

int dequeue()
{
    int ele;
    ele=st.arr[st.front];
    st.front++;
    return(ele);
}

int isFull()
{
    if(st.rear==size-1)
        {
            return 1;
    }else{
        return 0;
        }
}

int isEmpty()
{
    if(rear==-1)
        {
            return 1;
    }else{
        return 0;
        }
}

void display ()
{
    int i;
    printf ("\n Stack of the status is\n");
    for (i = st.rear; i >= 0; i--)
        printf ("%d\n", st.arr[i]);
}

int main()
{
    st.rear = -1;
    st.front = 0;
    int c,l;
    for(l=0;l<50;l++){
        printf("\nSelect Option : \n0 : Display \n1 : EnQueue\n2 : DeQueue\n3: Exit\n\n");
        scanf("%d",&c);
        switch(c){
            case 0:
                display();
                break;
            case 1:
                printf("Enter Eliments in to Queue : ");
                int no;
                scanf("%d",&no);
                enqueue(no);
                break;
            case 2:
                printf("%d \n",dequeue());
                break;
            case 3:
                printf("Bye!");
                l=1001;
                break;
            default:
                printf("Unknown number ");
                }
    }
}

