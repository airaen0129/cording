/*******************************************
 * SW Expert Academy 2070: 큰 놈, 작은 놈, 같은 놈
 * D1
 * 21.1.30 try: 1
 *******************************************/
import java.util.Scanner;

class Solution {
    public static void main(String args[]) throws Exception {
        //System.setIn(new FileInputStream("res/input.txt"));

        Scanner sc = new Scanner(System.in);
        int T;
        T=sc.nextInt();

        for(int test_case = 1; test_case <= T; test_case++) {
            int a, b;
            a = sc.nextInt();
            b = sc.nextInt();

            char ans;
            if (a > b) ans = '>';
            else if (a < b) ans = '<';
            else ans = '=';

            System.out.println("#" + test_case + ' ' + ans);
        }

        sc.close();
    }
}