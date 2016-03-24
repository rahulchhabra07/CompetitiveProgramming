#include<iostream.h>
#include<conio.h>
#include<fstream.h>


class doctor
{
		private:
			int d_id;									//Identification number of the doctor
			char name[30];
			char spec[30];						//Speciality of the doctor
		public:
			void enter();
			void disp();
			int get__d_id(){return d_id;}
			char *get__name(){return name;}
			char *get__spec(){return spec;}
};

void doctor::enter()
{
		clrscr();
		cout<<"\nEnter Doctor Identification Number :";
		cin>>d_id;
		cin.ignore(5,'\n');
		cout<<"\nEnter Doctor's Name :";
		gets(name);
		cout<<"\nEnter Doctor's Speciality :";
		gets(spec);
}

void doctor::disp()
{
		clrscr();
		cout<<"\nDoctor Identification Number :"<<d_id;
		cout<<"\nDoctor's Name :";
		puts(name);
		cout<<"Doctor's Speciality:";
		puts(spec);
}


class patient
{
		private:
			int p_id;									//Identifiction number of the patient
			char name[30];
			int d_id;									//Identification number of the doctor treating
		public:
			void enter();
			void disp();
			int get__p_id(){return p_id;}
			char *get__name(){return name;}
			int get__d_id(){return d_id;}
};

void patient::enter()
{
		clrscr();
		cout<<"\nEnter Patient Identification Number :";
		cin>>p_id;
		cin.ignore(5,'\n');
		cout<<"\nEnter Patient's Name :";
		gets(name);
		cout<<"\nEnter Treating Doctor Identification Number :";
		cin>>d_id;
}

void patient::disp()
{
		clrscr();
		cout<<"\nPatient Identification Number :"<<p_id;
		cout<<"\nPatient's Name :";
		puts(name);
		cout<<"Treating Doctor Identification Number :";
		cout<<d_id;
}


fstream fdoc;
fstream fpat;
			
