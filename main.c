#include<iostream>
#include<time.h>
void fillRandom(int*mass, int size){
    srand(time(nullptr));
        for (int i = 0; i < size; i++) {
            *(mass + i) = 100 + random() % 51;
       }
}

int showEl(const int* ar, int size, int n = 10, int m = 10){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            std::cout << ar[10*i + j] << '\t';
        }
        std::cout << std::endl;
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

int min(int a, int b){
    if(a > b){
        return b;
    }
    return a;
}

int getMin(int* ar, int* first, int* last){
    if(last == first){
        return *first;
    }
    return min(*first, getMin(ar, first+1, last));

}

int max(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}

int getMax(int* ar, int* first, int* last){
    if(last == first){
        return *first;
    }
    return max(*first, getMax(ar, first+1, last));

}

int countMax(int* ar, int size){
        int count = 0;
        int temp = 0;
        int number = 0;
        for(int i = 0; i < size-1; i++){
                if(ar[i] == ar[i+1]){
                        temp++;
                }
                if(temp > count){
                count = temp;
                temp = 0;
                number = ar[i];
                }
        }
        return number;
}

int countMin(int* ar, int size){
        int count = size;
        int temp = 0;
        int number = 0;
        for(int i = 0; i < size-1; i++){
                if(ar[i] == ar[i+1]){
                        temp++;
                }
                if(temp < count){
                count = temp;
                number = ar[i];
                temp = 0;
                }
        }
        return number;
}



int main(){
    int ar[100];
    fillRandom(ar, 100);
    showEl(ar, 100, 10, 10);
    std::cout << '\n';
    intsertionSort(ar, 100);
    showEl(ar, 100, 10, 10);
    std::cout << '\n';
    std::cout << "максимальное число в массиве: " << getMax(ar,&ar[0],&ar[99]) << std::endl;
    std::cout << "минимальное число в массиве: " << getMin(ar,&ar[0],&ar[99]) << std::endl;
    std::cout << "чаще всего встречается число: " << countMax(ar, 100) << std::endl;
    std::cout << "реже всего встречается число: " << countMin(ar, 100) << std::endl;
//создание массива для графика
    int mas[1000];
    srand(time(nullptr));
    for(int i = 0; i < 1000; i++){
        mas[i] = rand() % 200;
    }
//	for(int i = 0; i < 500; i++){
//		std::cout << mas[i] << '\t' << mas[i + 1] << '\n';
//	}
    return 0;
}

