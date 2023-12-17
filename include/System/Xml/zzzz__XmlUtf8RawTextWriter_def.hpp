#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlUtf8RawTextWriter)
namespace System::Xml {
struct NewLineHandling;
}
namespace System::Xml {
struct XmlOutputMethod;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::IO {
class Stream;
}
namespace System::Xml {
struct XmlCharType;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
struct XmlStandalone;
}
// Forward declare root types
namespace System::Xml {
class XmlUtf8RawTextWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlUtf8RawTextWriter);
// Type: System.Xml::XmlUtf8RawTextWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11455))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11475))
// CS Name: ::System.Xml::XmlUtf8RawTextWriter*
class CORDL_TYPE XmlUtf8RawTextWriter : public ::System::Xml::XmlRawWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::System::Xml::XmlRawWriter)]{};

/// @brief Field useAsync offset 0x20
 __declspec(property(get=__get_useAsync, put=__set_useAsync)) bool  useAsync;

/// @brief Field bufBytes offset 0x28
 __declspec(property(get=__get_bufBytes, put=__set_bufBytes)) ::ArrayW<uint8_t,::Array<uint8_t>*>  bufBytes;

/// @brief Field stream offset 0x30
 __declspec(property(get=__get_stream, put=__set_stream)) ::System::IO::Stream*  stream;

/// @brief Field encoding offset 0x38
 __declspec(property(get=__get_encoding, put=__set_encoding)) ::System::Text::Encoding*  encoding;

/// @brief Field xmlCharType offset 0x40
 __declspec(property(get=__get_xmlCharType, put=__set_xmlCharType)) ::System::Xml::XmlCharType  xmlCharType;

/// @brief Field bufPos offset 0x48
 __declspec(property(get=__get_bufPos, put=__set_bufPos)) int32_t  bufPos;

/// @brief Field textPos offset 0x4c
 __declspec(property(get=__get_textPos, put=__set_textPos)) int32_t  textPos;

/// @brief Field contentPos offset 0x50
 __declspec(property(get=__get_contentPos, put=__set_contentPos)) int32_t  contentPos;

/// @brief Field cdataPos offset 0x54
 __declspec(property(get=__get_cdataPos, put=__set_cdataPos)) int32_t  cdataPos;

/// @brief Field attrEndPos offset 0x58
 __declspec(property(get=__get_attrEndPos, put=__set_attrEndPos)) int32_t  attrEndPos;

/// @brief Field bufLen offset 0x5c
 __declspec(property(get=__get_bufLen, put=__set_bufLen)) int32_t  bufLen;

/// @brief Field writeToNull offset 0x60
 __declspec(property(get=__get_writeToNull, put=__set_writeToNull)) bool  writeToNull;

/// @brief Field hadDoubleBracket offset 0x61
 __declspec(property(get=__get_hadDoubleBracket, put=__set_hadDoubleBracket)) bool  hadDoubleBracket;

/// @brief Field inAttributeValue offset 0x62
 __declspec(property(get=__get_inAttributeValue, put=__set_inAttributeValue)) bool  inAttributeValue;

/// @brief Field newLineHandling offset 0x64
 __declspec(property(get=__get_newLineHandling, put=__set_newLineHandling)) ::System::Xml::NewLineHandling  newLineHandling;

/// @brief Field closeOutput offset 0x68
 __declspec(property(get=__get_closeOutput, put=__set_closeOutput)) bool  closeOutput;

/// @brief Field omitXmlDeclaration offset 0x69
 __declspec(property(get=__get_omitXmlDeclaration, put=__set_omitXmlDeclaration)) bool  omitXmlDeclaration;

/// @brief Field newLineChars offset 0x70
 __declspec(property(get=__get_newLineChars, put=__set_newLineChars)) ::StringW  newLineChars;

/// @brief Field checkCharacters offset 0x78
 __declspec(property(get=__get_checkCharacters, put=__set_checkCharacters)) bool  checkCharacters;

