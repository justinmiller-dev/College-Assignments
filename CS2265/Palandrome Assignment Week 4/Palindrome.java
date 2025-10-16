import java.util.Locale;
import java.util.Scanner;
public class Palindrome
{
    public static void main(String[] args)
    {

        System.out.print("Type in a phrase and I'll check if it's a palindrome > ");
        Scanner userIn = new Scanner(System.in);
        String phrase = userIn.nextLine();
        String modPhrase;
        modPhrase = phrase.toLowerCase();
        StringBuilder phraseOne = new StringBuilder(modPhrase);
        StringBuilder modPhraseOne = new StringBuilder();
        int phraseLength = phraseOne.capacity();
        int position = 0;
        while(position < phraseLength - 16)
        {
            char temp = phraseOne.charAt(position);
            if (Character.isLetter(temp))
            {
                modPhraseOne.append(temp);
                position++;
            }
            else
            {
                position++;
            }
        }
        StringBuilder phraseTwo = new StringBuilder(modPhraseOne);
        StringBuilder modPhraseTwo = new StringBuilder();
        int phraseLengthTwo = phraseTwo.capacity();
        int count = phraseLengthTwo - 16;
        while (count!=0)
        {
            char tempTwo = phraseTwo.charAt(count -1);
            modPhraseTwo.append(tempTwo);
            count--;
        }
        if (modPhraseOne.toString().equals(modPhraseTwo.toString()))
        {
            System.out.println(phrase +  " is a palindrome!");
        }
        else
        {
            System.out.println(phrase+" is not a palindrome!");
        }

    }

}
