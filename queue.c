//JAI SHRI RAM
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int n;
int add(int q[],int *f,int *r)
{
    if(*r==n-1){
        printf("\nqueue is Full\n");
        return 0;
    }
    int elem;
    printf("\nEnter the elemenet to be added:");
    scanf("%d",&elem);
    q[++(*r)]=elem;
}
int pop(int q[],int *f,int *r)
{
     if(*r==*f){
        printf("\nqueue is Empty\n");
        return 0;
     }
     printf("\n the deleted  elemenet is : %d",q[++(*f)]);
}
bool isFull(int *f,int *r)
{
     return *r==n-1;
}
bool isEmpty(int *f,int *r)
{
   return *r==*f;;
}
void display(int q[],int *f,int *r)
{
    for(int i=*f+1;i<=*r;i++)
        printf("\n%d",q[i]);
}

int main()
{
    int ch;
    printf("\n Enter the length of queue : ");
    scanf("%d",&n);
    int queue[n],f=-1,r=-1;
    while (1) 
    {
        printf("\n The choices are :\n 1. Add\n 2. Pop\n 3. Display \n 4. Is Full\n 5. Is Empty  \n 6. Exit");
        printf("\nEnter your choice :");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                add(queue, &f,&r);
                break;
            case 2:
                pop(queue, &f, &r);
                break;
            case 3:
                display(queue, &f ,&r);
                break;
            case 4:
                    printf("\n Is Full: %s\n", isFull(&f,&r) ? "true" : "false");
                break;
            case 5:
                printf("\n Is Empty: %s\n", isEmpty(&f,&r) ? "true" : "false");
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    

}