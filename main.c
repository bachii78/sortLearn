#include<iostream>
#include<time.h>
#include<task.h>

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

