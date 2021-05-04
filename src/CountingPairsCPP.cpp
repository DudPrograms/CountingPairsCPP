/*
 * An extremely simple demonstration of how to find pairs in an array
 * For practice
 */
#include <iostream>
using namespace std;

unsigned int find_pairs(int arr[], int arr_size, int sum);	//finds the number of pairs in an array
void print_array(int arr[], int arr_size);					//prints an array out

int main() {
	const int num_array_size = 5;								//there are 5 elements in the array
	int num_array[num_array_size] = {3, 4, 8, 12, 0};					//the elements that will be compared together
	cout << "The array is: ";
	print_array(num_array, num_array_size);							//print out the array's values
	cout << "The number of pairs is: " << find_pairs(num_array, num_array_size, 12);	//find the pairs
	return 0;										//quit
}

unsigned int find_pairs(int arr[], int arr_size, int sum){
	unsigned int paircount = 0;							//counts the number of pairs found in the array
	for (int base=0; base<arr_size; base++){			//the first loop sits on a base number as a comparison
		for (int ctr=base+1; ctr<arr_size; ctr++){		//the second loop compares the base with the next numbers over each loop
			if (arr[base] + arr[ctr] == sum){			//if the sum of base + counter = the sum, add 1 to the pair count
				paircount++;
			}
		}
	}
	return paircount;
}

void print_array(int arr[], int arr_size){
	for (int i=0;i<arr_size;i++){	//loop through an array and print each value in it
		cout << arr[i] << " ";
	}
	cout << endl;
}
