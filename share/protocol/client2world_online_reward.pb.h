// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client2world_online_reward.proto

#ifndef PROTOBUF_client2world_5fonline_5freward_2eproto__INCLUDED
#define PROTOBUF_client2world_5fonline_5freward_2eproto__INCLUDED

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
#include "client2world_msg_type.pb.h"
#include "msg_type_def.pb.h"
#include "msg_info_def.pb.h"
// @@protoc_insertion_point(includes)

namespace client2world_protocols {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_client2world_5fonline_5freward_2eproto();
void protobuf_AssignDesc_client2world_5fonline_5freward_2eproto();
void protobuf_ShutdownFile_client2world_5fonline_5freward_2eproto();

class packetc2w_receive_online_reward;
class packetw2c_receive_online_reward_result;
class packetc2w_receive_recharge_reward;
class packetw2c_receive_recharge_reward_result;
class packetc2w_req_online_reward_info;
class packetw2c_req_online_reward_info_result;

// ===================================================================

class packetc2w_receive_online_reward : public ::google::protobuf::Message {
 public:
  packetc2w_receive_online_reward();
  virtual ~packetc2w_receive_online_reward();

  packetc2w_receive_online_reward(const packetc2w_receive_online_reward& from);

  inline packetc2w_receive_online_reward& operator=(const packetc2w_receive_online_reward& from) {
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
  static const packetc2w_receive_online_reward& default_instance();

  void Swap(packetc2w_receive_online_reward* other);

  // implements Message ----------------------------------------------

  packetc2w_receive_online_reward* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetc2w_receive_online_reward& from);
  void MergeFrom(const packetc2w_receive_online_reward& from);
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

  // optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2w_receive_online_reward];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::client2world_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::client2world_protocols::e_server_msg_type value);

  // @@protoc_insertion_point(class_scope:client2world_protocols.packetc2w_receive_online_reward)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int packet_id_;
  friend void  protobuf_AddDesc_client2world_5fonline_5freward_2eproto();
  friend void protobuf_AssignDesc_client2world_5fonline_5freward_2eproto();
  friend void protobuf_ShutdownFile_client2world_5fonline_5freward_2eproto();

  void InitAsDefaultInstance();
  static packetc2w_receive_online_reward* default_instance_;
};
// -------------------------------------------------------------------

class packetw2c_receive_online_reward_result : public ::google::protobuf::Message {
 public:
  packetw2c_receive_online_reward_result();
  virtual ~packetw2c_receive_online_reward_result();

  packetw2c_receive_online_reward_result(const packetw2c_receive_online_reward_result& from);

  inline packetw2c_receive_online_reward_result& operator=(const packetw2c_receive_online_reward_result& from) {
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
  static const packetw2c_receive_online_reward_result& default_instance();

  void Swap(packetw2c_receive_online_reward_result* other);

  // implements Message ----------------------------------------------

  packetw2c_receive_online_reward_result* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetw2c_receive_online_reward_result& from);
  void MergeFrom(const packetw2c_receive_online_reward_result& from);
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

  // optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2c_receive_online_reward_result];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::client2world_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::client2world_protocols::e_server_msg_type value);

  // optional int32 result = 2;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 2;
  inline ::google::protobuf::int32 result() const;
  inline void set_result(::google::protobuf::int32 value);

  // optional int32 remainTime = 3;
  inline bool has_remaintime() const;
  inline void clear_remaintime();
  static const int kRemainTimeFieldNumber = 3;
  inline ::google::protobuf::int32 remaintime() const;
  inline void set_remaintime(::google::protobuf::int32 value);

