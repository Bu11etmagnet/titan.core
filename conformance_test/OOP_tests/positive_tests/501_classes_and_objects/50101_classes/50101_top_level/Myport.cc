// This Test Port skeleton source file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version 7/CAX 105 7730 R2A
// for Global Warning (james00@GlobalWarning1) on Tue Nov 10 10:57:42 2020

// Copyright (c) 2000-2020 Ericsson Telecom AB

// You may modify this file. Complete the body of empty functions and
// add your member functions here.

#include "Myport.hh"

namespace Sem__50101__top__level__008 {

Myport::Myport(const char *par_port_name)
	: Myport_BASE(par_port_name)
{

}

Myport::~Myport()
{

}

void Myport::set_parameter(const char * /*parameter_name*/,
	const char * /*parameter_value*/)
{

}

/*void Myport::Handle_Fd_Event(int fd, boolean is_readable,
	boolean is_writable, boolean is_error) {}*/

void Myport::Handle_Fd_Event_Error(int /*fd*/)
{

}

void Myport::Handle_Fd_Event_Writable(int /*fd*/)
{

}

void Myport::Handle_Fd_Event_Readable(int /*fd*/)
{

}

/*void Myport::Handle_Timeout(double time_since_last_call) {}*/

void Myport::user_map(const char * /*system_port*/, Map_Params& /*params*/)
{

}

void Myport::user_unmap(const char * /*system_port*/, Map_Params& /*params*/)
{

}

void Myport::user_start()
{

}

void Myport::user_stop()
{

}

void Myport::outgoing_send(const CHARSTRING& send_par /*send_par*/)
{

incoming_message(send_par);
}

} /* end of namespace */

