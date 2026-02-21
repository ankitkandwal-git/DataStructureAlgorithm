package BinarySearch.PeekElement;
import java.util.Scanner;
class Main {
    static int peekElement(int[]arr,int n){
        int low = 0;
        int high = n-1;
        while(low<high){
            int mid  = low + (high-low)/2;
            if(arr[mid]<arr[mid+1]){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return low;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            int n = sc.nextInt();
            int[]arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            System.out.println(peekElement(arr,n));
        }
    }
}
