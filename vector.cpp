//1��������ĩβ�����ɾ��Ԫ��
//#include<iostream>
//#include<vector>
//using namespace std;
//int main() 
//{
//	vector<int> obj;
//	for (int i = 0; i < 10; i++)
//	{
//		obj.push_back(i);//push_back()���
//		cout << obj[i] << " ";//����
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		obj.pop_back();//pop_back()
//	}
//	cout << "\n" << endl;
//	for (int i = 0; i < obj.size(); i++)//size()Ԫ�ظ���
//	{
//		cout << obj[i] << " ";
//	}
//
//	return 0;
//}

//2�������������������
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int> obj;
//	for (int i = 0; i < 5; i++)
//	{
//		obj.push_back(i);
//		cout << obj[i] << ",";
//	}
//	obj.clear();//clear()���
//	cout << endl;
//	for (int i = 0; i < obj.size(); i++)
//	{
//		cout << obj[i] << " ";
//	}
//	return 0;
//}

//3������������
//#include<iostream>
//#include<vector>
//using namespace std;
//int main() 
//{
//	vector<int> obj;
//	for (int i = 0; i < 5; i++)
//	{
//		obj.push_back(i);
//	}
//	vector<int>::iterator p;//��������ָ������Ԫ��
//	for (p = obj.begin(); p != obj.end(); p++)//end�õ����һ����Ԫ+1��ָ��
//	{
//		cout << *p << " ";
//	}
//	return 0;
//}

//4������
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	vector<int> obj;
//	for (int i = 0; i < 5; i ++)
//	{
//		obj.push_back(i);
//		cout << obj[i] << " ";
//	}
//	cout << endl;
//	sort(obj.begin(), obj.end());//����
//	for (int i = 0; i < obj.size(); i++)
//	{
//		cout << obj[i] << " ";
//	}
//	cout << endl;
//	reverse(obj.begin(), obj.end());//����
//	for (int i = 0; i < obj.size(); i++)
//	{
//		cout << obj[i] << " ";
//	}
//	return 0;
//}