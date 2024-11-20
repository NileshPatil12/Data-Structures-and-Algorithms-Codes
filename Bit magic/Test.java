import java.util.*;
class invalidageException extends Exception
{
    public invalidageException(String msg)
    {
        System.out.println(msg);
    }
}
class Test{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        try {
            System.out.println("ENTER YOUR AGE :");
            int age = in.nextInt();
            if(age < 18){
                throw new invalidageException("NOT eligible for voiting :");
            }
            else{
                System.out.println("ELIGIBAL FOR VOTING :");
            }
        } catch (invalidageException  e) {
            System.out.println("INVALID AGE ");
        }
    }
}