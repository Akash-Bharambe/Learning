package demo;

public class Employee extends Person {
	private int empid;
	private float salary;

	public Employee() {
		this("", 0);
	}

	public Employee(String name, int age) {
		super(name, age);
	}

	public int getEmpid() {
		return empid;
	}

	public void setEmpid(int empid) {
		this.empid = empid;
	}

	public float getSalary() {
		return salary;
	}

	public void setSalary(float salary) {
		this.salary = salary;
	}

	@Override
	public String toString() {
		return super.toString() + "\nEmployee [empid=" + empid + ", salary=" + salary + "]";
	}

}
