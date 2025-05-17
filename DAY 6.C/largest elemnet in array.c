#include <stdio.h>
int main() {
  int arr[]={1,11,15,21,34};
  int max=arr[0];
  int length =sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<length;i++){
    if(max<arr[i])
    max=arr[i];
  }
  printf("%d",max);
  return 0;
}