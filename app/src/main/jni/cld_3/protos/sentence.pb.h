// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sentence.proto

#ifndef PROTOBUF_INCLUDED_sentence_2eproto
#define PROTOBUF_INCLUDED_sentence_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_sentence_2eproto 

namespace protobuf_sentence_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
}  // namespace protobuf_sentence_2eproto
namespace chrome_lang_id {
class Sentence;
class SentenceDefaultTypeInternal;
extern SentenceDefaultTypeInternal _Sentence_default_instance_;
class Token;
class TokenDefaultTypeInternal;
extern TokenDefaultTypeInternal _Token_default_instance_;
}  // namespace chrome_lang_id
namespace google {
namespace protobuf {
template<> ::chrome_lang_id::Sentence* Arena::CreateMaybeMessage<::chrome_lang_id::Sentence>(Arena*);
template<> ::chrome_lang_id::Token* Arena::CreateMaybeMessage<::chrome_lang_id::Token>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace chrome_lang_id {

enum Token_BreakLevel {
  Token_BreakLevel_NO_BREAK = 0,
  Token_BreakLevel_SPACE_BREAK = 1,
  Token_BreakLevel_LINE_BREAK = 2,
  Token_BreakLevel_SENTENCE_BREAK = 3
};
bool Token_BreakLevel_IsValid(int value);
const Token_BreakLevel Token_BreakLevel_BreakLevel_MIN = Token_BreakLevel_NO_BREAK;
const Token_BreakLevel Token_BreakLevel_BreakLevel_MAX = Token_BreakLevel_SENTENCE_BREAK;
const int Token_BreakLevel_BreakLevel_ARRAYSIZE = Token_BreakLevel_BreakLevel_MAX + 1;

// ===================================================================

class Sentence : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:chrome_lang_id.Sentence) */ {
 public:
  Sentence();
  virtual ~Sentence();

  Sentence(const Sentence& from);

