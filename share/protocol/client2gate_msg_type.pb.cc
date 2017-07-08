// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client2gate_msg_type.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "client2gate_msg_type.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace client2gate_protocols {

namespace {

const ::google::protobuf::EnumDescriptor* e_server_msg_type_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_client2gate_5fmsg_5ftype_2eproto() {
  protobuf_AddDesc_client2gate_5fmsg_5ftype_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "client2gate_msg_type.proto");
  GOOGLE_CHECK(file != NULL);
  e_server_msg_type_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_client2gate_5fmsg_5ftype_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_client2gate_5fmsg_5ftype_2eproto() {
}

void protobuf_AddDesc_client2gate_5fmsg_5ftype_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032client2gate_msg_type.proto\022\025client2gat"
    "e_protocols*\315\001\n\021e_server_msg_type\022\024\n\017e_m"
    "st_start_c2g\020\254\002\022\030\n\023e_mst_c2g_heartbeat\020\255"
    "\002\022\032\n\025e_mst_c2g_select_gate\020\256\002\022\024\n\017e_mst_s"
    "tart_g2c\020\220\003\022!\n\034e_mst_g2c_select_gate_res"
    "ult\020\221\003\022\033\n\026e_mst_g2c_send_msglist\020\222\003\022\026\n\021e"
    "_mst_cgend_index\020\364\003", 259);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "client2gate_msg_type.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_client2gate_5fmsg_5ftype_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_client2gate_5fmsg_5ftype_2eproto {
  StaticDescriptorInitializer_client2gate_5fmsg_5ftype_2eproto() {
    protobuf_AddDesc_client2gate_5fmsg_5ftype_2eproto();
  }
} static_descriptor_initializer_client2gate_5fmsg_5ftype_2eproto_;
const ::google::protobuf::EnumDescriptor* e_server_msg_type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return e_server_msg_type_descriptor_;
}
bool e_server_msg_type_IsValid(int value) {
  switch(value) {
    case 300:
    case 301:
    case 302:
    case 400:
    case 401:
    case 402:
    case 500:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace client2gate_protocols

// @@protoc_insertion_point(global_scope)
