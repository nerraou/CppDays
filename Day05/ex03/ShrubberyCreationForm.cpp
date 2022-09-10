#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other)
{
	*this = other;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyCreation", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	(void)other;
	return (*this);
}
void ShrubberyCreationForm::action() const
{
	std::string fileName = this->target + "_shrubbery";
	std::ofstream ofs(fileName.c_str());
	if (ofs.good())
	{
		ofs << "     .-~~-.     " << std::endl;
		ofs << "    {      }    " << std::endl;
		ofs << " .-~-.    .-~-.   " << std::endl;
		ofs << "{              } " << std::endl;
		ofs << " `.__.'||`.__.'  " << std::endl;
		ofs << "       ||       " << std::endl;
		ofs << "      '--`      " << std::endl;
	}
	ofs.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
