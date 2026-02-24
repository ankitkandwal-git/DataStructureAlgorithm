package Arrays.ColorInOrder.Solution1;
import java.util.Scanner;

class Main{
    static void colorOrder(int[]arr){
        int n = arr.length;
        int[] count = new int[n];
        for(int i=0;i<n;i++){
            count[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(i<count[0]){
                arr[i] = 0;
            }
            else if(i<count[0] + count[1]){
                arr[i]  = 1;
            }
            else{
                arr[i] = 2;
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
            for(int i=0;i<n;i++){
                System.out.print(arr[i] + " ");
            }
        }
    }
}