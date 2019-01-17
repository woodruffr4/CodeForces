// Accepted
// 405A - Gravity Flip

import java.util.Scanner;
import java.util.Arrays;

public class gravityflip {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int[] arr = new int[n];
		for (int i=0; i<n; i++) {
			arr[i]=in.nextInt();
		}
		Arrays.sort(arr);
		for (int i=0; i<n; i++) {
			if(i!=(n-1)) {
				System.out.print(arr[i]+" ");
			} else {
				System.out.println(arr[i]);
			}
		}
	}
}