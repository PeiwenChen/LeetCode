
/* reorder list in C 
* Author: Peiwen Chen  
* Date: Oct 14, 2014
*/


typedef struct Node 
{
int data;
int value;
LinkedNode * next;
} LinkedNode

LinkedNode * reorderList(LinkedNode * head) {

	if (!head) {
		printf ("list is empty !");
		return 0;
	}
	
	LinkedNode * head2;
	head2 = reverselList(head); // reverse the list and get another list
	
	// reorder the list
	LinkedNode *p, *t;
	p = head;
	t = head2;
	while (!p && !(p->next) && !(p->next->next) && !t && !(t->next) && !(t->next->next)) {
		LinkedNode * tmp = p->next->next;
		p->next = t->next;
		t = t->next->next;
		p->next->next = tmp;
		p = tmp;

	}
	// return the signly linked list	
	return head;
}
	
