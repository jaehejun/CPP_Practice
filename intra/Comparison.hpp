#ifndef COMPARISON_HPP
# define COMPARISON_HPP

class	Sample
{
	public:

		Sample(int v);
		~Sample(void);

		int	getFoo(void) const;
		int	compare(Sample * other) const;

	private:

		int	_foo;
};

#endif