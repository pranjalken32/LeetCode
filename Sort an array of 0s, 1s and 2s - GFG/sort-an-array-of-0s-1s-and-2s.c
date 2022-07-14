// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int arr[], int n)
{
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++) {
        switch (arr[i]) {
        case 0:
            a++;
            break;
        case 1:
            b++;
            break;
        case 2:
            c++;
            break;
        }
    }
   int i = 0;
   
    while (a > 0) {
        arr[i++] = 0;
        a--;
    }
  
    while (b> 0) {
        arr[i++] = 1;
    b--;
    }
  
   
    while (c > 0) {
        arr[i++] = 2;
        c--;
    }
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends