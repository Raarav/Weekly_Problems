import java.util.Scanner;

public class second
{

	public static void main(String[] args) {

    int n;
	int i=0,j=0;
	System.out.println("Enter no of lines");
	Scanner sc = new Scanner(System.in);
    n = sc.nextInt();


	for( i=0;i<n;i++){

        for( j=i;j<n;j++){
            System.out.print(" ");

        }
        for( j=0; j<=i;j++){
          System.out.print("#");
        }
	System.out.println("");
	}


	}
}
