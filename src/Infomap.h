/**********************************************************************************

 Infomap software package for multi-level network clustering

 Copyright (c) 2013, 2014 Daniel Edler, Martin Rosvall

 For more information, see <http://www.mapequation.org>


 This file is part of Infomap software package.

 Infomap software package is free software: you can redistribute it and/or modify
 it under the terms of the GNU Affero General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Infomap software package is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU Affero General Public License for more details.

 You should have received a copy of the GNU Affero General Public License
 along with Infomap software package.  If not, see <http://www.gnu.org/licenses/>.

**********************************************************************************/


#ifndef SRC_INFOMAP_H_
#define SRC_INFOMAP_H_

#include <string>
#include "io/Config.h"
#include "core/InfomapTypes.h"

class Asdf {
    public:
    Asdf() {}
    ~Asdf() {}
    int asdf() { return 4; }
};

namespace infomap {

/**
* Run as stand-alone
*/
int run(const std::string& flags);


class Infomap : public M1Infomap {
    public:
    Infomap(std::string flags, bool requireFileInput = false) :
        M1Infomap(Config::fromString(flags, requireFileInput))
    {}

    using M1Infomap::run;

    void asdf() {
        run();
    }

};

// class MemInfomap : public M2Infomap {

// }

}

#endif /* SRC_INFOMAP_H_ */
