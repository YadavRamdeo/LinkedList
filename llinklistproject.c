#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>
void singlelinklist();
	void createsll();
	void displaysll();
	void insertatbegsll();
	void insertatendsll();
	void insertatpossll();
	void deletefrombegsll();
	void deletefromendsll();
	void deletefrompossll();
	void reverseofsll();
void doublelinklist();
	void createdll();
	void insertatbegdll();
	void insertatenddll(); 
	void insertatposdll();	
	void insertafterposdll();
	void deletefrombegdll();
	void deletefromenddll();
	void deletefromposdll();
	void reverseofdll();
void circularlinklist();
	void createcll();
	void displaycll();
	void insertatbegcll();
	void insertatendcll();
	void insertatposcll();
	void deletefrombegcll();
	void deletefromendcll();
	void deletefromposcll();
	void reverseofcll();	
void doublecircularlinklist();
	void createdcll();
	void displaydcll();
	void insertatbegdcll();
	void insertatenddcll();
	void insertatposdcll();
	void deletefrombegdcll();
	void deletefromenddcll();
	void deletefromposdcll();
	void reverseofdcll();
void exit();
	struct node
	{
		int data;
		struct node *next;
		struct node *prev;
	};
	struct node *newnode, *head, *tail, *temp, *current, *previous, *currentnode, *nextnode, *prevnode;	
	int i,n,count=0,pos,m=1,choice;

int main() // main function, code will start executing from here
{	
	while (1)
	{
		system("color A");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" *************************   LINKED LIST  OPERATION BY  **************************\n");
		printf("                             R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("   1.SINGLE LINK LIST\n");
		printf("   2.DOUBLE LINK LIST \n");
		printf("   3.CIRCULAR LINK LIST \n");
		printf("   4.DOUBLE CIRCULAR LINK LIST\n");
		printf("   0.EXIT\n");
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				singlelinklist();
				break;
			case 2:
				doublelinklist();
				break;
			case 3:
				circularlinklist();
				break;
			case 4:
				doublecircularlinklist();
				break;
			case 0:
				exit(1);
				break;
			default:
				printf("PRESS 0 TO EXIT");
				break;
		}		
	}
	return 0;
}

void singlelinklist()
{
	while (1)
	{
		system("color 1");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" **********************  SINGLY LINKED LIST OPERATION BY  ***********************\n");
		printf("                            R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("   1.CREATE\n");
		printf("   2.DISPLAY\n");
		printf("   3.INSERT AT BEGENING\n");
		printf("   4.INSERT AT ENDING\n");
		printf("   5.INSERT AT POSITION\n");
		printf("   6.DELETE FROM BEGINING\n");
		printf("   7.DELETE FROM ENDING\n");
		printf("   8.DELETE FROM POSITION\n");
		printf("   9.REVERSE OF SINGLE LINK LIST \n");
		printf("   0.EXIT\n");
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				createsll();
				break;
			case 2:
				displaysll();
				break;
			case 3:
				insertatbegsll();
				break;
			case 4:
				insertatendsll();
				break;
			case 5:
				insertatpossll();
				break;
			case 6:
				deletefrombegsll();
				break;
			case 7:
				deletefromendsll();
				break;
			case 8:
				deletefrompossll();
				break;
			case 9:
				reverseofsll();
				break;
			case 0:
				exit(1);
				break;
			default:
				printf("PRESS 0 TO EXIT");
				break;
		}		
	}
}

