import java.util.Scanner;


public class RightPattern {
    public int n;

    public void ptrn(){
        Scanner in = new Scanner(System.in);
        System.out.println("enter the size of pattern");
        int n = in.nextInt();

        for(int i=1; i<=n; i++){

            for(int j=n ; j>i; j--){
                System.out.print(" ");
            }
            for(int k=1 ; k<=i; k++){
                System.out.print("#");
            }
            System.out.println();
        }
    }

    public static void main(String arg[]){
        RightPattern pattern = new RightPattern();
        pattern.ptrn();
    }

}
