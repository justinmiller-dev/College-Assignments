public class ShowStudent {
    public static void main(String[] args){
        Student studentOne = new Student();
        studentOne.assignIdNumber(1234);
        studentOne.assignCreditHours(3);
        studentOne.assignPointsEarned(11);
        studentOne.computeGPA();

        System.out.print("The student ID number is ");
        studentOne.showStudentId();
        System.out.println();
        System.out.print("The student has ");
        studentOne.showCreditHours();
        System.out.print(" credit hours\n");
        System.out.print("The student has earned ");
        studentOne.showPointsEarned();
        System.out.print(" points\n");
        System.out.print("The student has a GPA of ");
        studentOne.showGPA();
    }

}
