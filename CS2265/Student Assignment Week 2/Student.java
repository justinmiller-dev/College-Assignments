public class Student {
    private int idNumber;
    private float creditHours;
    private float pointsEarned;
    private float gpa;

    public Student(){
        idNumber = 9999;
        creditHours = 3;
        pointsEarned = 12;
        computeGPA();
    }
    public void assignIdNumber(int inputId) {
        idNumber = inputId;
    }
    public void assignCreditHours(float inputCH){
        creditHours = inputCH;
    }
    public void assignPointsEarned(float inputPE){
        pointsEarned = inputPE;
    }
    public void computeGPA(){
        float total;
        total = pointsEarned/creditHours;
        gpa = total;
    }
    public void showStudentId(){
        System.out.print(idNumber);
    }
    public void showCreditHours(){
        System.out.print(creditHours);
    }
    public void showPointsEarned(){
        System.out.print(pointsEarned);
    }
    public void showGPA(){
        System.out.print(gpa);
    }
}
