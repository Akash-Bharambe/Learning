package shapes;

public class Main {

	public static void main(String[] args) {
		ShapeEnum choice;
		Logic test = new Logic();
		while ((choice = Logic.menuList()) != ShapeEnum.EXIT) {
			test.setShape(Logic.getReference(choice));
			test.acceptRecord();
			test.printRecord();
		}
	}

}
