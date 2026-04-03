package String.IsomorphicString;

import java.util.HashMap;
import java.util.Scanner;


class Main{
    public static boolean isIsomorphic(String s1,String s2){
        int n = s1.length();
        if(s1.length() != s2.length()){
            return false;
        }
        HashMap<Character,Character>map = new HashMap<>(); 
        for(int i=0;i<n;i++){
            if(map.containsKey(s1.charAt(i))){
                if(map.get(s1.charAt(i)) != s2.charAt(i)){
                    return false;
                }
            }
            else{
                map.put(s1.charAt(i),s2.charAt(i));
            }
        }
        return true;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            String s1 = sc.next();
            String s2 = sc.next();
            System.out.println(isIsomorphic(s1,s2));
        }
    }
}