/* 
* Reverse a C-style string("abcd" is reprensted as 5 chars, including '/0'
* Author: Peiwen Chen
* Date: Oct 19th, 2014 
*/



/* Analysis:
 * C-style string: use char * as pt to the string
 * in-place exchange
 * O(n) 
 */

void reverse_string(char *string) {

	// the length, excluding '/0'
	int len = sizeof(string)/sizeof(char);
	char *s, *e = string;		//pt to start
	char tmp;
	while(e) {
		e++;
	}
	
	while (s < e) {
		tmp = *s;
		*s = *e;
		*e = tmp;
		e --;
		s ++;
	}

}
