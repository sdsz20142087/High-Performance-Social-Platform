// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: relation_info_base.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "relation_info_base.pb.h"

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

namespace ssp {

namespace {

const ::google::protobuf::Descriptor* RelationInfoBase_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RelationInfoBase_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_relation_5finfo_5fbase_2eproto() {
  protobuf_AddDesc_relation_5finfo_5fbase_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "relation_info_base.proto");
  GOOGLE_CHECK(file != NULL);
  RelationInfoBase_descriptor_ = file->message_type(0);
  static const int RelationInfoBase_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RelationInfoBase, ver_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RelationInfoBase, user_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RelationInfoBase, friend_user_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RelationInfoBase, black_user_id_),
  };
  RelationInfoBase_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RelationInfoBase_descriptor_,
      RelationInfoBase::default_instance_,
      RelationInfoBase_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RelationInfoBase, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RelationInfoBase, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RelationInfoBase));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_relation_5finfo_5fbase_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RelationInfoBase_descriptor_, &RelationInfoBase::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_relation_5finfo_5fbase_2eproto() {
  delete RelationInfoBase::default_instance_;
  delete RelationInfoBase_reflection_;
}

void protobuf_AddDesc_relation_5finfo_5fbase_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030relation_info_base.proto\022\003ssp\"_\n\020Relat"
    "ionInfoBase\022\013\n\003ver\030\001 \001(\005\022\017\n\007user_id\030\002 \001("
    "\005\022\026\n\016friend_user_id\030\003 \003(\005\022\025\n\rblack_user_"
    "id\030\004 \003(\005", 128);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "relation_info_base.proto", &protobuf_RegisterTypes);
  RelationInfoBase::default_instance_ = new RelationInfoBase();
  RelationInfoBase::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_relation_5finfo_5fbase_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_relation_5finfo_5fbase_2eproto {
  StaticDescriptorInitializer_relation_5finfo_5fbase_2eproto() {
    protobuf_AddDesc_relation_5finfo_5fbase_2eproto();
  }
} static_descriptor_initializer_relation_5finfo_5fbase_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RelationInfoBase::kVerFieldNumber;
const int RelationInfoBase::kUserIdFieldNumber;
const int RelationInfoBase::kFriendUserIdFieldNumber;
const int RelationInfoBase::kBlackUserIdFieldNumber;
#endif  // !_MSC_VER

RelationInfoBase::RelationInfoBase()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RelationInfoBase::InitAsDefaultInstance() {
}

RelationInfoBase::RelationInfoBase(const RelationInfoBase& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RelationInfoBase::SharedCtor() {
  _cached_size_ = 0;
  ver_ = 0;
  user_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RelationInfoBase::~RelationInfoBase() {
  SharedDtor();
}

void RelationInfoBase::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RelationInfoBase::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RelationInfoBase::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RelationInfoBase_descriptor_;
}

const RelationInfoBase& RelationInfoBase::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_relation_5finfo_5fbase_2eproto();
  return *default_instance_;
}

RelationInfoBase* RelationInfoBase::default_instance_ = NULL;

RelationInfoBase* RelationInfoBase::New() const {
  return new RelationInfoBase;
}

void RelationInfoBase::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    ver_ = 0;
    user_id_ = 0;
  }
  friend_user_id_.Clear();
  black_user_id_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RelationInfoBase::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 ver = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ver_)));
          set_has_ver();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_user_id;
        break;
      }

      // optional int32 user_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_user_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &user_id_)));
          set_has_user_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_friend_user_id;
        break;
      }

      // repeated int32 friend_user_id = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_friend_user_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 24, input, this->mutable_friend_user_id())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_friend_user_id())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_friend_user_id;
        if (input->ExpectTag(32)) goto parse_black_user_id;
        break;
      }

      // repeated int32 black_user_id = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_black_user_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 32, input, this->mutable_black_user_id())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_black_user_id())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_black_user_id;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RelationInfoBase::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 ver = 1;
  if (has_ver()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->ver(), output);
  }

  // optional int32 user_id = 2;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->user_id(), output);
  }

  // repeated int32 friend_user_id = 3;
  for (int i = 0; i < this->friend_user_id_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      3, this->friend_user_id(i), output);
  }

  // repeated int32 black_user_id = 4;
  for (int i = 0; i < this->black_user_id_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      4, this->black_user_id(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RelationInfoBase::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 ver = 1;
  if (has_ver()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->ver(), target);
  }

  // optional int32 user_id = 2;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->user_id(), target);
  }

  // repeated int32 friend_user_id = 3;
  for (int i = 0; i < this->friend_user_id_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(3, this->friend_user_id(i), target);
  }

  // repeated int32 black_user_id = 4;
  for (int i = 0; i < this->black_user_id_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(4, this->black_user_id(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RelationInfoBase::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 ver = 1;
    if (has_ver()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->ver());
    }

    // optional int32 user_id = 2;
    if (has_user_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->user_id());
    }

  }
  // repeated int32 friend_user_id = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->friend_user_id_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->friend_user_id(i));
    }
    total_size += 1 * this->friend_user_id_size() + data_size;
  }

  // repeated int32 black_user_id = 4;
  {
    int data_size = 0;
    for (int i = 0; i < this->black_user_id_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->black_user_id(i));
    }
    total_size += 1 * this->black_user_id_size() + data_size;
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

void RelationInfoBase::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RelationInfoBase* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RelationInfoBase*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RelationInfoBase::MergeFrom(const RelationInfoBase& from) {
  GOOGLE_CHECK_NE(&from, this);
  friend_user_id_.MergeFrom(from.friend_user_id_);
  black_user_id_.MergeFrom(from.black_user_id_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ver()) {
      set_ver(from.ver());
    }
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RelationInfoBase::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RelationInfoBase::CopyFrom(const RelationInfoBase& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RelationInfoBase::IsInitialized() const {

  return true;
}

void RelationInfoBase::Swap(RelationInfoBase* other) {
  if (other != this) {
    std::swap(ver_, other->ver_);
    std::swap(user_id_, other->user_id_);
    friend_user_id_.Swap(&other->friend_user_id_);
    black_user_id_.Swap(&other->black_user_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RelationInfoBase::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RelationInfoBase_descriptor_;
  metadata.reflection = RelationInfoBase_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ssp

// @@protoc_insertion_point(global_scope)
