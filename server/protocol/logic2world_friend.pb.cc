// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: logic2world_friend.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "logic2world_friend.pb.h"

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

namespace logic2world_protocols {

namespace {

const ::google::protobuf::Descriptor* packetw2l_enter_friend_room_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  packetw2l_enter_friend_room_reflection_ = NULL;
const ::google::protobuf::Descriptor* packetl2w_enter_friend_room_result_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  packetl2w_enter_friend_room_result_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_logic2world_5ffriend_2eproto() {
  protobuf_AddDesc_logic2world_5ffriend_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "logic2world_friend.proto");
  GOOGLE_CHECK(file != NULL);
  packetw2l_enter_friend_room_descriptor_ = file->message_type(0);
  static const int packetw2l_enter_friend_room_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(packetw2l_enter_friend_room, packet_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(packetw2l_enter_friend_room, sessionid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(packetw2l_enter_friend_room, friendid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(packetw2l_enter_friend_room, gameid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(packetw2l_enter_friend_room, account_info_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(packetw2l_enter_friend_room, playerid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(packetw2l_enter_friend_room, account_info_ex_),
  };
  packetw2l_enter_friend_room_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      packetw2l_enter_friend_room_descriptor_,
      packetw2l_enter_friend_room::default_instance_,
      packetw2l_enter_friend_room_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(packetw2l_enter_friend_room, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(packetw2l_enter_friend_room, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(packetw2l_enter_friend_room));
  packetl2w_enter_friend_room_result_descriptor_ = file->message_type(1);
  static const int packetl2w_enter_friend_room_result_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(packetl2w_enter_friend_room_result, packet_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(packetl2w_enter_friend_room_result, playerid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(packetl2w_enter_friend_room_result, result_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(packetl2w_enter_friend_room_result, gameid_),
  };
  packetl2w_enter_friend_room_result_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      packetl2w_enter_friend_room_result_descriptor_,
      packetl2w_enter_friend_room_result::default_instance_,
      packetl2w_enter_friend_room_result_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(packetl2w_enter_friend_room_result, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(packetl2w_enter_friend_room_result, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(packetl2w_enter_friend_room_result));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_logic2world_5ffriend_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    packetw2l_enter_friend_room_descriptor_, &packetw2l_enter_friend_room::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    packetl2w_enter_friend_room_result_descriptor_, &packetl2w_enter_friend_room_result::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_logic2world_5ffriend_2eproto() {
  delete packetw2l_enter_friend_room::default_instance_;
  delete packetw2l_enter_friend_room_reflection_;
  delete packetl2w_enter_friend_room_result::default_instance_;
  delete packetl2w_enter_friend_room_result_reflection_;
}

void protobuf_AddDesc_logic2world_5ffriend_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::logic2world_protocols::protobuf_AddDesc_logic2world_5fmsg_5ftype_2eproto();
  ::msg_info_def::protobuf_AddDesc_msg_5finfo_5fdef_2eproto();
  ::msg_type_def::protobuf_AddDesc_msg_5ftype_5fdef_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030logic2world_friend.proto\022\025logic2world_"
    "protocols\032\032logic2world_msg_type.proto\032\022m"
    "sg_info_def.proto\032\022msg_type_def.proto\"\260\002"
    "\n\033packetw2l_enter_friend_room\022X\n\tpacket_"
    "id\030\001 \001(\0162(.logic2world_protocols.e_serve"
    "r_msg_type:\033e_mst_w2l_enter_friend_room\022"
    "\021\n\tsessionid\030\002 \001(\007\022\020\n\010friendId\030\003 \001(\005\022\016\n\006"
    "gameId\030\004 \001(\005\0224\n\014account_info\030\005 \001(\0132\036.msg"
    "_info_def.msg_account_info\022\020\n\010playerid\030\006"
    " \001(\007\022:\n\017account_info_ex\030\007 \001(\0132!.msg_info"
    "_def.msg_account_info_ex\"\267\001\n\"packetl2w_e"
    "nter_friend_room_result\022_\n\tpacket_id\030\001 \001"
    "(\0162(.logic2world_protocols.e_server_msg_"
    "type:\"e_mst_l2w_enter_friend_room_result"
    "\022\020\n\010playerid\030\002 \001(\007\022\016\n\006result\030\003 \001(\005\022\016\n\006ga"
    "meId\030\004 \001(\005", 610);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "logic2world_friend.proto", &protobuf_RegisterTypes);
  packetw2l_enter_friend_room::default_instance_ = new packetw2l_enter_friend_room();
  packetl2w_enter_friend_room_result::default_instance_ = new packetl2w_enter_friend_room_result();
  packetw2l_enter_friend_room::default_instance_->InitAsDefaultInstance();
  packetl2w_enter_friend_room_result::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_logic2world_5ffriend_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_logic2world_5ffriend_2eproto {
  StaticDescriptorInitializer_logic2world_5ffriend_2eproto() {
    protobuf_AddDesc_logic2world_5ffriend_2eproto();
  }
} static_descriptor_initializer_logic2world_5ffriend_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int packetw2l_enter_friend_room::kPacketIdFieldNumber;
const int packetw2l_enter_friend_room::kSessionidFieldNumber;
const int packetw2l_enter_friend_room::kFriendIdFieldNumber;
const int packetw2l_enter_friend_room::kGameIdFieldNumber;
const int packetw2l_enter_friend_room::kAccountInfoFieldNumber;
const int packetw2l_enter_friend_room::kPlayeridFieldNumber;
const int packetw2l_enter_friend_room::kAccountInfoExFieldNumber;
#endif  // !_MSC_VER

packetw2l_enter_friend_room::packetw2l_enter_friend_room()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:logic2world_protocols.packetw2l_enter_friend_room)
}

void packetw2l_enter_friend_room::InitAsDefaultInstance() {
  account_info_ = const_cast< ::msg_info_def::msg_account_info*>(&::msg_info_def::msg_account_info::default_instance());
  account_info_ex_ = const_cast< ::msg_info_def::msg_account_info_ex*>(&::msg_info_def::msg_account_info_ex::default_instance());
}

packetw2l_enter_friend_room::packetw2l_enter_friend_room(const packetw2l_enter_friend_room& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:logic2world_protocols.packetw2l_enter_friend_room)
}

void packetw2l_enter_friend_room::SharedCtor() {
  _cached_size_ = 0;
  packet_id_ = 20007;
  sessionid_ = 0u;
  friendid_ = 0;
  gameid_ = 0;
  account_info_ = NULL;
  playerid_ = 0u;
  account_info_ex_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

packetw2l_enter_friend_room::~packetw2l_enter_friend_room() {
  // @@protoc_insertion_point(destructor:logic2world_protocols.packetw2l_enter_friend_room)
  SharedDtor();
}

void packetw2l_enter_friend_room::SharedDtor() {
  if (this != default_instance_) {
    delete account_info_;
    delete account_info_ex_;
  }
}

void packetw2l_enter_friend_room::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* packetw2l_enter_friend_room::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return packetw2l_enter_friend_room_descriptor_;
}

const packetw2l_enter_friend_room& packetw2l_enter_friend_room::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_logic2world_5ffriend_2eproto();
  return *default_instance_;
}

packetw2l_enter_friend_room* packetw2l_enter_friend_room::default_instance_ = NULL;

packetw2l_enter_friend_room* packetw2l_enter_friend_room::New() const {
  return new packetw2l_enter_friend_room;
}

void packetw2l_enter_friend_room::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<packetw2l_enter_friend_room*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 127) {
    ZR_(sessionid_, gameid_);
    packet_id_ = 20007;
    if (has_account_info()) {
      if (account_info_ != NULL) account_info_->::msg_info_def::msg_account_info::Clear();
    }
    playerid_ = 0u;
    if (has_account_info_ex()) {
      if (account_info_ex_ != NULL) account_info_ex_->::msg_info_def::msg_account_info_ex::Clear();
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool packetw2l_enter_friend_room::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:logic2world_protocols.packetw2l_enter_friend_room)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .logic2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2l_enter_friend_room];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::logic2world_protocols::e_server_msg_type_IsValid(value)) {
            set_packet_id(static_cast< ::logic2world_protocols::e_server_msg_type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_sessionid;
        break;
      }

      // optional fixed32 sessionid = 2;
      case 2: {
        if (tag == 21) {
         parse_sessionid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &sessionid_)));
          set_has_sessionid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_friendId;
        break;
      }

      // optional int32 friendId = 3;
      case 3: {
        if (tag == 24) {
         parse_friendId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &friendid_)));
          set_has_friendid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_gameId;
        break;
      }

      // optional int32 gameId = 4;
      case 4: {
        if (tag == 32) {
         parse_gameId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &gameid_)));
          set_has_gameid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_account_info;
        break;
      }

      // optional .msg_info_def.msg_account_info account_info = 5;
      case 5: {
        if (tag == 42) {
         parse_account_info:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_account_info()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(53)) goto parse_playerid;
        break;
      }

      // optional fixed32 playerid = 6;
      case 6: {
        if (tag == 53) {
         parse_playerid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &playerid_)));
          set_has_playerid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_account_info_ex;
        break;
      }

      // optional .msg_info_def.msg_account_info_ex account_info_ex = 7;
      case 7: {
        if (tag == 58) {
         parse_account_info_ex:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_account_info_ex()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:logic2world_protocols.packetw2l_enter_friend_room)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:logic2world_protocols.packetw2l_enter_friend_room)
  return false;
#undef DO_
}

void packetw2l_enter_friend_room::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:logic2world_protocols.packetw2l_enter_friend_room)
  // optional .logic2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2l_enter_friend_room];
  if (has_packet_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->packet_id(), output);
  }

  // optional fixed32 sessionid = 2;
  if (has_sessionid()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(2, this->sessionid(), output);
  }

  // optional int32 friendId = 3;
  if (has_friendid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->friendid(), output);
  }

  // optional int32 gameId = 4;
  if (has_gameid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->gameid(), output);
  }

  // optional .msg_info_def.msg_account_info account_info = 5;
  if (has_account_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->account_info(), output);
  }

  // optional fixed32 playerid = 6;
  if (has_playerid()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(6, this->playerid(), output);
  }

  // optional .msg_info_def.msg_account_info_ex account_info_ex = 7;
  if (has_account_info_ex()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->account_info_ex(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:logic2world_protocols.packetw2l_enter_friend_room)
}

