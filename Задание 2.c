/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
float abs_(float value) {
    return value * (float) ((value > 0) - (value < 0));
}


float rand_f() {

    return ((float) rand() / (float) (RAND_MAX)) * 50;

}

int main() {
    int len;
    char mode;

    srand(time(NULL));


    printf("Input array len:");
    while (!scanf("%d", &len) || len <= 0) {
        printf("Wrong len, input again:");
        rewind(stdin);
    }


    float arr[len];
    printf("Fill array random numbers? [y/n]");
    scanf(" %c", &mode);
    while (mode != 'y' && mode != 'n') {

        printf("Wrong answer, input again:");
        scanf(" %c", &mode);
        rewind(stdin);
    }


    if (mode == 'y') {
        printf("Generated array:");
        for (int i = 0; i < len; i++) {
            arr[i] = rand_f();
            printf(" %f", arr[i]);
        }
        printf("\n");
    } else {
        printf("Input %d elements:", len);
        for (int i = 0; i < len; i++) {
            while (!scanf("%f", &arr[i])) {
                printf("Wrong elem, input again:");
                rewind(stdin);
            }
        }
    }


    
int  i;
	printf("Vvedite 5 chisel\n");
	for (i = 0; i<5; i++) {
		printf("chislo %d: ", i+1);
		scanf("%d", &arr[i]); 
	}

        len = 5;
        int k; //заменить на ввод
          printf("Введите  k: ");
            scanf("%d",&k);

        // добавление нулей
        int stat_len = len;
        int sub = 0;
              for (int i = 0; i <stat_len; i++) {
            if (!((i + 1) %k)) {

                len++;

                for (int j = len - 1; j > i + sub; j--) {
                    arr[j] = arr[j - 1];
                }

                sub++;
                arr[i + sub] = 0;
            }
        }
        
        // вывод
        for (int i = 0; i < len; i++) {
            printf("%d ", arr[i]);

        }

   return 0;
}