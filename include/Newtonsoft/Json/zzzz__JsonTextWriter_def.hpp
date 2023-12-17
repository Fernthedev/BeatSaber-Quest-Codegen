#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonTextWriter)
namespace System {
struct DateTime;
}
namespace Newtonsoft::Json {
template<typename T>
class IArrayPool_1;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System {
struct Guid;
}
namespace System {
class Uri;
}
namespace System {
struct Decimal;
}
namespace System::IO {
class TextWriter;
}
namespace System {
struct TimeSpan;
}
namespace Newtonsoft::Json::Utilities {
class Base64Encoder;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonTextWriter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonTextWriter);
// Type: Newtonsoft.Json::JsonTextWriter
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11843))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11827))
// CS Name: ::Newtonsoft.Json::JsonTextWriter*
class CORDL_TYPE JsonTextWriter : public ::Newtonsoft::Json::JsonWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::Newtonsoft::Json::JsonWriter)]{};

/// @brief Field _writer offset 0x60
 __declspec(property(get=__get__writer, put=__set__writer)) ::System::IO::TextWriter*  _writer;

/// @brief Field _base64Encoder offset 0x68
 __declspec(property(get=__get__base64Encoder, put=__set__base64Encoder)) ::Newtonsoft::Json::Utilities::Base64Encoder*  _base64Encoder;

/// @brief Field _indentChar offset 0x70
 __declspec(property(get=__get__indentChar, put=__set__indentChar)) char16_t  _indentChar;

/// @brief Field _indentation offset 0x74
 __declspec(property(get=__get__indentation, put=__set__indentation)) int32_t  _indentation;

/// @brief Field _quoteChar offset 0x78
 __declspec(property(get=__get__quoteChar, put=__set__quoteChar)) char16_t  _quoteChar;

/// @brief Field _quoteName offset 0x7a
 __declspec(property(get=__get__quoteName, put=__set__quoteName)) bool  _quoteName;

/// @brief Field _charEscapeFlags offset 0x80
 __declspec(property(get=__get__charEscapeFlags, put=__set__charEscapeFlags)) ::ArrayW<bool,::Array<bool>*>  _charEscapeFlags;

/// @brief Field _writeBuffer offset 0x88
 __declspec(property(get=__get__writeBuffer, put=__set__writeBuffer)) ::ArrayW<char16_t,::Array<char16_t>*>  _writeBuffer;

/// @brief Field _arrayPool offset 0x90
 __declspec(property(get=__get__arrayPool, put=__set__arrayPool)) ::Newtonsoft::Json::IArrayPool_1<char16_t>*  _arrayPool;

/// @brief Field _indentChars offset 0x98
 __declspec(property(get=__get__indentChars, put=__set__indentChars)) ::ArrayW<char16_t,::Array<char16_t>*>  _indentChars;

 __declspec(property(get=get_Base64Encoder)) ::Newtonsoft::Json::Utilities::Base64Encoder*  Base64Encoder;

 __declspec(property(get=get_ArrayPool, put=set_ArrayPool)) ::Newtonsoft::Json::IArrayPool_1<char16_t>*  ArrayPool;

 __declspec(property(get=get_Indentation, put=set_Indentation)) int32_t  Indentation;

 __declspec(property(get=get_QuoteChar, put=set_QuoteChar)) char16_t  QuoteChar;

 __declspec(property(get=get_IndentChar, put=set_IndentChar)) char16_t  IndentChar;

 __declspec(property(get=get_QuoteName, put=set_QuoteName)) bool  QuoteName;

constexpr void __set__writer(::System::IO::TextWriter*  value) ;

constexpr ::System::IO::TextWriter* __get__writer() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::TextWriter*> __get__writer() const;

constexpr void __set__base64Encoder(::Newtonsoft::Json::Utilities::Base64Encoder*  value) ;

constexpr ::Newtonsoft::Json::Utilities::Base64Encoder* __get__base64Encoder() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::Base64Encoder*> __get__base64Encoder() const;

constexpr void __set__indentChar(char16_t  value) ;

constexpr char16_t& __get__indentChar() ;

constexpr char16_t const& __get__indentChar() const;

constexpr void __set__indentation(int32_t  value) ;

constexpr int32_t& __get__indentation() ;

constexpr int32_t const& __get__indentation() const;

constexpr void __set__quoteChar(char16_t  value) ;

constexpr char16_t& __get__quoteChar() ;

constexpr char16_t const& __get__quoteChar() const;

constexpr void __set__quoteName(bool  value) ;

constexpr bool& __get__quoteName() ;

constexpr bool const& __get__quoteName() const;

