#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__HtmlUtf8RawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HtmlUtf8RawTextWriterIndent)
namespace System::IO {
class Stream;
}
namespace System::Xml {
class XmlWriterSettings;
}
// Forward declare root types
namespace System::Xml {
class HtmlUtf8RawTextWriterIndent;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::HtmlUtf8RawTextWriterIndent);
// Type: System.Xml::HtmlUtf8RawTextWriterIndent
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11419))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11420))
// CS Name: ::System.Xml::HtmlUtf8RawTextWriterIndent*
class CORDL_TYPE HtmlUtf8RawTextWriterIndent : public ::System::Xml::HtmlUtf8RawTextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xd0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xd0 - sizeof(::System::Xml::HtmlUtf8RawTextWriter)]{};

/// @brief Field indentLevel offset 0xb4
 __declspec(property(get=__get_indentLevel, put=__set_indentLevel)) int32_t  indentLevel;

/// @brief Field endBlockPos offset 0xb8
 __declspec(property(get=__get_endBlockPos, put=__set_endBlockPos)) int32_t  endBlockPos;

/// @brief Field indentChars offset 0xc0
 __declspec(property(get=__get_indentChars, put=__set_indentChars)) ::StringW  indentChars;

/// @brief Field newLineOnAttributes offset 0xc8
 __declspec(property(get=__get_newLineOnAttributes, put=__set_newLineOnAttributes)) bool  newLineOnAttributes;

constexpr void __set_indentLevel(int32_t  value) ;

constexpr int32_t& __get_indentLevel() ;

constexpr int32_t const& __get_indentLevel() const;

constexpr void __set_endBlockPos(int32_t  value) ;

constexpr int32_t& __get_endBlockPos() ;

constexpr int32_t const& __get_endBlockPos() const;

constexpr void __set_indentChars(::StringW  value) ;

constexpr ::StringW& __get_indentChars() ;

constexpr ::StringW const& __get_indentChars() const;

constexpr void __set_newLineOnAttributes(bool  value) ;

constexpr bool& __get_newLineOnAttributes() ;

constexpr bool const& __get_newLineOnAttributes() const;

static inline ::System::Xml::HtmlUtf8RawTextWriterIndent* New_ctor(::System::IO::Stream*  stream, ::System::Xml::XmlWriterSettings*  settings) ;

/// @brief Method .ctor addr 0x285353c size 0x4c virtual false final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Xml::XmlWriterSettings*  settings) ;

/// @brief Method WriteDocType addr 0x28535b0 size 0x1c virtual true final false
inline void WriteDocType(::StringW  name, ::StringW  pubid, ::StringW  sysid, ::StringW  subset) ;

/// @brief Method WriteStartElement addr 0x28535cc size 0x1a4 virtual true final false
inline void WriteStartElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method StartElementContent addr 0x28537c0 size 0x74 virtual true final false
inline void StartElementContent() ;

/// @brief Method WriteEndElement addr 0x2853834 size 0xa0 virtual true final false
inline void WriteEndElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteStartAttribute addr 0x28538d4 size 0x74 virtual true final false
inline void WriteStartAttribute(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method FlushBuffer addr 0x2853948 size 0x2c virtual true final false
inline void FlushBuffer() ;

/// @brief Method Init addr 0x2853588 size 0x28 virtual false final false
inline void Init(::System::Xml::XmlWriterSettings*  settings) ;

/// @brief Method WriteIndent addr 0x2853770 size 0x50 virtual false final false
inline void WriteIndent() ;

// Ctor Parameters [CppParam { name: "", ty: "HtmlUtf8RawTextWriterIndent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HtmlUtf8RawTextWriterIndent(HtmlUtf8RawTextWriterIndent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HtmlUtf8RawTextWriterIndent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HtmlUtf8RawTextWriterIndent(HtmlUtf8RawTextWriterIndent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HtmlUtf8RawTextWriterIndent()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::HtmlUtf8RawTextWriterIndent, 0xd0>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::HtmlUtf8RawTextWriterIndent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlUtf8RawTextWriterIndent*, "System.Xml", "HtmlUtf8RawTextWriterIndent");
