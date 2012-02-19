/*
 *  Copyright (C) 2012  Alexandre Courbot
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GUI_BATCHHANDLER_H
#define __GUI_BATCHHANDLER_H

#include "core/Entry.h"

#include <QModelIndexList>
#include <QCoreApplication>
#include <QWidget>

class BatchHandler
{
	Q_DECLARE_TR_FUNCTIONS(BatchHandler)
public:
	virtual ~BatchHandler() {}
	virtual void apply(const EntryPointer &e) const = 0;
	static void applyOnSelection(const BatchHandler &handler, const QModelIndexList &selection, QWidget *parent = 0);
	static void applyOnEntries(const BatchHandler &handler, const QList<EntryPointer> &entries, QWidget *parent = 0);
};

#endif