#include <task.h>

void fillRandom(int*mass, int size){
	srand(time(nullptr));
        for (int i = 0; i < size; i++) {
            *(mass + i) = random() % 100;
        }
}


int showEl(const int* ar, int size, int N = 10, int M = 10){
	for(n; n > 0; n--){
		for(m; m > 0; m--){
			std::cout << ar[10*(10 - n) + (10 - m)];
		}
	}


}

void swap(int&a, int&b){
    int temp = a;
    a = b;
    b = temp;

}
void intsertionSort(int* ar, int size){
    for(int i = 0; i < size - 1; i++){
            int j = i;
            for(j; j >= 0 && ar[j+1] < ar[j]; j--){
                swap(ar[j + 1], ar[j]);
            }

    }


}


