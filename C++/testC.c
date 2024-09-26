#include<stdio.h>
//1
//int first(int);
//int first(int num){
//    if(num==0)
//    return 0;
//    else
//    return (num%10+first(num/10));
//}
//int main(void){
//	int a;
//    printf("ENTER a no  ");
//    scanf("%d",&a);
//    int as = first(a);
//    printf("%d",as);
//}

//2
//int first(int);
//int first(int n){
//     if(n<=1){
//     	return 0;
//	 }else if(n==2){
//	 	return 1;
//	 }else{
//	  return (first(n-1)+first(n-2));
//	 }
//
//  }
//int main(void){
//    int i,num;
//    scanf("%d",&num);
//    for(i=1; i<=num; i++){
//  	printf("%d\n",first(i));
//    }
//}


//3
int first(int [],int);
int first(int arr[],int len){
	int i=0,j=0;
	for(i=0; i<len; i++){
	  for(j=i+1; j<len; j++){
	  	 if(arr[j]<arr[i]){
	  	 	int temp = arr[i];
	  	 	arr[i] = arr[j];
	  	 	arr[j] = temp;
		   }
	  }
	  	printf("%d\n",arr[i]);
	}
}
int main(void){
	int a;
	int arr[] = {2,7,1,3,5,6,8,3};
	int len = sizeof(arr)/sizeof(int);
	first(arr,len);
}