  inline Sentence& operator=(const Sentence& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Sentence(Sentence&& from) noexcept
    : Sentence() {
    *this = ::std::move(from);
  }

  inline Sentence& operator=(Sentence&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const Sentence& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Sentence* internal_default_instance() {
    return reinterpret_cast<const Sentence*>(
               &_Sentence_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Sentence* other);
  friend void swap(Sentence& a, Sentence& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Sentence* New() const final {
    return CreateMaybeMessage<Sentence>(NULL);
  }

  Sentence* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Sentence>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const Sentence& from);
  void MergeFrom(const Sentence& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Sentence* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .chrome_lang_id.Token token = 3;
  int token_size() const;
  void clear_token();
  static const int kTokenFieldNumber = 3;
  ::chrome_lang_id::Token* mutable_token(int index);
  ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::Token >*
      mutable_token();
  const ::chrome_lang_id::Token& token(int index) const;
  ::chrome_lang_id::Token* add_token();
  const ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::Token >&
      token() const;

  // optional string id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // optional string text = 2;
  bool has_text() const;
  void clear_text();
  static const int kTextFieldNumber = 2;
  const ::std::string& text() const;
  void set_text(const ::std::string& value);
  #if LANG_CXX11
  void set_text(::std::string&& value);
  #endif
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  ::std::string* mutable_text();
  ::std::string* release_text();
  void set_allocated_text(::std::string* text);

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(Sentence)
  // @@protoc_insertion_point(class_scope:chrome_lang_id.Sentence)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_text();
  void clear_has_text();

  ::google::protobuf::internal::ExtensionSet _extensions_;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::Token > token_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr text_;
  friend struct ::protobuf_sentence_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Token : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:chrome_lang_id.Token) */ {
 public:
  Token();
  virtual ~Token();

  Token(const Token& from);

  inline Token& operator=(const Token& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Token(Token&& from) noexcept
    : Token() {
    *this = ::std::move(from);
  }

  inline Token& operator=(Token&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const Token& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Token* internal_default_instance() {
    return reinterpret_cast<const Token*>(
               &_Token_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Token* other);
  friend void swap(Token& a, Token& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Token* New() const final {
    return CreateMaybeMessage<Token>(NULL);
  }

  Token* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Token>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const Token& from);
  void MergeFrom(const Token& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Token* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef Token_BreakLevel BreakLevel;
  static const BreakLevel NO_BREAK =
    Token_BreakLevel_NO_BREAK;
  static const BreakLevel SPACE_BREAK =
    Token_BreakLevel_SPACE_BREAK;
  static const BreakLevel LINE_BREAK =
    Token_BreakLevel_LINE_BREAK;
  static const BreakLevel SENTENCE_BREAK =
    Token_BreakLevel_SENTENCE_BREAK;
  static inline bool BreakLevel_IsValid(int value) {
    return Token_BreakLevel_IsValid(value);
  }
  static const BreakLevel BreakLevel_MIN =
    Token_BreakLevel_BreakLevel_MIN;
  static const BreakLevel BreakLevel_MAX =
    Token_BreakLevel_BreakLevel_MAX;
  static const int BreakLevel_ARRAYSIZE =
    Token_BreakLevel_BreakLevel_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // required string word = 1;
  bool has_word() const;
  void clear_word();
  static const int kWordFieldNumber = 1;
  const ::std::string& word() const;
  void set_word(const ::std::string& value);
  #if LANG_CXX11
  void set_word(::std::string&& value);
  #endif
  void set_word(const char* value);
  void set_word(const char* value, size_t size);
  ::std::string* mutable_word();
  ::std::string* release_word();
  void set_allocated_word(::std::string* word);

  // optional string tag = 5;
  bool has_tag() const;
  void clear_tag();
  static const int kTagFieldNumber = 5;
  const ::std::string& tag() const;
  void set_tag(const ::std::string& value);
  #if LANG_CXX11
  void set_tag(::std::string&& value);
  #endif
  void set_tag(const char* value);
  void set_tag(const char* value, size_t size);
  ::std::string* mutable_tag();
  ::std::string* release_tag();
  void set_allocated_tag(::std::string* tag);

  // optional string category = 6;
  bool has_category() const;
  void clear_category();
  static const int kCategoryFieldNumber = 6;
  const ::std::string& category() const;
  void set_category(const ::std::string& value);
  #if LANG_CXX11
  void set_category(::std::string&& value);
  #endif
  void set_category(const char* value);
  void set_category(const char* value, size_t size);
  ::std::string* mutable_category();
  ::std::string* release_category();
  void set_allocated_category(::std::string* category);

  // optional string label = 7;
  bool has_label() const;
  void clear_label();
  static const int kLabelFieldNumber = 7;
  const ::std::string& label() const;
  void set_label(const ::std::string& value);
  #if LANG_CXX11
  void set_label(::std::string&& value);
  #endif
  void set_label(const char* value);
  void set_label(const char* value, size_t size);
  ::std::string* mutable_label();
  ::std::string* release_label();
  void set_allocated_label(::std::string* label);

  // required int32 start = 2;
  bool has_start() const;
  void clear_start();
  static const int kStartFieldNumber = 2;
  ::google::protobuf::int32 start() const;
  void set_start(::google::protobuf::int32 value);

  // required int32 end = 3;
  bool has_end() const;
  void clear_end();
  static const int kEndFieldNumber = 3;
  ::google::protobuf::int32 end() const;
  void set_end(::google::protobuf::int32 value);

  // optional int32 head = 4 [default = -1];
  bool has_head() const;
  void clear_head();
  static const int kHeadFieldNumber = 4;
  ::google::protobuf::int32 head() const;
  void set_head(::google::protobuf::int32 value);

  // optional .chrome_lang_id.Token.BreakLevel break_level = 8 [default = SPACE_BREAK];
  bool has_break_level() const;
  void clear_break_level();
  static const int kBreakLevelFieldNumber = 8;
  ::chrome_lang_id::Token_BreakLevel break_level() const;
  void set_break_level(::chrome_lang_id::Token_BreakLevel value);

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(Token)
  // @@protoc_insertion_point(class_scope:chrome_lang_id.Token)
 private:
  void set_has_word();
  void clear_has_word();
  void set_has_start();
  void clear_has_start();
  void set_has_end();
  void clear_has_end();
  void set_has_head();
  void clear_has_head();
  void set_has_tag();
  void clear_has_tag();
  void set_has_category();
  void clear_has_category();
  void set_has_label();
  void clear_has_label();
  void set_has_break_level();
  void clear_has_break_level();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::ExtensionSet _extensions_;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr word_;
  ::google::protobuf::internal::ArenaStringPtr tag_;
  ::google::protobuf::internal::ArenaStringPtr category_;
  ::google::protobuf::internal::ArenaStringPtr label_;
  ::google::protobuf::int32 start_;
  ::google::protobuf::int32 end_;
  ::google::protobuf::int32 head_;
  int break_level_;
  friend struct ::protobuf_sentence_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Sentence

// optional string id = 1;
inline bool Sentence::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Sentence::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Sentence::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Sentence::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& Sentence::id() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.Sentence.id)
  return id_.GetNoArena();
}
inline void Sentence::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chrome_lang_id.Sentence.id)
}
#if LANG_CXX11
inline void Sentence::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chrome_lang_id.Sentence.id)
}
#endif
inline void Sentence::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chrome_lang_id.Sentence.id)
}
inline void Sentence::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chrome_lang_id.Sentence.id)
}
inline ::std::string* Sentence::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.Sentence.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Sentence::release_id() {
  // @@protoc_insertion_point(field_release:chrome_lang_id.Sentence.id)
  if (!has_id()) {
    return NULL;
  }
  clear_has_id();
  return id_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Sentence::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:chrome_lang_id.Sentence.id)
}

