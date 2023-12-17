#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlWriterSettings)
namespace System::Xml {
struct TriState;
}
namespace System::Xml {
struct ConformanceLevel;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::IO {
class TextWriter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class Stream;
}
namespace System::Xml {
struct NewLineHandling;
}
namespace System::Xml {
struct NamespaceHandling;
}
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml {
struct XmlOutputMethod;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml {
class XmlWriterSettings;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlWriterSettings);
// Type: System.Xml::XmlWriterSettings
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11495))
// CS Name: ::System.Xml::XmlWriterSettings*
class CORDL_TYPE XmlWriterSettings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::System::Object)]{};

/// @brief Field useAsync offset 0x10
 __declspec(property(get=__get_useAsync, put=__set_useAsync)) bool  useAsync;

/// @brief Field encoding offset 0x18
 __declspec(property(get=__get_encoding, put=__set_encoding)) ::System::Text::Encoding*  encoding;

/// @brief Field omitXmlDecl offset 0x20
 __declspec(property(get=__get_omitXmlDecl, put=__set_omitXmlDecl)) bool  omitXmlDecl;

/// @brief Field newLineHandling offset 0x24
 __declspec(property(get=__get_newLineHandling, put=__set_newLineHandling)) ::System::Xml::NewLineHandling  newLineHandling;

/// @brief Field newLineChars offset 0x28
 __declspec(property(get=__get_newLineChars, put=__set_newLineChars)) ::StringW  newLineChars;

/// @brief Field indent offset 0x30
 __declspec(property(get=__get_indent, put=__set_indent)) ::System::Xml::TriState  indent;

/// @brief Field indentChars offset 0x38
 __declspec(property(get=__get_indentChars, put=__set_indentChars)) ::StringW  indentChars;

/// @brief Field newLineOnAttributes offset 0x40
 __declspec(property(get=__get_newLineOnAttributes, put=__set_newLineOnAttributes)) bool  newLineOnAttributes;

/// @brief Field closeOutput offset 0x41
 __declspec(property(get=__get_closeOutput, put=__set_closeOutput)) bool  closeOutput;

/// @brief Field namespaceHandling offset 0x44
 __declspec(property(get=__get_namespaceHandling, put=__set_namespaceHandling)) ::System::Xml::NamespaceHandling  namespaceHandling;

/// @brief Field conformanceLevel offset 0x48
 __declspec(property(get=__get_conformanceLevel, put=__set_conformanceLevel)) ::System::Xml::ConformanceLevel  conformanceLevel;

/// @brief Field checkCharacters offset 0x4c
 __declspec(property(get=__get_checkCharacters, put=__set_checkCharacters)) bool  checkCharacters;

/// @brief Field writeEndDocumentOnClose offset 0x4d
 __declspec(property(get=__get_writeEndDocumentOnClose, put=__set_writeEndDocumentOnClose)) bool  writeEndDocumentOnClose;

/// @brief Field outputMethod offset 0x50
 __declspec(property(get=__get_outputMethod, put=__set_outputMethod)) ::System::Xml::XmlOutputMethod  outputMethod;

/// @brief Field cdataSections offset 0x58
 __declspec(property(get=__get_cdataSections, put=__set_cdataSections)) ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>*  cdataSections;

/// @brief Field doNotEscapeUriAttributes offset 0x60
 __declspec(property(get=__get_doNotEscapeUriAttributes, put=__set_doNotEscapeUriAttributes)) bool  doNotEscapeUriAttributes;

/// @brief Field mergeCDataSections offset 0x61
 __declspec(property(get=__get_mergeCDataSections, put=__set_mergeCDataSections)) bool  mergeCDataSections;

/// @brief Field mediaType offset 0x68
 __declspec(property(get=__get_mediaType, put=__set_mediaType)) ::StringW  mediaType;

/// @brief Field docTypeSystem offset 0x70
 __declspec(property(get=__get_docTypeSystem, put=__set_docTypeSystem)) ::StringW  docTypeSystem;

/// @brief Field docTypePublic offset 0x78
 __declspec(property(get=__get_docTypePublic, put=__set_docTypePublic)) ::StringW  docTypePublic;

/// @brief Field standalone offset 0x80
 __declspec(property(get=__get_standalone, put=__set_standalone)) ::System::Xml::XmlStandalone  standalone;

