package Arrays.ColorInOrder.Solution2;
import java.util.Scanner;

class Main{
    static void colorOrder(int[] arr){
        int n = arr.length;
        int low = 0, mid =0 , high = n-1;
        while(mid<=high){
            if(arr[mid]==0){
                int temp = arr[low];
                arr[low] = arr[mid];
                arr[mid] = temp;
                low++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else {
                int temp = arr[mid];
                arr[mid] = arr[high];
                arr[high] = temp;
                high--;
            }
        }
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            colorOrder(arr);
            for(int i:arr){
                System.out.print(i+" ");
            }
        }
    }
}