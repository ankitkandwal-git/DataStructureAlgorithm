package Arrays.ReverseArray;
import java.util.Scanner;

class Main{
    static void reverse(int[]arr,int n){
        int start = 0;
        int end = n-1;
        while(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;

        }
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.println("Enter the size of the array:");
            int n = sc.nextInt();
            int[] arr = new int[n];
            System.out.println("Enter the elements of the array:");
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            reverse(arr,n);
            System.out.println("Reversed array:");
            for(int i=0;i<n;i++){
                System.out.print(arr[i]+" ");
            }
        }
    }
}