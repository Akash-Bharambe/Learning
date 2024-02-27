package aakash;

public class Employee {

    private String name;
    private int empid;

    Employee(){
        this("Aakash",10);
    }
    Employee(String name, int empid){
        this.name = name;
        this.empid = empid;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public int getEmpid() {
        return empid;
    }
    public void setEmpid(int empid) {
        this.empid = empid;
    }
	public String toString() {
		return "Employee [name=" + name + ", empid=" + empid + "]";
	}

}
