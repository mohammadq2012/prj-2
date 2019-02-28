#include<iostream>
#include<stdlib.h>
struct node{
	int x;
	node *next;
	char name[50];
}*first,*p,*q;
void delet(int n)
{
	q=first;
	if(n==first->x)
	{
		first=first->next;
	}
	while(q->next->x!=n)
	{
		q=q->next;
	}
	q->next=q->next->next;
}
int main()
{
	long long int n;
	scanf("%lli",&n);
	first=(node *)malloc(sizeof(node));
	p=first;
	p->x=1;
	//printf("enter the name  1 of %d",n);
	//scanf("%s",p->name);
	for(int i=2;i<=n;i++)
	{
		p->next=(node *)malloc(sizeof(node));
		p=p->next;
		p->x=i;
		//printf("enter the name  %d of %d",i,n);	
		//scanf("%s",p->name);
	}
	
	p->next=first;  //charkheshi
	
	p=first;  //az 1 shoro mikne
	while(p->x!=p->next->x)
	{
		printf("%d kill %d\n",p->x,p->next->x);
		delet(p->next->x);
		p=p->next;
	}
	printf("%d survive",p->x);
}
