public class ShowStudent2 {
    public static void main(String[] args){
        Student studentDefault = new Student();
        System.out.print("The student ID number is ");
        studentDefault.showStudentId();
        System.out.println();
        System.out.print("The student has ");
        studentDefault.showCreditHours();
        System.out.print(" credit hours\n");
        System.out.print("The student has earned ");
        studentDefault.showPointsEarned();
        System.out.print(" points\n");
        System.out.print("The student has a GPA of ");
        studentDefault.showGPA();
    }
}