void doublelinklist()
{
		while (1)
	{
		system("color 1");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" **********************  DOUBLY LINKED LIST OPERATION BY  ***********************\n");
		printf("                            R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("   1.CREATE\n");
		printf("   2.DISPLAY\n");
		printf("   3.INSERT AT BEGENING\n");
		printf("   4.INSERT AT ENDING\n");
		printf("   5.INSERT AT POSITION\n");
		printf("   6.INSERT AFTER POSITION\n");
		printf("   7.DELETE FROM BEGINING\n");
		printf("   8.DELETE FROM ENDING\n");
		printf("   9.DELETE FROM POSITION\n");
		printf("   10.REVERSE OF DOUBLY LINK LIST \n");
		printf("   0.EXIT\n");
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				createdll();
				break;
			case 2:
				displaysll();
				break;
			case 3:
				insertatbegdll();
				break;
			case 4:
				insertatenddll();
				break;
			case 5:
				insertatposdll();
			case 6:
				insertafterposdll();
				break;
			case 7:
				deletefrombegdll();
				break;
			case 8:
				deletefromenddll();
				break;
			case 9:
				deletefromposdll();
				break;
			case 10:
				reverseofdll();
				break;
			case 0:
				exit(1);
				break;
			default:
				printf("PRESS 0 TO EXIT");
				break;
		}		
	}
}

void circularlinklist()
{
	while (1)
	{
		system("color 1");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" **********************  CIRCULAR LINKED LIST OPERATION BY  ***********************\n");
		printf("                            R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("   1.CREATE\n");
		printf("   2.DISPLAY\n");
		printf("   3.INSERT AT BEGENING\n");
		printf("   4.INSERT AT ENDING\n");
		printf("   5.INSERT AT POSITION\n");
		printf("   6.DELETE FROM BEGINING\n");
		printf("   7.DELETE FROM ENDING\n");
		printf("   8.DELETE FROM POSITION\n");
		printf("   9.REVERSE OF CIRCULAR LINK LIST \n");
		printf("   0.EXIT\n");
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				createcll();
				break;
			case 2:
				displaycll();
				break;
			case 3:
				insertatbegcll();
				break;
			case 4:
				insertatendcll();
				break;
			case 5:
				insertatposcll();
				break;
			case 6:
				deletefrombegcll();
				break;
			case 7:
				deletefromendcll();
				break;
			case 8:
				deletefromposcll();
				break;
			case 9:
				reverseofcll();
				break;
			case 0:
				exit(1);
				break;
			default:
				printf("PRESS 0 TO EXIT");
				break;
		}		
	}
}

void doublecircularlinklist()
{
	while (1)
	{
		system("color 1");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" **********************  DOUBLY CIRCULAR LINKED LIST OPERATION BY  ***********************\n");
		printf("                            R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("   1.CREATE\n");
		printf("   2.DISPLAY\n");
		printf("   3.INSERT AT BEGENING\n");
		printf("   4.INSERT AT ENDING\n");
		printf("   5.INSERT AT POSITION\n");
		printf("   6.DELETE FROM BEGINING\n");
		printf("   7.DELETE FROM ENDING\n");
		printf("   8.DELETE FROM POSITION\n");
		printf("   9.REVERSE OF DOUBLE CIRCULAR LINK LIST \n");
		printf("   0.EXIT\n");
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				createdcll();
				break;
			case 2:
				displaydcll();
				break;
			case 3:
				insertatbegdcll();
				break;
			case 4:
				insertatenddcll();
				break;
			case 5:
				insertatposdcll();
				break;
			case 6:
				deletefrombegdcll();
				break;
			case 7:
				deletefromenddcll();
				break;
			case 8:
				deletefromposdcll();
				break;
			case 9:
				reverseofdcll();
				break;
			case 0:
				exit(1);
				break;
			default:
				printf("PRESS 0 TO EXIT");
				break;
		}		
	}
}


void createdll() 
{
	system("color A");
	printf("HOW MANY NODE YOU WANT TO INSERT\n");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		newnode = (struct node *)malloc(sizeof(struct node));	
		printf("ENTER DATA:\n");
		scanf("%d", &newnode->data);
		newnode->next = 0; 
		newnode->prev = 0; 
		if (head == 0)
		{
			head = temp = newnode;
		}  
		else
		{
			temp->next = newnode; 
			newnode->prev=temp; 
			temp = newnode; 
		}
	}
	printf("DATA CREATED SUCCESSFULLY");
}

