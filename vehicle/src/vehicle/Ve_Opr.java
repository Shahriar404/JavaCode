package vehicle;
import java.util.Scanner;

public class Ve_Opr {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		while (true) {
			System.out.println("Choose:\n1.Car\n2.Bus\n3.Ship\n4.Boat\n5.Aeroplane\n6.Helicopter\n");
			Scanner scan = new Scanner(System.in);
			int choose;
			choose=scan.nextInt();
			try{
				if(choose==1)
				{
					System.out.println("Input speed: ");
					int speed=scan.nextInt();
					Car cc=new Car(speed);
				}
				else if(choose==2)
				{
					System.out.println("Input speed: ");
					int speed=scan.nextInt();
					Bus bb=new Bus(speed);
				}
				else if(choose==3)
				{
					System.out.println("Input speed: ");
					int speed=scan.nextInt();
					Ship bb=new Ship(speed);
				}
				else if(choose==4)
				{
					System.out.println("Input speed: ");
					int speed=scan.nextInt();
					Boat bb=new Boat(speed);
				}
				else if(choose==5)
				{
					System.out.println("Input speed: ");
					int speed=scan.nextInt();
					Aeroplane bb=new Aeroplane(speed);
				}
				else if(choose==6)
				{
					System.out.println("Input speed: ");
					int speed=scan.nextInt();
					Helicopter bb=new Helicopter(speed);
				}
			}
			catch (Exception e) {
				System.out.println(e.getMessage());	
			}				
		}
	}
}