  // optional int32 rewardId = 4;
  inline bool has_rewardid() const;
  inline void clear_rewardid();
  static const int kRewardIdFieldNumber = 4;
  inline ::google::protobuf::int32 rewardid() const;
  inline void set_rewardid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:client2world_protocols.packetw2c_receive_online_reward_result)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_remaintime();
  inline void clear_has_remaintime();
  inline void set_has_rewardid();
  inline void clear_has_rewardid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int packet_id_;
  ::google::protobuf::int32 result_;
  ::google::protobuf::int32 remaintime_;
  ::google::protobuf::int32 rewardid_;
  friend void  protobuf_AddDesc_client2world_5fonline_5freward_2eproto();
  friend void protobuf_AssignDesc_client2world_5fonline_5freward_2eproto();
  friend void protobuf_ShutdownFile_client2world_5fonline_5freward_2eproto();

  void InitAsDefaultInstance();
  static packetw2c_receive_online_reward_result* default_instance_;
};
// -------------------------------------------------------------------

class packetc2w_receive_recharge_reward : public ::google::protobuf::Message {
 public:
  packetc2w_receive_recharge_reward();
  virtual ~packetc2w_receive_recharge_reward();

  packetc2w_receive_recharge_reward(const packetc2w_receive_recharge_reward& from);

  inline packetc2w_receive_recharge_reward& operator=(const packetc2w_receive_recharge_reward& from) {
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
  static const packetc2w_receive_recharge_reward& default_instance();

  void Swap(packetc2w_receive_recharge_reward* other);

  // implements Message ----------------------------------------------

  packetc2w_receive_recharge_reward* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetc2w_receive_recharge_reward& from);
  void MergeFrom(const packetc2w_receive_recharge_reward& from);
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

  // optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2w_receive_recharge_reward];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::client2world_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::client2world_protocols::e_server_msg_type value);

  // @@protoc_insertion_point(class_scope:client2world_protocols.packetc2w_receive_recharge_reward)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int packet_id_;
  friend void  protobuf_AddDesc_client2world_5fonline_5freward_2eproto();
  friend void protobuf_AssignDesc_client2world_5fonline_5freward_2eproto();
  friend void protobuf_ShutdownFile_client2world_5fonline_5freward_2eproto();

  void InitAsDefaultInstance();
  static packetc2w_receive_recharge_reward* default_instance_;
};
// -------------------------------------------------------------------

class packetw2c_receive_recharge_reward_result : public ::google::protobuf::Message {
 public:
  packetw2c_receive_recharge_reward_result();
  virtual ~packetw2c_receive_recharge_reward_result();

  packetw2c_receive_recharge_reward_result(const packetw2c_receive_recharge_reward_result& from);

  inline packetw2c_receive_recharge_reward_result& operator=(const packetw2c_receive_recharge_reward_result& from) {
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
  static const packetw2c_receive_recharge_reward_result& default_instance();

  void Swap(packetw2c_receive_recharge_reward_result* other);

  // implements Message ----------------------------------------------

  packetw2c_receive_recharge_reward_result* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetw2c_receive_recharge_reward_result& from);
  void MergeFrom(const packetw2c_receive_recharge_reward_result& from);
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

  // optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2c_receive_recharge_reward_result];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::client2world_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::client2world_protocols::e_server_msg_type value);

  // optional int32 result = 2;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 2;
  inline ::google::protobuf::int32 result() const;
  inline void set_result(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:client2world_protocols.packetw2c_receive_recharge_reward_result)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();
  inline void set_has_result();
  inline void clear_has_result();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int packet_id_;
  ::google::protobuf::int32 result_;
  friend void  protobuf_AddDesc_client2world_5fonline_5freward_2eproto();
  friend void protobuf_AssignDesc_client2world_5fonline_5freward_2eproto();
  friend void protobuf_ShutdownFile_client2world_5fonline_5freward_2eproto();

  void InitAsDefaultInstance();
  static packetw2c_receive_recharge_reward_result* default_instance_;
};
// -------------------------------------------------------------------

class packetc2w_req_online_reward_info : public ::google::protobuf::Message {
 public:
  packetc2w_req_online_reward_info();
  virtual ~packetc2w_req_online_reward_info();

  packetc2w_req_online_reward_info(const packetc2w_req_online_reward_info& from);

