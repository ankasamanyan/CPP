#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
	*this = copy;	
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] != nullptr)
			delete (_materias[i]);
		if (copy._materias[i] != nullptr)
			_materias[i] = copy._materias[i]->clone();
		else
			_materias[i] = nullptr;
	}
	return(*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (_materias[i] != nullptr)
			delete _materias[i];
	
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == nullptr)
		{
			_materias[i] = materia;
			break ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] != nullptr)
			if (_materias[i]->getType().compare(materia) == 0)
				return(_materias[i]->clone());
	}
	return (0);
}
