
#include <fstream>
#include "Form.hpp"

#define TREE "              _{\\ _{\\{\\/}/}/}__\n"
              "             {/{/\\}{/{/\\}(\\}{/\\} _\n"
              "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n"
              "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
              "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
              "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
              "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
              "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n"
              "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
              "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
              "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
              "      {/{\\{\\/}{/){/{\\{\\/}/}{\\{\\(/}/}\\}/}\n"
              "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"
              "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
              "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
              "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"
              "             {/{\\{\\{\\/}/}{\\{\\}/}\n"
              "              {){/ {\\/}{\\/} \\}\\}\n"
              "              (_)  \\.-'.-/\n"
              "          __...--- |'-.-'| --...__\n"
              "   _...--'   .-'   |'-.-'|  ' -.  ''--..__\n"
              " -'    ' .  . '    |.'-._| '  . .  '   \n"
              " .  '-  '    .--'  | '-.'|    .  '  . '\n"
              "          ' ..     |'-_.-|\n"
              "  .  '  .       _.-|-._ -|-._  .  '  .\n"
              "              .'   |'- .-|   '.\n"
              "  ..-'   ' .  '.   `-._.-'   .'  '  - .\n"
              "   .-' '        '-._______.-'     '  .\n"
              "        .      ~,\n"
              "    .       .   .   .    .\n"

class Bureaucrat;

class ShrubberyCreationForm: public Form
{
	private:
		std::string	_target;
	public:
		/* Constructors & Destructors */
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		~ShrubberyCreationForm(void);

		/* Basic Operators */
		ShrubberyCreationForm const	&operator=(ShrubberyCreationForm const &copy);

		/* Main Member Functions */
		void	beExecuted(Bureaucrat const &bureaucrat) const;
};

std::ostream	&operator<<(std::ostream &str, ShrubberyCreationForm const &form);