  inline packetc2w_req_online_reward_info& operator=(const packetc2w_req_online_reward_info& from) {
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
  static const packetc2w_req_online_reward_info& default_instance();

  void Swap(packetc2w_req_online_reward_info* other);

  // implements Message ----------------------------------------------

  packetc2w_req_online_reward_info* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetc2w_req_online_reward_info& from);
  void MergeFrom(const packetc2w_req_online_reward_info& from);
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

  // optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2w_req_online_reward_info];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::client2world_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::client2world_protocols::e_server_msg_type value);

  // @@protoc_insertion_point(class_scope:client2world_protocols.packetc2w_req_online_reward_info)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int packet_id_;
  friend void  protobuf_AddDesc_client2world_5fonline_5freward_2eproto();
  friend void protobuf_AssignDesc_client2world_5fonline_5freward_2eproto();
  friend void protobuf_ShutdownFile_client2world_5fonline_5freward_2eproto();

  void InitAsDefaultInstance();
  static packetc2w_req_online_reward_info* default_instance_;
};
// -------------------------------------------------------------------

class packetw2c_req_online_reward_info_result : public ::google::protobuf::Message {
 public:
  packetw2c_req_online_reward_info_result();
  virtual ~packetw2c_req_online_reward_info_result();

  packetw2c_req_online_reward_info_result(const packetw2c_req_online_reward_info_result& from);

  inline packetw2c_req_online_reward_info_result& operator=(const packetw2c_req_online_reward_info_result& from) {
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
  static const packetw2c_req_online_reward_info_result& default_instance();

  void Swap(packetw2c_req_online_reward_info_result* other);

  // implements Message ----------------------------------------------

  packetw2c_req_online_reward_info_result* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetw2c_req_online_reward_info_result& from);
  void MergeFrom(const packetw2c_req_online_reward_info_result& from);
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

  // optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2c_req_online_reward_info_result];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::client2world_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::client2world_protocols::e_server_msg_type value);

  // repeated int32 recvIdList = 2;
  inline int recvidlist_size() const;
  inline void clear_recvidlist();
  static const int kRecvIdListFieldNumber = 2;
  inline ::google::protobuf::int32 recvidlist(int index) const;
  inline void set_recvidlist(int index, ::google::protobuf::int32 value);
  inline void add_recvidlist(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      recvidlist() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_recvidlist();

  // @@protoc_insertion_point(class_scope:client2world_protocols.packetw2c_req_online_reward_info_result)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > recvidlist_;
  int packet_id_;
  friend void  protobuf_AddDesc_client2world_5fonline_5freward_2eproto();
  friend void protobuf_AssignDesc_client2world_5fonline_5freward_2eproto();
  friend void protobuf_ShutdownFile_client2world_5fonline_5freward_2eproto();

  void InitAsDefaultInstance();
  static packetw2c_req_online_reward_info_result* default_instance_;
};
// ===================================================================


// ===================================================================

// packetc2w_receive_online_reward

// optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2w_receive_online_reward];
inline bool packetc2w_receive_online_reward::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetc2w_receive_online_reward::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetc2w_receive_online_reward::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetc2w_receive_online_reward::clear_packet_id() {
  packet_id_ = 5028;
  clear_has_packet_id();
}
inline ::client2world_protocols::e_server_msg_type packetc2w_receive_online_reward::packet_id() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetc2w_receive_online_reward.packet_id)
  return static_cast< ::client2world_protocols::e_server_msg_type >(packet_id_);
}
inline void packetc2w_receive_online_reward::set_packet_id(::client2world_protocols::e_server_msg_type value) {
  assert(::client2world_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetc2w_receive_online_reward.packet_id)
}

// -------------------------------------------------------------------

// packetw2c_receive_online_reward_result

// optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2c_receive_online_reward_result];
inline bool packetw2c_receive_online_reward_result::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetw2c_receive_online_reward_result::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetw2c_receive_online_reward_result::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetw2c_receive_online_reward_result::clear_packet_id() {
  packet_id_ = 7530;
  clear_has_packet_id();
}
inline ::client2world_protocols::e_server_msg_type packetw2c_receive_online_reward_result::packet_id() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_receive_online_reward_result.packet_id)
  return static_cast< ::client2world_protocols::e_server_msg_type >(packet_id_);
}
inline void packetw2c_receive_online_reward_result::set_packet_id(::client2world_protocols::e_server_msg_type value) {
  assert(::client2world_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_receive_online_reward_result.packet_id)
}

// optional int32 result = 2;
inline bool packetw2c_receive_online_reward_result::has_result() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void packetw2c_receive_online_reward_result::set_has_result() {
  _has_bits_[0] |= 0x00000002u;
}
inline void packetw2c_receive_online_reward_result::clear_has_result() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void packetw2c_receive_online_reward_result::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 packetw2c_receive_online_reward_result::result() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_receive_online_reward_result.result)
  return result_;
}
inline void packetw2c_receive_online_reward_result::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_receive_online_reward_result.result)
}

// optional int32 remainTime = 3;
inline bool packetw2c_receive_online_reward_result::has_remaintime() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void packetw2c_receive_online_reward_result::set_has_remaintime() {
  _has_bits_[0] |= 0x00000004u;
}
inline void packetw2c_receive_online_reward_result::clear_has_remaintime() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void packetw2c_receive_online_reward_result::clear_remaintime() {
  remaintime_ = 0;
  clear_has_remaintime();
}
inline ::google::protobuf::int32 packetw2c_receive_online_reward_result::remaintime() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_receive_online_reward_result.remainTime)
  return remaintime_;
}
inline void packetw2c_receive_online_reward_result::set_remaintime(::google::protobuf::int32 value) {
  set_has_remaintime();
  remaintime_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_receive_online_reward_result.remainTime)
}

// optional int32 rewardId = 4;
inline bool packetw2c_receive_online_reward_result::has_rewardid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void packetw2c_receive_online_reward_result::set_has_rewardid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void packetw2c_receive_online_reward_result::clear_has_rewardid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void packetw2c_receive_online_reward_result::clear_rewardid() {
  rewardid_ = 0;
  clear_has_rewardid();
}
inline ::google::protobuf::int32 packetw2c_receive_online_reward_result::rewardid() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_receive_online_reward_result.rewardId)
  return rewardid_;
}
inline void packetw2c_receive_online_reward_result::set_rewardid(::google::protobuf::int32 value) {
  set_has_rewardid();
  rewardid_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_receive_online_reward_result.rewardId)
}

// -------------------------------------------------------------------

// packetc2w_receive_recharge_reward

// optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2w_receive_recharge_reward];
inline bool packetc2w_receive_recharge_reward::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetc2w_receive_recharge_reward::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetc2w_receive_recharge_reward::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetc2w_receive_recharge_reward::clear_packet_id() {
  packet_id_ = 5049;
  clear_has_packet_id();
}
inline ::client2world_protocols::e_server_msg_type packetc2w_receive_recharge_reward::packet_id() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetc2w_receive_recharge_reward.packet_id)
  return static_cast< ::client2world_protocols::e_server_msg_type >(packet_id_);
}
inline void packetc2w_receive_recharge_reward::set_packet_id(::client2world_protocols::e_server_msg_type value) {
  assert(::client2world_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetc2w_receive_recharge_reward.packet_id)
}

// -------------------------------------------------------------------

// packetw2c_receive_recharge_reward_result

// optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2c_receive_recharge_reward_result];
inline bool packetw2c_receive_recharge_reward_result::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetw2c_receive_recharge_reward_result::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetw2c_receive_recharge_reward_result::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetw2c_receive_recharge_reward_result::clear_packet_id() {
  packet_id_ = 7553;
  clear_has_packet_id();
}
inline ::client2world_protocols::e_server_msg_type packetw2c_receive_recharge_reward_result::packet_id() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_receive_recharge_reward_result.packet_id)
  return static_cast< ::client2world_protocols::e_server_msg_type >(packet_id_);
}
inline void packetw2c_receive_recharge_reward_result::set_packet_id(::client2world_protocols::e_server_msg_type value) {
  assert(::client2world_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_receive_recharge_reward_result.packet_id)
}

