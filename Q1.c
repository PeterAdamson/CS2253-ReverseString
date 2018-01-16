//Author Peter Adamson

#include <stdio.h>
#include <string.h>

void print_reverse_str(char *str){
	if(strlen(str) > 0){
		print_reverse_str(str + 1);
		printf("%c",str[0]);
	}
}

int sum_recursive(int arr[], int n){	
	if(n==0){
		return arr[n];
	}
	else{
		return arr[n] + sum_recursive(arr, n-1);
	}
}

int max_recursive(int arr[], int n){	
	int val = arr[n - 1];
	if(n > 0){
		if(val > max_recursive(arr, n - 1)){
			return val;
		}
		if(val < max_recursive(arr, n-1)){
			return max_recursive(arr, n-1);
		}
	}
}


int main(){
    print_reverse_str("My string");
    printf("\n");
    print_reverse_str("!ti tog uoy ,siht daer nac uoy fI");
    printf("\n");
    
    int v[]= {5, 25, 6, 3, 76, 48, 20, 11, -3, 55}, sz = 10;
    printf("The sum of v = %d\n", sum_recursive(v, sz));
    printf("The max of v = %d\n", max_recursive(v, sz));
    return 1;
}
