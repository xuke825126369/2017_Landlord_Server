// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client2world_shop.proto

#ifndef PROTOBUF_client2world_5fshop_2eproto__INCLUDED
#define PROTOBUF_client2world_5fshop_2eproto__INCLUDED

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
void  protobuf_AddDesc_client2world_5fshop_2eproto();
void protobuf_AssignDesc_client2world_5fshop_2eproto();
void protobuf_ShutdownFile_client2world_5fshop_2eproto();

class packetc2w_buy_commodity;
class packetw2c_buy_commodity_result;
class packetw2c_check_apple_order_form;
class packetw2c_open_first_gift;
class packetc2w_ask_recharge_history;
class packetw2c_recharge_history_result;

// ===================================================================

class packetc2w_buy_commodity : public ::google::protobuf::Message {
 public:
  packetc2w_buy_commodity();
  virtual ~packetc2w_buy_commodity();

  packetc2w_buy_commodity(const packetc2w_buy_commodity& from);

  inline packetc2w_buy_commodity& operator=(const packetc2w_buy_commodity& from) {
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
  static const packetc2w_buy_commodity& default_instance();

  void Swap(packetc2w_buy_commodity* other);

  // implements Message ----------------------------------------------

  packetc2w_buy_commodity* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetc2w_buy_commodity& from);
  void MergeFrom(const packetc2w_buy_commodity& from);
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

  // optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2w_buy_commodity];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::client2world_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::client2world_protocols::e_server_msg_type value);

  // optional int32 commodityId = 2;
  inline bool has_commodityid() const;
  inline void clear_commodityid();
  static const int kCommodityIdFieldNumber = 2;
  inline ::google::protobuf::int32 commodityid() const;
  inline void set_commodityid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:client2world_protocols.packetc2w_buy_commodity)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();
  inline void set_has_commodityid();
  inline void clear_has_commodityid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int packet_id_;
  ::google::protobuf::int32 commodityid_;
  friend void  protobuf_AddDesc_client2world_5fshop_2eproto();
  friend void protobuf_AssignDesc_client2world_5fshop_2eproto();
  friend void protobuf_ShutdownFile_client2world_5fshop_2eproto();

  void InitAsDefaultInstance();
  static packetc2w_buy_commodity* default_instance_;
};
// -------------------------------------------------------------------

class packetw2c_buy_commodity_result : public ::google::protobuf::Message {
 public:
  packetw2c_buy_commodity_result();
  virtual ~packetw2c_buy_commodity_result();

  packetw2c_buy_commodity_result(const packetw2c_buy_commodity_result& from);

  inline packetw2c_buy_commodity_result& operator=(const packetw2c_buy_commodity_result& from) {
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
  static const packetw2c_buy_commodity_result& default_instance();

  void Swap(packetw2c_buy_commodity_result* other);

  // implements Message ----------------------------------------------

  packetw2c_buy_commodity_result* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetw2c_buy_commodity_result& from);
  void MergeFrom(const packetw2c_buy_commodity_result& from);
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

  // optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2c_buy_commodity_result];
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

  // optional int32 commodityId = 3;
  inline bool has_commodityid() const;
  inline void clear_commodityid();
  static const int kCommodityIdFieldNumber = 3;
  inline ::google::protobuf::int32 commodityid() const;
  inline void set_commodityid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:client2world_protocols.packetw2c_buy_commodity_result)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_commodityid();
  inline void clear_has_commodityid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int packet_id_;
  ::google::protobuf::int32 result_;
  ::google::protobuf::int32 commodityid_;
  friend void  protobuf_AddDesc_client2world_5fshop_2eproto();
  friend void protobuf_AssignDesc_client2world_5fshop_2eproto();
  friend void protobuf_ShutdownFile_client2world_5fshop_2eproto();

  void InitAsDefaultInstance();
  static packetw2c_buy_commodity_result* default_instance_;
};
// -------------------------------------------------------------------

class packetw2c_check_apple_order_form : public ::google::protobuf::Message {
 public:
  packetw2c_check_apple_order_form();
  virtual ~packetw2c_check_apple_order_form();

  packetw2c_check_apple_order_form(const packetw2c_check_apple_order_form& from);

