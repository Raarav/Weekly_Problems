import java.util.Scanner;

class DiagonalDifference {

    public  int size ,d1,d2 ,diff;
     int array[][];


    public void takeInput(){

        Scanner in = new Scanner(System.in);

        System.out.println("enter the size of 2D square matrix ");

         size = in.nextInt();
        array = new int[size][size];

        System.out.println("enter the elements 2D square matrix ");

        for(int i=0; i<size; i++){
            for(int j=0 ; j<size; j++){
             array[i][j] = in.nextInt();
            }
        }

    }

    public void showMatrix(){
        System.out.println("you hava enetered this matrix");
        for(int i=0; i<size; i++){
            for(int j=0 ; j<size; j++){

                        System.out.print(array[i][j] + "  ");
            }
            System.out.println();
        }
    }

    public void diaDiff(){
        for(int i=0; i<size; i++){
            for(int j=0 ; j<=i; j++){
                if(i==j){
                    d1= d1+array[i][j];
                }
            }
        }

        for(int i=0; i<size; i++){
            for(int j=0 ; j<size; j++){
                if(i==(size-j-1)){
                    d2= d2+array[i][j];
                }
            }
        }
        diff=d1-d2;
        System.out.println("difference of diagonal is = " + diff);

    }

    public static void main(String arg[]){
        DiagonalDifference difference = new DiagonalDifference();
        difference.takeInput();
        difference.showMatrix();
        difference.diaDiff();
    }


}
