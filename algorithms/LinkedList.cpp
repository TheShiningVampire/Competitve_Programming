#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* next;
};

node *head;

void printList()
{
	node* temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<"->";
		temp = temp->next;
	} 
	cout<<endl;
}

void insertToList(int x)
{
	node* temp = head;
	if(head == NULL)
	{	
		temp = new node();
		temp->data = x;
		temp->next = NULL;
		head =temp;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		
		temp->next = new node();
		temp = temp->next;
		temp->data = x;
		temp->next = NULL;
		
	}
	
	
}

int main()
{	
	int a[]={1,6,8,7,9,2,4,6,8,1,0,25};
	head = NULL;
	for(int i=0;i<12;i++)
	{
		insertToList(a[i]);
	}
	printList();
	return 0 ;
}
