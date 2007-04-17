//  $Id$
//
//  SuperTuxKart - a fun racing game with go-kart
//  Copyright (C) 2006 SuperTuxKart-Team
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_BASEGUI_H
#define HEADER_BASEGUI_H

#include "player.hpp"

class BaseGUI
{
public:
    BaseGUI() {}
    virtual ~BaseGUI() {}

    virtual void update(float dt);
    virtual void select() = 0;

    virtual void input(InputType type, int id0, int id1, int id2, int value);
    virtual void inputKeyboard(int key, int pressed);
    void  TimeToString(const float time, char *s);
protected:
    int m_menu_id;
};

#endif // HEADER_BASEGUI_H
