/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiPSysCylinderEmitter.h"

//Definition of TYPE constant
const Type NiPSysCylinderEmitter::TYPE("NiPSysCylinderEmitter", &NI_P_SYS_CYLINDER_EMITTER_PARENT::TYPE );

NiPSysCylinderEmitter::NiPSysCylinderEmitter() NI_P_SYS_CYLINDER_EMITTER_CONSTRUCT {}

NiPSysCylinderEmitter::~NiPSysCylinderEmitter() {}

void NiPSysCylinderEmitter::Read( istream& in, list<uint> link_stack, unsigned int version ) {
	NI_P_SYS_CYLINDER_EMITTER_READ
}

void NiPSysCylinderEmitter::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const {
	NI_P_SYS_CYLINDER_EMITTER_WRITE
}

string NiPSysCylinderEmitter::asString( bool verbose ) const {
	NI_P_SYS_CYLINDER_EMITTER_STRING
}

void NiPSysCylinderEmitter::FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version ) {
	NI_P_SYS_CYLINDER_EMITTER_FIXLINKS
}
