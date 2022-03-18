class Solution {
    public int reverse(int x) {
        if(x == Integer.MIN_VALUE) return 0;
        boolean neg = x < 0;
        if(neg) {
            x = x * -1;
        }
        double y = 0;
        while(x > 0) {
            y = (y * 10) + (x % 10);
            x = x / 10;
        }
        if(neg) y = y * -1;
        if((y > Integer.MAX_VALUE) || y < Integer.MIN_VALUE) { return 0;}
        return (int) y;
    }
}