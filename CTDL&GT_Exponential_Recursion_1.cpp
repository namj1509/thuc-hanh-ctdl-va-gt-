void sort(int arr[], int n, int i){
  int j, swap;
  //thực hiện vòng lặp để sắp xếp các phần tử
  for(j = i + 1; j < n; j++){
    if(arr[i] > arr[j]){ // Nếu phần tử trước lớn hơn phần tử sau thì thực hiện tráo đổi vị trí giữa hai phần tử
      swap = arr[i];
      arr[i] = arr[j];
      arr[j] = swap;
    }
    sort(arr, n, i + 1);//Tiếp tục gọi đệ quy và thực hiện đến khi hàm kết thúc
  }
} 
  link tham khảo: https://ezcodea.com/hoc-lap-trinh-online/giaithuat/de-quy-da-tuyen-exponential-recursion