::google::protobuf::uint8* packetw2l_enter_friend_room::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:logic2world_protocols.packetw2l_enter_friend_room)
  // optional .logic2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2l_enter_friend_room];
  if (has_packet_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->packet_id(), target);
  }

  // optional fixed32 sessionid = 2;
  if (has_sessionid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(2, this->sessionid(), target);
  }

  // optional int32 friendId = 3;
  if (has_friendid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->friendid(), target);
  }

  // optional int32 gameId = 4;
  if (has_gameid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->gameid(), target);
  }

  // optional .msg_info_def.msg_account_info account_info = 5;
  if (has_account_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->account_info(), target);
  }

  // optional fixed32 playerid = 6;
  if (has_playerid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(6, this->playerid(), target);
  }

  // optional .msg_info_def.msg_account_info_ex account_info_ex = 7;
  if (has_account_info_ex()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        7, this->account_info_ex(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:logic2world_protocols.packetw2l_enter_friend_room)
  return target;
}

int packetw2l_enter_friend_room::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .logic2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2l_enter_friend_room];
    if (has_packet_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->packet_id());
    }

    // optional fixed32 sessionid = 2;
    if (has_sessionid()) {
      total_size += 1 + 4;
    }

    // optional int32 friendId = 3;
    if (has_friendid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->friendid());
    }

    // optional int32 gameId = 4;
    if (has_gameid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->gameid());
    }

    // optional .msg_info_def.msg_account_info account_info = 5;
    if (has_account_info()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->account_info());
    }

    // optional fixed32 playerid = 6;
    if (has_playerid()) {
      total_size += 1 + 4;
    }

    // optional .msg_info_def.msg_account_info_ex account_info_ex = 7;
    if (has_account_info_ex()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->account_info_ex());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void packetw2l_enter_friend_room::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const packetw2l_enter_friend_room* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const packetw2l_enter_friend_room*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void packetw2l_enter_friend_room::MergeFrom(const packetw2l_enter_friend_room& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_packet_id()) {
      set_packet_id(from.packet_id());
    }
    if (from.has_sessionid()) {
      set_sessionid(from.sessionid());
    }
    if (from.has_friendid()) {
      set_friendid(from.friendid());
    }
    if (from.has_gameid()) {
      set_gameid(from.gameid());
    }
    if (from.has_account_info()) {
      mutable_account_info()->::msg_info_def::msg_account_info::MergeFrom(from.account_info());
    }
    if (from.has_playerid()) {
      set_playerid(from.playerid());
    }
    if (from.has_account_info_ex()) {
      mutable_account_info_ex()->::msg_info_def::msg_account_info_ex::MergeFrom(from.account_info_ex());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void packetw2l_enter_friend_room::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void packetw2l_enter_friend_room::CopyFrom(const packetw2l_enter_friend_room& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool packetw2l_enter_friend_room::IsInitialized() const {

  return true;
}

void packetw2l_enter_friend_room::Swap(packetw2l_enter_friend_room* other) {
  if (other != this) {
    std::swap(packet_id_, other->packet_id_);
    std::swap(sessionid_, other->sessionid_);
    std::swap(friendid_, other->friendid_);
    std::swap(gameid_, other->gameid_);
    std::swap(account_info_, other->account_info_);
    std::swap(playerid_, other->playerid_);
    std::swap(account_info_ex_, other->account_info_ex_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata packetw2l_enter_friend_room::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = packetw2l_enter_friend_room_descriptor_;
  metadata.reflection = packetw2l_enter_friend_room_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int packetl2w_enter_friend_room_result::kPacketIdFieldNumber;
const int packetl2w_enter_friend_room_result::kPlayeridFieldNumber;
const int packetl2w_enter_friend_room_result::kResultFieldNumber;
const int packetl2w_enter_friend_room_result::kGameIdFieldNumber;
#endif  // !_MSC_VER

packetl2w_enter_friend_room_result::packetl2w_enter_friend_room_result()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:logic2world_protocols.packetl2w_enter_friend_room_result)
}

void packetl2w_enter_friend_room_result::InitAsDefaultInstance() {
}

packetl2w_enter_friend_room_result::packetl2w_enter_friend_room_result(const packetl2w_enter_friend_room_result& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:logic2world_protocols.packetl2w_enter_friend_room_result)
}

void packetl2w_enter_friend_room_result::SharedCtor() {
  _cached_size_ = 0;
  packet_id_ = 20008;
  playerid_ = 0u;
  result_ = 0;
  gameid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

packetl2w_enter_friend_room_result::~packetl2w_enter_friend_room_result() {
  // @@protoc_insertion_point(destructor:logic2world_protocols.packetl2w_enter_friend_room_result)
  SharedDtor();
}

void packetl2w_enter_friend_room_result::SharedDtor() {
  if (this != default_instance_) {
  }
}

void packetl2w_enter_friend_room_result::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* packetl2w_enter_friend_room_result::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return packetl2w_enter_friend_room_result_descriptor_;
}

const packetl2w_enter_friend_room_result& packetl2w_enter_friend_room_result::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_logic2world_5ffriend_2eproto();
  return *default_instance_;
}

packetl2w_enter_friend_room_result* packetl2w_enter_friend_room_result::default_instance_ = NULL;

packetl2w_enter_friend_room_result* packetl2w_enter_friend_room_result::New() const {
  return new packetl2w_enter_friend_room_result;
}

void packetl2w_enter_friend_room_result::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<packetl2w_enter_friend_room_result*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 15) {
    ZR_(playerid_, gameid_);
    packet_id_ = 20008;
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool packetl2w_enter_friend_room_result::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:logic2world_protocols.packetl2w_enter_friend_room_result)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .logic2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_l2w_enter_friend_room_result];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::logic2world_protocols::e_server_msg_type_IsValid(value)) {
            set_packet_id(static_cast< ::logic2world_protocols::e_server_msg_type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_playerid;
        break;
      }

      // optional fixed32 playerid = 2;
      case 2: {
        if (tag == 21) {
         parse_playerid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &playerid_)));
          set_has_playerid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_result;
        break;
      }

      // optional int32 result = 3;
      case 3: {
        if (tag == 24) {
         parse_result:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &result_)));
          set_has_result();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_gameId;
        break;
      }

      // optional int32 gameId = 4;
      case 4: {
        if (tag == 32) {
         parse_gameId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &gameid_)));
          set_has_gameid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:logic2world_protocols.packetl2w_enter_friend_room_result)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:logic2world_protocols.packetl2w_enter_friend_room_result)
  return false;
