#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int even_count;
    int odd_count;
    for(int i=0;i<size;i++){
    if(arr[i]%2==0){
     even_count++;
    }
    else{
        odd_count++;
    }
}
    printf("even numbers:%d\n",even_count);
    printf("odd numbers:%d\n",odd_count);
    return 0;
}