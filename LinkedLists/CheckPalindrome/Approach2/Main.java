package LinkedLists.CheckPalindrome.Approach2; 
import java.util.Scanner; 

class Main{
    static class Node{
        int data;
        Node next;
        Node(int val){
            this.data = val;
            this.next = null;
        }
    }
    public static Node arrayToLL(int[]arr,int n){
        Node head = new Node(arr[0]);
        for(int i=1;i<n;i++){
            head.next = new Node(arr[i]);
            head = head.next;
        }
        return head;
    }
    public static void printLL(Node head){
        Node temp = head;
        while(temp != null){
            System.out.println(temp.data);
            temp = temp.next;
        }
    }
    public static boolean checkPalindrome(Node head){
        
    }
}