/// @brief Field autoXmlDecl offset 0x84
 __declspec(property(get=__get_autoXmlDecl, put=__set_autoXmlDecl)) bool  autoXmlDecl;

/// @brief Field isReadOnly offset 0x85
 __declspec(property(get=__get_isReadOnly, put=__set_isReadOnly)) bool  isReadOnly;

 __declspec(property(get=get_Async)) bool  Async;

 __declspec(property(get=get_Encoding)) ::System::Text::Encoding*  Encoding;

 __declspec(property(get=get_OmitXmlDeclaration, put=set_OmitXmlDeclaration)) bool  OmitXmlDeclaration;

 __declspec(property(get=get_NewLineHandling)) ::System::Xml::NewLineHandling  NewLineHandling;

 __declspec(property(get=get_NewLineChars)) ::StringW  NewLineChars;

 __declspec(property(get=get_Indent, put=set_Indent)) bool  Indent;

 __declspec(property(get=get_IndentChars)) ::StringW  IndentChars;

 __declspec(property(get=get_NewLineOnAttributes)) bool  NewLineOnAttributes;

 __declspec(property(get=get_CloseOutput)) bool  CloseOutput;

 __declspec(property(get=get_ConformanceLevel, put=set_ConformanceLevel)) ::System::Xml::ConformanceLevel  ConformanceLevel;

 __declspec(property(get=get_CheckCharacters)) bool  CheckCharacters;

 __declspec(property(get=get_NamespaceHandling, put=set_NamespaceHandling)) ::System::Xml::NamespaceHandling  NamespaceHandling;

 __declspec(property(get=get_WriteEndDocumentOnClose)) bool  WriteEndDocumentOnClose;

 __declspec(property(get=get_OutputMethod, put=set_OutputMethod)) ::System::Xml::XmlOutputMethod  OutputMethod;

 __declspec(property(get=get_CDataSectionElements)) ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>*  CDataSectionElements;

 __declspec(property(get=get_DoNotEscapeUriAttributes)) bool  DoNotEscapeUriAttributes;

 __declspec(property(get=get_MergeCDataSections)) bool  MergeCDataSections;

 __declspec(property(get=get_MediaType)) ::StringW  MediaType;

 __declspec(property(get=get_DocTypeSystem)) ::StringW  DocTypeSystem;

 __declspec(property(get=get_DocTypePublic)) ::StringW  DocTypePublic;

 __declspec(property(get=get_Standalone)) ::System::Xml::XmlStandalone  Standalone;

 __declspec(property(get=get_AutoXmlDeclaration)) bool  AutoXmlDeclaration;

 __declspec(property(get=get_IndentInternal)) ::System::Xml::TriState  IndentInternal;

 __declspec(property(get=get_IsQuerySpecific)) bool  IsQuerySpecific;

 __declspec(property(put=set_ReadOnly)) bool  ReadOnly;

constexpr void __set_useAsync(bool  value) ;

constexpr bool& __get_useAsync() ;

constexpr bool const& __get_useAsync() const;

constexpr void __set_encoding(::System::Text::Encoding*  value) ;

constexpr ::System::Text::Encoding* __get_encoding() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> __get_encoding() const;

constexpr void __set_omitXmlDecl(bool  value) ;

constexpr bool& __get_omitXmlDecl() ;

constexpr bool const& __get_omitXmlDecl() const;

constexpr void __set_newLineHandling(::System::Xml::NewLineHandling  value) ;

constexpr ::System::Xml::NewLineHandling& __get_newLineHandling() ;

constexpr ::System::Xml::NewLineHandling const& __get_newLineHandling() const;

constexpr void __set_newLineChars(::StringW  value) ;

constexpr ::StringW& __get_newLineChars() ;

constexpr ::StringW const& __get_newLineChars() const;

constexpr void __set_indent(::System::Xml::TriState  value) ;

constexpr ::System::Xml::TriState& __get_indent() ;

constexpr ::System::Xml::TriState const& __get_indent() const;

constexpr void __set_indentChars(::StringW  value) ;

constexpr ::StringW& __get_indentChars() ;

constexpr ::StringW const& __get_indentChars() const;

constexpr void __set_newLineOnAttributes(bool  value) ;

constexpr bool& __get_newLineOnAttributes() ;

constexpr bool const& __get_newLineOnAttributes() const;

constexpr void __set_closeOutput(bool  value) ;

constexpr bool& __get_closeOutput() ;

