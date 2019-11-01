#include "LinkedList.h"
#include <iostream>
using namespace std;
list :: list ()
{ 
head=NULL;
tail=NULL;
}
 void list::createnode (int value)
 {
	 node* temp = new node ;
	 temp->data=value;
	 temp->next=NULL;
	 if (head==NULL)
	 {
		head=temp;
		tail=temp;
	 }
	 else 
	 {
		 tail->next =temp;
	 tail=temp;
	 }
 }
 void  list::display ( )
  {
	  node *temp = new node;
	  temp=head;
  while ( temp!=NULL)
{
cout << temp->data  << " " ;temp = temp->next;
}
cout << endl;
}  
void list::insert_start(int data)
{ node* newstart= new node;
newstart-> data= data;
newstart->next= head;
head = newstart;
return;
}
void list::insert_position( int pos,int data1)
{ pos=pos-1;
	node* newmid= new node;
	
	newmid->data=data1;
	node *temp=head;
	
		
	for (int i=0; temp->next!=NULL && i<pos-1; i++)
	{
		temp=temp->next;
	}
	if (temp->next ==NULL){ cout <<"can not be last";  return ;}
	newmid->next = temp->next;
temp->next = newmid;
return;}
void  list::delete_first()
  {
	  
   
   if ( head->next ==NULL)
   { cout <<" one element list cant be made empty " ;
   return ;
   }
   head-> data= head-> next -> data;
   node *reqpos = head -> next;
   head-> next = head -> next-> next; 
   free (reqpos);
   return ;  
  }
 void list::delete_last ( )
  {
    node* prv = head;
	
	
	   while ( prv->next->next!=NULL )
	   { 
   
   prv = prv-> next; 
	   }
 free (prv->next->next);
prv-> next=NULL;
  return ;
   
  } 
 void list::delete_position(  int pos )
  { pos=pos-1;
	  node * pofreqpos1=head;
	  if ( pos==0)
	  { head =pofreqpos1->next; return ;}
 
 // pofreqpos1-> next = *head-> next ;
  for (int i=0; pofreqpos1->next!=NULL && i<(pos-1);i++)
  {pofreqpos1 = pofreqpos1->next ;}
if ( pofreqpos1 == NULL || pofreqpos1-> next == NULL)
{return ;}
node *morenext = pofreqpos1->next->next;
free (pofreqpos1->next);
pofreqpos1->next = morenext;
return;
  }
