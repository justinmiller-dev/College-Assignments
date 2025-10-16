//Justin Miller
//Week 7
//12-04-2022



import java.lang.*;

public class DemoCandle {
    public static void main(String[] args){
        Candle myCandle = new Candle();
        ScentedCandle myCandleTwo = new ScentedCandle();
        myCandleTwo.setColor("Blue");
        myCandleTwo.setHeight(4);
        myCandleTwo.setScent("Blueberry");
        myCandle.setColor("Red");
        myCandle.setHeight(4);

        System.out.println("Candle 1");
        System.out.println("Color: "+myCandle.getColor());
        System.out.println("Height: "+ myCandle.getHeight()+" inches");
        System.out.println("Price: " + myCandle.getPrice() + " Dollars");
        System.out.println("Scent: Unscented");
        System.out.println(" ");
        System.out.println("Candle 2");
        System.out.println("Color: "+myCandleTwo.getColor());
        System.out.println("Height: "+ myCandleTwo.getHeight()+" inches");
        System.out.println("Price: " + myCandleTwo.getPrice() + " Dollars");
        System.out.println("Scent: " +myCandleTwo.getScent());
    }
}
