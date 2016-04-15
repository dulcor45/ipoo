#include<iostream>

int main() {
    int sa[] = {1,2,3};
    int *s = new int[41];
	std::cout<<sizeof(s)/sizeof(int)<<std::endl;
	return 0;
}