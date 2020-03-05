/******************************************************************************
 * Copyright (c) 2000-2020 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v2.0
 * which accompanies this distribution, and is available at
 * https://www.eclipse.org/org/documents/epl-2.0/EPL-2.0.html
 *
 * Contributors:
 *   Balasko, Jeno
 *   Lovassy, Arpad
 *   Raduly, Csaba
 *
 ******************************************************************************/
// This Test Port skeleton header file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version 1.8.pre3 build 3
// for  (ecsardu@tcclab2) on Fri May 21 19:22:39 2010


// You may modify this file. Add your attributes and prototypes of your
// member functions here.

#ifndef UNDER_HH
#define UNDER_HH

#include <TTCN3.hh>

// Note: Header file dual2.hh must not be included into this file!
// (because it includes this file)
// Please add the declarations of message types manually.

#ifndef OLD_NAMES
namespace dual2 {
#endif

class UNDER_PROVIDER : public PORT {
public:
	UNDER_PROVIDER(const char *par_port_name);
	~UNDER_PROVIDER();

	void set_parameter(const char *parameter_name,
		const char *parameter_value);

private:
	/* void Handle_Fd_Event(int fd, boolean is_readable,
		boolean is_writable, boolean is_error); */
	void Handle_Fd_Event_Error(int fd);
	void Handle_Fd_Event_Writable(int fd);
	void Handle_Fd_Event_Readable(int fd);
	/* void Handle_Timeout(double time_since_last_call); */
protected:
	void user_map(const char *system_port);
	void user_unmap(const char *system_port);

	void user_start();
	void user_stop();

	void outgoing_send(const OCTETSTRING& send_par);
	virtual void incoming_message(const OCTETSTRING& incoming_par) = 0;
};

#ifndef OLD_NAMES
} /* end of namespace */
#endif

#endif
