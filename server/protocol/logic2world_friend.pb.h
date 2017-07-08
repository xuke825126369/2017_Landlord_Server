// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: logic2world_friend.proto

#ifndef PROTOBUF_logic2world_5ffriend_2eproto__INCLUDED
#define PROTOBUF_logic2world_5ffriend_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "logic2world_msg_type.pb.h"
#include "msg_info_def.pb.h"
#include "msg_type_def.pb.h"
// @@protoc_insertion_point(includes)

namespace logic2world_protocols {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_logic2world_5ffriend_2eproto();
void protobuf_AssignDesc_logic2world_5ffriend_2eproto();
void protobuf_ShutdownFile_logic2world_5ffriend_2eproto();

class packetw2l_enter_friend_room;
class packetl2w_enter_friend_room_result;

// ===================================================================

class packetw2l_enter_friend_room : public ::google::protobuf::Message {
 public:
  packetw2l_enter_friend_room();
  virtual ~packetw2l_enter_friend_room();

  packetw2l_enter_friend_room(const packetw2l_enter_friend_room& from);

  inline packetw2l_enter_friend_room& operator=(const packetw2l_enter_friend_room& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const packetw2l_enter_friend_room& default_instance();

  void Swap(packetw2l_enter_friend_room* other);

  // implements Message ----------------------------------------------

  packetw2l_enter_friend_room* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetw2l_enter_friend_room& from);
  void MergeFrom(const packetw2l_enter_friend_room& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .logic2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2l_enter_friend_room];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::logic2world_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::logic2world_protocols::e_server_msg_type value);

  // optional fixed32 sessionid = 2;
  inline bool has_sessionid() const;
  inline void clear_sessionid();
  static const int kSessionidFieldNumber = 2;
  inline ::google::protobuf::uint32 sessionid() const;
  inline void set_sessionid(::google::protobuf::uint32 value);

  // optional int32 friendId = 3;
  inline bool has_friendid() const;
  inline void clear_friendid();
  static const int kFriendIdFieldNumber = 3;
  inline ::google::protobuf::int32 friendid() const;
  inline void set_friendid(::google::protobuf::int32 value);

  // optional int32 gameId = 4;
  inline bool has_gameid() const;
  inline void clear_gameid();
  static const int kGameIdFieldNumber = 4;
  inline ::google::protobuf::int32 gameid() const;
  inline void set_gameid(::google::protobuf::int32 value);

  // optional .msg_info_def.msg_account_info account_info = 5;
  inline bool has_account_info() const;
  inline void clear_account_info();
  static const int kAccountInfoFieldNumber = 5;
  inline const ::msg_info_def::msg_account_info& account_info() const;
  inline ::msg_info_def::msg_account_info* mutable_account_info();
  inline ::msg_info_def::msg_account_info* release_account_info();
  inline void set_allocated_account_info(::msg_info_def::msg_account_info* account_info);

  // optional fixed32 playerid = 6;
  inline bool has_playerid() const;
  inline void clear_playerid();
  static const int kPlayeridFieldNumber = 6;
  inline ::google::protobuf::uint32 playerid() const;
  inline void set_playerid(::google::protobuf::uint32 value);

  // optional .msg_info_def.msg_account_info_ex account_info_ex = 7;
  inline bool has_account_info_ex() const;
  inline void clear_account_info_ex();
  static const int kAccountInfoExFieldNumber = 7;
  inline const ::msg_info_def::msg_account_info_ex& account_info_ex() const;
  inline ::msg_info_def::msg_account_info_ex* mutable_account_info_ex();
  inline ::msg_info_def::msg_account_info_ex* release_account_info_ex();
  inline void set_allocated_account_info_ex(::msg_info_def::msg_account_info_ex* account_info_ex);

  // @@protoc_insertion_point(class_scope:logic2world_protocols.packetw2l_enter_friend_room)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();
  inline void set_has_sessionid();
  inline void clear_has_sessionid();
  inline void set_has_friendid();
  inline void clear_has_friendid();
  inline void set_has_gameid();
  inline void clear_has_gameid();
  inline void set_has_account_info();
  inline void clear_has_account_info();
  inline void set_has_playerid();
  inline void clear_has_playerid();
  inline void set_has_account_info_ex();
  inline void clear_has_account_info_ex();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int packet_id_;
  ::google::protobuf::uint32 sessionid_;
  ::google::protobuf::int32 friendid_;
  ::google::protobuf::int32 gameid_;
  ::msg_info_def::msg_account_info* account_info_;
  ::msg_info_def::msg_account_info_ex* account_info_ex_;
  ::google::protobuf::uint32 playerid_;
  friend void  protobuf_AddDesc_logic2world_5ffriend_2eproto();
  friend void protobuf_AssignDesc_logic2world_5ffriend_2eproto();
  friend void protobuf_ShutdownFile_logic2world_5ffriend_2eproto();

