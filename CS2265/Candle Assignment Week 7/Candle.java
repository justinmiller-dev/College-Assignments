//Justin Miller
//Week 7
//12-04-2022

public class Candle {
    private float height;
    private String color;
    private float price;

    public void setColor(String x){
        color = x;
    }
    public String getColor(){
        return color;
    }
    public void setHeight(float x){
        height = x;
        price = 2 * height;
    }
    public float getHeight() {
        return height;
    }
    public float getPrice(){
        return price;
    }
}
