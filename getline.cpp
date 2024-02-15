#include <iostream>
#include <string>


//class	Contact
//{
//	private:
//		std::string _fname;
//		std::string _lname;
//		std::string _nname;
//		std::string _phoneNum;
//		std::string _darkestSecret;
	
//	public:
//		void	setFname(std::string fname)
//		{
//			_fname = fname;
//		}
//		std::string	getFname()
//		{
//			return _fname;
//		}
//};


//int	main()
//{
//	Contact	contact;

//	std::cout << contact.getFname() << std::endl;
//	return 0;
//}

int	main()
{
	std::string	myString;
	getline(std::cin, myString);

	//std::string	mydelmString;
	//getline(std::cin, mydelmString, '\n');

	std::cout << myString << std::endl;
	//std::cout << mydelmString << std::endl;
	return 0;
}