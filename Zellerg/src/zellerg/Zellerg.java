package zellerg;

 

public class Zellerg {

 

    public static void main(String[] args) {
        int d= Zellerg(19, 7, 2000);
        String [] dias = new String [] {"Domingo","Lunes","Martes","Miércoles","Jueves","Viernes","Sábado"};
            System.out.println("Naciste un " + dias[d]);
            //modificamos el programa para que aparezca el día (lunes, martes, miércoles, etc...)
    }
    private static int Zellerg(int Day, int Month, int Year){
        int Zeller;
        Month = (Month + 10) % 12;
        Year = Year - 1 * ((Month > 10)?1:0);
        Zeller = (13 * Month - 1) / 5 + 1 + Year % 100 + (Year %100) / 4 + (-2 * (Year /100)) + (Year / 400) % 7;
        Zeller =((Zeller + Day) % 7 + 6) % 7;
        return Zeller;
    }
}
 