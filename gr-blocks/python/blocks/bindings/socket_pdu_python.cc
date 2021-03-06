/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(socket_pdu.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(22b717395ed280a5f4f9ac0bd31d2986)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/socket_pdu.h>
// pydoc.h is automatically generated in the build directory
#include <socket_pdu_pydoc.h>

void bind_socket_pdu(py::module& m)
{

    using socket_pdu = ::gr::blocks::socket_pdu;


    py::class_<socket_pdu, gr::block, gr::basic_block, std::shared_ptr<socket_pdu>>(
        m, "socket_pdu", D(socket_pdu))

        .def(py::init(&socket_pdu::make),
             py::arg("type"),
             py::arg("addr"),
             py::arg("port"),
             py::arg("MTU") = 10000,
             py::arg("tcp_no_delay") = false,
             D(socket_pdu, make))


        ;
}