/// @brief Field standalone offset 0x7c
 __declspec(property(get=__get_standalone, put=__set_standalone)) ::System::Xml::XmlStandalone  standalone;

/// @brief Field outputMethod offset 0x80
 __declspec(property(get=__get_outputMethod, put=__set_outputMethod)) ::System::Xml::XmlOutputMethod  outputMethod;

/// @brief Field autoXmlDeclaration offset 0x84
 __declspec(property(get=__get_autoXmlDeclaration, put=__set_autoXmlDeclaration)) bool  autoXmlDeclaration;

/// @brief Field mergeCDataSections offset 0x85
 __declspec(property(get=__get_mergeCDataSections, put=__set_mergeCDataSections)) bool  mergeCDataSections;

 __declspec(property(get=get_SupportsNamespaceDeclarationInChunks)) bool  SupportsNamespaceDeclarationInChunks;

constexpr void __set_useAsync(bool  value) ;

constexpr bool& __get_useAsync() ;

constexpr bool const& __get_useAsync() const;

constexpr void __set_bufBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_bufBytes() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_bufBytes() const;

constexpr void __set_stream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_stream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_stream() const;

constexpr void __set_encoding(::System::Text::Encoding*  value) ;

constexpr ::System::Text::Encoding* __get_encoding() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> __get_encoding() const;

constexpr void __set_xmlCharType(::System::Xml::XmlCharType  value) ;

constexpr ::System::Xml::XmlCharType& __get_xmlCharType() ;

constexpr ::System::Xml::XmlCharType const& __get_xmlCharType() const;

constexpr void __set_bufPos(int32_t  value) ;

constexpr int32_t& __get_bufPos() ;

constexpr int32_t const& __get_bufPos() const;

constexpr void __set_textPos(int32_t  value) ;

constexpr int32_t& __get_textPos() ;

constexpr int32_t const& __get_textPos() const;

constexpr void __set_contentPos(int32_t  value) ;

constexpr int32_t& __get_contentPos() ;

constexpr int32_t const& __get_contentPos() const;

constexpr void __set_cdataPos(int32_t  value) ;

constexpr int32_t& __get_cdataPos() ;

constexpr int32_t const& __get_cdataPos() const;

constexpr void __set_attrEndPos(int32_t  value) ;

constexpr int32_t& __get_attrEndPos() ;

constexpr int32_t const& __get_attrEndPos() const;

constexpr void __set_bufLen(int32_t  value) ;

constexpr int32_t& __get_bufLen() ;

constexpr int32_t const& __get_bufLen() const;

constexpr void __set_writeToNull(bool  value) ;

constexpr bool& __get_writeToNull() ;

constexpr bool const& __get_writeToNull() const;

constexpr void __set_hadDoubleBracket(bool  value) ;

constexpr bool& __get_hadDoubleBracket() ;

constexpr bool const& __get_hadDoubleBracket() const;

constexpr void __set_inAttributeValue(bool  value) ;

constexpr bool& __get_inAttributeValue() ;

constexpr bool const& __get_inAttributeValue() const;

constexpr void __set_newLineHandling(::System::Xml::NewLineHandling  value) ;

constexpr ::System::Xml::NewLineHandling& __get_newLineHandling() ;

constexpr ::System::Xml::NewLineHandling const& __get_newLineHandling() const;

constexpr void __set_closeOutput(bool  value) ;

constexpr bool& __get_closeOutput() ;

constexpr bool const& __get_closeOutput() const;

constexpr void __set_omitXmlDeclaration(bool  value) ;

constexpr bool& __get_omitXmlDeclaration() ;

constexpr bool const& __get_omitXmlDeclaration() const;

constexpr void __set_newLineChars(::StringW  value) ;

constexpr ::StringW& __get_newLineChars() ;

constexpr ::StringW const& __get_newLineChars() const;

constexpr void __set_checkCharacters(bool  value) ;

constexpr bool& __get_checkCharacters() ;

constexpr bool const& __get_checkCharacters() const;

constexpr void __set_standalone(::System::Xml::XmlStandalone  value) ;

