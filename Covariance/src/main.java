import java.util.LinkedList;

public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Animal an = new Animal();
		Animal cat = new Animal();
		an.name = "Animal";
		an.age = 25;
		cat.name = "Cat";
		cat.age = 2;
		
		//Контравариатность 
		LinkedList<Animal> animalList = new LinkedList<Animal>();
		animalList.add(an);
		animalList.add(cat);
		
		for(int i = 0 ; i < 2; i++)
			animalList.get(i).roar();
	}

}
