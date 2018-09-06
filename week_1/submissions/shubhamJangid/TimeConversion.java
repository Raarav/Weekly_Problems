import java.util.Scanner;

public class TimeConversion {
    private int hr , mm , ss ;
    private String  meridian;
    public void gettime(){
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the hours");
         hr = in.nextInt();
        System.out.println("Enter the minute");
         mm = in.nextInt();
        System.out.println("Enter the seconds");
         ss = in.nextInt();
        in.nextLine();
        System.out.println("Enter Am or Pm");
        meridian = in.nextLine();
        System.out.println( "you have entered " + String.format("%02d", hr) +":" + String.format("%02d", mm) +":" + String.format("%02d", ss) +":" + meridian);



    }

    public void format(){
        if(meridian.equals("pm") || meridian.equals("Pm") || meridian.equals("pM") || meridian.equals("PM") ){
            hr = hr + 12 ;
            System.out.println("Formated time is " + String.format("%02d", hr) +":" + String.format("%02d", mm) +":" + String.format("%02d", ss) );
        }else{
            System.out.println("Formated time is " + String.format("%02d", hr) +":" + String.format("%02d", mm) +":" + String.format("%02d", ss));

        }


    }

    public static void main(String arg[]){

        TimeConversion time = new TimeConversion();
        time.gettime();
        time.format();
    }
}
