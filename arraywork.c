#include "arraywork.c"

void showEl(const int* ar, int size, char delimited) {
	for (int i = 0; i < size; i++) {
		std::cout << ar[i] << delimited;
	}
	std::cout << std::endl;
}

void setRandom(int *ar, int size, int min, int max){
        srand(time(nullptr));
        for (int i = 0; i < size; i++){
                ar[i] = rand()%(max - min + 1) + min;
        }
}

