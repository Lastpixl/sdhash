// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: blooms.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "blooms.pb.h"

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

namespace blooms {

namespace {

const ::google::protobuf::Descriptor* BloomFilter_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BloomFilter_reflection_ = NULL;
const ::google::protobuf::Descriptor* BloomVector_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BloomVector_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_blooms_2eproto() {
  protobuf_AddDesc_blooms_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "blooms.proto");
  GOOGLE_CHECK(file != NULL);
  BloomFilter_descriptor_ = file->message_type(0);
  static const int BloomFilter_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BloomFilter, bf_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BloomFilter, max_elem_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BloomFilter, elem_count_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BloomFilter, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BloomFilter, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BloomFilter, filter_),
  };
  BloomFilter_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BloomFilter_descriptor_,
      BloomFilter::default_instance_,
      BloomFilter_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BloomFilter, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BloomFilter, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BloomFilter));
  BloomVector_descriptor_ = file->message_type(1);
  static const int BloomVector_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BloomVector, filter_count_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BloomVector, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BloomVector, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BloomVector, filesize_),
  };
  BloomVector_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BloomVector_descriptor_,
      BloomVector::default_instance_,
      BloomVector_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BloomVector, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BloomVector, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BloomVector));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_blooms_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BloomFilter_descriptor_, &BloomFilter::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BloomVector_descriptor_, &BloomVector::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_blooms_2eproto() {
  delete BloomFilter::default_instance_;
  delete BloomFilter_reflection_;
  delete BloomVector::default_instance_;
  delete BloomVector_reflection_;
}

void protobuf_AddDesc_blooms_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014blooms.proto\022\006blooms\"n\n\013BloomFilter\022\017\n"
    "\007bf_size\030\001 \001(\004\022\020\n\010max_elem\030\002 \001(\004\022\022\n\nelem"
    "_count\030\003 \001(\004\022\n\n\002id\030\004 \001(\r\022\014\n\004name\030\005 \001(\t\022\016"
    "\n\006filter\030\006 \003(\006\"O\n\013BloomVector\022\024\n\014filter_"
    "count\030\001 \001(\005\022\014\n\004name\030\002 \001(\t\022\n\n\002id\030\003 \001(\005\022\020\n"
    "\010filesize\030\004 \001(\004", 215);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "blooms.proto", &protobuf_RegisterTypes);
  BloomFilter::default_instance_ = new BloomFilter();
  BloomVector::default_instance_ = new BloomVector();
  BloomFilter::default_instance_->InitAsDefaultInstance();
  BloomVector::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_blooms_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_blooms_2eproto {
  StaticDescriptorInitializer_blooms_2eproto() {
    protobuf_AddDesc_blooms_2eproto();
  }
} static_descriptor_initializer_blooms_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BloomFilter::kBfSizeFieldNumber;
const int BloomFilter::kMaxElemFieldNumber;
const int BloomFilter::kElemCountFieldNumber;
const int BloomFilter::kIdFieldNumber;
const int BloomFilter::kNameFieldNumber;
const int BloomFilter::kFilterFieldNumber;
#endif  // !_MSC_VER

BloomFilter::BloomFilter()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:blooms.BloomFilter)
}

void BloomFilter::InitAsDefaultInstance() {
}

BloomFilter::BloomFilter(const BloomFilter& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:blooms.BloomFilter)
}

void BloomFilter::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  bf_size_ = GOOGLE_ULONGLONG(0);
  max_elem_ = GOOGLE_ULONGLONG(0);
  elem_count_ = GOOGLE_ULONGLONG(0);
  id_ = 0u;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BloomFilter::~BloomFilter() {
  // @@protoc_insertion_point(destructor:blooms.BloomFilter)
  SharedDtor();
}

void BloomFilter::SharedDtor() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void BloomFilter::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BloomFilter::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BloomFilter_descriptor_;
}

const BloomFilter& BloomFilter::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_blooms_2eproto();
  return *default_instance_;
}

