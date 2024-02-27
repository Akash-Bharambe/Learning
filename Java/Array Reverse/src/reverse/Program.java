package reverse;

public class Program {

	public static void main(String[] args) {
		int[] arr = new int[]{1,2,3,4,5,6};

		int leftFlag = 0;
		int rightFlag = arr.length -1;
		int temp = 0;

		while (leftFlag < rightFlag) {
			temp = arr[leftFlag];
			arr[leftFlag] = arr[rightFlag];
			arr[rightFlag] = temp;
			leftFlag++;
			rightFlag--;
		}
		for (int i=0;i< arr.length; i++) {
			System.out.print(arr[i]+ " ");
		}
	}

}


/**
 * public String toString();
 * public boolean equals(Object obj);
 * public native int hashCode();
 * protected native Object clone() throws CloneNotSupportedExeception;
 * protected void finalize() throws Throwable;
 * public final native Class<?> getClass();
 * public final native void notify();
 * public final native void notifyAll();
 * public final void wait() throws InterruptedException;
 * public final native void wait(long timeout) throws InterruptedException;
 * public final void wait(long timeout, int nanos) throws InterruptedException;
 */