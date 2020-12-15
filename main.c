#include <stdio.h>
void printNDown(int n);
void printNDownR(int n);

void printNDown(int n){
while(n)   
printf("%d ",n--); } 

void printNDownR(int n){
if (n){   
printf("%d ",n);   
printNDownR(n-1);  } } 

int main() {
  printNDownR(6);
  printf("\n");
  printNDown(5);
  

}