void createcll() 
{
	system("color A");
	printf("HOW MANY NODE YOU WANT TO INSERT\n");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		newnode = (struct node *)malloc(sizeof(struct node));	
		printf("ENTER DATA:\n");
		scanf("%d", &newnode->data);
		newnode->next = 0; 
		if (head == 0)
		{
			head = tail = newnode; 
		}  
		else
		{
			tail->next = newnode; 
			tail = newnode;	
			temp->next=head; 		
		}
		
	}
	printf("DATA CREATED SUCCESSFULLY");
}
void createdcll() 
{
	system("color A");
	printf("HOW MANY NODE YOU WANT TO INSERT\n");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		newnode = (struct node *)malloc(sizeof(struct node));	
		printf("ENTER DATA:\n");
		scanf("%d", &newnode->data);
		if (head == 0)
		{
			head = tail = newnode; 
			head->next=head;
			head->prev=head;
		}  
		else
		{
			tail->next = newnode; 
			newnode->prev=tail;
			nextnode->next=head;
			head->prev=newnode;
			tail=newnode;			
		}
	}
	printf("DATA CREATED SUCCESSFULLY");
}

void displaysll() 
{	
	system("color B");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{
		printf("\nTHE ENTERED DATA ARE\n");
		temp = head;
		while(temp != 0)
		{	
			printf("%d  ",temp->data);
			temp = temp->next;
			count++;
		}	
		printf("\nTOTAL DATA ENTERED ARE = %d",count);	
	}
}

void displaycll() 
{	
	system("color B");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{
		printf("\nTHE ENTERED DATA ARE\n");
		temp = head;
		while(temp->next!= head)
		{	
			printf("%d  ",temp->data);
			temp = temp->next;
			count++;
		}	
		printf("%d",temp->data);
		count++;
		printf("\nTOTAL DATA ENTERED ARE = %d",count);	
	}
}

void displaydcll() 
{	
	system("color B");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{
		printf("\nTHE ENTERED DATA ARE\n");
		temp = head;
		while(temp!= tail)
		{	
			printf("%d  ",temp->data);
			temp = temp->next;
			count++;
		}	
		printf("%d",temp->data);
		count++;
		printf("\nTOTAL DATA ENTERED ARE = %d",count);	
	}
}
void reverseofsll() // reverse of lnk list is little bit tricky be care full.
{
	if(head==0)
	{
		printf("\nEMPTY LIST\n"); 
	}
	else
	{
		prevnode=0;
		currentnode=nextnode=head;
		while(nextnode!=0)
		{
			nextnode=nextnode->next;
			currentnode->next=prevnode;
			prevnode=currentnode;
			currentnode=nextnode;
		}
		head=prevnode;
		printf("DATA REVERSED SUCCESSFULLY"); // note:- data has been reversed but count is increasing, and still data is same.
	}
}

void reverseofdll() // reverse of lnk list is little bit tricky be care full.
{
	if(head==0)
	{
		printf("\nEMPTY LIST\n"); 
	}
	else
	{
		currentnode=head;
		while(currentnode!=0)
		{
			nextnode=currentnode->next;
			currentnode->next=currentnode->prev;
			currentnode->prev=nextnode;
			currentnode=nextnode;
		}
		currentnode=head;
		head=tail;
		tail=currentnode;
		printf("DATA REVERSED SUCCESSFULLY"); // note:- data has been reversed but count is increasing, and still data is same.
	}
}
void reverseofcll()
{
	current=tail->next;
	if(tail==0)
	{
		printf("\nEMPTY LIST\n"); 
	}
	else
	{
		while(current!=tail)
		{
			previous=current;
			current=nextnode;
			nextnode=current->next;
			current->next=previous;			
		}
		nextnode->next=tail;
		tail=nextnode;
		printf("DATA REVERSED SUCCESSFULLY"); // note:- data has been reversed but count is increasing, and still data is same.
	}
}	

void reverseofdcll()
{
	
} 