BloomFilter* BloomFilter::default_instance_ = NULL;

BloomFilter* BloomFilter::New() const {
  return new BloomFilter;
}

void BloomFilter::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<BloomFilter*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 31) {
    ZR_(bf_size_, elem_count_);
    id_ = 0u;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        name_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  filter_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BloomFilter::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:blooms.BloomFilter)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 bf_size = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &bf_size_)));
          set_has_bf_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_max_elem;
        break;
      }

      // optional uint64 max_elem = 2;
      case 2: {
        if (tag == 16) {
         parse_max_elem:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &max_elem_)));
          set_has_max_elem();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_elem_count;
        break;
      }

      // optional uint64 elem_count = 3;
      case 3: {
        if (tag == 24) {
         parse_elem_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &elem_count_)));
          set_has_elem_count();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_id;
        break;
      }

      // optional uint32 id = 4;
      case 4: {
        if (tag == 32) {
         parse_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_name;
        break;
      }

      // optional string name = 5;
      case 5: {
        if (tag == 42) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(49)) goto parse_filter;
        break;
      }

      // repeated fixed64 filter = 6;
      case 6: {
        if (tag == 49) {
         parse_filter:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 1, 49, input, this->mutable_filter())));
        } else if (tag == 50) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, this->mutable_filter())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(49)) goto parse_filter;
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
  // @@protoc_insertion_point(parse_success:blooms.BloomFilter)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:blooms.BloomFilter)
  return false;
#undef DO_
}

void BloomFilter::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:blooms.BloomFilter)
  // optional uint64 bf_size = 1;
  if (has_bf_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->bf_size(), output);
  }

  // optional uint64 max_elem = 2;
  if (has_max_elem()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->max_elem(), output);
  }

  // optional uint64 elem_count = 3;
  if (has_elem_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->elem_count(), output);
  }

  // optional uint32 id = 4;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->id(), output);
  }

  // optional string name = 5;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->name(), output);
  }

  // repeated fixed64 filter = 6;
  for (int i = 0; i < this->filter_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(
      6, this->filter(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:blooms.BloomFilter)
}

::google::protobuf::uint8* BloomFilter::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:blooms.BloomFilter)
  // optional uint64 bf_size = 1;
  if (has_bf_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->bf_size(), target);
  }

  // optional uint64 max_elem = 2;
  if (has_max_elem()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->max_elem(), target);
  }

  // optional uint64 elem_count = 3;
  if (has_elem_count()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->elem_count(), target);
  }

  // optional uint32 id = 4;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->id(), target);
  }

  // optional string name = 5;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->name(), target);
  }

  // repeated fixed64 filter = 6;
  for (int i = 0; i < this->filter_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFixed64ToArray(6, this->filter(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:blooms.BloomFilter)
  return target;
}

int BloomFilter::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint64 bf_size = 1;
    if (has_bf_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->bf_size());
    }

    // optional uint64 max_elem = 2;
    if (has_max_elem()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->max_elem());
    }

    // optional uint64 elem_count = 3;
    if (has_elem_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->elem_count());
    }

    // optional uint32 id = 4;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // optional string name = 5;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

  }
  // repeated fixed64 filter = 6;
  {
    int data_size = 0;
    data_size = 8 * this->filter_size();
    total_size += 1 * this->filter_size() + data_size;
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

void BloomFilter::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BloomFilter* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BloomFilter*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BloomFilter::MergeFrom(const BloomFilter& from) {
  GOOGLE_CHECK_NE(&from, this);
  filter_.MergeFrom(from.filter_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_bf_size()) {
      set_bf_size(from.bf_size());
    }
    if (from.has_max_elem()) {
      set_max_elem(from.max_elem());
    }
    if (from.has_elem_count()) {
      set_elem_count(from.elem_count());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BloomFilter::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BloomFilter::CopyFrom(const BloomFilter& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BloomFilter::IsInitialized() const {

  return true;
}

void BloomFilter::Swap(BloomFilter* other) {
  if (other != this) {
    std::swap(bf_size_, other->bf_size_);
    std::swap(max_elem_, other->max_elem_);
    std::swap(elem_count_, other->elem_count_);
    std::swap(id_, other->id_);
    std::swap(name_, other->name_);
    filter_.Swap(&other->filter_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BloomFilter::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BloomFilter_descriptor_;
  metadata.reflection = BloomFilter_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int BloomVector::kFilterCountFieldNumber;
const int BloomVector::kNameFieldNumber;
const int BloomVector::kIdFieldNumber;
const int BloomVector::kFilesizeFieldNumber;
#endif  // !_MSC_VER

BloomVector::BloomVector()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:blooms.BloomVector)
}

void BloomVector::InitAsDefaultInstance() {
}

BloomVector::BloomVector(const BloomVector& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:blooms.BloomVector)
}

void BloomVector::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  filter_count_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = 0;
  filesize_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BloomVector::~BloomVector() {
  // @@protoc_insertion_point(destructor:blooms.BloomVector)
  SharedDtor();
}

void BloomVector::SharedDtor() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void BloomVector::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BloomVector::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BloomVector_descriptor_;
}

const BloomVector& BloomVector::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_blooms_2eproto();
  return *default_instance_;
}

BloomVector* BloomVector::default_instance_ = NULL;

BloomVector* BloomVector::New() const {
  return new BloomVector;
}

void BloomVector::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<BloomVector*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 15) {
    ZR_(filter_count_, filesize_);
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        name_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BloomVector::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:blooms.BloomVector)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 filter_count = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &filter_count_)));
          set_has_filter_count();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // optional string name = 2;
      case 2: {
        if (tag == 18) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_id;
        break;
      }

      // optional int32 id = 3;
      case 3: {
        if (tag == 24) {
         parse_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_filesize;
        break;
      }

      // optional uint64 filesize = 4;
      case 4: {
        if (tag == 32) {
         parse_filesize:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &filesize_)));
          set_has_filesize();
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
  // @@protoc_insertion_point(parse_success:blooms.BloomVector)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:blooms.BloomVector)
  return false;
