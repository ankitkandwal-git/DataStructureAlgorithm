package String.RomanToInteger;
import java.util.HashMap;
import java.util.Scanner;

class Main{
    static int romanToInt(String s){
        HashMap<Character,Integer>m = new HashMap<>();
        m.put('I',1);
        m.put('V',5);
        m.put('X',10);
        m.put('L',50);
        m.put('C',100);
        m.put('D',500);
        m.put('M',1000);
        int n = s.length();
        int sum = 0;
        int prev = m.get(s.charAt(n-1));
        sum +=prev; 
        for(int i=n-2;i>=0;i--){
            int cur = m.get(s.charAt(i));
            if(cur>=prev){
                sum+=cur;
            }
            else{
                sum -=cur;
            }
            prev = cur;
        }
        return sum;
    }  
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        System.out.println(romanToInt(s));
        sc.close();
    } 
}