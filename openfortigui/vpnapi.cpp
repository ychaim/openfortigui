/*
 *  Copyright (C) 2018 Rene Hadler
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

#include "vpnapi.h"

#include <QVariant>

vpnApi::vpnApi()
{

}


QDataStream &operator<<(QDataStream &ds, const vpnApi &obj)
{
    ds << obj.action;
    ds << obj.objName;
    ds << obj.data;

    return ds;
}

QDataStream &operator>>(QDataStream &ds, vpnApi &obj)
{
    ds >> obj.action;
    ds >> obj.objName;
    ds >> obj.data;

    return ds;
}
