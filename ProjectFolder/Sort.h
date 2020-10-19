#ifndef SORT_H
#define SORT_H

class Sort {

private:
	int size;
	int array[];


public:
	Sort(int arr[]) {
		arr[size] = array[size];
	}

	void setSize(int s) {
		s = size;
	}

// Psuedocode for Selection sort

	/*for (i=0 to n-1) 

    smallest = array[i] 

    for (j=i+1 to n) 

        if (array[j] < smallest) 

            smallest = array[j] 

    Swap item[i] with item[smallest] 

 */

	void selectionSort() {

		int smallest;
		int temp;
		for (int i = 0; i < size - 1; i++) {
			smallest = array[i];
			for (int j = i + 1; j < size; j++) {
				if (array[j] < smallest) {
					smallest = array[j];
					temp = array[j];
					array[j] = array[i];
					array[i] = temp;
				}
			}
		}
	}









	void bubbleSort() {





	}








	void merge(int left, int right, int arr[]) {





	}











	void mergeSort() {






	}










};



#endif 