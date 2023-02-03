#include <task.h>

void fillRandom(int*mass, int size){
	srand(time(nullptr));
        for (int i = 0; i < size; i++) {
            *(mass + i) = random() % 100;
        }
}


int showEl(const int* ar, int size, int N = 10, int M = 10){
	for(n, n > 0, n--){
		for(m, m > 0, m--){
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

int getMax(int* ar, int first, int last, int max){
       	if(k == n-1){
	      	return max;
	{
	if(max < mas[k]){
	       	max = mas[k];
	}
        max = getMax(mas, first, last+1, max);
}

int getMin(int* ar, int first, int last, int min){
	if(last == first - 1){
		return ar[0];
	}
	if (min > ar[k]){
		min = ar[k];
	}
	min = getMin(ar, first, last+1, min);
}

int countMax(int* ar, int size){
	int count = 0;
	int temp = 0;
	for(int i = 0; i < size-1; i++){
		if(ar[i] == ar[i+1]){
			temp++
		}
		if(temp > count){
		count = temp;
		temp = 0;
		}
	}
	return count;
}

int countMin(int* ar, int size){
	int count = size;
      	int temp = 0;
        for(int i = 0; i < size-1; i++){
                if(ar[i] == ar[i+1]){
                        temp++
                }
                if(temp < count){
                count = temp;
                temp = 0;
                }
	}
	return count;
}


