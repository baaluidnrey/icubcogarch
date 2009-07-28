// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

/* 
 * Copyright (C) 2009 RobotCub Consortium, European Commission FP6 Project IST-004370
 * Authors: Alberto Bietti, Logan Niehaus, Giovanni Saponaro 
 * email:   <firstname.secondname>@robotcub.org
 * website: www.robotcub.org
 * Permission is granted to copy, distribute, and/or modify this program
 * under the terms of the GNU General Public License, version 2 or any
 * later version published by the Free Software Foundation.
 *
 * A copy of the license can be found at
 * http://www.robotcub.org/icub/license/gpl.txt
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details
 */

// yarp
#include <yarp/os/Module.h>
#include <yarp/os/Network.h>

// iCub
#include <iCub/autoAssociativeMemoryModule.h>

using namespace yarp::os;

int main(int argc, char *argv[])
{
    // create a specific Network object, rather than using Network::init().
    // this way, automatic cleanup by the means of Network::fini() will be smoother
    Network network;

    AutoAssociativeMemoryModule moduleID;	// instantiate module
    moduleID.setName("/aam");				// set default name (port prefix) of module
    return moduleID.runModule(argc,argv);	// execute module
}
