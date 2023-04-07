#include <stdio.h>
#include<conio.h>
#include<math.h>
int binary_search(int A[],int n,int x){
    int left, right, mid; 
    left=0; right=n-1;
    do{
        mid=(left+right)/2;
        if(A[mid] == x){
            return mid;
        }
        else if(A[mid] < x){//Nguoc lai, neu phan tu giua nho hon x
            //Thay doi lai bien left = mid + 1 de tiep tuc tim kiem nua ben phai cua day moi
            left = mid + 1;
        }else{//Nguoc lai, neu phan tu giua khong nho hon x
            //Thay doi lai bien right = mid - 1 de tiep tuc tim kiem nua ben trai cua day moi
            right = mid - 1;
        }
    }while(left<=right);//Dieu kien lap khi left < right
    //Truong hop khong tim thay phan tu co gia tri bang x sau khi duyet het mang se tra ve -1
    return -1;
}
int main(){
    int n = 16;
    int A[] = {1,7,9,2,6,8,4,15,3,7,20,13,56,5};
    int x = 15;
    int index = binary_search(A,n,x);
    if(index == -1){
    printf("Khong tim thay phan tu x = %d", x);
    }else{
    printf("Tim thay x = %d tai vi tri %d", x, index);
    }
}
