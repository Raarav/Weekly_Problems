class first{


	public static void main(String[] args){


		int matrix[3][3]={{1,2,9},{2,3,4},{4,5,6}}; // assuming this is the given matrix

		//TODO: if needed input the matrix from user
		int firstD=0, secondD=0;

		for(int i=0; i<3; i++)
		{

			firstD=firstD+matrix[i][i];
			secondD=secondD+matrix[i][2-i];

		}
			
		abs=first-second;
		if(abs<0)
		abs=-abs;
		
		System.out.print("sum of first diagonal is " +firstD);
		System.out.print("\n sum of second diagonal is " + secondD);
		System.out.print("\nabsolute difference of the diagonals "+abs);



	}


}