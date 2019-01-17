// Accepted
// 327A - Flipping Game

import java.util.Scanner;

public class flippinggame {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int[] arr = new int[n];
		int count=0;
		for (int i=0; i<n; i++) {
			int val = in.nextInt();
			arr[i]=1-val;
			if(val==1) count++;
		}
		if(count==n) {
			System.out.println(n-1);
			return;
		}
		int max = 0;
		int sum = 0;
		for (int i=0; i<arr.length; i++) {
			if(sum<0) sum=0;
			if(arr[i]==0) sum+=-1;
			else sum+=1;
			max=Math.max(sum,max);
		}
		System.out.println(max+count);
	}
}