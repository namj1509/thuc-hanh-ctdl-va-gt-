void Selection_sort(int a[], int n){
	int min_index;
	for (int i = 0; i < n - 1; i++){
		min_index = i;
		for (int j = i + 1; j < n; j++){
			if (a[min_index] > a[j]){
				min_index = j;
			}
		}
		if (i != min_index){
			int temp = a[i];
			a[i] = a[min_index];
			a[min_index] = temp;
		}
	}
} 
link tham khảo: https://viblo.asia/p/sap-xep-chen-sap-xep-chon-va-sap-xep-tron-Do754zX4ZM6
