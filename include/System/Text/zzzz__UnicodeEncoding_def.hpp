#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnicodeEncoding)
namespace System::Text {
class __UnicodeEncoding__Decoder;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Text {
class DecoderNLS;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class EncoderNLS;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text {
class UnicodeEncoding;
}
namespace System::Text {
class __UnicodeEncoding__Decoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::UnicodeEncoding);
MARK_REF_PTR_T(::System::Text::__UnicodeEncoding__Decoder);
// Type: ::Decoder
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2835))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2866))
// CS Name: ::UnicodeEncoding::Decoder*
class CORDL_TYPE __UnicodeEncoding__Decoder : public ::System::Text::DecoderNLS {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Text::DecoderNLS)]{};

/// @brief Field lastByte offset 0x30
 __declspec(property(get=__get_lastByte, put=__set_lastByte)) int32_t  lastByte;

/// @brief Field lastChar offset 0x34
 __declspec(property(get=__get_lastChar, put=__set_lastChar)) char16_t  lastChar;

 __declspec(property(get=get_HasState)) bool  HasState;

constexpr void __set_lastByte(int32_t  value) ;

constexpr int32_t& __get_lastByte() ;

constexpr int32_t const& __get_lastByte() const;

constexpr void __set_lastChar(char16_t  value) ;

constexpr char16_t& __get_lastChar() ;

constexpr char16_t const& __get_lastChar() const;

static inline ::System::Text::__UnicodeEncoding__Decoder* New_ctor(::System::Text::UnicodeEncoding*  encoding) ;

/// @brief Method .ctor addr 0x2448d0c size 0x10 virtual false final false
inline void _ctor(::System::Text::UnicodeEncoding*  encoding) ;

/// @brief Method Reset addr 0x2448d1c size 0x28 virtual true final false
inline void Reset() ;

/// @brief Method get_HasState addr 0x2448d44 size 0x24 virtual true final false
inline bool get_HasState() ;

// Ctor Parameters [CppParam { name: "", ty: "__UnicodeEncoding__Decoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UnicodeEncoding__Decoder(__UnicodeEncoding__Decoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UnicodeEncoding__Decoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UnicodeEncoding__Decoder(__UnicodeEncoding__Decoder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UnicodeEncoding__Decoder()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::__UnicodeEncoding__Decoder, 0x38>, "Size mismatch!");

} // namespace end def System::Text
// Type: System.Text::UnicodeEncoding
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2874))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2867))
// CS Name: ::System.Text::UnicodeEncoding*
class CORDL_TYPE UnicodeEncoding : public ::System::Text::Encoding {
public:
// Declarations
using Decoder = ::System::Text::__UnicodeEncoding__Decoder;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Text::Encoding)]{};

/// @brief Field isThrowException offset 0x38
 __declspec(property(get=__get_isThrowException, put=__set_isThrowException)) bool  isThrowException;

/// @brief Field bigEndian offset 0x39
 __declspec(property(get=__get_bigEndian, put=__set_bigEndian)) bool  bigEndian;

/// @brief Field byteOrderMark offset 0x3a
 __declspec(property(get=__get_byteOrderMark, put=__set_byteOrderMark)) bool  byteOrderMark;

 __declspec(property(get=get_Preamble)) ::System::ReadOnlySpan_1<uint8_t>  Preamble;

static inline void setStaticF_s_bigEndianDefault(::System::Text::UnicodeEncoding*  value) ;

static inline ::System::Text::UnicodeEncoding* getStaticF_s_bigEndianDefault() ;

static inline void setStaticF_s_littleEndianDefault(::System::Text::UnicodeEncoding*  value) ;

static inline ::System::Text::UnicodeEncoding* getStaticF_s_littleEndianDefault() ;

