/* =====================================
=== FIMREG - Fast Image Registration ===
========================================

Written by Roelof Berg, Berg Solutions (rberg@berg-solutions.de) with support from
Lars Koenig, Fraunhofer MEVIS (lars.koenig@mevis.fraunhofer.de) Jan Ruehaak, Fraunhofer
MEVIS (jan.ruehaak@mevis.fraunhofer.de).

THIS IS A LIMITED RESEARCH PROTOTYPE. Documentation: www.berg-solutions.de/fimreg.html

------------------------------------------------------------------------------

Copyright (c) 2014, Roelof Berg
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

* Neither the name of the owner nor the names of its
contributors may be used to endorse or promote products derived from
this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------*/

/**
* Definitions for the HPRPC remote procedure call protocol
*/

#include "fimreg_common.h"

#pragma once

// HPRPC operation codes (The MSD is not allowed to be set ! Allowed values range from 0x0000 to 0x7fff.

/** OpCode for HPRPC protocol: Store Image data and bounding box information */
const uint16_t HPRPC_OP_STORE_IMG = 0;

/** OpCode for HPRPC protocol: Calculate SSD, Jacobian and Hessian*/
const uint16_t HPRPC_OP_CALC_SSD_JAC_HESS = 1;

/** OpCode for HPRPC protocol: Calculate SSD only */
const uint16_t HPRPC_OP_CALC_SSD = 2;

/** OpCode for HPRPC protocol: Calculation finished, target is allowed to clean up */
const uint16_t HPRPC_OP_CALC_FINISHED = 3;

// HPRPC return codes

const uint16_t HPRPC_RET_SUCCESS = 0;
const uint16_t HPRPC_RET_ERR_UNKNOWN = 1;
const uint16_t HPRPC_RET_ERR_INVALID = 0xffff;	//Used for application internal initialisation. Should never enter an HPRPC command.