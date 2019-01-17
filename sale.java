// Accepted
// 34B - Sale

import java.util.Scanner;
import java.util.PriorityQueue;

public class sale {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int num = in.nextInt();
		int max = in.nextInt();
		PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
		for (int i=0; i<num; i++) {
			pq.add(in.nextInt());
		}
		
		int bought = 0;
		int sum=0;
		while(!pq.isEmpty() && pq.peek()<0 && bought<max) {
			sum+=(0-pq.poll());
			bought++;
		}

		System.out.println(sum);
	}
}