// Copyright (C) 2014-2015 Bayerische Motoren Werke Aktiengesellschaft (BMW AG)
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef VSOMEIP_SD_DEFINES_HPP
#define VSOMEIP_SD_DEFINES_HPP

#define VSOMEIP_SOMEIP_SD_DATA_SIZE              12
#define VSOMEIP_SOMEIP_SD_ENTRY_SIZE             16
#define VSOMEIP_SOMEIP_SD_OPTION_HEADER_SIZE     3

#define VSOMEIP_SD_SERVICE                       0xFFFF
#define VSOMEIP_SD_INSTANCE                      0x0000
#define VSOMEIP_SD_METHOD                        0x8100
#define VSOMEIP_SD_CLIENT                        0x0000


#define VSOMEIP_SD_DEFAULT_ENABLED                  true
#define VSOMEIP_SD_DEFAULT_PROTOCOL                 "udp"
#define VSOMEIP_SD_DEFAULT_MULTICAST                "224.224.224.0"
#define VSOMEIP_SD_DEFAULT_PORT                     30490

#define VSOMEIP_SD_DEFAULT_INITIAL_DELAY_MIN        0
#define VSOMEIP_SD_DEFAULT_INITIAL_DELAY_MAX        3000
#define VSOMEIP_SD_DEFAULT_REPETITIONS_BASE_DELAY   10
#define VSOMEIP_SD_DEFAULT_REPETITIONS_MAX          3
#define VSOMEIP_SD_DEFAULT_TTL                      5
#define VSOMEIP_SD_DEFAULT_CYCLIC_OFFER_DELAY       1000
#define VSOMEIP_SD_DEFAULT_REQUEST_RESPONSE_DELAY   2000

#endif // VSOMEIP_SD_DEFINES_HPP