constexpr ::System::Xml::XmlStandalone& __get_standalone() ;

constexpr ::System::Xml::XmlStandalone const& __get_standalone() const;

constexpr void __set_outputMethod(::System::Xml::XmlOutputMethod  value) ;

constexpr ::System::Xml::XmlOutputMethod& __get_outputMethod() ;

constexpr ::System::Xml::XmlOutputMethod const& __get_outputMethod() const;

constexpr void __set_autoXmlDeclaration(bool  value) ;

constexpr bool& __get_autoXmlDeclaration() ;

constexpr bool const& __get_autoXmlDeclaration() const;

constexpr void __set_mergeCDataSections(bool  value) ;

constexpr bool& __get_mergeCDataSections() ;

constexpr bool const& __get_mergeCDataSections() const;

static inline ::System::Xml::XmlUtf8RawTextWriter* New_ctor(::System::Xml::XmlWriterSettings*  settings) ;

/// @brief Method .ctor addr 0x28753e8 size 0xdc virtual false final false
inline void _ctor(::System::Xml::XmlWriterSettings*  settings) ;

static inline ::System::Xml::XmlUtf8RawTextWriter* New_ctor(::System::IO::Stream*  stream, ::System::Xml::XmlWriterSettings*  settings) ;

/// @brief Method .ctor addr 0x2875824 size 0x148 virtual false final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Xml::XmlWriterSettings*  settings) ;

/// @brief Method WriteXmlDeclaration addr 0x287596c size 0x160 virtual true final false
inline void WriteXmlDeclaration(::System::Xml::XmlStandalone  standalone) ;

/// @brief Method WriteXmlDeclaration addr 0x2875b08 size 0x78 virtual true final false
inline void WriteXmlDeclaration(::StringW  xmldecl) ;

/// @brief Method WriteDocType addr 0x2875b80 size 0x1f0 virtual true final false
inline void WriteDocType(::StringW  name, ::StringW  pubid, ::StringW  sysid, ::StringW  subset) ;

/// @brief Method WriteStartElement addr 0x2875d70 size 0xa4 virtual true final false
inline void WriteStartElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method StartElementContent addr 0x2875e14 size 0x48 virtual true final false
inline void StartElementContent() ;

