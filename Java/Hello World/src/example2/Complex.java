package example2;

public class Complex {
	private static int imag;
	private static int real;
	private final String iota;

	public Complex() {
		this.iota = "i";
	}

	public static int getImag() {
		return imag;
	}

	public static void setImag(int imag) {
		Complex.imag = imag;
	}

	public static int getReal() {
		return real;
	}

	public static void setReal(int real) {
		Complex.real = real;
	}

	public String getIota() {
		return iota;
	}

	public String toString() {
		return "Complex [iota=" + iota + "]";
	}

}
