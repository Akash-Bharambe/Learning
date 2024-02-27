package monotonic;

public class Mono {

	public static void main(String[] args) {
		int[] arr = new int[] { 9, 4, 5, 6 ,9,10,65,65,433,543};
		boolean increasing = true;
		boolean decreasing = true;

		for (int i = 0; i < arr.length - 1; i++) {
			if (arr[i + 1] > arr[i]) {
				increasing = false;
			} else if (arr[i + 1] < arr[i]) {
				decreasing = false;
			}
		}
		boolean monotonic = increasing || decreasing;
		
		if (monotonic) {
			System.out.println("Monotonic");
		}else {
			System.out.println("Not Monotonic");
		}
	}

}