// optional string text = 2;
inline bool Sentence::has_text() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Sentence::set_has_text() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Sentence::clear_has_text() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Sentence::clear_text() {
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_text();
}
inline const ::std::string& Sentence::text() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.Sentence.text)
  return text_.GetNoArena();
}
inline void Sentence::set_text(const ::std::string& value) {
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chrome_lang_id.Sentence.text)
}
#if LANG_CXX11
inline void Sentence::set_text(::std::string&& value) {
  set_has_text();
  text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chrome_lang_id.Sentence.text)
}
#endif
inline void Sentence::set_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chrome_lang_id.Sentence.text)
}
inline void Sentence::set_text(const char* value, size_t size) {
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chrome_lang_id.Sentence.text)
}
inline ::std::string* Sentence::mutable_text() {
  set_has_text();
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.Sentence.text)
  return text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Sentence::release_text() {
  // @@protoc_insertion_point(field_release:chrome_lang_id.Sentence.text)
  if (!has_text()) {
    return NULL;
  }
  clear_has_text();
  return text_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Sentence::set_allocated_text(::std::string* text) {
  if (text != NULL) {
    set_has_text();
  } else {
    clear_has_text();
  }
  text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:chrome_lang_id.Sentence.text)
}

// repeated .chrome_lang_id.Token token = 3;
inline int Sentence::token_size() const {
  return token_.size();
}
inline void Sentence::clear_token() {
  token_.Clear();
}
inline ::chrome_lang_id::Token* Sentence::mutable_token(int index) {
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.Sentence.token)
  return token_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::Token >*
