package GreedyAlgorithm.ConferenceRoomBooking;

import java.util.Arrays;
import java.util.Scanner;

class Main{
    static int ConferenceRoom(int[]start,int []end){
        int n = start.length;
        int[][] v = new int[n][2];
        for(int i=0;i<n;i++){
            v[i][0] = start[i];
            v[i][1] = end[i];
        }
        Arrays.sort(v,(a,b)->a[1]-b[1]);
        int count = 1;
        int endTime = v[0][1];
        for(int i=1;i<n;i++){
            if(v[i][0]>=endTime){
                count++;
                endTime = v[i][1];
            }
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] start = new int[n];
        int[] end = new int[n];
        for(int i=0;i<n;i++){
            start[i] = sc.nextInt();
        }
        for(int i=0;i<n;i++){
            end[i] = sc.nextInt();
        }
        System.out.println(ConferenceRoom(start,end));
    }
}