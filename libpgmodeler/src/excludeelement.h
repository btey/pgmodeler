/*
# PostgreSQL Database Modeler (pgModeler)
#
# Copyright 2006-2013 - Raphael Araújo e Silva <rkhaotix@gmail.com>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation version 3.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# The complete text of GPLv3 is at LICENSE file on source code root directory.
# Also, you can get the complete GNU General Public License at <http://www.gnu.org/licenses/>
*/

/**
\ingroup libpgmodeler
\brief Implements the operations to manipulate exclude constraint elements.
*/

#ifndef EXCLUDE_ELEMENT_H
#define EXCLUDE_ELEMENT_H

#include "element.h"

class ExcludeElement: public Element {
	private:
		Operator *_operator;

	public:
		ExcludeElement(void);
        virtual ~ExcludeElement(void) {}

		//! \brief Defines the operator used by the exclude element
		void setOperator(Operator *oper);

		//! \brief Returns the operator used by the exclude element
		Operator *getOperator(void);

		QString getCodeDefinition(unsigned def_type);
};

#endif