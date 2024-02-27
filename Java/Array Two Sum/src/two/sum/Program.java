package two.sum;

public class Program {

	public static void main(String[] args) {
		int[] arr = {2,7,91,9};
		int[] indexArr = new int[2];
		int sum = 16;
		boolean flag = false;
		for (int i = 0; i < arr.length; i++) {
			for (int j = i+1; j < arr.length; j++) {
				if (arr[i] + arr[j] == sum) {
					indexArr[0] = i;
					indexArr[1] = j;
					flag = true;
					break;
				}
			}
			if (flag) {
				break;
			}
		}
		for (int i=0;i< indexArr.length; i++) {
			System.out.print(indexArr[i]+ " ");
		}
	}

}