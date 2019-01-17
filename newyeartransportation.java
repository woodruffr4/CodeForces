// Accepted
// 500A - New Year Transportation

import java.util.Scanner;

public class newyeartransportation {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int to = in.nextInt();
		int[] arr = new int[n+1];
		for (int i=1; i<n; i++) {
			arr[i]=in.nextInt();
		}
		for(int i=1;i<=n;) {
			if(i==to) {
				System.out.println("YES");
				return;
			}
			if(arr[i]==0)break;
			i+=arr[i];
		}
		System.out.println("NO");
	}
}