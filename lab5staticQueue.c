#include<stdio.h>   
#include<stdlib.h>  
void insert();  
void delete();  
void display();  
void search(); 
int front = -1, rear = -1,maxsize=50;  
int queue[50];  
void main ()  
{  
    int choice;   
    while(choice != 5)   
    {     
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4 search By Id\n5.Exit\n");  
        printf("\nEnter your choice ?");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            search();  
            break; 
            case 5:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }  
}  
void insert()  
{  
    int item;  
    printf("\nEnter the element\n");  
    scanf("\n%d",&item);      
    if(rear == maxsize-1)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = item;  
    printf("\nValue inserted ");  
      
}  
void delete()  
{  
    int item;   
    if (front == -1 || front > rear)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
              
    }  
    else  
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
        printf("\nvalue deleted ");  
    }  
      
      
}  
      
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        for(i=front;i<=rear;i++)  
        {  
            printf("\n%d\n",queue[i]);  
        }     
    }  
}
void search(){
	int id,j;
	printf("EnterThe ID:");
	scanf("%d",&id);
	
    for(j=front;j<=rear;j++)  {
		if(queue[j]==id){
			printf("The position of %d is %d",id,j+1);
			break;
		}
		
	}
	if(j>rear){
		printf("This id number doesn't exit in this queue.");
	}
}
