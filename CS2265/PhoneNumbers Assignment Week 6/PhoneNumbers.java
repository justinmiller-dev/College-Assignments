import java.util.Scanner;

public class PhoneNumbers {
    /* Justin Miller
     * 11/27/2022 */

    public static void main(String[] args) {
        /* Declaring the arrays for names and numbers as
        well as the variable for max array size and the scanner for user input and the quit keyword */
        Scanner inputDevice = new Scanner(System.in);
        String outName = "";
        String keyWord = "quit";
        String userInput;
        String userChoice;
        long outNum = 0;
        long newNum;
        final int maxArray = 30;
        int position;
        boolean validName = false;
        boolean end = false;
        String[] nameArray = new String[maxArray];
        long[] phoneNumbers = new long[maxArray];


        /* Assigning fake initial data to the arrays */

        nameArray[0] = "Masamba";
        nameArray[1] = "Henriett";
        nameArray[2] = "Albrecht";
        nameArray[3] = "Eitan";
        nameArray[4] = "Netuno";
        nameArray[5] = "Clement";
        nameArray[6] = "Rosalee";
        nameArray[7] = "Porter";
        nameArray[8] = "Maud";
        nameArray[9] = "Sharon";

        phoneNumbers[0] = 2787872301L;
        phoneNumbers[1] = 9825919934L;
        phoneNumbers[2] = 3785666849L;
        phoneNumbers[3] = 2179784492L;
        phoneNumbers[4] = 4228422122L;
        phoneNumbers[5] = 2625426344L;
        phoneNumbers[6] = 6547636913L;
        phoneNumbers[7] = 7967642372L;
        phoneNumbers[8] = 7423225773L;
        phoneNumbers[9] = 9113707519L;

        /* First loop that searches the array for the user input */
        while (!end){
            System.out.println("Welcome to the Phone Directory! Please type in a name to continue or type "+keyWord+" to quit.");
            System.out.print(">> ");
            userInput = inputDevice.nextLine();
            if (userInput.equals(keyWord)){
                end = true;
            } else {
                for (int x = 0; x < nameArray.length; ++x){
                    if (userInput.equals(nameArray[x])){
                        validName = true;
                        outName = nameArray[x];
                        outNum = phoneNumbers[x];
                        break;
                    } else {
                        validName = false;
                    }
                }
                if (validName){
                    System.out.println("Name: "+outName);
                    System.out.println("Number: "+outNum);
                } else {
                    System.out.println(userInput+" does not exist in the directory. Would you like to add it? Y or N");
                    userChoice = inputDevice.nextLine();
                    userChoice = userChoice.toLowerCase();
                    if (userChoice.equals("y")){
                        position = getEmptySection(nameArray);
                        if (position == nameArray.length + 1){
                            System.out.println("No more space in directory");
                        } else {
                            nameArray[position] = userInput;
                            System.out.println("Please enter a phone number for "+userInput);
                            newNum = inputDevice.nextLong();
                            phoneNumbers[position] = newNum;
                            inputDevice.nextLine();
                        }
                    }
                }
            }
        }
    }

    /* Finds an empty spot in the Array and returns its position */
    public static int getEmptySection(String[] arr){
        int p = 0;
        for (int x=0; x < arr.length; x++){
            if (arr[x] == null) {
                p = x;
                break;
            } else {
                p = arr.length + 1;
            }
        }

        return p;

    }
}