constexpr void __set__charEscapeFlags(::ArrayW<bool,::Array<bool>*>  value) ;

constexpr ::ArrayW<bool,::Array<bool>*>& __get__charEscapeFlags() ;

constexpr ::ArrayW<bool,::Array<bool>*> const& __get__charEscapeFlags() const;

constexpr void __set__writeBuffer(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __get__writeBuffer() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __get__writeBuffer() const;

constexpr void __set__arrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>*  value) ;

constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>* __get__arrayPool() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::IArrayPool_1<char16_t>*> __get__arrayPool() const;

constexpr void __set__indentChars(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __get__indentChars() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __get__indentChars() const;

/// @brief Method get_Base64Encoder addr 0x26482dc size 0x74 virtual false final false
inline ::Newtonsoft::Json::Utilities::Base64Encoder* get_Base64Encoder() ;

/// @brief Method get_ArrayPool addr 0x2648350 size 0x8 virtual false final false
inline ::Newtonsoft::Json::IArrayPool_1<char16_t>* get_ArrayPool() ;

/// @brief Method set_ArrayPool addr 0x2648358 size 0x60 virtual false final false
inline void set_ArrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>*  value) ;

/// @brief Method get_Indentation addr 0x26483b8 size 0x8 virtual false final false
inline int32_t get_Indentation() ;

/// @brief Method set_Indentation addr 0x26483c0 size 0x60 virtual false final false
inline void set_Indentation(int32_t  value) ;

/// @brief Method get_QuoteChar addr 0x2648420 size 0x8 virtual false final false
inline char16_t get_QuoteChar() ;

/// @brief Method set_QuoteChar addr 0x2648428 size 0x70 virtual false final false
inline void set_QuoteChar(char16_t  value) ;

/// @brief Method get_IndentChar addr 0x2648504 size 0x8 virtual false final false
inline char16_t get_IndentChar() ;

/// @brief Method set_IndentChar addr 0x264850c size 0x18 virtual false final false
inline void set_IndentChar(char16_t  value) ;

/// @brief Method get_QuoteName addr 0x2648524 size 0x8 virtual false final false
inline bool get_QuoteName() ;

/// @brief Method set_QuoteName addr 0x264852c size 0xc virtual false final false
inline void set_QuoteName(bool  value) ;

static inline ::Newtonsoft::Json::JsonTextWriter* New_ctor(::System::IO::TextWriter*  textWriter) ;

/// @brief Method .ctor addr 0x2648538 size 0xe0 virtual false final false
inline void _ctor(::System::IO::TextWriter*  textWriter) ;

/// @brief Method Flush addr 0x2648618 size 0x20 virtual true final false
inline void Flush() ;

/// @brief Method Close addr 0x2648638 size 0x50 virtual true final false
inline void Close() ;

/// @brief Method WriteStartObject addr 0x2648688 size 0x3c virtual true final false
inline void WriteStartObject() ;

/// @brief Method WriteStartArray addr 0x26486c4 size 0x3c virtual true final false
inline void WriteStartArray() ;

/// @brief Method WriteStartConstructor addr 0x2648700 size 0xac virtual true final false
inline void WriteStartConstructor(::StringW  name) ;

