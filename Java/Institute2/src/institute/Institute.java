package institute;

import java.util.Scanner;

public class Institute {
	private int empCount;
	Employee[] empArr;
	static Scanner sc = new Scanner(System.in);

	public Institute() {
		empArr = new Employee[5];
	}

	public void addEmployee() {
		if (empCount < empArr.length) {
			Employee emp = new Employee();
			acceptData(emp);
			empArr[empCount] = emp;
			empCount++;
		} else {
			System.out.println("Employee Limit Reached");
		}
	}

	private static void acceptData(Employee emp) {

		System.out.print("Enter Name: ");
		sc.nextLine();
		emp.setName(sc.nextLine());
		System.out.print("Enter Employee Id: ");
		emp.setEmpid(sc.nextInt());
		System.out.print("Enter Salary: ");
		emp.setSalary(sc.nextFloat());
	}

	public void removeEmployee() {
		System.out.print("Enter Id: ");
		int id = sc.nextInt();
		for (int i = 0; i < empArr.length; i++) {
			if (empArr[i] != null && empArr[i].getEmpid() == id) {
				System.out.println(empArr[i].getName() + " with Employee Id " + empArr[i].getEmpid() + " is Removed");
			empArr[i] = null;
			break;
			}
		}

	}

	public void findEmployee() {
		System.out.print("Enter Id: ");
		int id = sc.nextInt();
		for (int i = 0; i < empArr.length; i++) {
			if (empArr[i] != null && empArr[i].getEmpid() == id)
				System.out.println(empArr[i]);
		}
	}

	public void printEmployees() {
		for (int i = 0; i < empArr.length; i++) {
			System.out.println(empArr[i]);
		}
	}

}
