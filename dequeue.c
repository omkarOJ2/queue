//JAI SHRI RAM
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int n;
int insertf(int q[],int *f,int *r)
{
    if(*f==-1 ){
        printf("\ninsertion from front is not posible\n");
        return 0;
    }
    int elem;
    printf("\nEnter the elemenet to be added:");
    scanf("%d",&elem);
    q[(*f)--]=elem;
}
int insertr(int q[],int *f,int *r)
{
    if(*r==n-1){
        printf("\ninsertion from rear is not posible\n");
        return 0;
    }
    int elem;
    printf("\nEnter the elemenet to be added:");
    scanf("%d",&elem);
    q[++(*r)]=elem;
}
int popf(int q[],int *f,int *r)
{
     if(*r==*f){
        printf("\nqueue is Empty\n");
        return 0;
     }
     printf("\n the deleted  elemenet is : %d",q[++(*f)]);
}

int popr(int q[],int *f,int *r)
{
     if(*r==*f){
        printf("\nqueue is Empty\n");
        return 0;
     }
     printf("\n the deleted  elemenet is : %d",q[--(*r)]);  
}
bool isFull(int *f,int *r)
{
     return (*r==n-1 && *f==-1);
}
bool isEmpty(int *f,int *r)
{
   return (*r==*f);
}
int display(int q[],int *f,int *r)
{   
    if(*r==*f){
        printf("\n queue is Empty \n");
        return 0;
     }
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
        printf("\n The choices are :\n 1. Insert from front \n 2. Insert from rear\n 3. pop from front \n 4. pop from rear\n 5. Display  \n 6. Is Full\n 7. Is Empty  \n 8. Exit");
        printf("\nEnter your choice :");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                insertf(queue, &f,&r);
                break;
            case 2:
                insertr(queue, &f,&r);
                break;
            case 3:
                popf(queue, &f ,&r);
                break;
             case 4:
                popr(queue, &f ,&r);
                break;
            case 5:
                display(queue,&f,&r);
                break;
            case 6:
                    printf("\n Is Full: %s\n", isFull(&f,&r) ? "true" : "false");
                break;
            case 7:
                printf("\n Is Empty: %s\n", isEmpty(&f,&r) ? "true" : "false");
                break;
            case 8:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    

}