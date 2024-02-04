//JAI SHRI RAM
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int n;
int add(int q[],int *f,int *r,int *elem)
{   
    if(*f==-1 && *r==-1)
        *f=*r=0;
    else
        *r=(*r+1)%n;
    q[*r]=*elem;
    printf("\n %d is added to queue \n",*elem); 
}
int pop(int q[],int *f,int *r)
{    
     if(*f==-1 && *r==-1)
     {
        printf("\n Queue is Empty ");
        return 0;
     }
     else if(*f==*r)
     {
        printf("\n the elment deleted is : %d \n",q[*f]);
        *f=*r=-1;
     }
     else
     {
        printf("\n the elment deleted is : %d \n",q[*f]);
        *f=(*f+1)%n;
     }
     
}
bool isFull(int *f,int *r)
{
     return (*r+1)%n==*f;
}
bool isEmpty(int *f,int *r)
{
   return *f==-1;
}
int display(int q[],int *f,int *r)
{   
    if(*f==-1)
     {
        printf("\nqueue is Empty\n");
        return 0;
     }
    int i=*f;
    while(i!=*r)
    {
        printf("\n %d",q[i]);
        i=(i+1)%n;
    }
    printf("\n %d",q[*r]);
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
                if (f==(r+1)%n)
                    printf("\n Queue is full \n");
                else
                {
                    int elem;
                    printf("\n Enter the element to be added :");
                    scanf("%d",&elem);
                    add(queue, &f,&r,&elem);
                }    
                    
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