  void InitAsDefaultInstance();
  static packetw2l_enter_friend_room* default_instance_;
};
// -------------------------------------------------------------------

class packetl2w_enter_friend_room_result : public ::google::protobuf::Message {
 public:
  packetl2w_enter_friend_room_result();
  virtual ~packetl2w_enter_friend_room_result();

  packetl2w_enter_friend_room_result(const packetl2w_enter_friend_room_result& from);

  inline packetl2w_enter_friend_room_result& operator=(const packetl2w_enter_friend_room_result& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const packetl2w_enter_friend_room_result& default_instance();

  void Swap(packetl2w_enter_friend_room_result* other);

  // implements Message ----------------------------------------------

  packetl2w_enter_friend_room_result* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetl2w_enter_friend_room_result& from);
  void MergeFrom(const packetl2w_enter_friend_room_result& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .logic2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_l2w_enter_friend_room_result];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::logic2world_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::logic2world_protocols::e_server_msg_type value);

  // optional fixed32 playerid = 2;
  inline bool has_playerid() const;
  inline void clear_playerid();
  static const int kPlayeridFieldNumber = 2;
  inline ::google::protobuf::uint32 playerid() const;
  inline void set_playerid(::google::protobuf::uint32 value);

  // optional int32 result = 3;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 3;
  inline ::google::protobuf::int32 result() const;
  inline void set_result(::google::protobuf::int32 value);

  // optional int32 gameId = 4;
  inline bool has_gameid() const;
  inline void clear_gameid();
  static const int kGameIdFieldNumber = 4;
  inline ::google::protobuf::int32 gameid() const;
  inline void set_gameid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:logic2world_protocols.packetl2w_enter_friend_room_result)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();
  inline void set_has_playerid();
  inline void clear_has_playerid();
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_gameid();
  inline void clear_has_gameid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int packet_id_;
  ::google::protobuf::uint32 playerid_;
  ::google::protobuf::int32 result_;
  ::google::protobuf::int32 gameid_;
  friend void  protobuf_AddDesc_logic2world_5ffriend_2eproto();
  friend void protobuf_AssignDesc_logic2world_5ffriend_2eproto();
  friend void protobuf_ShutdownFile_logic2world_5ffriend_2eproto();

  void InitAsDefaultInstance();
  static packetl2w_enter_friend_room_result* default_instance_;
};
// ===================================================================


// ===================================================================

// packetw2l_enter_friend_room

// optional .logic2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2l_enter_friend_room];
inline bool packetw2l_enter_friend_room::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetw2l_enter_friend_room::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetw2l_enter_friend_room::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetw2l_enter_friend_room::clear_packet_id() {
  packet_id_ = 20007;
  clear_has_packet_id();
}
inline ::logic2world_protocols::e_server_msg_type packetw2l_enter_friend_room::packet_id() const {
  // @@protoc_insertion_point(field_get:logic2world_protocols.packetw2l_enter_friend_room.packet_id)
  return static_cast< ::logic2world_protocols::e_server_msg_type >(packet_id_);
}
inline void packetw2l_enter_friend_room::set_packet_id(::logic2world_protocols::e_server_msg_type value) {
  assert(::logic2world_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:logic2world_protocols.packetw2l_enter_friend_room.packet_id)
}

// optional fixed32 sessionid = 2;
inline bool packetw2l_enter_friend_room::has_sessionid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void packetw2l_enter_friend_room::set_has_sessionid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void packetw2l_enter_friend_room::clear_has_sessionid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void packetw2l_enter_friend_room::clear_sessionid() {
  sessionid_ = 0u;
  clear_has_sessionid();
}
inline ::google::protobuf::uint32 packetw2l_enter_friend_room::sessionid() const {
  // @@protoc_insertion_point(field_get:logic2world_protocols.packetw2l_enter_friend_room.sessionid)
  return sessionid_;
}
inline void packetw2l_enter_friend_room::set_sessionid(::google::protobuf::uint32 value) {
  set_has_sessionid();
  sessionid_ = value;
  // @@protoc_insertion_point(field_set:logic2world_protocols.packetw2l_enter_friend_room.sessionid)
}

// optional int32 friendId = 3;
inline bool packetw2l_enter_friend_room::has_friendid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void packetw2l_enter_friend_room::set_has_friendid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void packetw2l_enter_friend_room::clear_has_friendid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void packetw2l_enter_friend_room::clear_friendid() {
  friendid_ = 0;
  clear_has_friendid();
}
inline ::google::protobuf::int32 packetw2l_enter_friend_room::friendid() const {
  // @@protoc_insertion_point(field_get:logic2world_protocols.packetw2l_enter_friend_room.friendId)
  return friendid_;
}
inline void packetw2l_enter_friend_room::set_friendid(::google::protobuf::int32 value) {
  set_has_friendid();
  friendid_ = value;
  // @@protoc_insertion_point(field_set:logic2world_protocols.packetw2l_enter_friend_room.friendId)
}