  inline packetw2c_check_apple_order_form& operator=(const packetw2c_check_apple_order_form& from) {
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
  static const packetw2c_check_apple_order_form& default_instance();

  void Swap(packetw2c_check_apple_order_form* other);

  // implements Message ----------------------------------------------

  packetw2c_check_apple_order_form* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetw2c_check_apple_order_form& from);
  void MergeFrom(const packetw2c_check_apple_order_form& from);
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

  // optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2w_check_apple_order_form];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::client2world_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::client2world_protocols::e_server_msg_type value);

  // optional string apple = 2;
  inline bool has_apple() const;
  inline void clear_apple();
  static const int kAppleFieldNumber = 2;
  inline const ::std::string& apple() const;
  inline void set_apple(const ::std::string& value);
  inline void set_apple(const char* value);
  inline void set_apple(const char* value, size_t size);
  inline ::std::string* mutable_apple();
  inline ::std::string* release_apple();
  inline void set_allocated_apple(::std::string* apple);

  // @@protoc_insertion_point(class_scope:client2world_protocols.packetw2c_check_apple_order_form)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();
  inline void set_has_apple();
  inline void clear_has_apple();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* apple_;
  int packet_id_;
  friend void  protobuf_AddDesc_client2world_5fshop_2eproto();
  friend void protobuf_AssignDesc_client2world_5fshop_2eproto();
  friend void protobuf_ShutdownFile_client2world_5fshop_2eproto();

  void InitAsDefaultInstance();
  static packetw2c_check_apple_order_form* default_instance_;
};
// -------------------------------------------------------------------

class packetw2c_open_first_gift : public ::google::protobuf::Message {
 public:
  packetw2c_open_first_gift();
  virtual ~packetw2c_open_first_gift();

  packetw2c_open_first_gift(const packetw2c_open_first_gift& from);

  inline packetw2c_open_first_gift& operator=(const packetw2c_open_first_gift& from) {
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
  static const packetw2c_open_first_gift& default_instance();

  void Swap(packetw2c_open_first_gift* other);

  // implements Message ----------------------------------------------

  packetw2c_open_first_gift* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetw2c_open_first_gift& from);
  void MergeFrom(const packetw2c_open_first_gift& from);
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

  // optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2c_open_first_gift];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::client2world_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::client2world_protocols::e_server_msg_type value);

  // @@protoc_insertion_point(class_scope:client2world_protocols.packetw2c_open_first_gift)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int packet_id_;
  friend void  protobuf_AddDesc_client2world_5fshop_2eproto();
  friend void protobuf_AssignDesc_client2world_5fshop_2eproto();
  friend void protobuf_ShutdownFile_client2world_5fshop_2eproto();

  void InitAsDefaultInstance();
  static packetw2c_open_first_gift* default_instance_;
};
// -------------------------------------------------------------------

class packetc2w_ask_recharge_history : public ::google::protobuf::Message {
 public:
  packetc2w_ask_recharge_history();
  virtual ~packetc2w_ask_recharge_history();

  packetc2w_ask_recharge_history(const packetc2w_ask_recharge_history& from);

  inline packetc2w_ask_recharge_history& operator=(const packetc2w_ask_recharge_history& from) {
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
  static const packetc2w_ask_recharge_history& default_instance();

  void Swap(packetc2w_ask_recharge_history* other);

  // implements Message ----------------------------------------------

  packetc2w_ask_recharge_history* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetc2w_ask_recharge_history& from);
  void MergeFrom(const packetc2w_ask_recharge_history& from);
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

  // optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2w_ask_recharge_history];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::client2world_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::client2world_protocols::e_server_msg_type value);

  // @@protoc_insertion_point(class_scope:client2world_protocols.packetc2w_ask_recharge_history)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int packet_id_;
  friend void  protobuf_AddDesc_client2world_5fshop_2eproto();
  friend void protobuf_AssignDesc_client2world_5fshop_2eproto();
  friend void protobuf_ShutdownFile_client2world_5fshop_2eproto();

  void InitAsDefaultInstance();
  static packetc2w_ask_recharge_history* default_instance_;
};
// -------------------------------------------------------------------

class packetw2c_recharge_history_result : public ::google::protobuf::Message {
 public:
  packetw2c_recharge_history_result();
  virtual ~packetw2c_recharge_history_result();

  packetw2c_recharge_history_result(const packetw2c_recharge_history_result& from);

