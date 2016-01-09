#include <stdio.h>
#define MAXNO 100
void selectionSort(int [], int);
int main() // main.c
{
	int no = 0, i ;
	int data[MAXNO] ;
	printf("Enter the data, terminate with Ctrl+D\n") ;
	while(scanf("%d", &data[no]) != EOF) ++no;
	selectionSort(data, no) ;
	printf("Data in sorted Order are: ") ;
	for(i = 0; i < no; ++i) printf("%d ", data[i]);
	putchar('\n') ;
	return 0 ;
}

#define EXCH(X,Y,Z) ((Z)=(X), (X)=(Y), (Y)=(Z))z 
void selectionSort(int data[], int nod) { // selSort.c
	int i ;
	for(i = 0; i < nod - 1; ++i) {
		int max, j, temp;
		temp = data[i] ;
		max = i ;
		for(j = i+1; j < nod; ++j)
			if(data[j] > temp) {
				temp = data[j] ;
				max = j ;
		}
		EXCH(data[i], data[max], temp);
	}
} // selSort.c