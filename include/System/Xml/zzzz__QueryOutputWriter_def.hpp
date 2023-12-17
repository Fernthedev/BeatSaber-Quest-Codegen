#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QueryOutputWriter)
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class BitStack;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Xml {
class XmlRawWriter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::Xml {
struct XmlStandalone;
}
// Forward declare root types
namespace System::Xml {
class QueryOutputWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::QueryOutputWriter);
// Type: System.Xml::QueryOutputWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11455))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11436))
// CS Name: ::System.Xml::QueryOutputWriter*
class CORDL_TYPE QueryOutputWriter : public ::System::Xml::XmlRawWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Xml::XmlRawWriter)]{};

/// @brief Field wrapped offset 0x20
 __declspec(property(get=__get_wrapped, put=__set_wrapped)) ::System::Xml::XmlRawWriter*  wrapped;

/// @brief Field inCDataSection offset 0x28
 __declspec(property(get=__get_inCDataSection, put=__set_inCDataSection)) bool  inCDataSection;

/// @brief Field lookupCDataElems offset 0x30
 __declspec(property(get=__get_lookupCDataElems, put=__set_lookupCDataElems)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,int32_t>*  lookupCDataElems;

/// @brief Field bitsCData offset 0x38
 __declspec(property(get=__get_bitsCData, put=__set_bitsCData)) ::System::Xml::BitStack*  bitsCData;

/// @brief Field qnameCData offset 0x40
 __declspec(property(get=__get_qnameCData, put=__set_qnameCData)) ::System::Xml::XmlQualifiedName*  qnameCData;

/// @brief Field outputDocType offset 0x48
 __declspec(property(get=__get_outputDocType, put=__set_outputDocType)) bool  outputDocType;

/// @brief Field checkWellFormedDoc offset 0x49
 __declspec(property(get=__get_checkWellFormedDoc, put=__set_checkWellFormedDoc)) bool  checkWellFormedDoc;

/// @brief Field hasDocElem offset 0x4a
 __declspec(property(get=__get_hasDocElem, put=__set_hasDocElem)) bool  hasDocElem;

/// @brief Field inAttr offset 0x4b
 __declspec(property(get=__get_inAttr, put=__set_inAttr)) bool  inAttr;

/// @brief Field systemId offset 0x50
 __declspec(property(get=__get_systemId, put=__set_systemId)) ::StringW  systemId;

/// @brief Field publicId offset 0x58
 __declspec(property(get=__get_publicId, put=__set_publicId)) ::StringW  publicId;

/// @brief Field depth offset 0x60
 __declspec(property(get=__get_depth, put=__set_depth)) int32_t  depth;

 __declspec(property(put=set_NamespaceResolver)) ::System::Xml::IXmlNamespaceResolver*  NamespaceResolver;

 __declspec(property(get=get_SupportsNamespaceDeclarationInChunks)) bool  SupportsNamespaceDeclarationInChunks;

constexpr void __set_wrapped(::System::Xml::XmlRawWriter*  value) ;

constexpr ::System::Xml::XmlRawWriter* __get_wrapped() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlRawWriter*> __get_wrapped() const;

constexpr void __set_inCDataSection(bool  value) ;

constexpr bool& __get_inCDataSection() ;

constexpr bool const& __get_inCDataSection() const;

constexpr void __set_lookupCDataElems(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,int32_t>* __get_lookupCDataElems() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,int32_t>*> __get_lookupCDataElems() const;

constexpr void __set_bitsCData(::System::Xml::BitStack*  value) ;

constexpr ::System::Xml::BitStack* __get_bitsCData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::BitStack*> __get_bitsCData() const;

constexpr void __set_qnameCData(::System::Xml::XmlQualifiedName*  value) ;

constexpr ::System::Xml::XmlQualifiedName* __get_qnameCData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> __get_qnameCData() const;

constexpr void __set_outputDocType(bool  value) ;

constexpr bool& __get_outputDocType() ;

constexpr bool const& __get_outputDocType() const;

constexpr void __set_checkWellFormedDoc(bool  value) ;

constexpr bool& __get_checkWellFormedDoc() ;

constexpr bool const& __get_checkWellFormedDoc() const;

constexpr void __set_hasDocElem(bool  value) ;

constexpr bool& __get_hasDocElem() ;

constexpr bool const& __get_hasDocElem() const;

constexpr void __set_inAttr(bool  value) ;

constexpr bool& __get_inAttr() ;

constexpr bool const& __get_inAttr() const;

constexpr void __set_systemId(::StringW  value) ;

constexpr ::StringW& __get_systemId() ;

constexpr ::StringW const& __get_systemId() const;

constexpr void __set_publicId(::StringW  value) ;

constexpr ::StringW& __get_publicId() ;

constexpr ::StringW const& __get_publicId() const;

constexpr void __set_depth(int32_t  value) ;

constexpr int32_t& __get_depth() ;

constexpr int32_t const& __get_depth() const;

static inline ::System::Xml::QueryOutputWriter* New_ctor(::System::Xml::XmlRawWriter*  writer, ::System::Xml::XmlWriterSettings*  settings) ;

/// @brief Method .ctor addr 0x2853ad4 size 0x2d4 virtual false final false
inline void _ctor(::System::Xml::XmlRawWriter*  writer, ::System::Xml::XmlWriterSettings*  settings) ;

/// @brief Method set_NamespaceResolver addr 0x2853db0 size 0x2c virtual true final false
inline void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver*  value) ;

/// @brief Method WriteXmlDeclaration addr 0x2853ddc size 0x24 virtual true final false
inline void WriteXmlDeclaration(::System::Xml::XmlStandalone  standalone) ;

/// @brief Method WriteXmlDeclaration addr 0x2853e00 size 0x24 virtual true final false
inline void WriteXmlDeclaration(::StringW  xmldecl) ;

/// @brief Method WriteDocType addr 0x2853e24 size 0x38 virtual true final false
inline void WriteDocType(::StringW  name, ::StringW  pubid, ::StringW  sysid, ::StringW  subset) ;

/// @brief Method WriteStartElement addr 0x2853e5c size 0x1c8 virtual true final false
inline void WriteStartElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteEndElement addr 0x285402c size 0x70 virtual true final false
inline void WriteEndElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteFullEndElement addr 0x285409c size 0x70 virtual true final false
inline void WriteFullEndElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method StartElementContent addr 0x285410c size 0x24 virtual true final false
inline void StartElementContent() ;

/// @brief Method WriteStartAttribute addr 0x2854130 size 0x2c virtual true final false
inline void WriteStartAttribute(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteEndAttribute addr 0x285415c size 0x2c virtual true final false
inline void WriteEndAttribute() ;

/// @brief Method WriteNamespaceDeclaration addr 0x2854188 size 0x24 virtual true final false
inline void WriteNamespaceDeclaration(::StringW  prefix, ::StringW  ns) ;

/// @brief Method get_SupportsNamespaceDeclarationInChunks addr 0x28541ac size 0x24 virtual true final false
inline bool get_SupportsNamespaceDeclarationInChunks() ;

/// @brief Method WriteStartNamespaceDeclaration addr 0x28541d0 size 0x24 virtual true final false
inline void WriteStartNamespaceDeclaration(::StringW  prefix) ;

/// @brief Method WriteEndNamespaceDeclaration addr 0x28541f4 size 0x24 virtual true final false
inline void WriteEndNamespaceDeclaration() ;

/// @brief Method WriteCData addr 0x2854218 size 0x24 virtual true final false
inline void WriteCData(::StringW  text) ;

/// @brief Method WriteComment addr 0x285423c size 0x2c virtual true final false
inline void WriteComment(::StringW  text) ;

/// @brief Method WriteProcessingInstruction addr 0x2854268 size 0x2c virtual true final false
inline void WriteProcessingInstruction(::StringW  name, ::StringW  text) ;

/// @brief Method WriteWhitespace addr 0x2854294 size 0x70 virtual true final false
inline void WriteWhitespace(::StringW  ws) ;

/// @brief Method WriteString addr 0x2854340 size 0x70 virtual true final false
inline void WriteString(::StringW  text) ;

/// @brief Method WriteChars addr 0x28543b0 size 0x88 virtual true final false
inline void WriteChars(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteEntityRef addr 0x2854438 size 0x2c virtual true final false
inline void WriteEntityRef(::StringW  name) ;

/// @brief Method WriteCharEntity addr 0x2854464 size 0x2c virtual true final false
inline void WriteCharEntity(char16_t  ch) ;

/// @brief Method WriteSurrogateCharEntity addr 0x2854490 size 0x2c virtual true final false
inline void WriteSurrogateCharEntity(char16_t  lowChar, char16_t  highChar) ;

/// @brief Method WriteRaw addr 0x28544bc size 0x88 virtual true final false
inline void WriteRaw(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteRaw addr 0x2854544 size 0x70 virtual true final false
inline void WriteRaw(::StringW  data) ;

/// @brief Method Close addr 0x28545b4 size 0xa8 virtual true final false
inline void Close() ;

/// @brief Method Flush addr 0x285465c size 0x24 virtual true final false
inline void Flush() ;

/// @brief Method StartCDataSection addr 0x2854304 size 0x3c virtual false final false
inline bool StartCDataSection() ;

/// @brief Method EndCDataSection addr 0x2854024 size 0x8 virtual false final false
inline void EndCDataSection() ;

// Ctor Parameters [CppParam { name: "", ty: "QueryOutputWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QueryOutputWriter(QueryOutputWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QueryOutputWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QueryOutputWriter(QueryOutputWriter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 QueryOutputWriter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::QueryOutputWriter, 0x68>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::QueryOutputWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::QueryOutputWriter*, "System.Xml", "QueryOutputWriter");
