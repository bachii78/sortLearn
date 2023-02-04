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

int main(){
    int ar[100];
    fillRandom(ar, 100);
    showEl(ar, 100, 10, 10);
    std::cout << '\n';
    intsertionSort(ar, 100);
    showEl(ar, 100, 10, 10);
    std::cout << '\n';
    std::cout << getMin(ar,&ar[0],&ar[99]);
    return 0;
}