static inline void setStaticF_s_bigEndianPreamble(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_s_bigEndianPreamble() ;

static inline void setStaticF_s_littleEndianPreamble(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_s_littleEndianPreamble() ;

constexpr void __set_isThrowException(bool  value) ;

constexpr bool& __get_isThrowException() ;

constexpr bool const& __get_isThrowException() const;

constexpr void __set_bigEndian(bool  value) ;

constexpr bool& __get_bigEndian() ;

constexpr bool const& __get_bigEndian() const;

constexpr void __set_byteOrderMark(bool  value) ;

constexpr bool& __get_byteOrderMark() ;

constexpr bool const& __get_byteOrderMark() const;

static inline void setStaticF_highLowPatternMask(uint64_t  value) ;

static inline uint64_t getStaticF_highLowPatternMask() ;

static inline ::System::Text::UnicodeEncoding* New_ctor() ;

/// @brief Method .ctor addr 0x24455dc size 0x34 virtual false final false
inline void _ctor() ;

static inline ::System::Text::UnicodeEncoding* New_ctor(bool  bigEndian, bool  byteOrderMark) ;

/// @brief Method .ctor addr 0x2445610 size 0x48 virtual false final false
inline void _ctor(bool  bigEndian, bool  byteOrderMark) ;

static inline ::System::Text::UnicodeEncoding* New_ctor(bool  bigEndian, bool  byteOrderMark, bool  throwOnInvalidBytes) ;

/// @brief Method .ctor addr 0x2445658 size 0x78 virtual false final false
inline void _ctor(bool  bigEndian, bool  byteOrderMark, bool  throwOnInvalidBytes) ;

/// @brief Method SetDefaultFallbacks addr 0x24456d0 size 0xd4 virtual true final false
inline void SetDefaultFallbacks() ;

/// @brief Method GetByteCount addr 0x24457a4 size 0x184 virtual true final false
inline int32_t GetByteCount(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  index, int32_t  count) ;

/// @brief Method GetByteCount addr 0x2445928 size 0x90 virtual true final false
inline int32_t GetByteCount(::StringW  s) ;

/// @brief Method GetByteCount addr 0x24459b8 size 0xd8 virtual true final false
inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t>  chars, int32_t  count) ;

/// @brief Method GetBytes addr 0x2445a90 size 0x260 virtual true final false
inline int32_t GetBytes(::StringW  s, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  byteIndex) ;

/// @brief Method GetBytes addr 0x2445cf0 size 0x27c virtual true final false
inline int32_t GetBytes(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  byteIndex) ;

/// @brief Method GetBytes addr 0x2445f6c size 0x100 virtual true final false
inline int32_t GetBytes(::cordl_internals::Ptr<char16_t>  chars, int32_t  charCount, ::cordl_internals::Ptr<uint8_t>  bytes, int32_t  byteCount) ;

/// @brief Method GetCharCount addr 0x244606c size 0x184 virtual true final false
inline int32_t GetCharCount(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  index, int32_t  count) ;

/// @brief Method GetCharCount addr 0x24461f0 size 0xd8 virtual true final false
inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t>  bytes, int32_t  count) ;

/// @brief Method GetChars addr 0x24462c8 size 0x27c virtual true final false
inline int32_t GetChars(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  byteIndex, int32_t  byteCount, ::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  charIndex) ;

/// @brief Method GetChars addr 0x2446544 size 0x100 virtual true final false
inline int32_t GetChars(::cordl_internals::Ptr<uint8_t>  bytes, int32_t  byteCount, ::cordl_internals::Ptr<char16_t>  chars, int32_t  charCount) ;

/// @brief Method GetString addr 0x2446644 size 0x1c8 virtual true final false
inline ::StringW GetString(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  index, int32_t  count) ;

/// @brief Method GetByteCount addr 0x244680c size 0x56c virtual true final false
inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t>  chars, int32_t  count, ::System::Text::EncoderNLS*  encoder) ;

/// @brief Method GetBytes addr 0x2446d78 size 0x734 virtual true final false
inline int32_t GetBytes(::cordl_internals::Ptr<char16_t>  chars, int32_t  charCount, ::cordl_internals::Ptr<uint8_t>  bytes, int32_t  byteCount, ::System::Text::EncoderNLS*  encoder) ;

/// @brief Method GetCharCount addr 0x24474ac size 0x6c0 virtual true final false
inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t>  bytes, int32_t  count, ::System::Text::DecoderNLS*  baseDecoder) ;

/// @brief Method GetChars addr 0x2447b6c size 0x920 virtual true final false
inline int32_t GetChars(::cordl_internals::Ptr<uint8_t>  bytes, int32_t  byteCount, ::cordl_internals::Ptr<char16_t>  chars, int32_t  charCount, ::System::Text::DecoderNLS*  baseDecoder) ;

/// @brief Method GetEncoder addr 0x244848c size 0x60 virtual true final false
inline ::System::Text::Encoder* GetEncoder() ;

/// @brief Method GetDecoder addr 0x24484ec size 0x64 virtual true final false
inline ::System::Text::Decoder* GetDecoder() ;

/// @brief Method GetPreamble addr 0x2448550 size 0xfc virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetPreamble() ;

/// @brief Method get_Preamble addr 0x244864c size 0x170 virtual true final false
inline ::System::ReadOnlySpan_1<uint8_t> get_Preamble() ;

/// @brief Method GetMaxByteCount addr 0x24487bc size 0x108 virtual true final false
inline int32_t GetMaxByteCount(int32_t  charCount) ;

/// @brief Method GetMaxCharCount addr 0x24488c4 size 0x10c virtual true final false
inline int32_t GetMaxCharCount(int32_t  byteCount) ;

/// @brief Method Equals addr 0x24489d0 size 0x114 virtual true final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method GetHashCode addr 0x2448ae4 size 0x7c virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "UnicodeEncoding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnicodeEncoding(UnicodeEncoding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnicodeEncoding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnicodeEncoding(UnicodeEncoding const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnicodeEncoding()  = default;
public:


// Fields

// Static field s_bigEndianDefault

// Static field s_littleEndianDefault

// Static field s_bigEndianPreamble

// Static field s_littleEndianPreamble

// Static field highLowPatternMask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::UnicodeEncoding, 0x40>, "Size mismatch!");

} // namespace end def System::Text
NEED_NO_BOX(::System::Text::UnicodeEncoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UnicodeEncoding*, "System.Text", "UnicodeEncoding");
NEED_NO_BOX(::System::Text::__UnicodeEncoding__Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::__UnicodeEncoding__Decoder*, "System.Text", "UnicodeEncoding/Decoder");
