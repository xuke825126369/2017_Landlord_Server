#pragma once
#include <net\packet_manager.h>
#include <server_protocol.pb.h>
#include "server_peer.h"

using namespace server_protocols;

void init_server_protocol();

//monitor -> logic
PACKET_REGEDIT_RECV_LOG(server_peer, packet_server_register_result);
PACKET_REGEDIT_RECV(server_peer, packet_other_server_connect);
PACKET_REGEDIT_RECV(server_peer, packet_other_server_disconnect);
PACKET_REGEDIT_RECV(server_peer, packet_updata_servers_info);

//logic -> monitor
PACKET_REGEDIT_SEND(packet_heartbeat);
PACKET_REGEDIT_SEND(packet_updata_self_info);
PACKET_REGEDIT_SEND(packet_server_register);






