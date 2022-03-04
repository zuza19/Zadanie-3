#include <stdio.h>

int main(void) {
  int liczba;
  printf("Wprowadź liczbę: ");
  scanf("%d", &liczba);
float dzialanie;
  dzialanie=liczba%2;
    if (dzialanie=1){
      printf("Liczba parzysta");
    }
    else{
    printf("Liczba nieparzysta");
    }

  return 0;
}