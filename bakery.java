// Accepted
// 707B - Bakery

import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;

public class bakery {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt(), m = in.nextInt(), bakeries = in.nextInt();
		
		List<Integer> start = new ArrayList<Integer>();
		List<Integer> end = new ArrayList<Integer>();
		List<Integer> cost = new ArrayList<Integer>();
		for (int i=0; i<m; i++) {
			start.add(in.nextInt());
			end.add(in.nextInt());
			cost.add(in.nextInt());
		}

		int min = Integer.MAX_VALUE;
		boolean[] stores = new boolean[n+1];
		Arrays.fill(stores,false);
		for (int i=0; i<bakeries; i++) {
			stores[in.nextInt()]=true;
		}

		for (int i=0; i<start.size(); i++) {
			int s = start.get(i);
			int e = end.get(i);
			if((stores[s] && !stores[e]) || (stores[e] && !stores[s])) {
				min = Math.min(min,cost.get(i));
			}
		}

		System.out.println(min==Integer.MAX_VALUE?-1:min);



	}
}