package vehicle;

public class Vehicle {
	int sp;
	public void speed(int k) {
		sp=k;
		System.out.println("Speed: "+sp+"km/h");
	}
	public void isRunning() {
		if(sp==0)
			System.out.println("Not Running.");
		else
			System.out.println("Running.");
	}
}
