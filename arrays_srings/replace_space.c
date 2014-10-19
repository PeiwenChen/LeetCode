/*
* replace all spaces in a string with '%20'
* Author: Peiwen Chen
* Date: Oct 19th, 2014
*/

/* Analysis:
* array need the boundary, should get the length first!
* dont need do move elements behind with for loop !
* copy from the end of string in-place 
* O(n)
*/



void replace_space(char[]  string, int len) {
	
	// sizeof(string)/sizeof(char) = str.len() - 1;
	// count the spaces
	for (int i = 0; i < len; i ++) {
		if (string[i] == ' ') {
		spacecount ++;
		}
	}

	// get the length of the new string
	newlen = len + 2*spacecount;
	str[newlen] = '\0'; // last 
	for (int i = len - 1; i >= 0; i --) {
		if (string[i] == ' ') {
			string[newlen - 3] = '%';
			string[newlen - 2] = '2';
			string[newlen - 1] = '0';
			newlen = newlen - 3;	
		} else {
			string[newlen - 1] = string[i];
			newlen --;
		}

}
