#include <iostream>
#include<time.h>
#include<task.h>

int main(){
	int mas[1000];
	srand(time(nullptr));
	for(int i = 0; i < 1000; i++){
		mas[i] = rand() % 200;
	}
	for(int i = 0; i < 500; i++){
		std::cout << mas[i] << '\t' << mas[i + 1] << '\n';
	}
	return 0;
}