void createsll() 
{
	system("color A");
	printf("HOW MANY NODE YOU WANT TO INSERT\n");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		newnode = (struct node *)malloc(sizeof(struct node));	
		printf("ENTER DATA:\n");
		scanf("%d", &newnode->data);
		newnode->next = 0; 
		if (head == 0)
		{
			head = temp = newnode; 
		}  
		else
		{
			temp->next = newnode; 
			temp = newnode;
		}
	}
	printf("DATA CREATED SUCCESSFULLY");
}

void insertatbegsll() 
{
	system("color C");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("INSERT AT BEGENING\n");
		scanf("%d",&newnode->data);
		newnode->next=head;
		head=newnode;
		printf("DATA INSERTED SUCCESSFULLY FROM BEGENING"); // when data inserted, problem in count its showing extra data.
	}	
}

void insertatbegdll() 
{
	system("color C");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("INSERT AT BEGENING\n");
		scanf("%d",&newnode->data);
		newnode->next = 0; // for doubly link list.
		newnode->prev = 0; // for doubly link list.
		head->prev= newnode; //for doubly link list.
		newnode->next=head;
		head=newnode;
		printf("DATA INSERTED SUCCESSFULLY FROM BEGENING"); // when data inserted, problem in count its showing extra data.
	}	
}

void insertatbegcll() 
{
	system("color C");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("INSERT AT BEGENING\n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(tail==0)
		{
			tail=newnode;
			tail->next=newnode;
		}
		else
		{
			newnode->next=tail->next;
			tail->next=newnode;
		}
		printf("DATA INSERTED SUCCESSFULLY FROM BEGENING"); // when data inserted, problem in count its showing extra data.
	}	
}
void insertatbegdcll() 
{
	system("color C");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("INSERT AT BEGENING\n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=tail=newnode;
			newnode->prev=tail;
			newnode->next=head;
		}
		else
		{
			newnode->next=head;
			head->prev=newnode;
			newnode->prev=tail;
			tail->next=newnode;
			head=newnode;
		}
		printf("DATA INSERTED SUCCESSFULLY FROM BEGENING"); // when data inserted, problem in count its showing extra data.
	}	
}

void insertatendsll() 
{
	system("color D");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("INSERT AT ENDING\n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		temp=head;
		while(temp->next!=0)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		printf("DATA INSERTED SUCCESSFULLY FROM ENDING");
	}
}

void insertatenddll() 
{
	system("color D");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("INSERT AT ENDING\n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		newnode->prev = 0; 
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
		printf("DATA INSERTED SUCCESSFULLY FROM ENDING");
	}
}

void insertatendcll() 
{
	system("color C");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("INSERT AT ENDING \n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(tail==0)
		{
			tail=newnode;
			tail->next=newnode;
		}
		else
		{
			newnode->next=tail->next;
			tail->next=newnode;
			tail=newnode;
		}
		printf("%d DATA INSERTED SUCCESSFULLY FROM ENDING",tail->next->data); // when data inserted, problem in count its showing extra data.
	}	
}
void insertatenddcll() 
{
	system("color C");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("INSERT AT ENDING \n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=tail=newnode;
			newnode->prev=tail;
			newnode->next=head;
		}
		else
		{
			newnode->prev=tail;
			tail->next=newnode;
			newnode->next=head;
			head->prev=newnode;
			tail=newnode;
		}
		printf("%d DATA INSERTED SUCCESSFULLY FROM ENDING",tail->next->data); // when data inserted, problem in count its showing extra data.
	}	
}

void insertatpossll() 
{
	system("color E");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{		
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("INSERT AT POSITION\n");
		scanf("%d",&pos);
		if(pos>count)
		{
			printf("INVALID POSITION");
		}
		else
		{
			temp=head;
			while(m<pos)
			{
				temp=temp->next;
				m++;
			}
			printf("ENTER DATA\n");
			scanf("%d",&newnode->data);
			newnode->next=temp->next; 
			temp->next=newnode;
		}
		printf("DATA INSERTED SUCCESSFULLY FROM POSITION");	
	}
}

