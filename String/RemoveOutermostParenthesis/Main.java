package String.RemoveOutermostParenthesis;
import java.util.Scanner;
public class Main {
    static String removeOuterParentheses(String s){
        int count = 0;
        String result = "";
        for(char c: s.toCharArray()){
            if(c=='('){
                if(count !=0) result += c;
                count++;
            }
            else{
                count--;
                if(count !=0) result += c;
            }
        }
        return result;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.println("Enter the string of parentheses:");
            String s = sc.nextLine();
            String result = removeOuterParentheses(s);
            System.out.println("Result after removing outermost parentheses: " + result);
        }
    }
}
