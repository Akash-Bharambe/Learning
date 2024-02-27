package institute;

public class Employee {

  private String name;
  private int empId;
  private float salary;

  public Employee() {}

  public Employee(String name, int empId, float salary) {
    this.name = name;
    this.empId = empId;
    this.salary = salary;
  }

  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public int getEmpId() {
    return empId;
  }

  public void setEmpId(int empId) {
    this.empId = empId;
  }

  public float getSalary() {
    return salary;
  }

  public void setSalary(float salary) {
    this.salary = salary;
  }

  public String toString() {
    return this.name + "	" + this.empId + "	" + this.salary;
  }
}
