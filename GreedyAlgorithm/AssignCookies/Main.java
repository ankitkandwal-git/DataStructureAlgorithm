package GreedyAlgorithm.AssignCookies;
import java.util.Scanner;
import java.util.Arrays;
class Main{
    static int assignCookies(int[]greed,int[]size){
        Arrays.sort(greed);
        Arrays.sort(size);
        int i=0,j=0;
        while(i<greed.length && j<size.length){
            if(size[j]>=greed[i]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return i;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.println("Enter the number of children:");
            int n = sc.nextInt();
            int[] greed = new int[n];
            System.out.println("Enter the greed factors of the children:");
            for(int i=0;i<n;i++){
                greed[i] = sc.nextInt();
            }
            System.out.println("Enter the number of cookies:");
            int m = sc.nextInt();
            int[] size = new int[m];
            System.out.println("Enter the sizes of the cookies:");
            for(int i=0;i<m;i++){
                size[i] = sc.nextInt();
            }
            int result = assignCookies(greed,size);
            System.out.println("Maximum number of content children: " + result);
        }
    }
}