package age;

import java.time.LocalDate;
import java.util.Scanner;
import java.time.Period;

class ageCalculator
{
  public static void main (String[]args) throws Exception
  {
    
  @SuppressWarnings("resource")
  Scanner sc = new Scanner (System.in);
	System.out.print("Enter birthDay: ");
    int birthDay = sc.nextInt();
    System.out.print("Enter birthMonth: ");
    int birthMonth = sc.nextInt();
    System.out.print("Enter birthYear: ");
    int birthYear = sc.nextInt();

    LocalDate Bdate = LocalDate.of(birthYear , birthMonth , birthDay);
 
    LocalDate now = LocalDate.now();
    Period age = Period.between(Bdate, now);
    
    int ageYear = age.getYears();
    int ageMonth = age.getMonths();
    int ageDay = age.getDays();
    
	  System.out.printf("You are %d Years, %d Months, %d Days old",ageYear,ageMonth,ageDay);
  }
}
