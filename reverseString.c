/* reverse a string in C 
* Author: Peiwen Chen
* Date: Oct 15, 2014
*/


// given a char array[30] to reverse it  
void reverseString(char * array) {

	int length = strlen(array); // array length
	char tmp;
	char *start = array;
	char *end = &array[length - 1]
	
	while (start < end) {
		tmp = *start;
		*start = *end;
		*end = tmp;
		start ++;
		end --;

	}
	print("the reversed string is %s \n", array);

}