Sentence::mutable_token() {
  // @@protoc_insertion_point(field_mutable_list:chrome_lang_id.Sentence.token)
  return &token_;
}
inline const ::chrome_lang_id::Token& Sentence::token(int index) const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.Sentence.token)
  return token_.Get(index);
}
inline ::chrome_lang_id::Token* Sentence::add_token() {
  // @@protoc_insertion_point(field_add:chrome_lang_id.Sentence.token)
  return token_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::Token >&
Sentence::token() const {
  // @@protoc_insertion_point(field_list:chrome_lang_id.Sentence.token)
  return token_;
}

// -------------------------------------------------------------------

// Token

// required string word = 1;
inline bool Token::has_word() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Token::set_has_word() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Token::clear_has_word() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Token::clear_word() {
  word_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_word();
}
inline const ::std::string& Token::word() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.Token.word)
  return word_.GetNoArena();
}
inline void Token::set_word(const ::std::string& value) {
  set_has_word();
  word_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chrome_lang_id.Token.word)
}
#if LANG_CXX11
inline void Token::set_word(::std::string&& value) {
  set_has_word();
  word_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chrome_lang_id.Token.word)
}
#endif
inline void Token::set_word(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_word();
  word_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chrome_lang_id.Token.word)
}
inline void Token::set_word(const char* value, size_t size) {
  set_has_word();
  word_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chrome_lang_id.Token.word)
}
inline ::std::string* Token::mutable_word() {
  set_has_word();
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.Token.word)
  return word_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Token::release_word() {
  // @@protoc_insertion_point(field_release:chrome_lang_id.Token.word)
  if (!has_word()) {
    return NULL;
  }
  clear_has_word();
  return word_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Token::set_allocated_word(::std::string* word) {
  if (word != NULL) {
    set_has_word();
  } else {
    clear_has_word();
  }
  word_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), word);
  // @@protoc_insertion_point(field_set_allocated:chrome_lang_id.Token.word)
}

// required int32 start = 2;
inline bool Token::has_start() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Token::set_has_start() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Token::clear_has_start() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Token::clear_start() {
  start_ = 0;
  clear_has_start();
}
inline ::google::protobuf::int32 Token::start() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.Token.start)
  return start_;
}
inline void Token::set_start(::google::protobuf::int32 value) {
  set_has_start();
  start_ = value;
  // @@protoc_insertion_point(field_set:chrome_lang_id.Token.start)
}

// required int32 end = 3;
inline bool Token::has_end() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Token::set_has_end() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Token::clear_has_end() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Token::clear_end() {
  end_ = 0;
  clear_has_end();
}
inline ::google::protobuf::int32 Token::end() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.Token.end)
  return end_;
}
inline void Token::set_end(::google::protobuf::int32 value) {
  set_has_end();
  end_ = value;
  // @@protoc_insertion_point(field_set:chrome_lang_id.Token.end)
}

// optional int32 head = 4 [default = -1];
inline bool Token::has_head() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Token::set_has_head() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Token::clear_has_head() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Token::clear_head() {
  head_ = -1;
  clear_has_head();
}
inline ::google::protobuf::int32 Token::head() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.Token.head)
  return head_;
}
inline void Token::set_head(::google::protobuf::int32 value) {
  set_has_head();
  head_ = value;
  // @@protoc_insertion_point(field_set:chrome_lang_id.Token.head)
}

// optional string tag = 5;
inline bool Token::has_tag() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Token::set_has_tag() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Token::clear_has_tag() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Token::clear_tag() {
  tag_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_tag();
}
inline const ::std::string& Token::tag() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.Token.tag)
  return tag_.GetNoArena();
}
inline void Token::set_tag(const ::std::string& value) {
  set_has_tag();
  tag_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chrome_lang_id.Token.tag)
}
#if LANG_CXX11
inline void Token::set_tag(::std::string&& value) {
  set_has_tag();
  tag_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chrome_lang_id.Token.tag)
}
#endif
inline void Token::set_tag(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_tag();
  tag_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chrome_lang_id.Token.tag)
}
inline void Token::set_tag(const char* value, size_t size) {
  set_has_tag();
  tag_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chrome_lang_id.Token.tag)
}
inline ::std::string* Token::mutable_tag() {
  set_has_tag();
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.Token.tag)
  return tag_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Token::release_tag() {
  // @@protoc_insertion_point(field_release:chrome_lang_id.Token.tag)
  if (!has_tag()) {
    return NULL;
  }
  clear_has_tag();
  return tag_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Token::set_allocated_tag(::std::string* tag) {
  if (tag != NULL) {
    set_has_tag();
  } else {
    clear_has_tag();
  }
  tag_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tag);
  // @@protoc_insertion_point(field_set_allocated:chrome_lang_id.Token.tag)
}