constexpr bool const& __get_closeOutput() const;

constexpr void __set_namespaceHandling(::System::Xml::NamespaceHandling  value) ;

constexpr ::System::Xml::NamespaceHandling& __get_namespaceHandling() ;

constexpr ::System::Xml::NamespaceHandling const& __get_namespaceHandling() const;

constexpr void __set_conformanceLevel(::System::Xml::ConformanceLevel  value) ;

constexpr ::System::Xml::ConformanceLevel& __get_conformanceLevel() ;

constexpr ::System::Xml::ConformanceLevel const& __get_conformanceLevel() const;

constexpr void __set_checkCharacters(bool  value) ;

constexpr bool& __get_checkCharacters() ;

constexpr bool const& __get_checkCharacters() const;

constexpr void __set_writeEndDocumentOnClose(bool  value) ;

constexpr bool& __get_writeEndDocumentOnClose() ;

constexpr bool const& __get_writeEndDocumentOnClose() const;

constexpr void __set_outputMethod(::System::Xml::XmlOutputMethod  value) ;

constexpr ::System::Xml::XmlOutputMethod& __get_outputMethod() ;

constexpr ::System::Xml::XmlOutputMethod const& __get_outputMethod() const;

constexpr void __set_cdataSections(::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>* __get_cdataSections() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>*> __get_cdataSections() const;

constexpr void __set_doNotEscapeUriAttributes(bool  value) ;

constexpr bool& __get_doNotEscapeUriAttributes() ;

constexpr bool const& __get_doNotEscapeUriAttributes() const;

constexpr void __set_mergeCDataSections(bool  value) ;

constexpr bool& __get_mergeCDataSections() ;

constexpr bool const& __get_mergeCDataSections() const;

constexpr void __set_mediaType(::StringW  value) ;

constexpr ::StringW& __get_mediaType() ;

constexpr ::StringW const& __get_mediaType() const;

constexpr void __set_docTypeSystem(::StringW  value) ;

constexpr ::StringW& __get_docTypeSystem() ;

constexpr ::StringW const& __get_docTypeSystem() const;

constexpr void __set_docTypePublic(::StringW  value) ;

constexpr ::StringW& __get_docTypePublic() ;

constexpr ::StringW const& __get_docTypePublic() const;

constexpr void __set_standalone(::System::Xml::XmlStandalone  value) ;

constexpr ::System::Xml::XmlStandalone& __get_standalone() ;

constexpr ::System::Xml::XmlStandalone const& __get_standalone() const;

constexpr void __set_autoXmlDecl(bool  value) ;

constexpr bool& __get_autoXmlDecl() ;

constexpr bool const& __get_autoXmlDecl() const;

constexpr void __set_isReadOnly(bool  value) ;

constexpr bool& __get_isReadOnly() ;

constexpr bool const& __get_isReadOnly() const;

static inline ::System::Xml::XmlWriterSettings* New_ctor() ;

/// @brief Method .ctor addr 0x2880598 size 0x84 virtual false final false
inline void _ctor() ;

/// @brief Method get_Async addr 0x2880f34 size 0x8 virtual false final false
inline bool get_Async() ;

/// @brief Method get_Encoding addr 0x2880f3c size 0x8 virtual false final false
inline ::System::Text::Encoding* get_Encoding() ;

/// @brief Method get_OmitXmlDeclaration addr 0x2880f44 size 0x8 virtual false final false
inline bool get_OmitXmlDeclaration() ;

/// @brief Method set_OmitXmlDeclaration addr 0x2880f4c size 0x5c virtual false final false
inline void set_OmitXmlDeclaration(bool  value) ;

/// @brief Method get_NewLineHandling addr 0x2881060 size 0x8 virtual false final false
inline ::System::Xml::NewLineHandling get_NewLineHandling() ;

/// @brief Method get_NewLineChars addr 0x2881068 size 0x8 virtual false final false
inline ::StringW get_NewLineChars() ;

/// @brief Method get_Indent addr 0x2881070 size 0x10 virtual false final false
inline bool get_Indent() ;

/// @brief Method set_Indent addr 0x2881080 size 0x68 virtual false final false
inline void set_Indent(bool  value) ;

/// @brief Method get_IndentChars addr 0x28810e8 size 0x8 virtual false final false
inline ::StringW get_IndentChars() ;

/// @brief Method get_NewLineOnAttributes addr 0x28810f0 size 0x8 virtual false final false
inline bool get_NewLineOnAttributes() ;

/// @brief Method get_CloseOutput addr 0x28810f8 size 0x8 virtual false final false
inline bool get_CloseOutput() ;

/// @brief Method get_ConformanceLevel addr 0x2881100 size 0x8 virtual false final false
inline ::System::Xml::ConformanceLevel get_ConformanceLevel() ;

/// @brief Method set_ConformanceLevel addr 0x2881108 size 0xb0 virtual false final false
inline void set_ConformanceLevel(::System::Xml::ConformanceLevel  value) ;

/// @brief Method get_CheckCharacters addr 0x28811b8 size 0x8 virtual false final false
inline bool get_CheckCharacters() ;

/// @brief Method get_NamespaceHandling addr 0x28811c0 size 0x8 virtual false final false
inline ::System::Xml::NamespaceHandling get_NamespaceHandling() ;

/// @brief Method set_NamespaceHandling addr 0x28811c8 size 0xb0 virtual false final false
inline void set_NamespaceHandling(::System::Xml::NamespaceHandling  value) ;

/// @brief Method get_WriteEndDocumentOnClose addr 0x2881278 size 0x8 virtual false final false
inline bool get_WriteEndDocumentOnClose() ;

/// @brief Method get_OutputMethod addr 0x2881280 size 0x8 virtual false final false
inline ::System::Xml::XmlOutputMethod get_OutputMethod() ;

/// @brief Method set_OutputMethod addr 0x2881288 size 0x8 virtual false final false
inline void set_OutputMethod(::System::Xml::XmlOutputMethod  value) ;

/// @brief Method Clone addr 0x2881290 size 0xcc virtual false final false
inline ::System::Xml::XmlWriterSettings* Clone() ;

/// @brief Method get_CDataSectionElements addr 0x288135c size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>* get_CDataSectionElements() ;

/// @brief Method get_DoNotEscapeUriAttributes addr 0x2881364 size 0x8 virtual false final false
inline bool get_DoNotEscapeUriAttributes() ;

/// @brief Method get_MergeCDataSections addr 0x288136c size 0x8 virtual false final false
inline bool get_MergeCDataSections() ;

/// @brief Method get_MediaType addr 0x2881374 size 0x8 virtual false final false
inline ::StringW get_MediaType() ;

/// @brief Method get_DocTypeSystem addr 0x288137c size 0x8 virtual false final false
inline ::StringW get_DocTypeSystem() ;

/// @brief Method get_DocTypePublic addr 0x2881384 size 0x8 virtual false final false
inline ::StringW get_DocTypePublic() ;

/// @brief Method get_Standalone addr 0x288138c size 0x8 virtual false final false
inline ::System::Xml::XmlStandalone get_Standalone() ;

/// @brief Method get_AutoXmlDeclaration addr 0x2881394 size 0x8 virtual false final false
inline bool get_AutoXmlDeclaration() ;

/// @brief Method get_IndentInternal addr 0x288139c size 0x8 virtual false final false
inline ::System::Xml::TriState get_IndentInternal() ;

/// @brief Method get_IsQuerySpecific addr 0x28813a4 size 0x70 virtual false final false
inline bool get_IsQuerySpecific() ;

/// @brief Method CreateWriter addr 0x288061c size 0x4b4 virtual false final false
inline ::System::Xml::XmlWriter* CreateWriter(::System::IO::Stream*  output) ;

/// @brief Method CreateWriter addr 0x2880b38 size 0x31c virtual false final false
inline ::System::Xml::XmlWriter* CreateWriter(::System::IO::TextWriter*  output) ;

/// @brief Method set_ReadOnly addr 0x2881414 size 0xc virtual false final false
inline void set_ReadOnly(bool  value) ;

/// @brief Method CheckReadOnly addr 0x2880fa8 size 0xb8 virtual false final false
inline void CheckReadOnly(::StringW  propertyName) ;

/// @brief Method Initialize addr 0x2880e54 size 0xe0 virtual false final false
inline void Initialize() ;

// Ctor Parameters [CppParam { name: "", ty: "XmlWriterSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlWriterSettings(XmlWriterSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlWriterSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlWriterSettings(XmlWriterSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlWriterSettings()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWriterSettings, 0x88>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlWriterSettings);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWriterSettings*, "System.Xml", "XmlWriterSettings");