int main()
{
		lmenu:
		cout<<"\n\n\t\t\tSPECTRUM HEALTHCARE\n\n";
		cout<<"\t\t\t1. Doctor info\n";
		cout<<"\t\t\t2. Patient info\n";
		cout<<"\t\t\t3. Exit\n\n\n";
		cout<<"\t\t\tEnter your option_  ";
		int op,k;
		cin>>op;
		switch(op)
		{
				int opt;
				case 1:
					ldoc:
					clrscr();
					cout<<"\n\n\t\t\tSPECTRUM HEALTHCARE\n\n";
					cout<<"\t\t\tDOCTOR INFO\n\n";
					cout<<"\t\t\t1. Add new doctor\n";
					cout<<"\t\t\t2. Update existing doctor details\n";
					cout<<"\t\t\t3. Remove a doctor\n";
					cout<<"\t\t\t4. View doctor info\n";
					cout<<"\t\t\t5. Back\n\n\n";
					cout<<"\t\t\tEnter your option_  ";
					cin>>opt;
					switch(opt)
					{	
							case 1:											//add new doctor
								fdoc.open("DOCTOR.dat",ios::in|ios::out);
								if(!fdoc)
								{
										cout<<"NOT FOUND";
										getch();
										goto ldoc;
								}
								fdoc.seekp(0,ios::end);
								doctor doc1;
								doc1.enter();
								fdoc.write((char*)&doc1,sizeof(doc1));
								if(fdoc.bad())
								{
										cout<<"ERROR";
										getch();
										goto ldoc;
								}
								cout<<"WRITTEN";
								getch();
								goto ldoc;
							case 2:										//update doctor details
								clrscr();
								fdoc.open("DOCTOR.dat",ios::in|ios::out);
								if(!fdoc)
								{
										cout<<"NOT FOUND";
										getch();
										goto ldoc;
								}
								cout<<"\n\n\t\t\tSPECTRUM HEALTHCARE\n\n";
								cout<<"\t\t\tUPDATE\n\n";
								cout<<"Enter Doctor Identification Number :";
								int i;
								cin>>i;
								fdoc.seekp(0,ios::beg);
								k=0;
								while(!fdoc.eof())
								{
										if(fdoc.eof())
										{
												break;
										}
										int n;
										n=fdoc.tellg();
										doctor doc2;
										fdoc.read((char*)&doc2,sizeof(doc2));
										if(doc2.get__d_id()==i)
										{
												cout<<"\nOriginal :\n";
												doc2.disp();
												k=1;
												cout<<"\n\n\t Press 0 to go ahead\n\tPress 1 to go back_ ";
												int m;
												cin>>m;
												if(m==1)
												{
														continue;
												}
												cout<<"\nEnter New One's :\n";
												doc2.enter();
												fdoc.seekp(n,ios::beg);
												fdoc.write((char*)&doc2,sizeof(doc2));
												break;
										}
								}
								fdoc.close();
								if(k==0)
								{	
										cout<<"\nNOT FOUND";
										getch();
										goto ldoc;
								}
							case 3:										//Removing
								fdoc.open("DOCTOR.dat",ios::in|ios::out);
								clrscr();
								if(!fdoc)
								{
										cout<<"File not found";
										getch();
										goto ldoc;
								}
								ofstream tmp;
								tmp.open("tem.dat",ios::out|ios::trunc);
								k=0;
								cout<<"\n\n\t\t\tREMOVE\n\n";
								cout<<"Enter Doctor Identification Number: \n";
								cin>>i;
								fdoc.seekg(0,ios::beg);
								while(!fdoc.eof())
								{
										if(fdoc.eof())
										{
												break;
										}
										fdoc.read((char*)&doc1,sizeof(doc1));
										if(doc1.get__d_id()==i)
										{
												doc1.disp();
												k=1;
												cout<<"Are you sure you want to delete this (yes=1 no=0)? _";
												int n;
												cin>>n;
												if(n==0)
												{
														tmp.write((char*)&doc1,sizeof(doc1));
												}
										}
										else
										{
												tmp.write((char*)&doc1,sizeof(doc1));
										}
								}
								if(k==0)
								{
										cout<<"Doctor not present\n";
										getch();
										goto ldoc;
								}
								tmp.close();
								fdoc.close();
								remove("DOCTOR.dat");
								rename("tem.dat","DOCTOR.dat");
								goto ldoc;
							case 4:																//Searching
								clrscr();
								fdoc.open("DOCTOR.dat",ios::in|ios::out);
								if(!fdoc)
								{
										cout<<"NOT FOUND";
										getch();
										goto ldoc;
								}
								cout<<"\n\n\t\t\tSPECTRUM HEALTHCARE\n\n";
								cout<<"\t\t\tSEARCHING\n\n";
								cout<<"Enter Doctor Identification Number :";
								int j;
								cin>>j;
								int k=0;
								fdoc.seekg(0,ios::beg);
								while(!fdoc.eof())
								{
										if(fdoc.eof())
										{
												break;
										}
										fdoc.read((char*)&doc1,sizeof(doc1));
										if(j==doc1.get__d_id())
										{
												doc1.disp();
												k=1;
										}
								}
								fdoc.close();
								if(k==0)
								{
										{
												cout<<"NOT FOUND";
												getch();
												goto ldoc;
										}
								}
							case 5:
								goto lmenu;																	
					}		
					break;
				case 2:					
					lpat:
					clrscr();
					cout<<"\n\n\t\t\tSPECTRUM HEALTHCARE\n\n";
					cout<<"\t\t\tPATIENT INFO\n\n";
					cout<<"\t\t\t1. Add new patient\n";
					cout<<"\t\t\t2. Update existing patient details\n";
					cout<<"\t\t\t3. Remove a patient\n";
					cout<<"\t\t\t4. View patient info\n";
					cout<<"\t\t\t5. Back\n\n\n";
					cout<<"\t\t\tEnter your option_  ";
					cin>>opt;
					switch(opt)
					{
							case 1:												//add new patient
								fpat.open("PATIENT.dat",ios::in|ios::out);
								if(!fpat)
								{
										cout<<"NOT FOUND";
										getch();
										goto lpat;
								}
								fpat.seekp(0,ios::end);
								patient pat1;
								pat1.enter();
								fpat.write((char*)&pat1,sizeof(pat1));
								if(fpat.bad())
								{
										cout<<"ERROR";
										getch();
										goto ldoc;
								}
								cout<<"WRITTEN";
								getch();
								goto lpat;
							case 2:										//update doctor details
								clrscr();
								fpat.open("PATIENT.dat",ios::in|ios::out);
								if(!fpat)
								{
										cout<<"NOT FOUND";
										getch();
										goto lpat;
								}
								cout<<"\n\n\t\t\tSPECTRUM HEALTHCARE\n\n";
								cout<<"\t\t\tUPDATE\n\n";
								cout<<"Enter Patient Identification Number :";
								int i;
								cin>>i;
								fpat.seekp(0,ios::beg);
								k=0;
								while(!fpat.eof())
								{
										if(fpat.eof())
										{
												break;
										}
										int n;
										n=fpat.tellg();
										patient pat2;
										fpat.read((char*)&pat2,sizeof(pat2));
										if(pat2.get__p_id()==i)
										{
												cout<<"\nOriginal :\n";
												pat2.disp();
												k=1;
												cout<<"\n\n\t Press 0 to go ahead\n\tPress 1 to go back_ ";
												int m;
												cin>>m;
												if(m==1)
												{
														continue;
												}
												cout<<"\nEnter New One's :\n";
												pat2.enter();
												fpat.seekp(n,ios::beg);
												fpat.write((char*)&pat2,sizeof(pat2));
												break;
										}
								}
								fpat.close();
								if(k==0)
								{	
										cout<<"\nNOT FOUND";
										getch();
										goto lpat;
								}
							case 3:										//Removing
								fpat.open("PATIENT.dat",ios::in|ios::out);
								clrscr();
								if(!fpat)
								{
										cout<<"File not found";
										getch();
										goto lpat;
								}
								ofstream tmp;
								tmp.open("tem.dat",ios::out|ios::trunc);
								k=0;
								cout<<"\n\n\t\t\tREMOVE\n\n";
								cout<<"Enter PATIENT Identification Number: \n";
								cin>>i;
								fdoc.seekg(0,ios::beg);
								while(!fpat.eof())
								{
										if(fpat.eof())
										{
												break;
										}
										fpat.read((char*)&pat1,sizeof(pat1));
										if(pat1.get__p_id()==i)
										{
												pat1.disp();
												k=1;
												cout<<"Are you sure you want to delete this (yes=1 no=0)? _";
												int n;
												cin>>n;
												if(n==0)
												{
														tmp.write((char*)&pat1,sizeof(pat1));
												}
										}
										else
										{
												tmp.write((char*)&pat1,sizeof(pat1));
										}
								}
								if(k==0)
								{
										cout<<"Patient not present\n";
										getch();
										goto lpat;
								}
								tmp.close();
								fpat.close();
								remove("PATIENT.dat");
								rename("tem.dat","PATIENT.dat");
								goto lpat;
							case 4:																//Searching
								clrscr();
								fpat.open("PATIENT.dat",ios::in|ios::out);
								if(!fpat)
								{
										cout<<"NOT FOUND";
										getch();
										goto lpat;
								}
								cout<<"\n\n\t\t\tSPECTRUM HEALTHCARE\n\n";
								cout<<"\t\t\tSEARCHING\n\n";
								cout<<"Enter Patient Identification Number :";
								int j;
								cin>>j;
								int k=0;
								fpat.seekg(0,ios::beg);
								while(!fpat.eof())
								{
										if(fpat.eof())
										{
												break;
										}
										fpat.read((char*)&pat1,sizeof(pat1));
										if(j==pat1.get__p_id())
										{
												pat1.disp();
												k=1;
										}
								}
								fpat.close();
								if(k==0)
								{
										{
												cout<<"NOT FOUND";
												getch();
												goto lpat;
										}
								}
							case 5:
								goto lmenu;							
					}
					break;
				case 3:
					break;
		}
		return 0;
}
															


		
