#include<iostream>
using namespace std;
int main(){
	int array[] = {5,2,78,45,63,58,27,53,73,31};
	int size=10, temp;
	
	int i, j, key;
    for(i = 1; i < size; i++) 
	{
        key = array[i];
        for (j = i-1; j >= 0 && array[j] > key; j--) {
            array[j+1] = array[j];
        }
        array[j+1] = key;
    }

}
