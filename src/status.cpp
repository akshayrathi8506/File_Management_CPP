#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cstdlib>
#include <iomanip>
using namespace std;

class Data{
	public:
	int a;
	string filename,name;
		int displaydata()
		{
			int n=0,m;
			string name_file,list[100];
			string path("./script.sh");
			const char* final_command = path.c_str();
			system(final_command);
			ifstream filecheck;
			filecheck.open("output.txt",ios::out);
			if (filecheck.is_open()){   //checking whether the file is open
				  string tp;
				  while(getline(filecheck, tp)){  //read data from file object and put it into string.
					 cout<<n<<". "<< tp << "\n";   //print the data of the string
					 list[n]=tp;
					 n++;
				  }
				  filecheck.close();   //close the file object.
			   }
			cout<<"Choose any option : ";
			cin>>m;
			name_file=list[m];
			name_file="../status/"+name_file;
			ifstream file;    //this is used to read from the file
			vector<vector<string>> content;     //stl container to store data of file
			vector<string> row;
			string line1, word;
			file.open(name_file, ios::in);    //opening the file
			try{
				if(file.fail())
				throw "err";
			}
			catch(...)
			{
				cout<<"\nFile is failed to open"<<endl;
				exit(1);
			}
			while (getline(file, line1)) {
				row.clear();
				stringstream str(line1);
				while (getline(str, word, ','))
					row.push_back(word);
					content.push_back(row);  //pushing the data in the container
			}
			cout<<"______________________________________________________________________________________________________________________________________________________________"<<endl;
			for (int i = 0; i < content.size(); ++i) {
				for (int j = 0; j < content[i].size(); ++j) {
					cout<<"|";
					cout<<content[i][j]<<"\t\t";   //printing data which is stored in the container
				}
			cout<<"|"<<endl<<"______________________________________________________________________________________________________________________________________________________________";
			cout<<endl;
			}
			file.close();   //closing input file
			return 0;
		}
		
		int Entry()
		{
			vector<string>checking;
			string name_file,list[100];
			string message[30];
			int m,n=0;
			string path("./script.sh");
			const char* final_command = path.c_str();
			system(final_command);
			ifstream filecheck;
			filecheck.open("output.txt",ios::out);
			if (filecheck.is_open()){   //checking whether the file is open
				  string tp;
				  while(getline(filecheck, tp)){  //read data from file object and put it into string.
					 cout<<n<<". "<< tp << "\n";   //print the data of the string
					 list[n]=tp;
					 n++;
				  }
				  filecheck.close();   //close the file object.
			   }
			cout<<"Choose any option : ";
			cin>>m;
			name_file=list[m];
			name_file="../status/"+name_file;
			ifstream file4;    //this is used to read from the file
			vector<vector<string>> content1;     //stl container to store data of file
			vector<string> row1;
			string line2, word1;
			file4.open(name_file, ios::in);    //opening the file
			try{
				if(file4.fail())
				throw "err";
			}
			catch(...)
			{
				cout<<"\nFile is failed to open"<<endl;
				exit(1);
			}
			while (getline(file4, line2)) {
				row1.clear();
				stringstream str(line2);
				while (getline(str, word1, ','))
					row1.push_back(word1);
				content1.push_back(row1);  //pushing the data in the container
			}
			for (int i = 0; i < 1; ++i) {
				for (int j = 0; j < content1[i].size(); ++j) {
					cout<<content1[i][j]<<" : ";   //printing data which is stored in the container
					cin>>message[j];
					checking.push_back(message[j]);
				}
				cout<<endl;
			}
			file4.close();
			ofstream file1;                        //using file management system to store the data of each URL
			file1.open(name_file, ios::out | ios::app);       //opening file to enter the data
			try{
			if(file1.fail())
				throw "err";
				}
			catch(...)
			{
				cout<<"\nFile is failed to open"<<endl;
				exit(1);
			}
			if(file1.is_open())
			{
				//int numberofelements = sizeof(message)/sizeof(message[0]);
				//cout<<"Number of entries : " <<numberofelements<<endl;
				for(int f=0; f < checking.size(); ++f)
				{
					file1<<checking[f];
					if(f==((checking.size())-1))
					{
						file1<<"\n";
					}
					else
					{
						file1<<",";
					}
				}
			}
			file1.close();      //closing output file
			system("clear");
			return 0;
		}
		
		int First_user()
		{
			int b;
			string str[30];
			cout<<endl<<"Give the name of the file :";
			cin>>name;
			filename="../status/Status_"+name+".csv";
			cout<<endl;
			cout<<endl<<"Please select the number of column you want to create :";
			cin>>b;
			cout<<endl;
			ofstream file3;
			file3.open(filename,ios::out);
			try{
				if(file3.fail())
				throw "err";
				}
			catch(...)
			{
				cout<<"\nFile is failed to open"<<endl;
				exit(1);
			}
			cout<<"Please enter coulmn names: "<<endl;
			for(int i=0;i<b;i++)
			{
				cin>>str[i];
				cout<<endl;
				if (file3.is_open()) {
				file3<<str[i];
				if(i==(b-1))
				{
					file3<<"\n";
				}
				else
				{
					file3<<",";
				}
				}
			}
			file3.close();
			system("clear"); 
			return 0;
		}
		
		int Sticker()
		{
			system("clear");
			return 0;
		}
		
		int Find_data()
		{
			system("clear");
			return 0;
		}
		
		int Front_page()
		{
			cout<< "\x1b[5m" <<" \t\t IF YOU ARE A NEW USER.. PLEASE SELECT OPTION 1"<< "\x1b[0m"<<endl;
			cout<<"Please select below options....."<<endl;
			cout<<"1. Please enter the field details"<<endl;
			cout<<"2. Enter data in the file"<<endl;
			cout<<"3. Find the data from the status"<<endl;
			cout<<"4. Want to create sticker"<<endl;
			cout<<"5. Want to check the Data"<<endl;
			cout<<"Choose option : ";
			cin>>a;	
			//system("clear");
			return a;
		}
};
int main()
{
	Data obj;
	Start:
	int c = obj.Front_page();
	switch(c)
	{
		case 1 :
			obj.First_user();
			goto Start;
			
		case 2 :
			obj.Entry();
			goto Start;
			
		case 3 :
			obj.Find_data();
			goto Start;
			
		case 4 :
			obj.Sticker();
			goto Start;
			
		case 5 :
			obj.displaydata();
			goto Start;
			
		default :
			cout<<"Wrong Entry Found"<<endl;
			goto Start;
	}
	return 0;
}

