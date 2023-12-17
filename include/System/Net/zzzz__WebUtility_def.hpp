#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebUtility)
namespace System::Net {
class __WebUtility__UrlDecoder;
}
namespace System::Text {
class Encoding;
}
namespace System::Net::Configuration {
struct UnicodeDecodingConformance;
}
namespace System::Net::Configuration {
struct UnicodeEncodingConformance;
}
namespace System::IO {
class TextWriter;
}
// Forward declare root types
namespace System::Net {
class WebUtility;
}
namespace System::Net {
class __WebUtility__UrlDecoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebUtility);
MARK_REF_PTR_T(::System::Net::__WebUtility__UrlDecoder);
// Type: ::UrlDecoder
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9098))
// CS Name: ::WebUtility::UrlDecoder*
class CORDL_TYPE __WebUtility__UrlDecoder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field _bufferSize offset 0x10
 __declspec(property(get=__get__bufferSize, put=__set__bufferSize)) int32_t  _bufferSize;

/// @brief Field _numChars offset 0x14
 __declspec(property(get=__get__numChars, put=__set__numChars)) int32_t  _numChars;

/// @brief Field _charBuffer offset 0x18
 __declspec(property(get=__get__charBuffer, put=__set__charBuffer)) ::ArrayW<char16_t,::Array<char16_t>*>  _charBuffer;

/// @brief Field _numBytes offset 0x20
 __declspec(property(get=__get__numBytes, put=__set__numBytes)) int32_t  _numBytes;

/// @brief Field _byteBuffer offset 0x28
 __declspec(property(get=__get__byteBuffer, put=__set__byteBuffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _byteBuffer;

/// @brief Field _encoding offset 0x30
 __declspec(property(get=__get__encoding, put=__set__encoding)) ::System::Text::Encoding*  _encoding;

constexpr void __set__bufferSize(int32_t  value) ;

constexpr int32_t& __get__bufferSize() ;

constexpr int32_t const& __get__bufferSize() const;

constexpr void __set__numChars(int32_t  value) ;

constexpr int32_t& __get__numChars() ;

constexpr int32_t const& __get__numChars() const;

constexpr void __set__charBuffer(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __get__charBuffer() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __get__charBuffer() const;

constexpr void __set__numBytes(int32_t  value) ;

constexpr int32_t& __get__numBytes() ;

constexpr int32_t const& __get__numBytes() const;

constexpr void __set__byteBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__byteBuffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__byteBuffer() const;

constexpr void __set__encoding(::System::Text::Encoding*  value) ;

constexpr ::System::Text::Encoding* __get__encoding() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> __get__encoding() const;

/// @brief Method FlushBytes addr 0x29a5cf0 size 0x60 virtual false final false
inline void FlushBytes() ;

static inline ::System::Net::__WebUtility__UrlDecoder* New_ctor(int32_t  bufferSize, ::System::Text::Encoding*  encoding) ;

/// @brief Method .ctor addr 0x29a597c size 0x74 virtual false final false
inline void _ctor(int32_t  bufferSize, ::System::Text::Encoding*  encoding) ;

/// @brief Method AddChar addr 0x29a5ad8 size 0x60 virtual false final false
inline void AddChar(char16_t  ch) ;

/// @brief Method AddByte addr 0x29a5a40 size 0x98 virtual false final false
inline void AddByte(uint8_t  b) ;

/// @brief Method GetString addr 0x29a5b38 size 0x88 virtual false final false
inline ::StringW GetString() ;

// Ctor Parameters [CppParam { name: "", ty: "__WebUtility__UrlDecoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__WebUtility__UrlDecoder(__WebUtility__UrlDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__WebUtility__UrlDecoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__WebUtility__UrlDecoder(__WebUtility__UrlDecoder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __WebUtility__UrlDecoder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebUtility__UrlDecoder, 0x38>, "Size mismatch!");

} // namespace end def System::Net
// Type: System.Net::WebUtility
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9099))
// CS Name: ::System.Net::WebUtility*
class CORDL_TYPE WebUtility : public ::System::Object {
public:
// Declarations
using UrlDecoder = ::System::Net::__WebUtility__UrlDecoder;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__htmlEntityEndingChars(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF__htmlEntityEndingChars() ;

static inline void setStaticF__htmlDecodeConformance(::System::Net::Configuration::UnicodeDecodingConformance  value) ;

static inline ::System::Net::Configuration::UnicodeDecodingConformance getStaticF__htmlDecodeConformance() ;

static inline void setStaticF__htmlEncodeConformance(::System::Net::Configuration::UnicodeEncodingConformance  value) ;

static inline ::System::Net::Configuration::UnicodeEncodingConformance getStaticF__htmlEncodeConformance() ;

/// @brief Method HtmlEncode addr 0x29a4fb4 size 0x120 virtual false final false
static inline ::StringW HtmlEncode(::StringW  value) ;

/// @brief Method HtmlEncode addr 0x29a521c size 0x3b4 virtual false final false
static inline void HtmlEncode(::StringW  value, ::System::IO::TextWriter*  output) ;

/// @brief Method IndexOfHtmlEncodingChars addr 0x29a50d4 size 0x148 virtual false final false
static inline int32_t IndexOfHtmlEncodingChars(::StringW  s, int32_t  startPos) ;

/// @brief Method get_HtmlEncodeConformance addr 0x29a55d0 size 0xe4 virtual false final false
static inline ::System::Net::Configuration::UnicodeEncodingConformance get_HtmlEncodeConformance() ;

/// @brief Method UrlDecodeInternal addr 0x29a576c size 0x210 virtual false final false
static inline ::StringW UrlDecodeInternal(::StringW  value, ::System::Text::Encoding*  encoding) ;

/// @brief Method UrlDecode addr 0x29a5bc0 size 0x7c virtual false final false
static inline ::StringW UrlDecode(::StringW  encodedValue) ;

/// @brief Method GetNextUnicodeScalarValueFromUtf16Surrogate addr 0x29a56b4 size 0xb8 virtual false final false
static inline int32_t GetNextUnicodeScalarValueFromUtf16Surrogate(ByRef<::cordl_internals::Ptr<char16_t>>  pch, ByRef<int32_t>  charsRemaining) ;

/// @brief Method HexToInt addr 0x29a59f0 size 0x50 virtual false final false
static inline int32_t HexToInt(char16_t  h) ;

// Ctor Parameters [CppParam { name: "", ty: "WebUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebUtility(WebUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebUtility(WebUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WebUtility()  = default;
public:


// Fields

// Static field _htmlEntityEndingChars

// Static field _htmlDecodeConformance

// Static field _htmlEncodeConformance


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebUtility, 0x10>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::WebUtility);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebUtility*, "System.Net", "WebUtility");
NEED_NO_BOX(::System::Net::__WebUtility__UrlDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebUtility__UrlDecoder*, "System.Net", "WebUtility/UrlDecoder");
