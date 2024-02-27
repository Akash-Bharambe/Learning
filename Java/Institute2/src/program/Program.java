package program;

import java.util.Scanner;

import institute.*;

public class Program {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {

		int choice;
		Institute inst = new Institute();

		while ((choice = menuList()) != 0) {
			switch (choice) {
			case 1:
				inst.addEmployee();
				break;
			case 2:
				inst.removeEmployee();
				break;
			case 3:
				inst.findEmployee();
				break;
			case 4:
				inst.printEmployees();
				break;
			}
		}

	}

	private static int menuList() {
		System.out.println("0. Exit");
		System.out.println("1. Add Employee");
		System.out.println("2. Remove Employee");
		System.out.println("3. Find Employee");
		System.out.println("4. Print All Employee");
		System.out.print("Enter Choice: ");
		return sc.nextInt();
	}
}
