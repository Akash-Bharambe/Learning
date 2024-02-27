package example;

import example2.Complex;

public class Program {

	public static void main(String[] args) {

		Complex comp = new Complex();

		System.out.println(Complex.getReal() + " +" + " " + comp.getIota() + "*" + Complex.getImag());

		Complex.setImag(200);
		Complex.setReal(40);
		System.out.println(Complex.getReal() + " +" + " " + comp.getIota() + "*" + Complex.getImag());

	}

}