/// @brief Method WriteEndElement addr 0x2875e5c size 0x158 virtual true final false
inline void WriteEndElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteFullEndElement addr 0x2875fb4 size 0xf4 virtual true final false
inline void WriteFullEndElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteStartAttribute addr 0x28760a8 size 0x10c virtual true final false
inline void WriteStartAttribute(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteEndAttribute addr 0x28761b4 size 0x4c virtual true final false
inline void WriteEndAttribute() ;

/// @brief Method WriteNamespaceDeclaration addr 0x2876200 size 0x54 virtual true final false
inline void WriteNamespaceDeclaration(::StringW  prefix, ::StringW  namespaceName) ;

/// @brief Method get_SupportsNamespaceDeclarationInChunks addr 0x2876254 size 0x8 virtual true final false
inline bool get_SupportsNamespaceDeclarationInChunks() ;

/// @brief Method WriteStartNamespaceDeclaration addr 0x287625c size 0xf4 virtual true final false
inline void WriteStartNamespaceDeclaration(::StringW  prefix) ;

/// @brief Method WriteEndNamespaceDeclaration addr 0x2876350 size 0x4c virtual true final false
inline void WriteEndNamespaceDeclaration() ;

/// @brief Method WriteCData addr 0x287639c size 0x25c virtual true final false
inline void WriteCData(::StringW  text) ;

/// @brief Method WriteComment addr 0x2876918 size 0x158 virtual true final false
inline void WriteComment(::StringW  text) ;

/// @brief Method WriteProcessingInstruction addr 0x2876da4 size 0x128 virtual true final false
inline void WriteProcessingInstruction(::StringW  name, ::StringW  text) ;

/// @brief Method WriteEntityRef addr 0x2876ecc size 0xa0 virtual true final false
inline void WriteEntityRef(::StringW  name) ;

/// @brief Method WriteCharEntity addr 0x2876f6c size 0x1cc virtual true final false
inline void WriteCharEntity(char16_t  ch) ;

/// @brief Method WriteWhitespace addr 0x2877138 size 0x50 virtual true final false
inline void WriteWhitespace(::StringW  ws) ;

/// @brief Method WriteString addr 0x287773c size 0x50 virtual true final false
inline void WriteString(::StringW  text) ;

/// @brief Method WriteSurrogateCharEntity addr 0x287778c size 0x14c virtual true final false
inline void WriteSurrogateCharEntity(char16_t  lowChar, char16_t  highChar) ;

/// @brief Method WriteChars addr 0x28778d8 size 0x40 virtual true final false
inline void WriteChars(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteRaw addr 0x2877918 size 0x40 virtual true final false
inline void WriteRaw(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteRaw addr 0x2877ba4 size 0x48 virtual true final false
inline void WriteRaw(::StringW  data) ;

/// @brief Method Close addr 0x2877bec size 0x74 virtual true final false
inline void Close() ;

/// @brief Method Flush addr 0x2877c64 size 0x3c virtual true final false
inline void Flush() ;

/// @brief Method FlushBuffer addr 0x2877ca0 size 0x17c virtual true final false
inline void FlushBuffer() ;

/// @brief Method FlushEncoder addr 0x2877c60 size 0x4 virtual false final false
inline void FlushEncoder() ;

/// @brief Method WriteAttributeTextBlock addr 0x2877188 size 0x2f4 virtual false final false
inline void WriteAttributeTextBlock(::cordl_internals::Ptr<char16_t>  pSrc, ::cordl_internals::Ptr<char16_t>  pSrcEnd) ;

/// @brief Method WriteElementTextBlock addr 0x287747c size 0x2c0 virtual false final false
inline void WriteElementTextBlock(::cordl_internals::Ptr<char16_t>  pSrc, ::cordl_internals::Ptr<char16_t>  pSrcEnd) ;

/// @brief Method RawText addr 0x2875acc size 0x3c virtual false final false
inline void RawText(::StringW  s) ;

/// @brief Method RawText addr 0x28781bc size 0x18c virtual false final false
inline void RawText(::cordl_internals::Ptr<char16_t>  pSrcBegin, ::cordl_internals::Ptr<char16_t>  pSrcEnd) ;

/// @brief Method WriteRawWithCharChecking addr 0x2877958 size 0x24c virtual false final false
inline void WriteRawWithCharChecking(::cordl_internals::Ptr<char16_t>  pSrcBegin, ::cordl_internals::Ptr<char16_t>  pSrcEnd) ;

/// @brief Method WriteCommentOrPi addr 0x2876a70 size 0x334 virtual false final false
inline void WriteCommentOrPi(::StringW  text, int32_t  stopChar) ;

/// @brief Method WriteCDataSection addr 0x28765f8 size 0x320 virtual false final false
inline void WriteCDataSection(::StringW  text) ;

/// @brief Method IsSurrogateByte addr 0x287838c size 0x10 virtual false final false
static inline bool IsSurrogateByte(uint8_t  b) ;

/// @brief Method EncodeSurrogate addr 0x2877edc size 0x198 virtual false final false
static inline ::cordl_internals::Ptr<uint8_t> EncodeSurrogate(::cordl_internals::Ptr<char16_t>  pSrc, ::cordl_internals::Ptr<char16_t>  pSrcEnd, ::cordl_internals::Ptr<uint8_t>  pDst) ;

/// @brief Method InvalidXmlChar addr 0x2878074 size 0xb4 virtual false final false
inline ::cordl_internals::Ptr<uint8_t> InvalidXmlChar(int32_t  ch, ::cordl_internals::Ptr<uint8_t>  pDst, bool  entitize) ;

/// @brief Method EncodeChar addr 0x2878448 size 0xdc virtual false final false
inline void EncodeChar(ByRef<::cordl_internals::Ptr<char16_t>>  pSrc, ::cordl_internals::Ptr<char16_t>  pSrcEnd, ByRef<::cordl_internals::Ptr<uint8_t>>  pDst) ;

/// @brief Method EncodeMultibyteUTF8 addr 0x2878128 size 0x40 virtual false final false
static inline ::cordl_internals::Ptr<uint8_t> EncodeMultibyteUTF8(int32_t  ch, ::cordl_internals::Ptr<uint8_t>  pDst) ;

/// @brief Method CharToUTF8 addr 0x2878524 size 0xd0 virtual false final false
static inline void CharToUTF8(ByRef<::cordl_internals::Ptr<char16_t>>  pSrc, ::cordl_internals::Ptr<char16_t>  pSrcEnd, ByRef<::cordl_internals::Ptr<uint8_t>>  pDst) ;

/// @brief Method WriteNewLine addr 0x2878168 size 0x54 virtual false final false
inline ::cordl_internals::Ptr<uint8_t> WriteNewLine(::cordl_internals::Ptr<uint8_t>  pDst) ;

/// @brief Method LtEntity addr 0x2877e3c size 0x10 virtual false final false
static inline ::cordl_internals::Ptr<uint8_t> LtEntity(::cordl_internals::Ptr<uint8_t>  pDst) ;

/// @brief Method GtEntity addr 0x2877e4c size 0x10 virtual false final false
static inline ::cordl_internals::Ptr<uint8_t> GtEntity(::cordl_internals::Ptr<uint8_t>  pDst) ;

/// @brief Method AmpEntity addr 0x2877e1c size 0x20 virtual false final false
static inline ::cordl_internals::Ptr<uint8_t> AmpEntity(::cordl_internals::Ptr<uint8_t>  pDst) ;

/// @brief Method QuoteEntity addr 0x2877e5c size 0x20 virtual false final false
static inline ::cordl_internals::Ptr<uint8_t> QuoteEntity(::cordl_internals::Ptr<uint8_t>  pDst) ;

/// @brief Method TabEntity addr 0x2877e7c size 0x20 virtual false final false
static inline ::cordl_internals::Ptr<uint8_t> TabEntity(::cordl_internals::Ptr<uint8_t>  pDst) ;

/// @brief Method LineFeedEntity addr 0x2877ebc size 0x20 virtual false final false
static inline ::cordl_internals::Ptr<uint8_t> LineFeedEntity(::cordl_internals::Ptr<uint8_t>  pDst) ;

/// @brief Method CarriageReturnEntity addr 0x2877e9c size 0x20 virtual false final false
static inline ::cordl_internals::Ptr<uint8_t> CarriageReturnEntity(::cordl_internals::Ptr<uint8_t>  pDst) ;

/// @brief Method CharEntity addr 0x287839c size 0xac virtual false final false
static inline ::cordl_internals::Ptr<uint8_t> CharEntity(::cordl_internals::Ptr<uint8_t>  pDst, char16_t  ch) ;

/// @brief Method RawStartCData addr 0x2878364 size 0x28 virtual false final false
static inline ::cordl_internals::Ptr<uint8_t> RawStartCData(::cordl_internals::Ptr<uint8_t>  pDst) ;

/// @brief Method RawEndCData addr 0x2878348 size 0x1c virtual false final false
static inline ::cordl_internals::Ptr<uint8_t> RawEndCData(::cordl_internals::Ptr<uint8_t>  pDst) ;

/// @brief Method ValidateContentChars addr 0x28754c4 size 0x360 virtual false final false
inline void ValidateContentChars(::StringW  chars, ::StringW  propertyName, bool  allowOnlyWhitespace) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlUtf8RawTextWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlUtf8RawTextWriter(XmlUtf8RawTextWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlUtf8RawTextWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlUtf8RawTextWriter(XmlUtf8RawTextWriter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlUtf8RawTextWriter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlUtf8RawTextWriter, 0x88>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlUtf8RawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlUtf8RawTextWriter*, "System.Xml", "XmlUtf8RawTextWriter");
