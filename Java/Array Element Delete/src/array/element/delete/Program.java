package array.element.delete;

public class Program {
public static void printArr(int[] arr) {
	for (int j = 0; j < arr.length; j++) {
		System.out.print(" "+arr[j]);
	}
	System.out.println();
}
	public static void main(String[] args) {
		int[] arr = new int[] { 1, 2, 3, 4, 5 };
		int key = 3;
		int indexToRemove = -1;
		for (int j = 0; j < arr.length; j++) {
			if (arr[j] == key) {
				indexToRemove = j;
				break;
			}
		}
		int[] newArr = new int[arr.length -1];
		
		for (int i = 0,j=0; i < arr.length; i++) {
			if(i != indexToRemove) {
				newArr[j++] = arr[i];
			}
			
		}
		printArr(arr);
		printArr(newArr);
	}

}
