//Justin Miller
//Week 7
//12-04-2022


public class ScentedCandle extends Candle{
    private String scent;
    private float height;
    private float price;

    public void setScent(String x){
        scent = x;
    }
    public String getScent(){
        return scent;
    }

    @Override
    public void setHeight(float x) {
        height = x;
        price = 3 * height;

    }

    @Override
    public float getHeight() {
        return height;
    }

    @Override
    public float getPrice() {
        return price;
    }
}
