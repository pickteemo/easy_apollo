// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/pad_msg.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "modules/common/proto/header.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto;
namespace apollo {
namespace planning {
class PadMessage;
class PadMessageDefaultTypeInternal;
extern PadMessageDefaultTypeInternal _PadMessage_default_instance_;
}  // namespace planning
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::planning::PadMessage* Arena::CreateMaybeMessage<::apollo::planning::PadMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace planning {

enum DrivingAction : int {
  NONE = 100,
  FOLLOW = 0,
  CHANGE_LEFT = 1,
  CHANGE_RIGHT = 2,
  PULL_OVER = 3,
  STOP = 4,
  RESUME_CRUISE = 5,
  CLEAR_PLANNING = 6
};
bool DrivingAction_IsValid(int value);
constexpr DrivingAction DrivingAction_MIN = FOLLOW;
constexpr DrivingAction DrivingAction_MAX = NONE;
constexpr int DrivingAction_ARRAYSIZE = DrivingAction_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DrivingAction_descriptor();
template<typename T>
inline const std::string& DrivingAction_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DrivingAction>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DrivingAction_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    DrivingAction_descriptor(), enum_t_value);
}
inline bool DrivingAction_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, DrivingAction* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<DrivingAction>(
    DrivingAction_descriptor(), name, value);
}
// ===================================================================

class PadMessage PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.planning.PadMessage) */ {
 public:
  inline PadMessage() : PadMessage(nullptr) {}
  virtual ~PadMessage();

  PadMessage(const PadMessage& from);
  PadMessage(PadMessage&& from) noexcept
    : PadMessage() {
    *this = ::std::move(from);
  }

  inline PadMessage& operator=(const PadMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline PadMessage& operator=(PadMessage&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const PadMessage& default_instance();

  static inline const PadMessage* internal_default_instance() {
    return reinterpret_cast<const PadMessage*>(
               &_PadMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PadMessage& a, PadMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(PadMessage* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PadMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PadMessage* New() const final {
    return CreateMaybeMessage<PadMessage>(nullptr);
  }

  PadMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PadMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PadMessage& from);
  void MergeFrom(const PadMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PadMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.planning.PadMessage";
  }
  protected:
  explicit PadMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto);
    return ::descriptor_table_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kActionFieldNumber = 2,
  };
  // optional .apollo.common.Header header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::apollo::common::Header& header() const;
  ::apollo::common::Header* release_header();
  ::apollo::common::Header* mutable_header();
  void set_allocated_header(::apollo::common::Header* header);
  private:
  const ::apollo::common::Header& _internal_header() const;
  ::apollo::common::Header* _internal_mutable_header();
  public:
  void unsafe_arena_set_allocated_header(
      ::apollo::common::Header* header);
  ::apollo::common::Header* unsafe_arena_release_header();

  // optional .apollo.planning.DrivingAction action = 2;
  bool has_action() const;
  private:
  bool _internal_has_action() const;
  public:
  void clear_action();
  ::apollo::planning::DrivingAction action() const;
  void set_action(::apollo::planning::DrivingAction value);
  private:
  ::apollo::planning::DrivingAction _internal_action() const;
  void _internal_set_action(::apollo::planning::DrivingAction value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.planning.PadMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::apollo::common::Header* header_;
  int action_;
  friend struct ::TableStruct_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PadMessage

// optional .apollo.common.Header header = 1;
inline bool PadMessage::_internal_has_header() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || header_ != nullptr);
  return value;
}
inline bool PadMessage::has_header() const {
  return _internal_has_header();
}
inline const ::apollo::common::Header& PadMessage::_internal_header() const {
  const ::apollo::common::Header* p = header_;
  return p != nullptr ? *p : reinterpret_cast<const ::apollo::common::Header&>(
      ::apollo::common::_Header_default_instance_);
}
inline const ::apollo::common::Header& PadMessage::header() const {
  // @@protoc_insertion_point(field_get:apollo.planning.PadMessage.header)
  return _internal_header();
}
inline void PadMessage::unsafe_arena_set_allocated_header(
    ::apollo::common::Header* header) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  header_ = header;
  if (header) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:apollo.planning.PadMessage.header)
}
inline ::apollo::common::Header* PadMessage::release_header() {
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::common::Header* temp = header_;
  header_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::apollo::common::Header* PadMessage::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:apollo.planning.PadMessage.header)
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::apollo::common::Header* PadMessage::_internal_mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Header>(GetArena());
    header_ = p;
  }
  return header_;
}
inline ::apollo::common::Header* PadMessage::mutable_header() {
  // @@protoc_insertion_point(field_mutable:apollo.planning.PadMessage.header)
  return _internal_mutable_header();
}
inline void PadMessage::set_allocated_header(::apollo::common::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header)->GetArena();
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:apollo.planning.PadMessage.header)
}

// optional .apollo.planning.DrivingAction action = 2;
inline bool PadMessage::_internal_has_action() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool PadMessage::has_action() const {
  return _internal_has_action();
}
inline void PadMessage::clear_action() {
  action_ = 100;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::apollo::planning::DrivingAction PadMessage::_internal_action() const {
  return static_cast< ::apollo::planning::DrivingAction >(action_);
}
inline ::apollo::planning::DrivingAction PadMessage::action() const {
  // @@protoc_insertion_point(field_get:apollo.planning.PadMessage.action)
  return _internal_action();
}
inline void PadMessage::_internal_set_action(::apollo::planning::DrivingAction value) {
  assert(::apollo::planning::DrivingAction_IsValid(value));
  _has_bits_[0] |= 0x00000002u;
  action_ = value;
}
inline void PadMessage::set_action(::apollo::planning::DrivingAction value) {
  _internal_set_action(value);
  // @@protoc_insertion_point(field_set:apollo.planning.PadMessage.action)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace planning
}  // namespace apollo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::apollo::planning::DrivingAction> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::planning::DrivingAction>() {
  return ::apollo::planning::DrivingAction_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto
