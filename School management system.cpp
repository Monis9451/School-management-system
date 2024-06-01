//#include <iostream>
//#include <string>
//using namespace std;
//class student;
//class teacher;
//class Class;
//class administration;
//void start_up();
//char menu();
//bool administration_enrollment();
//bool student_enrollment(student* s);
//bool teacher_enrollment(teacher* t);
//static const int TOTAL_STUDENT = 20;
//static const int TOTAL_TEACHER = 10;
//int static CURRENT_STUDENT = 9;
//static int CURRENT_TEACHER = 5;
//static int ENROLLING_STUDENT;
//static int ENROLLING_TEACHER;
//string const ADMIN_NAME = "Monis";  //Fixed Administrator name 
//int const ADMIN_ID = 12345;  //Fixed Administrator password 
//class student
//{
//private:
//	string name;
//	int roll_no;
//	string section;
//	char grade;
//	bool attendance;
//	string current_assignment;
//	bool mark_assignments;
//public:
//	student() :name(""), roll_no(0), section(""), grade(NULL)
//	{
//		attendance = 0;
//		mark_assignments = 0;
//	}
//	student(string name, int roll_no, string section, char grade) :name(name), roll_no(roll_no), section(section), grade(grade)
//	{
//		attendance = 0;
//		mark_assignments = 0;
//	}
//	void set_student(string name, int roll_no, string section, char grade)
//	{
//		this->name = name;
//		this->roll_no = roll_no;
//		this->section = section;
//		this->grade = grade;
//	}
//	void set_name(string name)
//	{
//		this->name = name;
//	}
//	void set_roll_no(int roll_no)
//	{
//		this->roll_no = roll_no;
//	}
//	void set_section(string section)
//	{
//		this->section = section;
//	}
//	void set_grade(char grade)
//	{
//		this->grade = grade;
//	}
//	void set_assignment(string assignment)
//	{
//		current_assignment = assignment;
//	}
//	string get_name()
//	{
//		return name;
//	}
//	int get_roll_no()
//	{
//		return roll_no;
//	}
//	string get_section()
//	{
//		return section;
//	}
//	char get_grade()
//	{
//		return grade;
//	}
//	string get_assignment()
//	{
//		return current_assignment;
//	}
//	bool get_mark_assignment()
//	{
//		return mark_assignments;
//	}
//	bool get_attendance()
//	{
//		return attendance;
//	}
//	void student_info()
//	{
//		cout << "Your name is: " << name << endl;
//		cout << "Your roll no. is: " << roll_no << endl;
//		cout << "Your grades are: " << grade << endl;
//		cout << "Your section is: " << section << endl;
//		cout << "Your attendance status is: " << attendance << endl;
//		cout << "Your current assignment is: " << current_assignment << endl;
//		cout << "Your current assignment status is: " << mark_assignments << endl;
//		system("pause");
//		student_menu();
//	}
//	void student_attendance()
//	{
//		attendance = 1;
//		cout << "Attendance marked successfully!, You can check it from your info by pressing '1' in menu" << endl;
//		system("pause");
//		student_menu();
//	}
//	void mark_assignment()
//	{
//		mark_assignments = 1;
//		cout << "Assignment marked successfully!, You can check it from your info by pressing '1' in menu" << endl;
//		system("pause");
//		student_menu();
//	}
//	void student_menu()
//	{
//		system("cls");
//		int a;
//		cout << "\t\tWelcome to the class." << endl << endl;
//		cout << "Press 1 to view you info" << endl;
//		cout << "Press 2 to mark your attendance" << endl;
//		cout << "Press 3 to mark your assignment" << endl;
//		cout << "Press 4 to logout" << endl;
//		cout << "Press 5 to quit" << endl;
//		cin >> a;
//		switch (a)
//		{
//		case 1:
//			student_info();
//			break;
//		case 2:
//			student_attendance();
//			break;
//		case 3:
//			mark_assignment();
//			break;
//		case 4:
//			start_up();
//			break;
//		case 5:
//			cout << "Good Bye!" << endl;
//			break;
//		}
//	}
//};
//class teacher
//{
//private:
//	string name;
//	int ID;
//	string Qualification;
//	string teaching_sec;
//	bool t_attendance;
//	student* s;
//public:
//	teacher() :name(" "), ID(0), Qualification(" "), teaching_sec(" "), s(nullptr)
//	{
//		t_attendance = 0;
//	}
//	teacher(string name, int ID, string Qualification, string teaching_sec, student* s) :name(name), ID(ID), Qualification(Qualification), teaching_sec(teaching_sec), s(s)
//	{
//		t_attendance = 0;
//	}
//	void set_teacher(string name, int ID, string Qualification, string teaching_sec, student* s)
//	{
//		this->name = name;
//		this->ID = ID;
//		this->Qualification = Qualification;
//		this->teaching_sec = teaching_sec;
//		this->s = s;
//	}
//	void set_name(string name)
//	{
//		this->name = name;
//	}
//	void set_ID(int ID)
//	{
//		this->ID = ID;
//	}
//	void set_Qualification(string Qualification)
//	{
//		this->Qualification = Qualification;
//	}
//	void set_teaching_sec(string teaching_sec)
//	{
//		this->teaching_sec = teaching_sec;
//	}
//	string get_name()
//	{
//		return name;
//	}
//	int get_ID()
//	{
//		return ID;
//	}
//	string get_Qualification()
//	{
//		return Qualification;
//	}
//	string get_teaching_sec()
//	{
//		return teaching_sec;
//	}
//	void teacher_info()
//	{
//		cout << "Your name is: " << name << endl;
//		cout << "Your ID is: " << ID << endl;
//		cout << "Your qualification is: " << Qualification << endl;
//		cout << "Your teaching section is: " << teaching_sec << endl;
//		cout << "Your today's attendance status is: " << t_attendance << endl;
//		system("pause");
//		teacher_menu();
//	}
//	void teacher_attendance()
//	{
//		t_attendance = 1;
//		cout << "Attendance marked successfully!, You can check it from your info by pressing '1' in menu" << endl;
//		system("pause");
//		teacher_menu();
//	}
//	void give_assignment()
//	{
//		cout << "\t\tEnter the description of assignment you want to give: " << endl;
//		string data;
//		cin.ignore();
//		getline(cin, data);
//		string sec;
//		if (Qualification == "PhD")
//		{
//			sec = "A";
//		}
//		if (Qualification == "MPhil")
//		{
//			sec = "B";
//		}
//		if (Qualification == "BSc")
//		{
//			sec = "C";
//		}
//		for (int i = 0; i < CURRENT_STUDENT; i++)
//		{
//			if (sec == s[i].get_section())
//			{
//				s[i].set_assignment(data);
//			}
//		}
//		cout << "\t\t*NOTE: The assignment will be assign to the students of your section only*" << endl;
//		cout << "\t\tASSIGNMENT ASSIGNED SUCCESSFULLY!" << endl;
//		system("pause");
//		teacher_menu();
//	}
//	void check_assignment()
//	{
//		string sec;
//		if (Qualification == "PhD")
//		{
//			sec = "A";
//		}
//		if (Qualification == "MPhil")
//		{
//			sec = "B";
//		}
//		if (Qualification == "BSc")
//		{
//			sec = "C";
//		}
//		for (int i = 0; i < CURRENT_STUDENT; i++)
//		{
//			if (sec == s[i].get_section())
//			{
//				cout << "\tStudent name: " << s[i].get_name() << endl;
//				cout << "\tStudent roll no. : " << s[i].get_roll_no() << endl;
//				cout << "\tAssignment status : " << s[i].get_mark_assignment() << endl;
//				cout << "\t-----------------------------------------------------------" << endl;
//			}
//		}
//		system("pause");
//		teacher_menu();
//	}
//	void teacher_menu()
//	{
//		system("cls");
//		int a;
//		cout << "Good morning >_<" << endl;
//		cout << "Press 1 to view your info" << endl;
//		cout << "Press 2 to mark your attendance" << endl;
//		cout << "Press 3 to give assignment to your class" << endl;
//		cout << "Press 4 to check assignment of your class" << endl;
//		cout << "Press 5 to logout" << endl;
//		cout << "Press 6 to quit" << endl;
//	x:
//		cin >> a;
//		switch (a)
//		{
//		case 1:
//			teacher_info();
//			break;
//		case 2:
//			teacher_attendance();
//			break;
//		case 3:
//			give_assignment();
//			break;
//		case 4:
//			check_assignment();
//			break;
//		case 5:
//			start_up();
//			break;
//		case 6:
//			cout << "Good Bye!" << endl;
//			break;
//		default:
//			cout << "Select a valid option: ";
//			goto x;
//		}
//	}
//
//};
//class class_group
//{
//	student* s;
//	teacher* t;
//public:
//	class_group() :s(nullptr), t(nullptr)
//	{
//
//	}
//	class_group(student* s, teacher* t) :s(s), t(t)
//	{
//
//	}
//	void class_A()
//	{
//		cout << "\t\t*- TEACHERS OF SECTION A -*" << endl;
//		for (int i = 0; i < CURRENT_TEACHER; i++)
//		{
//			if (t[i].get_Qualification() == "PhD")
//			{
//				cout << "Name: " << t[i].get_name() << "\t ID: " << t[i].get_ID() << endl;
//			}
//		}
//		cout << "\t-----------------------------------------------" << endl;
//		cout << "\t\t*- STUDENTS OF SECTION A -*" << endl;
//		for (int i = 0; i < CURRENT_STUDENT; i++)
//		{
//			if (s[i].get_section() == "A")
//			{
//				cout << "Name: " << s[i].get_name() << "\t roll no. : " << s[i].get_roll_no() << endl;
//			}
//		}
//		system("pause");
//		class_menu();
//	}
//	void class_B()
//	{
//		cout << "\t\t*- TEACHERS OF SECTION B -*" << endl;
//		for (int i = 0; i < CURRENT_TEACHER; i++)
//		{
//			if (t[i].get_Qualification() == "MPhil")
//			{
//				cout << "Name: " << t[i].get_name() << "\t ID: " << t[i].get_ID() << endl;
//			}
//		}
//		cout << "\t-----------------------------------------------" << endl;
//		cout << "\t\t*- STUDENTS OF SECTION B -*" << endl;
//		for (int i = 0; i < CURRENT_STUDENT; i++)
//		{
//			if (s[i].get_section() == "B")
//			{
//				cout << "Name: " << s[i].get_name() << "\t roll no. : " << s[i].get_roll_no() << endl;
//			}
//		}
//		system("pause");
//		class_menu();
//	}
//	void class_C()
//	{
//		cout << "\t\t*- TEACHERS OF SECTION C -*" << endl;
//		for (int i = 0; i < CURRENT_TEACHER; i++)
//		{
//			if (t[i].get_Qualification() == "BSc")
//			{
//				cout << "Name: " << t[i].get_name() << "\t ID: " << t[i].get_ID() << endl;
//			}
//		}
//		cout << "\t-----------------------------------------------" << endl;
//		cout << "\t\t*- STUDENTS OF SECTION C -*" << endl;
//		for (int i = 0; i < CURRENT_STUDENT; i++)
//		{
//			if (s[i].get_section() == "C")
//			{
//				cout << "Name: " << s[i].get_name() << "\t roll no. : " << s[i].get_roll_no() << endl;
//			}
//		}
//		system("pause");
//		class_menu();
//	}
//	void class_menu()
//	{
//		system("cls");
//		char c;
//		cout << "->\tTo see the students and teachers of section A press 1" << endl;
//		cout << "->\tTo see the students and teachers of section B press 2" << endl;
//		cout << "->\tTo see the students and teachers of section C press 3" << endl;
//		cout << "->\tTo logout Press 4" << endl;
//	r:
//		cin >> c;
//		switch (c)
//		{
//		case '1':
//			class_A();
//			break;
//		case '2':
//			class_B();
//			break;
//		case '3':
//			class_C();
//			break;
//		case '4':
//			start_up();
//			break;
//		default:
//			cout << "Enter a correct option: ";
//			goto r;
//		}
//	}
//};
//class administration
//{
//	student* s;
//	teacher* t;
//public:
//	administration() :s(nullptr), t(nullptr)
//	{
//
//	}
//	administration(student* s, teacher* t) :s(s), t(t)
//	{
//
//	}
//	void show_staff()
//	{
//		cout << "\t\t---Whole staff---" << endl;
//		for (int i = 0; i < CURRENT_TEACHER; i++)
//		{
//			cout << "Name: " << t[i].get_name() << "\t Qualification: " << t[i].get_Qualification() << "\t Teaching section:" << t[i].get_teaching_sec() << endl;
//		}
//		cout << endl;
//		cout << "\t" << system("pause");
//		administrator_menu();
//	}
//	void show_student()
//	{
//		cout << "\t\t---All students---" << endl;
//		for (int i = 0; i < CURRENT_STUDENT; i++)
//		{
//			cout << "Name: " << s[i].get_name() << "\t Roll no.: " << s[i].get_roll_no() << "\t Section:" << s[i].get_section() << endl;
//		}
//		cout << endl;
//		cout << "\t" << system("pause");
//		administrator_menu();
//	}
//	void grade_book()
//	{
//		cout << "\t\t-> The grade book of students <-" << endl;
//		for (int i = 0; i < CURRENT_STUDENT; i++)
//		{
//			cout << "Name: " << s[i].get_name() << "\t Grade: " << s[i].get_grade() << endl;
//		}
//		cout << endl;
//		cout << "\t" << system("pause");
//		administrator_menu();
//	}
//	void attendance_status()
//	{
//		cout << "\t\t-> The attendance book of students <-" << endl;
//		for (int i = 0; i < CURRENT_STUDENT; i++)
//		{
//			cout << "Name: " << s[i].get_name() << "\t Attendance status: " << s[i].get_attendance() << endl;
//		}
//		cout << endl;
//		cout << "\t" << system("pause");
//		administrator_menu();
//	}
//	void add_student()
//	{
//		string name;
//		char grade;
//		cout << "\t\tEnter name:";
//		cin >> name;
//		cout << "\t\tEnter your previous grades: ";
//		cin >> grade;
//		CURRENT_STUDENT++;
//		s[CURRENT_STUDENT].set_name(name);
//		s[CURRENT_STUDENT].set_roll_no(101 + CURRENT_STUDENT);
//		s[CURRENT_STUDENT].set_grade(grade);
//		ENROLLING_STUDENT = CURRENT_STUDENT;
//		switch (grade)
//		{
//		case 'A':
//			s[CURRENT_STUDENT].set_section("A");
//			break;
//		case 'B':
//			s[CURRENT_STUDENT].set_section("B");
//			break;
//		case 'C':
//			s[CURRENT_STUDENT].set_section("C");
//			break;
//		}
//		cout << "\t\tNew student enrolled successfully" << endl;
//		cout << endl;
//		cout << "\t" << system("pause");
//		administrator_menu();
//	}
//	void add_teacher()
//	{
//		string name;
//		string qualify;
//		cout << "\t\tEnter your name: ";
//		cin >> name;
//		cout << "\t\tEnter your qualification: ";
//		cin >> qualify;
//		CURRENT_TEACHER++;
//		t[CURRENT_TEACHER].set_name(name);
//		t[CURRENT_TEACHER].set_ID(1001 + CURRENT_TEACHER);
//		t[CURRENT_TEACHER].set_Qualification(qualify);
//		ENROLLING_TEACHER = CURRENT_TEACHER;
//		if (qualify == "PhD")
//		{
//			t[CURRENT_TEACHER].set_teaching_sec("A");
//		}
//		if (qualify == "MPhil")
//		{
//			t[CURRENT_TEACHER].set_teaching_sec("B");
//		}
//		if (qualify == "BCs")
//		{
//			t[CURRENT_TEACHER].set_teaching_sec("C");
//		}
//		cout << "\t\tNew teacher enrolled successfully" << endl;
//		cout << endl;
//		cout << "\t" << system("pause");
//		administrator_menu();
//	}
//	void administrator_menu()
//	{
//		system("cls");
//		char c;
//		cout << "->\tTo see the whole staff press 1" << endl;
//		cout << "->\tTo see all students press 2" << endl;
//		cout << "->\tTo see the grade book press 3" << endl;
//		cout << "->\tTo see the attendance status of all students press 4" << endl;
//		cout << "->\tTo add a student press 5" << endl;
//		cout << "->\tTo add a teacher press 6" << endl;
//		cout << "->\tTo logout Press 7" << endl;
//	r:
//		cin >> c;
//		switch (c)
//		{
//		case '1':
//			show_staff();
//			break;
//		case '2':
//			show_student();
//			break;
//		case '3':
//			grade_book();
//			break;
//		case '4':
//			attendance_status();
//			break;
//		case '5':
//			add_student();
//			break;
//		case '6':
//			add_teacher();
//			break;
//		case '7':
//			start_up();
//			break;
//		default:
//			cout << "Enter a correct option: ";
//			goto r;
//		}
//	}
//};
//student* s = new student[TOTAL_STUDENT];
//teacher* t = new teacher[TOTAL_TEACHER];
//int main()
//{
//	start_up();
//	delete[] s;
//	delete[] t;
//	return 0;
//}
//
//void start_up()
//{
//	system("cls");
//	int once = 0;
//	char c;
//	bool b = 0;
//	c = menu();
//	if (once == 0)
//	{
//		s[0].set_student("Monis", 101, "A", 'A');
//		s[1].set_student("Ali", 102, "A", 'A');
//		s[2].set_student("Basit", 103, "B", 'B');
//		s[3].set_student("Abdul", 104, "A", 'A');
//		s[4].set_student("Asad", 105, "C", 'C');
//		s[5].set_student("Hassan", 106, "B", 'B');
//		s[6].set_student("Hussain", 107, "C", 'C');
//		s[7].set_student("Saad", 108, "B", 'B');
//		s[8].set_student("Hannan", 109, "B", 'B');
//		s[9].set_student("Muneeb", 110, "C", 'C');
//		t[0].set_teacher("Aizaz", 1001, "PhD", "A", s);
//		t[1].set_teacher("Tanveer", 1002, "MPhil", "B", s);
//		t[2].set_teacher("Aftab", 1003, "PhD", "A", s);
//		t[3].set_teacher("Munir", 1004, "MPhil", "B", s);
//		t[4].set_teacher("Anwer", 1005, "BSc", "C", s);
//		t[5].set_teacher("Amir", 1006, "BSc", "C", s);
//		once++;
//	}
//	class_group cl(s, t);
//	switch (c)
//	{
//	case '1':
//		b = student_enrollment(s);
//		break;
//	case '2':
//		b = teacher_enrollment(t);
//		break;
//	case '3':
//		cl.class_menu();
//		break;
//	case '4':
//		b = administration_enrollment();
//		break;
//	case '5':
//		cout << "\t\tHave a nice day :)" << endl;
//		break;
//	}
//	if (b)
//	{
//		switch (c)
//		{
//		case '1':
//			s[ENROLLING_STUDENT].student_menu();
//			break;
//		case '2':
//			t[ENROLLING_TEACHER].teacher_menu();
//			break;
//		case '4':
//			administration a(s, t);
//			a.administrator_menu();
//			break;
//		}
//	}
//}
//
//char menu()
//{
//	char c;
//	cout << "\t\t--**Good morning, welcome to the school**--" << endl << endl;
//	cout << "\t-> Press 1 to enroll as a student" << endl;
//	cout << "\t-> Press 2 to enroll as a teacher" << endl;
//	cout << "\t-> Press 3 to check classes" << endl;
//	cout << "\t-> Press 4 to enroll as an administrator" << endl;
//	cout << "\t-> Press 5 to QUIT" << endl;
//a:
//	cin >> c;
//	if (c == '1' || c == '2' || c == '3' || c == '4' || c == '5')
//	{
//		return c;
//	}
//	else
//	{
//		cout << "Enter a valid option:";
//		goto a;
//	}
//}
//
//bool student_enrollment(student* s)
//{
//	string name;
//	int ID;
//	char grade;
//	int check = 0;
//	cout << "\t\tEnter your name:";
//	cin >> name;
//	cout << "\t\tEnter your ID:";
//	cin >> ID;
//	for (int i = 0; i < CURRENT_STUDENT; i++)
//	{
//		if (name == s[i].get_name() && ID == s[i].get_roll_no())
//		{
//			ENROLLING_STUDENT = i;
//			check = 1;
//			return true;
//		}
//	}
//	if (check == 0)
//	{
//		char c;
//		cout << "\t\tYour are not previously exist in data, you are new. Do you want to enroll as a new student? [Y]/[N]";
//		cin >> c;
//		if (c == 'Y' || c == 'y')
//		{
//			cout << "\t\tEnter your previous grades: ";
//			cin >> grade;
//			CURRENT_STUDENT++;
//			s[CURRENT_STUDENT].set_name(name);
//			s[CURRENT_STUDENT].set_roll_no(101 + CURRENT_STUDENT);
//			s[CURRENT_STUDENT].set_grade(grade);
//			ENROLLING_STUDENT = CURRENT_STUDENT;
//			switch (grade)
//			{
//			case 'A':
//				s[CURRENT_STUDENT].set_section("A");
//				break;
//			case 'B':
//				s[CURRENT_STUDENT].set_section("B");
//				break;
//			case 'C':
//				s[CURRENT_STUDENT].set_section("C");
//				break;
//			}
//			cout << "\t\tNew student enrolled successfully" << endl;
//			return true;
//		}
//		else
//		{
//			cout << "\t\tGoodBye, have a nice day!" << endl;
//			return false;
//		}
//	}
//}
//
//bool teacher_enrollment(teacher* t)
//{
//
//	string name;
//	int ID;
//	string qualify;
//	int check = 0;
//	cout << "\t\tEnter your name:";
//	cin >> name;
//	cout << "\t\tEnter your ID:";
//	cin >> ID;
//	for (int i = 0; i < CURRENT_TEACHER; i++)
//	{
//		if (name == t[i].get_name() && ID == t[i].get_ID())
//		{
//			check = 1;
//			ENROLLING_TEACHER = i;
//			return true;
//		}
//	}
//	if (check == 0)
//	{
//		char c;
//		cout << "\t\tYour are not previously exist in data, you are new. Do you want to enroll as a new teacher? [Y]/[N]";
//		cin >> c;
//		if (c == 'Y' || c == 'y')
//		{
//			cout << "\t\tEnter your qualification: ";
//			cin >> qualify;
//			CURRENT_TEACHER++;
//			t[CURRENT_TEACHER].set_name(name);
//			t[CURRENT_TEACHER].set_ID(1001 + CURRENT_TEACHER);
//			t[CURRENT_TEACHER].set_Qualification(qualify);
//			ENROLLING_TEACHER = CURRENT_TEACHER;
//			if (qualify == "PhD")
//			{
//				t[CURRENT_TEACHER].set_teaching_sec("A");
//				return true;
//			}
//			if (qualify == "MPhil")
//			{
//				t[CURRENT_TEACHER].set_teaching_sec("B");
//				return true;
//			}
//			if (qualify == "BCs")
//			{
//				t[CURRENT_TEACHER].set_teaching_sec("C");
//				return true;
//			}
//		}
//		else
//		{
//			cout << "\t\tGoodBye, have a nice day!" << endl;
//			return false;
//		}
//	}
//}
//
//bool administration_enrollment()
//{
//	string name;
//	int pass;
//a:
//	cout << "\t\tEnter your name:";
//	cin >> name;
//	cout << "\t\tEnter your ID:";
//	cin >> pass;
//	if (name == ADMIN_NAME && pass == ADMIN_ID)
//	{
//		return true;
//	}
//	else
//	{
//		cout << "\tInvalid Name or ID" << endl;
//		goto a;
//	}
//}