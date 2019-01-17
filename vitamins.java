// Accepted
// 1042B - Vitamins

import java.util.Scanner;
import java.util.PriorityQueue;
import java.util.Map;
import java.util.HashMap;
import java.util.Arrays;

public class vitamins {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int num = in.nextInt();
		int[][][] dp = new int[3][3][3];
		for(int i=0;i<3;i++) {
			for (int j=0; j<3; j++) {
				for (int k=0; k<3; k++) {
					dp[i][j][k]=1_000_000;
				}
			}
		}
		for (int i=0; i<num; i++) {
			int price = in.nextInt();
			String vit = in.next();
			char[] arr = vit.toCharArray();
			Arrays.sort(arr);
			int x = arr[0]-'A';
			int y = arr.length>=2?arr[1]-'A':0;
			int z = arr.length>=3?arr[2]-'A':0;
			dp[x][y][z]=Math.min(dp[x][y][z],price);
		}
		int min = 1_000_000;
		min = Math.min(min, dp[0][0][0]+dp[1][0][0]+dp[2][0][0]);
		min = Math.min(min, dp[0][0][0]+dp[1][2][0]);
		min = Math.min(min, dp[0][1][0]+dp[2][0][0]);
		min = Math.min(min, dp[0][2][0]+dp[1][0][0]);
		min = Math.min(min, dp[0][1][2]);
		min = Math.min(min, dp[0][1][0]+dp[1][2][0]);
		min = Math.min(min, dp[0][2][0]+dp[1][2][0]);
		min = Math.min(min, dp[0][1][0]+dp[0][2][0]);
		System.out.println(min==1_000_000?-1:min);
	}
}