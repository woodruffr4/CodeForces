// Accepted
// 979B - Treasure Hunt

import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;

public class treasurehunt {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		String a = in.next();
		String b = in.next();
		String c = in.next();
		Map<Character, Integer> m1 = new HashMap<Character, Integer>();
		Map<Character, Integer> m2 = new HashMap<Character, Integer>();
		Map<Character, Integer> m3 = new HashMap<Character, Integer>();
		int max1 = 1;
		for(char ch: a.toCharArray()) {
			m1.put(ch,m1.containsKey(ch)?m1.get(ch)+1:1);
			max1 = Math.max(max1,m1.get(ch));
		}
		int max2 =1;
		for(char ch: b.toCharArray()) {
			m2.put(ch,m2.containsKey(ch)?m2.get(ch)+1:1);
			max2 = Math.max(max2,m2.get(ch));
		}
		int max3=1;
		for(char ch: c.toCharArray()) {
			m3.put(ch,m3.containsKey(ch)?m3.get(ch)+1:1);
			max3 = Math.max(max3,m3.get(ch));
		}
		if(n==1 && max1==a.length())
			max1 = a.length()-1;
		else
			max1 = (max1+n>a.length())?a.length():max1+n;
		if(n==1 && max2==b.length())
			max2 = b.length()-1;
		else
			max2 = (max2+n>b.length())?b.length():max2+n;
		if(n==1 && max3==c.length())
			max3=c.length()-1;
		else
			max3 = (max3+n>c.length())?c.length():max3+n;
		if(max1>max2 && max1>max3) {
			System.out.println("Kuro");
		}
		else if(max2>max1 && max2>max3) {
			System.out.println("Shiro");
		}
		else if(max3>max1 && max3>max2) {
			System.out.println("Katie");
		}else {
			System.out.println("Draw");
		}
	}
}