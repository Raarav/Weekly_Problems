import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    

		int matrix[][]; // assuming this is the given matrix
		int order;
		int count=0;
		        Scanner sc = new Scanner(System.in);

		System.out.println("Enterthe order of the matrix ");
        order = sc.nextInt();

        matrix= new int[order][];
            
            for(int m[]:matrix){
                matrix[count]=new int[order];
                count++;
            }
            
       for(int i=0;i<order;i++){
           for(int p=0;p<order;p++){
                       matrix[i][p] = sc.nextInt();

           }
       }

		//TODO: if needed input the matrix from user
		int firstD=0, secondD=0;

		for(int i=0; i<order; i++)
		{

			firstD=firstD+matrix[i][i];
			secondD=secondD+matrix[i][order-1-i];

		}
			
		int abs=firstD-secondD;
		if(abs<0)
		abs=-abs;
		
		System.out.print("sum of first diagonal is " +firstD);
		System.out.print("\n sum of second diagonal is " + secondD);
		System.out.print("\nabsolute difference of the diagonals "+abs);



	}
}
