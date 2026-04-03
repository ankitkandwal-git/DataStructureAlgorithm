package String.ReverseTheString;
import java.util.Scanner;

class Main{
    static String reverseString(String str){
        StringBuilder sb = new StringBuilder(str);
        sb.reverse();
        return sb.toString();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the string: ");
        String s = scanner.nextLine();
        System.out.println("Reversed string: " + reverseString(s));
        scanner.close();
    }
}