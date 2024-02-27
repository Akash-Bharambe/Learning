package program;

import institute.*;
import java.util.Scanner;

public class Program {

  static Scanner sc = new Scanner(System.in);

  public static int menuList() {
    System.out.println("0. Exit");
    System.out.println("1. Add Employee");
    System.out.println("2. Remove Employee");
    System.out.println("3. Print Employees");
    System.out.println("4. Find Employee");
    System.out.println("Enter Coice");
    return sc.nextInt();
  }

  public static void main(String[] args) {
    System.out.println("Capacity Of Employees: ");
    Institute inst = new Institute(sc.nextInt());
    int choice;
    while ((choice = menuList()) != 0) {
      switch (choice) {
        case 1:
          Employee emp = new Employee();
          inst.addEmployee(emp);
          break;
        case 2:
          inst.removeEmployee();
          break;
        case 3:
          inst.printEmployee();
          break;
        case 4:
          inst.findEmployee();
          break;
      }
    }
  }
}