void insertatposdll() 
{
	system("color E");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{		
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("INSERT AT POSITION\n");
		scanf("%d",&pos);
		if(pos<1 || pos>count)
		{
			printf("INVALID POSITION");
		}
		else if(pos==1)
		{
			insertatbegdll();
		}
		else
		{
			temp=head;
			while(m<pos-1)// doubly link list difference
			{
				temp=temp->next;
				m++;
			}
			printf("ENTER DATA\n");
			scanf("%d",&newnode->data);
			newnode->prev=temp; // doubly link list difference
			newnode->next=temp->next; 
			temp->next=newnode;
			newnode->next->prev=newnode; //doubly link list difference
			printf("DATA INSERTED SUCCESSFULLY FROM POSITION");
		}
	}
}

void insertatposcll() 
{
	system("color E");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{		
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("INSERT AT POSITION\n");
		scanf("%d",&pos);
		if(pos<1 || pos>count)
		{
			printf("INVALID POSITION");
		}
		else if(pos==1)
		{
			insertatbegcll();
		}
		else
		{
			temp=tail->next;
			while(m<pos-1)// doubly link list difference
			{
				temp=temp->next;
				m++;
			}
			printf("ENTER DATA\n");
			scanf("%d",&newnode->data);
			newnode->next=temp->next; 
			temp->next=newnode;
			printf("DATA INSERTED SUCCESSFULLY FROM POSITION");
		}
	}
}
void insertatposdcll() 
{
	system("color E");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{		
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("INSERT AT POSITION\n");
		scanf("%d",&pos);
		if(pos<1 || pos>count)
		{
			printf("INVALID POSITION");
		}
		else if(pos==1)
		{
			insertatbegdcll();
		}
		else
		{
			temp=head;
			while(m<pos-1)// doubly link list difference
			{
				temp=temp->next;
				m++;
			}
			printf("ENTER DATA\n");
			scanf("%d",&newnode->data);
			newnode->prev=temp; 
			newnode->next=temp->next;
			temp->next->prev=newnode;
			temp->next=newnode;
			printf("DATA INSERTED SUCCESSFULLY FROM POSITION");
		}
	}
}


void insertafterposdll() 
{
	system("color E");
	if(head==0)
	{
		printf("\nEMPTY NODE\n"); 
	}
	else
	{		
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("INSERT AT POSITION\n");
		scanf("%d",&pos);
		if(pos<1 || pos>count)
		{
			printf("INVALID POSITION");
		}
		else
		{
			temp=head;
			while(m<pos)// doubly link list difference
			{
				temp=temp->next;
				m++;
			}
			printf("ENTER DATA\n");
			scanf("%d",&newnode->data);
			newnode->prev=temp; // doubly link list difference
			newnode->next=temp->next; 
			temp->next=newnode;
			newnode->next->prev=newnode; //doubly link list difference
			printf("DATA INSERTED SUCCESSFULLY AFTER POSITION");
		}
	}
}

void deletefrombegsll()
{
	if(head==0)
	{
		printf("\nEMPTY NODE");
	}
	else
	{
		temp=head;
		head=head->next;
		free(temp);
		printf("NODE DELETED FROM BEGENING");
	}
}

void deletefrombegdll()
{
	if(head==0)
	{
		printf("\nEMPTY NODE");
	}
	else
	{
		temp=head;
		head=head->next;
		head->next=0; // for doubly link list
		temp->next=0; // for doubly link list
		free(temp);
		printf("NODE DELETED FROM BEGENING");
	}
}

void deletefrombegcll()
{
	if(head==0)
	{
		printf("\nEMPTY NODE");
	}
	else if(temp->next==temp)
	{
		tail=0;	
	}
	else
	{
		tail->next=temp->next;
		free(temp);
		printf("NODE DELETED FROM BEGENING");
	}
}
void deletefrombegdcll()
{
	temp=head;
	if(head==0)
	{
		printf("\nEMPTY NODE");
	}
	
	else if(head->next==head)
	{
		tail=0;
		free(temp);
	}
	else
	{
		head=head->next;
		head->prev=tail;
		tail->next=head;
		free(temp);
		printf("NODE DELETED FROM BEGENING");
	}
}

