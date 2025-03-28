/***************************************************************************
 *   Copyright (C) 2024 Alec Leamas                                        *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,  USA.         *
 **************************************************************************/

/**
 * \file
 * Popup dialog on communication overflows
 */

#ifndef COMM_OVERFLOW_DLG_H__
#define COMM_OVERFLOW_DLG_H__

#include "observable.h"

/**
 * A dialog for handling communication overflow notifications.
 * This class manages a popup dialog that appears when communication overflows
 * occur.
 */
class CommOverflowDlg {
public:
  CommOverflowDlg(wxWindow* parent);

private:
  void ShowDialog(const std::string& msg);

  ObsListener m_listener;
  wxWindow* m_parent;
};

#endif  // COMM_OVERFLOW_DLG_H__
