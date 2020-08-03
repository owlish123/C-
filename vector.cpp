//1、在容器末尾插入和删除元素
//#include<iostream>
//#include<vector>
//using namespace std;
//int main() 
//{
//	vector<int> obj;
//	for (int i = 0; i < 10; i++)
//	{
//		obj.push_back(i);//push_back()添加
//		cout << obj[i] << " ";//访问
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		obj.pop_back();//pop_back()
//	}
//	cout << "\n" << endl;
//	for (int i = 0; i < obj.size(); i++)//size()元素个数
//	{
//		cout << obj[i] << " ";
//	}
//
//	return 0;
//}

//2、清楚容器中所有数据
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
//	obj.clear();//clear()清空
//	cout << endl;
//	for (int i = 0; i < obj.size(); i++)
//	{
//		cout << obj[i] << " ";
//	}
//	return 0;
//}

//3、迭代器访问
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
//	vector<int>::iterator p;//遍历或者指向容器元素
//	for (p = obj.begin(); p != obj.end(); p++)//end得到最后一个单元+1的指针
//	{
//		cout << *p << " ";
//	}
//	return 0;
//}

//4、排序
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
//	sort(obj.begin(), obj.end());//升序
//	for (int i = 0; i < obj.size(); i++)
//	{
//		cout << obj[i] << " ";
//	}
//	cout << endl;
//	reverse(obj.begin(), obj.end());//降序
//	for (int i = 0; i < obj.size(); i++)
//	{
//		cout << obj[i] << " ";
//	}
//	return 0;
//}