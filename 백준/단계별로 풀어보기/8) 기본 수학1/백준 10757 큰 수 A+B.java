/*******************************************
 * 백준 10757: 큰 수 A+B - 파이썬 같은 언어는 10,000자리 정도의 자연수도 자유롭게 다룰 수 있습니다. 하지만 C/C++이라면 이 문제를 어떻게 풀까요? C/C++ 사용자가 아니더라도 고민해 보면 좋을 것입니다
 * 단계별로 풀어보기: 기본 수학1
 * 알고리즘 분류: 수학, 구현, 사칙연산, 임의 정밀도 / 큰 수 연산
 * 21.5.7 try: 1
 *******************************************/
import java.math.BigInteger;    // BigInteger bigNumber = new BigInteger("10000");
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        //System.setIn(new FileInputStream("res/input.txt")); //import java.io.FileInputStream;

        Scanner sc = new Scanner(System.in);
        BigInteger A = sc.nextBigInteger(), B = sc.nextBigInteger();

        System.out.println(A.add(B));

        sc.close();
    }
}