// optional int32 result = 2;
inline bool packetw2c_receive_recharge_reward_result::has_result() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void packetw2c_receive_recharge_reward_result::set_has_result() {
  _has_bits_[0] |= 0x00000002u;
}
inline void packetw2c_receive_recharge_reward_result::clear_has_result() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void packetw2c_receive_recharge_reward_result::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 packetw2c_receive_recharge_reward_result::result() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_receive_recharge_reward_result.result)
  return result_;
}
inline void packetw2c_receive_recharge_reward_result::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_receive_recharge_reward_result.result)
}

// -------------------------------------------------------------------

// packetc2w_req_online_reward_info

// optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2w_req_online_reward_info];
inline bool packetc2w_req_online_reward_info::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetc2w_req_online_reward_info::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetc2w_req_online_reward_info::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetc2w_req_online_reward_info::clear_packet_id() {
  packet_id_ = 5057;
  clear_has_packet_id();
}
inline ::client2world_protocols::e_server_msg_type packetc2w_req_online_reward_info::packet_id() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetc2w_req_online_reward_info.packet_id)
  return static_cast< ::client2world_protocols::e_server_msg_type >(packet_id_);
}
inline void packetc2w_req_online_reward_info::set_packet_id(::client2world_protocols::e_server_msg_type value) {
  assert(::client2world_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetc2w_req_online_reward_info.packet_id)
}

// -------------------------------------------------------------------

// packetw2c_req_online_reward_info_result

// optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2c_req_online_reward_info_result];
inline bool packetw2c_req_online_reward_info_result::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetw2c_req_online_reward_info_result::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetw2c_req_online_reward_info_result::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetw2c_req_online_reward_info_result::clear_packet_id() {
  packet_id_ = 7560;
  clear_has_packet_id();
}
inline ::client2world_protocols::e_server_msg_type packetw2c_req_online_reward_info_result::packet_id() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_req_online_reward_info_result.packet_id)
  return static_cast< ::client2world_protocols::e_server_msg_type >(packet_id_);
}
inline void packetw2c_req_online_reward_info_result::set_packet_id(::client2world_protocols::e_server_msg_type value) {
  assert(::client2world_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_req_online_reward_info_result.packet_id)
}

// repeated int32 recvIdList = 2;
inline int packetw2c_req_online_reward_info_result::recvidlist_size() const {
  return recvidlist_.size();
}
inline void packetw2c_req_online_reward_info_result::clear_recvidlist() {
  recvidlist_.Clear();
}
inline ::google::protobuf::int32 packetw2c_req_online_reward_info_result::recvidlist(int index) const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_req_online_reward_info_result.recvIdList)
  return recvidlist_.Get(index);
}
inline void packetw2c_req_online_reward_info_result::set_recvidlist(int index, ::google::protobuf::int32 value) {
  recvidlist_.Set(index, value);
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_req_online_reward_info_result.recvIdList)
}
inline void packetw2c_req_online_reward_info_result::add_recvidlist(::google::protobuf::int32 value) {
  recvidlist_.Add(value);
  // @@protoc_insertion_point(field_add:client2world_protocols.packetw2c_req_online_reward_info_result.recvIdList)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
packetw2c_req_online_reward_info_result::recvidlist() const {
  // @@protoc_insertion_point(field_list:client2world_protocols.packetw2c_req_online_reward_info_result.recvIdList)
  return recvidlist_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
packetw2c_req_online_reward_info_result::mutable_recvidlist() {
  // @@protoc_insertion_point(field_mutable_list:client2world_protocols.packetw2c_req_online_reward_info_result.recvIdList)
  return &recvidlist_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace client2world_protocols

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_client2world_5fonline_5freward_2eproto__INCLUDED
