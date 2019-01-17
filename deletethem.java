// Accepted
// 730H - Delete Them

import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

public class deletethem {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int d = in.nextInt();
		String[] arr = new String[n+1];
		for (int i=1; i<=n; i++) {
			arr[i] = in.next();
		}
		List<Integer> delete = new ArrayList<Integer>();
		for (int i=0; i<d; i++) {
			delete.add(in.nextInt());
		}
		int size=arr[delete.get(0)].length();
		boolean valid = true;
		char[] str = arr[delete.get(0)].toCharArray();
		for(int i=0;i<delete.size()-1;i++) {
			String s = arr[delete.get(i)];
			String t = arr[delete.get(i+1)];
			if(size!=t.length()) {
				System.out.println("No");
				return;
			}
			
			for (int j=0; j<size; j++) {
				if(s.charAt(j)!=t.charAt(j)) {
					str[j]='?';
				}
				else {
					if(str[j]!='?') str[j]=s.charAt(j);
				}
			}
			size=s.length();
		}

		for(int i=1;i<arr.length;i++) {
			if(delete.contains(i)) continue;
			String cur = arr[i];
			int match = 0;
			int q = 0;
			if(cur.length()!=str.length) continue;
			for(int j=0;j<Math.min(cur.length(),str.length);j++) {
				if(str[j]=='?') {
					q++;
					continue;
				}
				if(str[j]==cur.charAt(j)) {
					match++;
				}
			}
			if(match+q==str.length) {
				valid=false;
				break;
			}
		}

		if(!valid) {
			System.out.println("No");
			return;
		} else {
			System.out.println("Yes");
			for (int i=0; i<str.length; i++) {
				System.out.print(str[i]);
			}
			System.out.println();
		}
	}
}