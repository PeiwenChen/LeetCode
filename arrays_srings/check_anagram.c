/*
* check if two strings are anagrams 
* Author: Peiwen Chen
* Date: Oct 19th, 2014
*/



/* Analysis:
* sort two strings
* O(n^2)  quicksort or merge sort would be quicker
*/

void check_anagram(char[] string1, char[] string2) {

	sort(string1);
	sort(string2);
	if (string1 == string2) {
		printf(" they are anagrams.");
	}

}
