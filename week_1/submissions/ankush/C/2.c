

#include <stdio.h>


int main() {
	int n;
	int i=0,j=0;
	printf("enter the number of lines ");
	scanf( "%d",&n);

	for( i=0;i<n;i++){

        for( j=i;j<n;j++){
            printf(" ");

        }
        for( j=0; j<=i;j++){
           printf("#");
        }
	printf("\n");
	}

	return 0;
}
