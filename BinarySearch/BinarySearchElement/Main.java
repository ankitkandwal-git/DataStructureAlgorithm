package BinarySearch.BinarySearchElement;
import java.util.Scanner;

class Main{
    static int binarySearch(int arr[],int n,int key){
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]==key){
                return mid;
            }else if(arr[mid]<key){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return -1;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            int n = sc.nextInt();
            int arr[] = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            int result = binarySearch(arr,n,sc.nextInt());
            if(result==-1){
                System.out.println("Element not found in the array");
            }else{
                System.out.println("Element found at index: "+result);
            }
        }
    }
}