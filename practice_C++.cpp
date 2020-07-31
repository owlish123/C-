//P1：打印用户输入
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	char name[15];
//	cout << "please enter your name:";
//	cin >> name;
//	cout << "your name is:" << name << endl;
//	return 0;
//}

//p2:实现两个数相加

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cout << "please enter two numbers:";
//	cin >> a >> b;
//	cout << "sum is:" << a + b << endl;
//	return 0;
//}

//p3: 求商及余数

//#include<iostream>
//using namespace std;
//int main()
//{
//	int beiChu, chu;
//	cout << "please enter two numbers:";
//	cin >> beiChu >> chu;
//	cout << "商 = " << beiChu / chu << endl;
//	cout << "余 = " << beiChu % chu << endl;
//	return 0;
//}

//p4: 交换两个数（临时变量法(略）；非临时变量法（求和）（异或）；

//#include<iostream>
//using namespace std;
//int main()
//{
//	int first_number, second_number;
//	cout << "please enter two numbers:";
//	cin >> first_number >> second_number;
//	cout << "first_number = " << first_number << ", second_number =" << second_number << endl;
//
//	cout << "求和法" << endl;
//	first_number = first_number + second_number;
//	second_number = first_number - second_number;
//	first_number = first_number - second_number;
//	cout << "first_number = " << first_number << ", second_number =" << second_number << endl;
//	
//	cout << "异或法" << endl;
//	first_number = first_number ^ second_number;
//	second_number = first_number ^ second_number;
//	first_number = first_number ^ second_number;
//	cout << "first_number = " << first_number << ", second_number =" << second_number << endl;
//
//	return 0;
//}

//p5: 判断奇数偶数（n%2 == 0(偶）； 三元运算；n & 1== 0(偶））
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n = 5;
//	(n % 2 == 0) ? cout << n << " is even" : cout << n << " is odd" << endl;
//
//	if (n & 1 == 0)
//		cout << n << " is even" << endl;
//	else
//		cout << n << " is odd" << endl;
//	return 0;
//}

//p6: 求自然数的和

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n, sum;
//	cout << "please enter a number:";
//	cin >> n;
//	sum = (1 + n) * n / 2;
//	cout << sum << endl;
//	return  0;
//}

//p7: 最大公约数和最小公倍数
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, min;
//	cout << "please enter two numbers:";
//	cin >> a >> b;
//	min = a < b ? a : b;
//	int i;
//	int ret = 1;
//	for (i = 1; i <= min; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//			ret = i;
//			
//	}
//	cout << "最大公约数是：" << ret << endl;
//	cout << "最小公倍数是：" << (a * b) / ret << endl;
//	return 0;
//}

//p8:最大公约数最小公倍数
//#include<iostream>
//using namespace std;
////最小公倍数则在开始将n1和n2由temp1和temp2代替，最后(n1+n2)/最大公约
//int main()
//{
//    int n1, n2;
//
//    cout << "输入两个整数: ";
//    cin >> n1 >> n2;
//
//    while (n1 != n2)
//    {
//        if (n1 > n2)
//            n1 -= n2;
//        else
//            n2 -= n1;
//    }
//
//    cout << "HCF = " << n1;
//    return 0;
//}

//p9:猴子吃桃
//#include<iostream>
//using namespace std;
//int main()
//{
//    int x = 1, y;
//    int i;
//    for (i = 1; i < 10; i++)
//    {
//        y = (x + 1) * 2;
//        x = y;
//    }
//    cout << x << endl;
//    return 0;
//}
