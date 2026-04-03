package String.LargestCommonPrefix;
import java.util.Scanner;
public class Main {
    static String commonPrefix(String[] str){
        int k = 0;
        int n = str.length;
        if(n==0){
            return "";
        }
        if(n==1){
            return str[0];
        }
        while(true){
            for(int i=1;i<n;i++){
                if(k==str[i].length() || k==str[0].length()){
                    return str[0].substring(0,k);
                }
                if(str[i].charAt(k) != str[0].charAt(k)){
                    return str[0].substring(0,k);
                }
            }
            k++;
        }
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.println("Enter the number of strings:");
            int n = sc.nextInt();
            sc.nextLine();
            String[] str = new String[n];
            System.out.println("Enter the strings:");
            for(int i=0;i<n;i++){
                str[i] = sc.nextLine();
            }
            String result = commonPrefix(str);
            if(result.isEmpty()){
                System.out.println("No common prefix found.");
            } else {
                System.out.println("Longest common prefix: " + result);
            }
        }
    }
}