// optional int32 gameId = 4;
inline bool packetw2l_enter_friend_room::has_gameid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void packetw2l_enter_friend_room::set_has_gameid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void packetw2l_enter_friend_room::clear_has_gameid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void packetw2l_enter_friend_room::clear_gameid() {
  gameid_ = 0;
  clear_has_gameid();
}
inline ::google::protobuf::int32 packetw2l_enter_friend_room::gameid() const {
  // @@protoc_insertion_point(field_get:logic2world_protocols.packetw2l_enter_friend_room.gameId)
  return gameid_;
}
inline void packetw2l_enter_friend_room::set_gameid(::google::protobuf::int32 value) {
  set_has_gameid();
  gameid_ = value;
  // @@protoc_insertion_point(field_set:logic2world_protocols.packetw2l_enter_friend_room.gameId)
}

// optional .msg_info_def.msg_account_info account_info = 5;
inline bool packetw2l_enter_friend_room::has_account_info() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void packetw2l_enter_friend_room::set_has_account_info() {
  _has_bits_[0] |= 0x00000010u;
}
inline void packetw2l_enter_friend_room::clear_has_account_info() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void packetw2l_enter_friend_room::clear_account_info() {
  if (account_info_ != NULL) account_info_->::msg_info_def::msg_account_info::Clear();
  clear_has_account_info();
}
inline const ::msg_info_def::msg_account_info& packetw2l_enter_friend_room::account_info() const {
  // @@protoc_insertion_point(field_get:logic2world_protocols.packetw2l_enter_friend_room.account_info)
  return account_info_ != NULL ? *account_info_ : *default_instance_->account_info_;
}
inline ::msg_info_def::msg_account_info* packetw2l_enter_friend_room::mutable_account_info() {
  set_has_account_info();
  if (account_info_ == NULL) account_info_ = new ::msg_info_def::msg_account_info;
  // @@protoc_insertion_point(field_mutable:logic2world_protocols.packetw2l_enter_friend_room.account_info)
  return account_info_;
}
inline ::msg_info_def::msg_account_info* packetw2l_enter_friend_room::release_account_info() {
  clear_has_account_info();
  ::msg_info_def::msg_account_info* temp = account_info_;
  account_info_ = NULL;
  return temp;
}
inline void packetw2l_enter_friend_room::set_allocated_account_info(::msg_info_def::msg_account_info* account_info) {
  delete account_info_;
  account_info_ = account_info;
  if (account_info) {
    set_has_account_info();
  } else {
    clear_has_account_info();
  }
  // @@protoc_insertion_point(field_set_allocated:logic2world_protocols.packetw2l_enter_friend_room.account_info)
}

// optional fixed32 playerid = 6;
inline bool packetw2l_enter_friend_room::has_playerid() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void packetw2l_enter_friend_room::set_has_playerid() {
  _has_bits_[0] |= 0x00000020u;
}
inline void packetw2l_enter_friend_room::clear_has_playerid() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void packetw2l_enter_friend_room::clear_playerid() {
  playerid_ = 0u;
  clear_has_playerid();
}
inline ::google::protobuf::uint32 packetw2l_enter_friend_room::playerid() const {
  // @@protoc_insertion_point(field_get:logic2world_protocols.packetw2l_enter_friend_room.playerid)
  return playerid_;
}
inline void packetw2l_enter_friend_room::set_playerid(::google::protobuf::uint32 value) {
  set_has_playerid();
  playerid_ = value;
  // @@protoc_insertion_point(field_set:logic2world_protocols.packetw2l_enter_friend_room.playerid)
}