void deletefromendsll()
{
	if(head==0)
	{
		printf("\nEMPTY NODE");
	}
	else
	{
		temp=head;
		while(temp->next!=0)
		{
			prevnode=temp;
			temp=temp->next;
		}
		if(temp==head)
		{
			head=0;
		}
		else
		{
			prevnode->next=0;
		}
		free(temp);
		printf("NODE DELETED FROM ENDING");
	}
}

void deletefromenddll()
{
	if(head==0)
	{
		printf("\nEMPTY NODE");
	}
	else
	{
		temp=tail;
		tail=tail->prev;
		tail->next=0;
		free(temp);
		printf("NODE DELETED FROM BEGENING");
	}
}
void deletefromendcll()
{
	current=tail->next;
	if(tail==0)
	{
		printf("\nEMPTY NODE");
	}
	else if (current->next==current)
	{		
		tail=0;
		free(current);
	}
	else
	{
		while(current->next!=tail->next)
		{
			previous=current;
			current=current->next;
		}
		previous->next=tail->next;
		tail=previous;
		free(current);
		printf("NODE DELETED FROM ENDING");
	}
}
void deletefromenddcll()
{
	temp=tail;
	if(tail==0)
	{
		printf("\nEMPTY NODE");
	}
	else if (head->next==head)
	{		
		head=tail=0;
		free(temp);
	}
	else
	{
		tail=tail->prev;
		tail->next=head;
		head->prev=tail;
		free(temp);
		printf("NODE DELETED FROM ENDING");
	}
}

void deletefrompossll()
{
	if(head==0)
	{
		printf("\nEMPTY NODE");
	}
	else 
	{
		if (pos==1)
		{
			deletefrombegsll();
		}
		else if(pos==count)
		{
			deletefromendsll();
		}
		else
		{
			temp=head;
			printf("ENTER POSITION\n");
			scanf("%d",&pos);
			while(m<pos)
			{
				temp=temp->next;
				m++;
			}
			temp->prev->next=temp->next;
			temp->next=temp->prev;
			free(temp);
		}
		printf("NODE DELETED FROM POSITION");
	}
}

void deletefromposdll()
{
	if(head==0)
	{
		printf("\nEMPTY NODE");
	}
	else
	{
		temp=head;
		printf("ENTER POSITION\n");
		scanf("%d",&pos);
		while(m<pos-1)
		{
			temp=temp->next;
			m++;
		}
		nextnode=temp->next;
		temp->next=nextnode->next;
		free(temp);
		printf("NODE DELETED FROM POSITION");
	}
}
void deletefromposcll()
{
	if(head==0)
	{
		printf("\nEMPTY NODE");
	}
	else
	{
		printf("ENTER POSITION\n");
		scanf("%d",&pos);
		current=tail->next;
		if(pos<1 || pos>count)
		{
			printf("INVALID POSITION");
		}
		else if(pos==1)
		{
			deletefrombegcll();
		}
		else
		{
			while(m<pos-1)
			{
				current=current->next;
				m++;
			}
			nextnode=current->next;
			temp->next=nextnode->next;
			free(nextnode);
			printf("NODE DELETED FROM POSITION");
		}
	}	
}
void deletefromposdcll()
{
	if(head==0)
	{
		printf("\nEMPTY NODE");
	}
	else
	{
		printf("ENTER POSITION\n");
		scanf("%d",&pos);
		temp=head;
		if(pos<1 || pos>count)
		{
			printf("INVALID POSITION");
		}
		else if(pos==1)
		{
			deletefrombegdcll();
		}
		else
		{
			while(m<pos)
			{
				temp=temp->next;
				m++;
			}
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
			if(temp->next==head)
			{
				tail=temp->prev;
				free(temp);
			}
			free(temp);
			printf("NODE DELETED FROM POSITION");
		}
	}	
}