  inline packetw2c_recharge_history_result& operator=(const packetw2c_recharge_history_result& from) {
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
  static const packetw2c_recharge_history_result& default_instance();

  void Swap(packetw2c_recharge_history_result* other);

  // implements Message ----------------------------------------------

  packetw2c_recharge_history_result* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetw2c_recharge_history_result& from);
  void MergeFrom(const packetw2c_recharge_history_result& from);
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

  // optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2c_recharge_history_result];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::client2world_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::client2world_protocols::e_server_msg_type value);

  // repeated string history_infos = 2;
  inline int history_infos_size() const;
  inline void clear_history_infos();
  static const int kHistoryInfosFieldNumber = 2;
  inline const ::std::string& history_infos(int index) const;
  inline ::std::string* mutable_history_infos(int index);
  inline void set_history_infos(int index, const ::std::string& value);
  inline void set_history_infos(int index, const char* value);
  inline void set_history_infos(int index, const char* value, size_t size);
  inline ::std::string* add_history_infos();
  inline void add_history_infos(const ::std::string& value);
  inline void add_history_infos(const char* value);
  inline void add_history_infos(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& history_infos() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_history_infos();

  // @@protoc_insertion_point(class_scope:client2world_protocols.packetw2c_recharge_history_result)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> history_infos_;
  int packet_id_;
  friend void  protobuf_AddDesc_client2world_5fshop_2eproto();
  friend void protobuf_AssignDesc_client2world_5fshop_2eproto();
  friend void protobuf_ShutdownFile_client2world_5fshop_2eproto();

  void InitAsDefaultInstance();
  static packetw2c_recharge_history_result* default_instance_;
};
// ===================================================================


// ===================================================================

// packetc2w_buy_commodity

// optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2w_buy_commodity];
inline bool packetc2w_buy_commodity::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetc2w_buy_commodity::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetc2w_buy_commodity::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetc2w_buy_commodity::clear_packet_id() {
  packet_id_ = 5023;
  clear_has_packet_id();
}
inline ::client2world_protocols::e_server_msg_type packetc2w_buy_commodity::packet_id() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetc2w_buy_commodity.packet_id)
  return static_cast< ::client2world_protocols::e_server_msg_type >(packet_id_);
}
inline void packetc2w_buy_commodity::set_packet_id(::client2world_protocols::e_server_msg_type value) {
  assert(::client2world_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetc2w_buy_commodity.packet_id)
}

// optional int32 commodityId = 2;
inline bool packetc2w_buy_commodity::has_commodityid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void packetc2w_buy_commodity::set_has_commodityid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void packetc2w_buy_commodity::clear_has_commodityid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void packetc2w_buy_commodity::clear_commodityid() {
  commodityid_ = 0;
  clear_has_commodityid();
}
inline ::google::protobuf::int32 packetc2w_buy_commodity::commodityid() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetc2w_buy_commodity.commodityId)
  return commodityid_;
}
inline void packetc2w_buy_commodity::set_commodityid(::google::protobuf::int32 value) {
  set_has_commodityid();
  commodityid_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetc2w_buy_commodity.commodityId)
}

// -------------------------------------------------------------------

// packetw2c_buy_commodity_result

// optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2c_buy_commodity_result];
inline bool packetw2c_buy_commodity_result::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetw2c_buy_commodity_result::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetw2c_buy_commodity_result::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetw2c_buy_commodity_result::clear_packet_id() {
  packet_id_ = 7525;
  clear_has_packet_id();
}
inline ::client2world_protocols::e_server_msg_type packetw2c_buy_commodity_result::packet_id() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_buy_commodity_result.packet_id)
  return static_cast< ::client2world_protocols::e_server_msg_type >(packet_id_);
}
inline void packetw2c_buy_commodity_result::set_packet_id(::client2world_protocols::e_server_msg_type value) {
  assert(::client2world_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_buy_commodity_result.packet_id)
}

// optional int32 result = 2;
inline bool packetw2c_buy_commodity_result::has_result() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void packetw2c_buy_commodity_result::set_has_result() {
  _has_bits_[0] |= 0x00000002u;
}
inline void packetw2c_buy_commodity_result::clear_has_result() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void packetw2c_buy_commodity_result::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 packetw2c_buy_commodity_result::result() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_buy_commodity_result.result)
  return result_;
}
inline void packetw2c_buy_commodity_result::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_buy_commodity_result.result)
}

