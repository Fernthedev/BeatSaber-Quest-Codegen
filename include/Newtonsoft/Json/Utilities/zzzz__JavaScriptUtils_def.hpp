#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JavaScriptUtils)
namespace System::IO {
class TextWriter;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace Newtonsoft::Json {
template<typename T>
class IArrayPool_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class JavaScriptUtils;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::JavaScriptUtils);
// Type: Newtonsoft.Json.Utilities::JavaScriptUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11889))
// CS Name: ::Newtonsoft.Json.Utilities::JavaScriptUtils*
class CORDL_TYPE JavaScriptUtils : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field UnicodeTextLength offset 0x0
static constexpr int32_t  UnicodeTextLength{static_cast<int32_t>(0x6)};

/// @brief Field EscapedUnicodeText offset 0x0
static constexpr ::ConstString  EscapedUnicodeText{u"!"};

static inline void setStaticF_SingleQuoteCharEscapeFlags(::ArrayW<bool,::Array<bool>*>  value) ;

static inline ::ArrayW<bool,::Array<bool>*> getStaticF_SingleQuoteCharEscapeFlags() ;

static inline void setStaticF_DoubleQuoteCharEscapeFlags(::ArrayW<bool,::Array<bool>*>  value) ;

static inline ::ArrayW<bool,::Array<bool>*> getStaticF_DoubleQuoteCharEscapeFlags() ;

static inline void setStaticF_HtmlCharEscapeFlags(::ArrayW<bool,::Array<bool>*>  value) ;

static inline ::ArrayW<bool,::Array<bool>*> getStaticF_HtmlCharEscapeFlags() ;

/// @brief Method GetCharEscapeFlags addr 0x26637d4 size 0x98 virtual false final false
static inline ::ArrayW<bool,::Array<bool>*> GetCharEscapeFlags(::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling, char16_t  quoteChar) ;

/// @brief Method ShouldEscapeJavaScriptString addr 0x266386c size 0x88 virtual false final false
static inline bool ShouldEscapeJavaScriptString(::StringW  s, ::ArrayW<bool,::Array<bool>*>  charEscapeFlags) ;

/// @brief Method WriteEscapedJavaScriptString addr 0x26638f4 size 0x4ec virtual false final false
static inline void WriteEscapedJavaScriptString(::System::IO::TextWriter*  writer, ::StringW  s, char16_t  delimiter, bool  appendDelimiters, ::ArrayW<bool,::Array<bool>*>  charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling, ::Newtonsoft::Json::IArrayPool_1<char16_t>*  bufferPool, ByRef<::ArrayW<char16_t,::Array<char16_t>*>>  writeBuffer) ;

/// @brief Method ToEscapedJavaScriptString addr 0x2663e98 size 0x24c virtual false final false
static inline ::StringW ToEscapedJavaScriptString(::StringW  value, char16_t  delimiter, bool  appendDelimiters, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling) ;

// Ctor Parameters [CppParam { name: "", ty: "JavaScriptUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JavaScriptUtils(JavaScriptUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JavaScriptUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JavaScriptUtils(JavaScriptUtils const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JavaScriptUtils()  = default;
public:


// Fields

// Static field SingleQuoteCharEscapeFlags

// Static field DoubleQuoteCharEscapeFlags

// Static field HtmlCharEscapeFlags


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::JavaScriptUtils, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::JavaScriptUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::JavaScriptUtils*, "Newtonsoft.Json.Utilities", "JavaScriptUtils");
