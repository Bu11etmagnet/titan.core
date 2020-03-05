// This Test Port skeleton source file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version CRL 113 200/6 R4C
// for ebotbar (ebotbar@ebotbarVB) on Wed Nov 28 12:07:59 2018

// Copyright (c) 2000-2020 Ericsson Telecom AB

// You may modify this file. Complete the body of empty functions and
// add your member functions here.

#include "PortProvRT.hh"
#include "realtimeTimestampPortTranslation.hh"

namespace realtimeTimestampPortTranslation {

PortProvRT_PROVIDER::PortProvRT_PROVIDER(const char *par_port_name)
	: PORT(par_port_name)
{

}

PortProvRT_PROVIDER::~PortProvRT_PROVIDER()
{

}

void PortProvRT_PROVIDER::set_parameter(const char * /*parameter_name*/,
	const char * /*parameter_value*/)
{

}

/*void PortProvRT_PROVIDER::Handle_Fd_Event(int fd, boolean is_readable,
	boolean is_writable, boolean is_error) {}*/

void PortProvRT_PROVIDER::Handle_Fd_Event_Error(int /*fd*/)
{

}

void PortProvRT_PROVIDER::Handle_Fd_Event_Writable(int /*fd*/)
{

}

void PortProvRT_PROVIDER::Handle_Fd_Event_Readable(int /*fd*/)
{

}

/*void PortProvRT_PROVIDER::Handle_Timeout(double time_since_last_call) {}*/

void PortProvRT_PROVIDER::user_map(const char * /*system_port*/)
{

}

void PortProvRT_PROVIDER::user_unmap(const char * /*system_port*/)
{

}

void PortProvRT_PROVIDER::user_start()
{

}

void PortProvRT_PROVIDER::user_stop()
{

}

void PortProvRT_PROVIDER::outgoing_send(const INTEGER& send_par, FLOAT* timestamp_redirect)
{
  if (timestamp_redirect != NULL) {
    *timestamp_redirect = TTCN_Runtime::now();
  }
  // redirect the message to the port's input
  incoming_message(send_par, TTCN_Runtime::now());
}

} /* end of namespace */

