#include <bits/stdc++.h>

using namespace std;

int* sum(int* a, int size){ // su dung con tro ham de tinh tong, sau do chi can chia cho tong so luong phan tu la ra avg
	int *tong; // con tro tong
	int x = 0;
	for(int i=0; i<size; i++){
		x += a[i]; //tinh tong cac phan tu trong mang
	}
	tong = &x; // con tro tong tro toi dia chi cua x
	return tong;
}

int* minimum(int* a, int size){ // su dung con tro ham de tim min
	int *min;
	min = a;
	if(a==NULL) return NULL;
	for(int i=0; i<size; i++){
		if(a[i] < *min){
			min = &a[i]; // con tro min tro toi dia chi phan tu min
		}
	} 
	return min;
}

int main() {
	int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    
    int* sum1 = sum(arr, n); // con tro sum1 tro toi dia chi tong cac phan tu trong mang
    cout << *sum1 << endl;
   
    int* tb = sum(arr, n);  // con tro tb tro toi dia chi tong cac phan tu trong mang
    cout << *tb/((1.0) * n) << endl;
   
    int* min = minimum(arr, n);// con tro min tro toi dia chi min trong mang
    cout << *min << endl;
    return 0;
}