#undef DO_
}

void packetl2w_enter_friend_room_result::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:logic2world_protocols.packetl2w_enter_friend_room_result)
  // optional .logic2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_l2w_enter_friend_room_result];
  if (has_packet_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->packet_id(), output);
  }

  // optional fixed32 playerid = 2;
  if (has_playerid()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(2, this->playerid(), output);
  }

  // optional int32 result = 3;
  if (has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->result(), output);
  }

  // optional int32 gameId = 4;
  if (has_gameid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->gameid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:logic2world_protocols.packetl2w_enter_friend_room_result)
}

::google::protobuf::uint8* packetl2w_enter_friend_room_result::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:logic2world_protocols.packetl2w_enter_friend_room_result)
  // optional .logic2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_l2w_enter_friend_room_result];
  if (has_packet_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->packet_id(), target);
  }

  // optional fixed32 playerid = 2;
  if (has_playerid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(2, this->playerid(), target);
  }

  // optional int32 result = 3;
  if (has_result()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->result(), target);
  }

  // optional int32 gameId = 4;
  if (has_gameid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->gameid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:logic2world_protocols.packetl2w_enter_friend_room_result)
  return target;
}

int packetl2w_enter_friend_room_result::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .logic2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_l2w_enter_friend_room_result];
    if (has_packet_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->packet_id());
    }

    // optional fixed32 playerid = 2;
    if (has_playerid()) {
      total_size += 1 + 4;
    }

    // optional int32 result = 3;
    if (has_result()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->result());
    }

    // optional int32 gameId = 4;
    if (has_gameid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->gameid());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void packetl2w_enter_friend_room_result::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const packetl2w_enter_friend_room_result* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const packetl2w_enter_friend_room_result*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void packetl2w_enter_friend_room_result::MergeFrom(const packetl2w_enter_friend_room_result& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_packet_id()) {
      set_packet_id(from.packet_id());
    }
    if (from.has_playerid()) {
      set_playerid(from.playerid());
    }
    if (from.has_result()) {
      set_result(from.result());
    }
    if (from.has_gameid()) {
      set_gameid(from.gameid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void packetl2w_enter_friend_room_result::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void packetl2w_enter_friend_room_result::CopyFrom(const packetl2w_enter_friend_room_result& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool packetl2w_enter_friend_room_result::IsInitialized() const {

  return true;
}

void packetl2w_enter_friend_room_result::Swap(packetl2w_enter_friend_room_result* other) {
  if (other != this) {
    std::swap(packet_id_, other->packet_id_);
    std::swap(playerid_, other->playerid_);
    std::swap(result_, other->result_);
    std::swap(gameid_, other->gameid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata packetl2w_enter_friend_room_result::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = packetl2w_enter_friend_room_result_descriptor_;
  metadata.reflection = packetl2w_enter_friend_room_result_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace logic2world_protocols

// @@protoc_insertion_point(global_scope)
