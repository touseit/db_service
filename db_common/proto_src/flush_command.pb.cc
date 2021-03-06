// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: flush_command.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "flush_command.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto {
namespace db {

namespace {

const ::google::protobuf::Descriptor* flush_command_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  flush_command_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_flush_5fcommand_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_flush_5fcommand_2eproto() {
  protobuf_AddDesc_flush_5fcommand_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "flush_command.proto");
  GOOGLE_CHECK(file != NULL);
  flush_command_descriptor_ = file->message_type(0);
  static const int flush_command_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(flush_command, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(flush_command, type_),
  };
  flush_command_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      flush_command_descriptor_,
      flush_command::default_instance_,
      flush_command_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(flush_command, _has_bits_[0]),
      -1,
      -1,
      sizeof(flush_command),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(flush_command, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_flush_5fcommand_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      flush_command_descriptor_, &flush_command::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_flush_5fcommand_2eproto() {
  delete flush_command::default_instance_;
  delete flush_command_reflection_;
}

void protobuf_AddDesc_flush_5fcommand_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_flush_5fcommand_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023flush_command.proto\022\010proto.db\")\n\rflush"
    "_command\022\n\n\002id\030\001 \002(\004\022\014\n\004type\030\002 \002(\r", 74);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "flush_command.proto", &protobuf_RegisterTypes);
  flush_command::default_instance_ = new flush_command();
  flush_command::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_flush_5fcommand_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_flush_5fcommand_2eproto {
  StaticDescriptorInitializer_flush_5fcommand_2eproto() {
    protobuf_AddDesc_flush_5fcommand_2eproto();
  }
} static_descriptor_initializer_flush_5fcommand_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int flush_command::kIdFieldNumber;
const int flush_command::kTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

flush_command::flush_command()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.db.flush_command)
}

void flush_command::InitAsDefaultInstance() {
}

flush_command::flush_command(const flush_command& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:proto.db.flush_command)
}

void flush_command::SharedCtor() {
  _cached_size_ = 0;
  id_ = GOOGLE_ULONGLONG(0);
  type_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

flush_command::~flush_command() {
  // @@protoc_insertion_point(destructor:proto.db.flush_command)
  SharedDtor();
}

void flush_command::SharedDtor() {
  if (this != default_instance_) {
  }
}

void flush_command::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* flush_command::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return flush_command_descriptor_;
}

const flush_command& flush_command::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_flush_5fcommand_2eproto();
  return *default_instance_;
}

flush_command* flush_command::default_instance_ = NULL;

flush_command* flush_command::New(::google::protobuf::Arena* arena) const {
  flush_command* n = new flush_command;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void flush_command::Clear() {
// @@protoc_insertion_point(message_clear_start:proto.db.flush_command)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(flush_command, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<flush_command*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(id_, type_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool flush_command::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.db.flush_command)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }

      // required uint32 type = 2;
      case 2: {
        if (tag == 16) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &type_)));
          set_has_type();
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
  // @@protoc_insertion_point(parse_success:proto.db.flush_command)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.db.flush_command)
  return false;
#undef DO_
}

void flush_command::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.db.flush_command)
  // required uint64 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->id(), output);
  }

  // required uint32 type = 2;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.db.flush_command)
}

::google::protobuf::uint8* flush_command::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto.db.flush_command)
  // required uint64 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->id(), target);
  }

  // required uint32 type = 2;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.db.flush_command)
  return target;
}

int flush_command::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:proto.db.flush_command)
  int total_size = 0;

  if (has_id()) {
    // required uint64 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->id());
  }

  if (has_type()) {
    // required uint32 type = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->type());
  }

  return total_size;
}
int flush_command::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:proto.db.flush_command)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required uint64 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->id());

    // required uint32 type = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->type());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void flush_command::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto.db.flush_command)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const flush_command* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const flush_command>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto.db.flush_command)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto.db.flush_command)
    MergeFrom(*source);
  }
}

void flush_command::MergeFrom(const flush_command& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto.db.flush_command)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void flush_command::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto.db.flush_command)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void flush_command::CopyFrom(const flush_command& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto.db.flush_command)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool flush_command::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void flush_command::Swap(flush_command* other) {
  if (other == this) return;
  InternalSwap(other);
}
void flush_command::InternalSwap(flush_command* other) {
  std::swap(id_, other->id_);
  std::swap(type_, other->type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata flush_command::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = flush_command_descriptor_;
  metadata.reflection = flush_command_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// flush_command

// required uint64 id = 1;
bool flush_command::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void flush_command::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
void flush_command::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void flush_command::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
  clear_has_id();
}
 ::google::protobuf::uint64 flush_command::id() const {
  // @@protoc_insertion_point(field_get:proto.db.flush_command.id)
  return id_;
}
 void flush_command::set_id(::google::protobuf::uint64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:proto.db.flush_command.id)
}

// required uint32 type = 2;
bool flush_command::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void flush_command::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
void flush_command::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
void flush_command::clear_type() {
  type_ = 0u;
  clear_has_type();
}
 ::google::protobuf::uint32 flush_command::type() const {
  // @@protoc_insertion_point(field_get:proto.db.flush_command.type)
  return type_;
}
 void flush_command::set_type(::google::protobuf::uint32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:proto.db.flush_command.type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace db
}  // namespace proto

// @@protoc_insertion_point(global_scope)