#undef DO_
}

void BloomVector::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:blooms.BloomVector)
  // optional int32 filter_count = 1;
  if (has_filter_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->filter_count(), output);
  }

  // optional string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // optional int32 id = 3;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->id(), output);
  }

  // optional uint64 filesize = 4;
  if (has_filesize()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->filesize(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:blooms.BloomVector)
}

::google::protobuf::uint8* BloomVector::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:blooms.BloomVector)
  // optional int32 filter_count = 1;
  if (has_filter_count()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->filter_count(), target);
  }

  // optional string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // optional int32 id = 3;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->id(), target);
  }

  // optional uint64 filesize = 4;
  if (has_filesize()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->filesize(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:blooms.BloomVector)
  return target;
}

int BloomVector::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 filter_count = 1;
    if (has_filter_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->filter_count());
    }

    // optional string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional int32 id = 3;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional uint64 filesize = 4;
    if (has_filesize()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->filesize());
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

void BloomVector::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BloomVector* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BloomVector*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BloomVector::MergeFrom(const BloomVector& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_filter_count()) {
      set_filter_count(from.filter_count());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_filesize()) {
      set_filesize(from.filesize());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BloomVector::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BloomVector::CopyFrom(const BloomVector& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BloomVector::IsInitialized() const {

  return true;
}

void BloomVector::Swap(BloomVector* other) {
  if (other != this) {
    std::swap(filter_count_, other->filter_count_);
    std::swap(name_, other->name_);
    std::swap(id_, other->id_);
    std::swap(filesize_, other->filesize_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BloomVector::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BloomVector_descriptor_;
  metadata.reflection = BloomVector_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace blooms

// @@protoc_insertion_point(global_scope)
