#ifndef SAM5_HPP
# define SAM5_HPP

class	Sam5
{
	public:

		Sam5(void);
		~Sam5(void);

		int		getFoo(void) const;
		void	setFoo(int v);

	private:

		int	_foo;
};

#endif