/*
* given a list of integers which are sorted, but rotated ([4,5,6,1,2,3]),
* search for a given integer in the list
* binary search
* Author: Peiwen Chen
* Date: Oct 15th, 2014
*/


void searchRotatedList(int * list, int data) {
	int length;

	if (!list) {
		return;
	}
	length = sizeof(list) / sizeof(list[0]);
	
	if (data < list[0]) {
		// go to right half, start binary search
		binarySearch(list, data, length/2, length - 1);
	else {
		// go to left half, start binary search
		binarySearch(list, data, 0, length/2 - 1);
	}

}

void binarySearch(int * list, int data, int low, int high) {
	if (!list) {
		return;
	}
	while (low <= high ) {
		if (data < list[(high - low)/2]) {
			// go to left
			binarySearch(list, data, low, (high - low)/2 - 1);
		} else if (data > list[(high - low)/2]) {
			//go to right
			binarySearch(list, data, (high - low)/2 + 1, high);
		} else 
			printf("data %d found in %d th position\n", 
					data, (high-low)/2);
	}	

	printf("data %d not found in the array\n");

}


int main(void) {
	int list[10] = {6,7,8,9,10,1,2,3,4,5};
	searchRotatedList(list, 8);
	return 0;
	