// optional string category = 6;
inline bool Token::has_category() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Token::set_has_category() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Token::clear_has_category() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Token::clear_category() {
  category_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_category();
}
inline const ::std::string& Token::category() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.Token.category)
  return category_.GetNoArena();
}
inline void Token::set_category(const ::std::string& value) {
  set_has_category();
  category_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chrome_lang_id.Token.category)
}
#if LANG_CXX11
inline void Token::set_category(::std::string&& value) {
  set_has_category();
  category_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chrome_lang_id.Token.category)
}
#endif
inline void Token::set_category(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_category();
  category_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chrome_lang_id.Token.category)
}
inline void Token::set_category(const char* value, size_t size) {
  set_has_category();
  category_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chrome_lang_id.Token.category)
}
inline ::std::string* Token::mutable_category() {
  set_has_category();
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.Token.category)
  return category_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Token::release_category() {
  // @@protoc_insertion_point(field_release:chrome_lang_id.Token.category)
  if (!has_category()) {
    return NULL;
  }
  clear_has_category();
  return category_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Token::set_allocated_category(::std::string* category) {
  if (category != NULL) {
    set_has_category();
  } else {
    clear_has_category();
  }
  category_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), category);
  // @@protoc_insertion_point(field_set_allocated:chrome_lang_id.Token.category)
}

// optional string label = 7;
inline bool Token::has_label() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Token::set_has_label() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Token::clear_has_label() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Token::clear_label() {
  label_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_label();
}
inline const ::std::string& Token::label() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.Token.label)
  return label_.GetNoArena();
}
inline void Token::set_label(const ::std::string& value) {
  set_has_label();
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chrome_lang_id.Token.label)
}
#if LANG_CXX11
inline void Token::set_label(::std::string&& value) {
  set_has_label();
  label_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chrome_lang_id.Token.label)
}
#endif
inline void Token::set_label(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_label();
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chrome_lang_id.Token.label)
}
inline void Token::set_label(const char* value, size_t size) {
  set_has_label();
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chrome_lang_id.Token.label)
}
inline ::std::string* Token::mutable_label() {
  set_has_label();
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.Token.label)
  return label_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Token::release_label() {
  // @@protoc_insertion_point(field_release:chrome_lang_id.Token.label)
  if (!has_label()) {
    return NULL;
  }
  clear_has_label();
  return label_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Token::set_allocated_label(::std::string* label) {
  if (label != NULL) {
    set_has_label();
  } else {
    clear_has_label();
  }
  label_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), label);
  // @@protoc_insertion_point(field_set_allocated:chrome_lang_id.Token.label)
}

// optional .chrome_lang_id.Token.BreakLevel break_level = 8 [default = SPACE_BREAK];
inline bool Token::has_break_level() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Token::set_has_break_level() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Token::clear_has_break_level() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Token::clear_break_level() {
  break_level_ = 1;
  clear_has_break_level();
}
inline ::chrome_lang_id::Token_BreakLevel Token::break_level() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.Token.break_level)
  return static_cast< ::chrome_lang_id::Token_BreakLevel >(break_level_);
}
inline void Token::set_break_level(::chrome_lang_id::Token_BreakLevel value) {
  assert(::chrome_lang_id::Token_BreakLevel_IsValid(value));
  set_has_break_level();
  break_level_ = value;
  // @@protoc_insertion_point(field_set:chrome_lang_id.Token.break_level)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace chrome_lang_id

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::chrome_lang_id::Token_BreakLevel> : ::std::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_sentence_2eproto
