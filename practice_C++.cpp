//P1����ӡ�û�����
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

//p2:ʵ�����������

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

//p3: ���̼�����

//#include<iostream>
//using namespace std;
//int main()
//{
//	int beiChu, chu;
//	cout << "please enter two numbers:";
//	cin >> beiChu >> chu;
//	cout << "�� = " << beiChu / chu << endl;
//	cout << "�� = " << beiChu % chu << endl;
//	return 0;
//}

//p4: ��������������ʱ������(�ԣ�������ʱ����������ͣ�����򣩣�

//#include<iostream>
//using namespace std;
//int main()
//{
//	int first_number, second_number;
//	cout << "please enter two numbers:";
//	cin >> first_number >> second_number;
//	cout << "first_number = " << first_number << ", second_number =" << second_number << endl;
//
//	cout << "��ͷ�" << endl;
//	first_number = first_number + second_number;
//	second_number = first_number - second_number;
//	first_number = first_number - second_number;
//	cout << "first_number = " << first_number << ", second_number =" << second_number << endl;
//	
//	cout << "���" << endl;
//	first_number = first_number ^ second_number;
//	second_number = first_number ^ second_number;
//	first_number = first_number ^ second_number;
//	cout << "first_number = " << first_number << ", second_number =" << second_number << endl;
//
//	return 0;
//}

//p5: �ж�����ż����n%2 == 0(ż���� ��Ԫ���㣻n & 1== 0(ż����
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

//p6: ����Ȼ���ĺ�

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

//p7: ���Լ������С������
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
//	cout << "���Լ���ǣ�" << ret << endl;
//	cout << "��С�������ǣ�" << (a * b) / ret << endl;
//	return 0;
//}

//p8:���Լ����С������
//#include<iostream>
//using namespace std;
////��С���������ڿ�ʼ��n1��n2��temp1��temp2���棬���(n1+n2)/���Լ
//int main()
//{
//    int n1, n2;
//
//    cout << "������������: ";
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

//p9:���ӳ���
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