/// @brief Method WriteEnd addr 0x26487ac size 0xd8 virtual true final false
inline void WriteEnd(::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method WritePropertyName addr 0x26488b8 size 0x50 virtual true final false
inline void WritePropertyName(::StringW  name) ;

/// @brief Method WritePropertyName addr 0x26489dc size 0xc4 virtual true final false
inline void WritePropertyName(::StringW  name, bool  escape) ;

/// @brief Method OnStringEscapeHandlingChanged addr 0x2648aa0 size 0x4 virtual true final false
inline void OnStringEscapeHandlingChanged() ;

/// @brief Method UpdateCharEscapeFlags addr 0x2648498 size 0x6c virtual false final false
inline void UpdateCharEscapeFlags() ;

/// @brief Method WriteIndent addr 0x2648aa4 size 0x104 virtual true final false
inline void WriteIndent() ;

/// @brief Method WriteValueDelimiter addr 0x2648ba8 size 0x28 virtual true final false
inline void WriteValueDelimiter() ;

/// @brief Method WriteIndentSpace addr 0x2648bd0 size 0x28 virtual true final false
inline void WriteIndentSpace() ;

/// @brief Method WriteValueInternal addr 0x2648bf8 size 0x24 virtual false final false
inline void WriteValueInternal(::StringW  value, ::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method WriteValue addr 0x2648c1c size 0x8 virtual true final false
inline void WriteValue(::System::Object*  value) ;

/// @brief Method WriteNull addr 0x2648c24 size 0x84 virtual true final false
inline void WriteNull() ;

/// @brief Method WriteUndefined addr 0x2648ca8 size 0x84 virtual true final false
inline void WriteUndefined() ;

/// @brief Method WriteRaw addr 0x2648d2c size 0x40 virtual true final false
inline void WriteRaw(::StringW  json) ;

/// @brief Method WriteValue addr 0x2648d6c size 0xa4 virtual true final false
inline void WriteValue(::StringW  value) ;

/// @brief Method WriteEscapedString addr 0x2648908 size 0xd4 virtual false final false
inline void WriteEscapedString(::StringW  value, bool  quote) ;

/// @brief Method WriteValue addr 0x2648e3c size 0x30 virtual true final false
inline void WriteValue(int32_t  value) ;

/// @brief Method WriteValue addr 0x2648ee4 size 0x30 virtual true final false
inline void WriteValue(uint32_t  value) ;

/// @brief Method WriteValue addr 0x2648f14 size 0x30 virtual true final false
inline void WriteValue(int64_t  value) ;

/// @brief Method WriteValue addr 0x2648f44 size 0x30 virtual true final false
inline void WriteValue(uint64_t  value) ;

/// @brief Method WriteValue addr 0x264905c size 0xa8 virtual true final false
inline void WriteValue(float_t  value) ;

/// @brief Method WriteValue addr 0x26491f4 size 0xf0 virtual true final false
inline void WriteValue(::System::Nullable_1<float_t>  value) ;

/// @brief Method WriteValue addr 0x26492e4 size 0xa8 virtual true final false
inline void WriteValue(double_t  value) ;

/// @brief Method WriteValue addr 0x2649478 size 0xfc virtual true final false
inline void WriteValue(::System::Nullable_1<double_t>  value) ;

/// @brief Method WriteValue addr 0x2649574 size 0x94 virtual true final false
inline void WriteValue(bool  value) ;

/// @brief Method WriteValue addr 0x2649674 size 0x30 virtual true final false
inline void WriteValue(int16_t  value) ;

/// @brief Method WriteValue addr 0x26496a4 size 0x30 virtual true final false
inline void WriteValue(uint16_t  value) ;

/// @brief Method WriteValue addr 0x26496d4 size 0x94 virtual true final false
inline void WriteValue(char16_t  value) ;

/// @brief Method WriteValue addr 0x26497f4 size 0x30 virtual true final false
inline void WriteValue(uint8_t  value) ;

/// @brief Method WriteValue addr 0x2649824 size 0x30 virtual true final false
inline void WriteValue(int8_t  value) ;

/// @brief Method WriteValue addr 0x2649854 size 0x9c virtual true final false
inline void WriteValue(::System::Decimal  value) ;

/// @brief Method WriteValue addr 0x26499b8 size 0x1f0 virtual true final false
inline void WriteValue(::System::DateTime  value) ;

/// @brief Method WriteValue addr 0x2649ba8 size 0xb8 virtual true final false
inline void WriteValue(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method WriteValue addr 0x2649c60 size 0x1fc virtual true final false
inline void WriteValue(::System::DateTimeOffset  value) ;

/// @brief Method WriteValue addr 0x2649e5c size 0xfc virtual true final false
inline void WriteValue(::System::Guid  value) ;

/// @brief Method WriteValue addr 0x2649f58 size 0x94 virtual true final false
inline void WriteValue(::System::TimeSpan  value) ;

/// @brief Method WriteValue addr 0x2649fec size 0xc0 virtual true final false
inline void WriteValue(::System::Uri*  value) ;

/// @brief Method WriteComment addr 0x264a0ac size 0xb8 virtual true final false
inline void WriteComment(::StringW  text) ;

/// @brief Method WriteWhitespace addr 0x264a164 size 0x40 virtual true final false
inline void WriteWhitespace(::StringW  ws) ;

/// @brief Method EnsureWriteBuffer addr 0x2648e10 size 0x2c virtual false final false
inline void EnsureWriteBuffer() ;

/// @brief Method WriteIntegerValue addr 0x2648e6c size 0x78 virtual false final false
inline void WriteIntegerValue(int64_t  value) ;

/// @brief Method WriteIntegerValue addr 0x2648f74 size 0xe8 virtual false final false
inline void WriteIntegerValue(uint64_t  uvalue) ;

// Ctor Parameters [CppParam { name: "", ty: "JsonTextWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonTextWriter(JsonTextWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonTextWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonTextWriter(JsonTextWriter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JsonTextWriter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextWriter, 0xa0>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextWriter*, "Newtonsoft.Json", "JsonTextWriter");
