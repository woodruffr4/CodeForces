// Accepted
// 1060B - Maximum Sum of Digits

import java.util.Scanner;

public class maximumsumofdigits {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		long n = in.nextLong();
		String s = n+"";
		String other ="0";
		for (int i=1; i<s.length(); i++) {
			other+="9";
		}
		System.out.println(getSum(n-Long.parseLong(other))+getSum(Long.parseLong(other)));
	}

	public static int getSum(long n) {
		String s = n+"";
		int res =0;
		for(int i=0;i<s.length();i++) {
			res+=Integer.parseInt(s.substring(i,i+1));
		}
		return res;
	}
}