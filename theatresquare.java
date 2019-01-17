// Accepted
// 1A - Theatre Square

import java.util.Scanner;

public class theatresquare {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int m = in.nextInt();
		int a = in.nextInt();
		long res = 1;
		if(a==m && a==n) {
			System.out.println(1);
			return;
		}
		else if(a>m && a>n) {
			System.out.println(1);
			return;
		}
		res*=n%a==0?n/a:(n/a)+1;
		res*=m%a==0?m/a:(m/a)+1;
		System.out.println(res);
	}
}