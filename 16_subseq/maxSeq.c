#include<stdio.h>
#include<stdlib.h>
size_t maxSeq(int * array, size_t n){
  int count=0;
  int maxcount=1;
  if(n==1){
    return maxcount=1;
  }
  else{
    for(int i=0;i<n-1;i++){
      if(array[i]<array[i+1]){
	count=count+1;
      }
      else{
	if(maxcount<count+1){
	  maxcount=count+1;
	}
	count=0;
      }
    }
    if(maxcount<count+1){
      maxcount=count+1;
    }
    return maxcount;
  }
}
