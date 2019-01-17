// Accepted
// 1042A - Benches

import java.util.Scanner;
import java.util.PriorityQueue;

public class benches {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int benches = in.nextInt();
		int add = in.nextInt();
		PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
		int max = 0;
		for (int i=0; i<benches; i++) {
			int val = in.nextInt();
			if(val>max) max = val;
			pq.add(val);
		}
		max+=add;
		int min = pq.peek();
		while(add>0) {
			pq.add(pq.poll()+1);
			add--;
		}
		for(int k: pq) {
			if(k>min) min=k;
		}
		System.out.println(min+" "+max);
	}
}
