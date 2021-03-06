// Ryzom - MMORPG Framework <http://dev.ryzom.com/projects/ryzom/>
// Copyright (C) 2010  Winch Gate Property Limited
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef NLGEORGES_MOLD_ELT_DEFINE_H
#define NLGEORGES_MOLD_ELT_DEFINE_H

#include "mold_elt.h"

namespace NLOLDGEORGES
{

class CLoader;

class CMoldEltDefine : public CMoldElt  
{
protected:
	std::vector< std::pair< CStringEx, CMoldElt* > > vpair;

public:
	CMoldEltDefine( CLoader* const _pl );
	virtual ~CMoldEltDefine();

	virtual CMoldElt* GetMold(); 
	virtual void Load( const CStringEx _sxfilename );
	virtual void Load( const CStringEx _sxfilename, const CStringEx _sxdate );
	virtual CStringEx GetEltName( const unsigned int _index ) const;
	virtual CMoldElt* GetEltPtr( const unsigned int _index ) const;
	virtual unsigned int GetType() const; 
};

} // NLGEORGES

#endif // NLGEORGES_MOLD_ELT_DEFINE_H
