package StackAndQueue.BalancedParenthesis;
import java.util.Stack;
import java.util.Scanner;

class Main{
    static boolean isBalanced(String str){
        Stack<Character> stack = new Stack<>();
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)=='(' || str.charAt(i)=='{' || str.charAt(i)=='['){
                stack.push(str.charAt(i));
            }
            else{
                if(stack.isEmpty()) return false; 
                char top = stack.peek();
                if((str.charAt(i)==')' && top=='(') || (str.charAt(i)=='}' && top=='{') || (str.charAt(i)==']' && top=='[')){
                    stack.pop();
                }
                else return false;
            }
        }
        return stack.isEmpty();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        if(isBalanced(str)){
            System.out.println("Balanced");
        }
        else{
            System.out.println("Not Balanced");
        }
    }
}