// optional int32 commodityId = 3;
inline bool packetw2c_buy_commodity_result::has_commodityid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void packetw2c_buy_commodity_result::set_has_commodityid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void packetw2c_buy_commodity_result::clear_has_commodityid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void packetw2c_buy_commodity_result::clear_commodityid() {
  commodityid_ = 0;
  clear_has_commodityid();
}
inline ::google::protobuf::int32 packetw2c_buy_commodity_result::commodityid() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_buy_commodity_result.commodityId)
  return commodityid_;
}
inline void packetw2c_buy_commodity_result::set_commodityid(::google::protobuf::int32 value) {
  set_has_commodityid();
  commodityid_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_buy_commodity_result.commodityId)
}

// -------------------------------------------------------------------

// packetw2c_check_apple_order_form

// optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2w_check_apple_order_form];
inline bool packetw2c_check_apple_order_form::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetw2c_check_apple_order_form::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetw2c_check_apple_order_form::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetw2c_check_apple_order_form::clear_packet_id() {
  packet_id_ = 5050;
  clear_has_packet_id();
}
inline ::client2world_protocols::e_server_msg_type packetw2c_check_apple_order_form::packet_id() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_check_apple_order_form.packet_id)
  return static_cast< ::client2world_protocols::e_server_msg_type >(packet_id_);
}
inline void packetw2c_check_apple_order_form::set_packet_id(::client2world_protocols::e_server_msg_type value) {
  assert(::client2world_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_check_apple_order_form.packet_id)
}

// optional string apple = 2;
inline bool packetw2c_check_apple_order_form::has_apple() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void packetw2c_check_apple_order_form::set_has_apple() {
  _has_bits_[0] |= 0x00000002u;
}
inline void packetw2c_check_apple_order_form::clear_has_apple() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void packetw2c_check_apple_order_form::clear_apple() {
  if (apple_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    apple_->clear();
  }
  clear_has_apple();
}
inline const ::std::string& packetw2c_check_apple_order_form::apple() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_check_apple_order_form.apple)
  return *apple_;
}
inline void packetw2c_check_apple_order_form::set_apple(const ::std::string& value) {
  set_has_apple();
  if (apple_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    apple_ = new ::std::string;
  }
  apple_->assign(value);
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_check_apple_order_form.apple)
}
inline void packetw2c_check_apple_order_form::set_apple(const char* value) {
  set_has_apple();
  if (apple_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    apple_ = new ::std::string;
  }
  apple_->assign(value);
  // @@protoc_insertion_point(field_set_char:client2world_protocols.packetw2c_check_apple_order_form.apple)
}
inline void packetw2c_check_apple_order_form::set_apple(const char* value, size_t size) {
  set_has_apple();
  if (apple_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    apple_ = new ::std::string;
  }
  apple_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:client2world_protocols.packetw2c_check_apple_order_form.apple)
}
inline ::std::string* packetw2c_check_apple_order_form::mutable_apple() {
  set_has_apple();
  if (apple_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    apple_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:client2world_protocols.packetw2c_check_apple_order_form.apple)
  return apple_;
}
inline ::std::string* packetw2c_check_apple_order_form::release_apple() {
  clear_has_apple();
  if (apple_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = apple_;
    apple_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void packetw2c_check_apple_order_form::set_allocated_apple(::std::string* apple) {
  if (apple_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete apple_;
  }
  if (apple) {
    set_has_apple();
    apple_ = apple;
  } else {
    clear_has_apple();
    apple_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:client2world_protocols.packetw2c_check_apple_order_form.apple)
}

// -------------------------------------------------------------------

// packetw2c_open_first_gift

// optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2c_open_first_gift];
inline bool packetw2c_open_first_gift::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetw2c_open_first_gift::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetw2c_open_first_gift::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetw2c_open_first_gift::clear_packet_id() {
  packet_id_ = 7570;
  clear_has_packet_id();
}
inline ::client2world_protocols::e_server_msg_type packetw2c_open_first_gift::packet_id() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_open_first_gift.packet_id)
  return static_cast< ::client2world_protocols::e_server_msg_type >(packet_id_);
}
inline void packetw2c_open_first_gift::set_packet_id(::client2world_protocols::e_server_msg_type value) {
  assert(::client2world_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_open_first_gift.packet_id)
}

