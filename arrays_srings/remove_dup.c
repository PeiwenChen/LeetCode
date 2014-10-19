/* remove duplicate char in a string 
* Author: Peiwen Chen
* Date: Oct 15, 2014
*/

/* Analysis: 
* need extra storage for checking if the char is duplicate
* char[] array , then use indexging
* O(n) for check, O(n^2) for removing dup
* other approaches: sort first and then remove neighbors if dup
*/

void removeDupChar (char[] array) {

	int check[256];
	for (int i = 0; i < str.len(array);){
		char tmp = array[i];
		if (check[tmp] == TRUE) {
			// duplicate char tmp found!
			check[tmp] = FALSE;
			// remove the dup char
			for (int k = i+1; k < str.len(array); k --) {
				array[k-1] = array[k];
			}
		} else {	
			check[tmp] = TRUE;
			i++;
		}
	}
	
}

int main(void) {
	char string[] = "abcedffagd";
	removeDupChar(string);
	printf("remove duplicated : %s\n", string);
	return 0;
}

/* this is python script to remove duplicate
*
class Solution:
    # @param a list of integers
    # @return an integer
    def removeDuplicates(self, A):
        if (not A):
            return 0
        A = list(set(A))
        return len(A)
*/

""" set() is the legant way to remove duplicates in a list in place,
no extra memory needed """

