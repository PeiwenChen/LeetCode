/* revese a singly linked list in C
* Author: Peiwen Chen
* Date: Oct 14, 2014 
*/


typedef Node {
int data;
int value;
LinkedNode *next;
} LinkedNode;


LinkedNode * reverseList( LinkedNode * head) {

	if (!head) {
		printf ("the list is empty!");
		return 0;
	}
	
	LinkedNode * tmp;
	LinkedNode * newroot = NULL; // initialize to NULL, the end of list
	while (head) {
		tmp = head->next;
		head->next = newroot; 
		newroot = head;
		head = tmp;
		
	}
	return newroot;
}
