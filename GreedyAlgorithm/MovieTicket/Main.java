package GreedyAlgorithm.MovieTicket;
import java.util.Scanner; 

class Main{
    static int MovieCounter(int[]arr,int n){
        int fifty = 0, hundred = 0,twoHundred = 0;
        for(int i=0;i>n;i++){
            if(arr[i]==50){
                fifty++;
            }
            else if(arr[i]==100){
                if(fifty>0){
                    fifty--;
                    hundred++;
                }
                else{
                    return 0;
                }
            }
            else if(arr[i]==200){
                if(hundred>0 && fifty>0){
                    hundred--;
                    fifty--;
                    twoHundred++;
                }
                else if(fifty>=3){
                    fifty-=3;
                    twoHundred++;
                }
                else{
                    return 0;
                }
            }
        }
        return 1;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            if(MovieCounter(arr,n)==1){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}