// optional .msg_info_def.msg_account_info_ex account_info_ex = 7;
inline bool packetw2l_enter_friend_room::has_account_info_ex() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void packetw2l_enter_friend_room::set_has_account_info_ex() {
  _has_bits_[0] |= 0x00000040u;
}
inline void packetw2l_enter_friend_room::clear_has_account_info_ex() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void packetw2l_enter_friend_room::clear_account_info_ex() {
  if (account_info_ex_ != NULL) account_info_ex_->::msg_info_def::msg_account_info_ex::Clear();
  clear_has_account_info_ex();
}
inline const ::msg_info_def::msg_account_info_ex& packetw2l_enter_friend_room::account_info_ex() const {
  // @@protoc_insertion_point(field_get:logic2world_protocols.packetw2l_enter_friend_room.account_info_ex)
  return account_info_ex_ != NULL ? *account_info_ex_ : *default_instance_->account_info_ex_;
}
inline ::msg_info_def::msg_account_info_ex* packetw2l_enter_friend_room::mutable_account_info_ex() {
  set_has_account_info_ex();
  if (account_info_ex_ == NULL) account_info_ex_ = new ::msg_info_def::msg_account_info_ex;
  // @@protoc_insertion_point(field_mutable:logic2world_protocols.packetw2l_enter_friend_room.account_info_ex)
  return account_info_ex_;
}
inline ::msg_info_def::msg_account_info_ex* packetw2l_enter_friend_room::release_account_info_ex() {
  clear_has_account_info_ex();
  ::msg_info_def::msg_account_info_ex* temp = account_info_ex_;
  account_info_ex_ = NULL;
  return temp;
}
inline void packetw2l_enter_friend_room::set_allocated_account_info_ex(::msg_info_def::msg_account_info_ex* account_info_ex) {
  delete account_info_ex_;
  account_info_ex_ = account_info_ex;
  if (account_info_ex) {
    set_has_account_info_ex();
  } else {
    clear_has_account_info_ex();
  }
  // @@protoc_insertion_point(field_set_allocated:logic2world_protocols.packetw2l_enter_friend_room.account_info_ex)
}

// -------------------------------------------------------------------

// packetl2w_enter_friend_room_result

// optional .logic2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_l2w_enter_friend_room_result];
inline bool packetl2w_enter_friend_room_result::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetl2w_enter_friend_room_result::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetl2w_enter_friend_room_result::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetl2w_enter_friend_room_result::clear_packet_id() {
  packet_id_ = 20008;
  clear_has_packet_id();
}
inline ::logic2world_protocols::e_server_msg_type packetl2w_enter_friend_room_result::packet_id() const {
  // @@protoc_insertion_point(field_get:logic2world_protocols.packetl2w_enter_friend_room_result.packet_id)
  return static_cast< ::logic2world_protocols::e_server_msg_type >(packet_id_);
}
inline void packetl2w_enter_friend_room_result::set_packet_id(::logic2world_protocols::e_server_msg_type value) {
  assert(::logic2world_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:logic2world_protocols.packetl2w_enter_friend_room_result.packet_id)
}

// optional fixed32 playerid = 2;
inline bool packetl2w_enter_friend_room_result::has_playerid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void packetl2w_enter_friend_room_result::set_has_playerid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void packetl2w_enter_friend_room_result::clear_has_playerid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void packetl2w_enter_friend_room_result::clear_playerid() {
  playerid_ = 0u;
  clear_has_playerid();
}
inline ::google::protobuf::uint32 packetl2w_enter_friend_room_result::playerid() const {
  // @@protoc_insertion_point(field_get:logic2world_protocols.packetl2w_enter_friend_room_result.playerid)
  return playerid_;
}
inline void packetl2w_enter_friend_room_result::set_playerid(::google::protobuf::uint32 value) {
  set_has_playerid();
  playerid_ = value;
  // @@protoc_insertion_point(field_set:logic2world_protocols.packetl2w_enter_friend_room_result.playerid)
}

// optional int32 result = 3;
inline bool packetl2w_enter_friend_room_result::has_result() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void packetl2w_enter_friend_room_result::set_has_result() {
  _has_bits_[0] |= 0x00000004u;
}
inline void packetl2w_enter_friend_room_result::clear_has_result() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void packetl2w_enter_friend_room_result::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 packetl2w_enter_friend_room_result::result() const {
  // @@protoc_insertion_point(field_get:logic2world_protocols.packetl2w_enter_friend_room_result.result)
  return result_;
}
inline void packetl2w_enter_friend_room_result::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
  // @@protoc_insertion_point(field_set:logic2world_protocols.packetl2w_enter_friend_room_result.result)
}

// optional int32 gameId = 4;
inline bool packetl2w_enter_friend_room_result::has_gameid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void packetl2w_enter_friend_room_result::set_has_gameid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void packetl2w_enter_friend_room_result::clear_has_gameid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void packetl2w_enter_friend_room_result::clear_gameid() {
  gameid_ = 0;
  clear_has_gameid();
}
inline ::google::protobuf::int32 packetl2w_enter_friend_room_result::gameid() const {
  // @@protoc_insertion_point(field_get:logic2world_protocols.packetl2w_enter_friend_room_result.gameId)
  return gameid_;
}
inline void packetl2w_enter_friend_room_result::set_gameid(::google::protobuf::int32 value) {
  set_has_gameid();
  gameid_ = value;
  // @@protoc_insertion_point(field_set:logic2world_protocols.packetl2w_enter_friend_room_result.gameId)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace logic2world_protocols

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_logic2world_5ffriend_2eproto__INCLUDED