// -------------------------------------------------------------------

// packetc2w_ask_recharge_history

// optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2w_ask_recharge_history];
inline bool packetc2w_ask_recharge_history::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetc2w_ask_recharge_history::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetc2w_ask_recharge_history::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetc2w_ask_recharge_history::clear_packet_id() {
  packet_id_ = 5065;
  clear_has_packet_id();
}
inline ::client2world_protocols::e_server_msg_type packetc2w_ask_recharge_history::packet_id() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetc2w_ask_recharge_history.packet_id)
  return static_cast< ::client2world_protocols::e_server_msg_type >(packet_id_);
}
inline void packetc2w_ask_recharge_history::set_packet_id(::client2world_protocols::e_server_msg_type value) {
  assert(::client2world_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetc2w_ask_recharge_history.packet_id)
}

// -------------------------------------------------------------------

// packetw2c_recharge_history_result

// optional .client2world_protocols.e_server_msg_type packet_id = 1 [default = e_mst_w2c_recharge_history_result];
inline bool packetw2c_recharge_history_result::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetw2c_recharge_history_result::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetw2c_recharge_history_result::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetw2c_recharge_history_result::clear_packet_id() {
  packet_id_ = 7571;
  clear_has_packet_id();
}
inline ::client2world_protocols::e_server_msg_type packetw2c_recharge_history_result::packet_id() const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_recharge_history_result.packet_id)
  return static_cast< ::client2world_protocols::e_server_msg_type >(packet_id_);
}
inline void packetw2c_recharge_history_result::set_packet_id(::client2world_protocols::e_server_msg_type value) {
  assert(::client2world_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_recharge_history_result.packet_id)
}

// repeated string history_infos = 2;
inline int packetw2c_recharge_history_result::history_infos_size() const {
  return history_infos_.size();
}
inline void packetw2c_recharge_history_result::clear_history_infos() {
  history_infos_.Clear();
}
inline const ::std::string& packetw2c_recharge_history_result::history_infos(int index) const {
  // @@protoc_insertion_point(field_get:client2world_protocols.packetw2c_recharge_history_result.history_infos)
  return history_infos_.Get(index);
}
inline ::std::string* packetw2c_recharge_history_result::mutable_history_infos(int index) {
  // @@protoc_insertion_point(field_mutable:client2world_protocols.packetw2c_recharge_history_result.history_infos)
  return history_infos_.Mutable(index);
}
inline void packetw2c_recharge_history_result::set_history_infos(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:client2world_protocols.packetw2c_recharge_history_result.history_infos)
  history_infos_.Mutable(index)->assign(value);
}
inline void packetw2c_recharge_history_result::set_history_infos(int index, const char* value) {
  history_infos_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:client2world_protocols.packetw2c_recharge_history_result.history_infos)
}
inline void packetw2c_recharge_history_result::set_history_infos(int index, const char* value, size_t size) {
  history_infos_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:client2world_protocols.packetw2c_recharge_history_result.history_infos)
}
inline ::std::string* packetw2c_recharge_history_result::add_history_infos() {
  return history_infos_.Add();
}
inline void packetw2c_recharge_history_result::add_history_infos(const ::std::string& value) {
  history_infos_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:client2world_protocols.packetw2c_recharge_history_result.history_infos)
}
inline void packetw2c_recharge_history_result::add_history_infos(const char* value) {
  history_infos_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:client2world_protocols.packetw2c_recharge_history_result.history_infos)
}
inline void packetw2c_recharge_history_result::add_history_infos(const char* value, size_t size) {
  history_infos_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:client2world_protocols.packetw2c_recharge_history_result.history_infos)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
packetw2c_recharge_history_result::history_infos() const {
  // @@protoc_insertion_point(field_list:client2world_protocols.packetw2c_recharge_history_result.history_infos)
  return history_infos_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
packetw2c_recharge_history_result::mutable_history_infos() {
  // @@protoc_insertion_point(field_mutable_list:client2world_protocols.packetw2c_recharge_history_result.history_infos)
  return &history_infos_;
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

#endif  // PROTOBUF_client2world_5fshop_2eproto__INCLUDED