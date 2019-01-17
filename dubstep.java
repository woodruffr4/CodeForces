// Accepted
// 208A - Dubstep

import java.util.*;
public class dubstep {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String dub = in.next();
		int index = dub.indexOf("WUB");
		if(index==-1) {
			System.out.println(dub);
			return;
		}
		int lastIndex = 0;
		String res = "";
		while(index!=-1) {
			if(lastIndex==index) {
				index = dub.indexOf("WUB",index+1);
			}
			if(index==-1) {
				try {
					res+=" "+dub.substring(lastIndex+3,dub.length());
				} catch(Exception e) {}
				break;
			}
			if(dub.substring(lastIndex,index).equals("WUB")) {
				lastIndex = index;
			} else {
				if(lastIndex==0 && !dub.substring(lastIndex,index).contains("WUB")) {
					res+=" "+dub.substring(lastIndex,index);
					lastIndex=index;
					continue;
				}
				res+=" "+dub.substring(lastIndex+3,index);
				lastIndex=index;
			}
		}
		System.out.println(res.trim());
	}
}
