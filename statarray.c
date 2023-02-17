#include "statarray.h"


int binSearch(int* ar, int size, int el) {
	if (ar[size >> 1] == el) {
		return (size >> 1);
	}
	if (size == 1) {
		return -1;
	}

	if (el > ar[size >> 1]) {
		return binSearch(&ar[size >> 1 + 1], size - (size >> 1)-1, el) + (size >> 1);
	}

	if (el < ar[size >> 1]) {
		return binSearch(ar, size >> 1, el);
	}


	return -1;
}

int min(int a, int b){
    if(a > b){
        return b;
    }
    return a;
}
int getMin(int* ar, int* first, int* last){
    if(last == first){
        std::cout << "минимальное число в массиве: " << *first << std::endl;
        return *first;

    }
    return min(*first, getMin(ar, first+1, last, deep));

}

int max(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}

int getMax(int* ar, int* first, int* last){
    if(last == first){
        std::cout << "максимальное число в массиве: " << *first << std::endl;
        return *first;

    }
    return max(*first, getMax(ar, first+1, last, deep));


}



