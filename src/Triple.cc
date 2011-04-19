/**
 *  Copyright (C) 2010, 2011 Zhang Initiative Research Unit,
 *  Advance Science Institute, Riken
 *  2-1 Hirosawa, Wako, Saitama 351-0198, Japan
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  **************************************************************************/

#include "Triple.h"

Triple::Triple(size_t x, size_t y, float xy) {
  this->x = x;
  this->y = y;
  this->xy = xy;
}

bool operator<(const Triple& fst, const Triple& snd) {
  return fst.xy < snd.xy;
}

ostream& operator<<(ostream& os, const Triple& t) {
  return os << t.x << ' ' << t.y << ' ' << t.xy;
}
