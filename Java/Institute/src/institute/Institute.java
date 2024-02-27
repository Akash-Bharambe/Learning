package institute;

import java.util.Scanner;

public class Institute {
	private Employee[] arr;
	private int empCount;
	static Scanner sc = new Scanner(System.in);

	public Institute() {
		this(5);
	}

	public Institute(int capacity) {
		this.arr = new Employee[capacity];
	}

	public void addEmployee(Employee emp) {
		if (empCount < this.arr.length) {
			this.arr[empCount] = emp;
			System.out.print("Enter name: ");
			emp.setName(sc.nextLine());
			System.out.print("Enter Employee ID: ");
			emp.setEmpId(sc.nextInt());
			System.out.print("Enter Salary: ");
			emp.setSalary(sc.nextFloat());
			empCount++;
		}else {
			System.out.println("Employee Limit Reached");
		}
	}

	public void removeEmployee() {
		System.out.println("Enter Employee id of Employee to be Removed");
		int id = sc.nextInt();
		for (int i = 0; i < arr.length; i++) {
			if (this.arr[i] != null && this.arr[i].getEmpId() == id) {
				System.out.println(arr[i].getName() + " with Employee Id " + arr[i].getEmpId() + " Removed");
				arr[i] = null;
				empCount--;
			}
		}

	}

	public void printEmployee() {
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] != null)
				System.out.println(arr[i]);
		}

	}

	public void findEmployee() {
		System.out.println("Enter Employee id of Employee to be found");
		int id = sc.nextInt();
		for (int i = 0; i < arr.length; i++) {
			if (this.arr[i] != null && this.arr[i].getEmpId() == id) {
				System.out.println(arr[i]);
			}
		}

	}
}
