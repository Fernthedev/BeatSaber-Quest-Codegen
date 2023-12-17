#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__HtmlEncodedRawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HtmlEncodedRawTextWriterIndent)
namespace System::IO {
class Stream;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::IO {
class TextWriter;
}
// Forward declare root types
namespace System::Xml {
class HtmlEncodedRawTextWriterIndent;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::HtmlEncodedRawTextWriterIndent);
// Type: System.Xml::HtmlEncodedRawTextWriterIndent
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11416))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11417))
// CS Name: ::System.Xml::HtmlEncodedRawTextWriterIndent*
class CORDL_TYPE HtmlEncodedRawTextWriterIndent : public ::System::Xml::HtmlEncodedRawTextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x100};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x100 - sizeof(::System::Xml::HtmlEncodedRawTextWriter)]{};

/// @brief Field indentLevel offset 0xe4
 __declspec(property(get=__get_indentLevel, put=__set_indentLevel)) int32_t  indentLevel;

/// @brief Field endBlockPos offset 0xe8
 __declspec(property(get=__get_endBlockPos, put=__set_endBlockPos)) int32_t  endBlockPos;

/// @brief Field indentChars offset 0xf0
 __declspec(property(get=__get_indentChars, put=__set_indentChars)) ::StringW  indentChars;

/// @brief Field newLineOnAttributes offset 0xf8
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

static inline ::System::Xml::HtmlEncodedRawTextWriterIndent* New_ctor(::System::IO::TextWriter*  writer, ::System::Xml::XmlWriterSettings*  settings) ;

/// @brief Method .ctor addr 0x2851a58 size 0x48 virtual false final false
inline void _ctor(::System::IO::TextWriter*  writer, ::System::Xml::XmlWriterSettings*  settings) ;

static inline ::System::Xml::HtmlEncodedRawTextWriterIndent* New_ctor(::System::IO::Stream*  stream, ::System::Xml::XmlWriterSettings*  settings) ;

/// @brief Method .ctor addr 0x2851ac8 size 0x48 virtual false final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Xml::XmlWriterSettings*  settings) ;

/// @brief Method WriteDocType addr 0x2851b10 size 0x1c virtual true final false
inline void WriteDocType(::StringW  name, ::StringW  pubid, ::StringW  sysid, ::StringW  subset) ;

/// @brief Method WriteStartElement addr 0x2851b2c size 0x1b4 virtual true final false
inline void WriteStartElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method StartElementContent addr 0x2851d28 size 0x70 virtual true final false
inline void StartElementContent() ;

/// @brief Method WriteEndElement addr 0x2851d98 size 0xa0 virtual true final false
inline void WriteEndElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteStartAttribute addr 0x2851e38 size 0x70 virtual true final false
inline void WriteStartAttribute(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method FlushBuffer addr 0x2851ea8 size 0x28 virtual true final false
inline void FlushBuffer() ;

/// @brief Method Init addr 0x2851aa0 size 0x28 virtual false final false
inline void Init(::System::Xml::XmlWriterSettings*  settings) ;

/// @brief Method WriteIndent addr 0x2851ce0 size 0x48 virtual false final false
inline void WriteIndent() ;

// Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriterIndent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HtmlEncodedRawTextWriterIndent(HtmlEncodedRawTextWriterIndent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriterIndent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HtmlEncodedRawTextWriterIndent(HtmlEncodedRawTextWriterIndent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HtmlEncodedRawTextWriterIndent()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::HtmlEncodedRawTextWriterIndent, 0x100>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::HtmlEncodedRawTextWriterIndent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlEncodedRawTextWriterIndent*, "System.Xml", "HtmlEncodedRawTextWriterIndent");
