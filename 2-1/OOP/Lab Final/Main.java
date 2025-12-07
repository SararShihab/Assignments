import java.util.Scanner;
class GradeUtil {
static void validateGrade(int grade) throws Exception {
if (grade < 0 || grade > 100) throw new Exception("Invalid grade: must be
0..100");
System.out.println("Grade accepted: " + grade);
}
}
public class Main {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
System.out.print("Enter grade: ");
int g = sc.nextInt();
try {
GradeUtil.validateGrade(g);
} catch (Exception e) {
System.out.println("Handled: " + e.getMessage());
}
}
}