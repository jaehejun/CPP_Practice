#ifndef NONMEMBER_HPP
# define NONMEMBER_HPP

class	Sample
{
	public:
		Sample(void);
		~Sample(void);

		static int	getNbInst(void);
	
	private:

		static int	_nbInst;
};

#endif