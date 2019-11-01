#include <iostream>

using namespace std;
struct node 
{
int data;
node *next;
};
class list 
{
private :
node *head ,*tail;
public :
list();
void createnode (int value);
void display();
void insert_start(int value);
void insert_position (int pos , int value );
void delete_first();
void delete_last();
void delete_position (int position);
} ;
