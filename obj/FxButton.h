/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _FXBUTTON_H_
#define _FXBUTTON_H_

#include "xml_extract.h"
#include FX_BUTTON_INCLUDE

/*
 * FxButton
 */

class FxButton;
typedef Ref<FxButton> FxButtonRef;

class FxButton : public FX_BUTTON_PARENT {
public:
	FxButton();
	~FxButton();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version );
private:
	FX_BUTTON_MEMBERS
};
#endif