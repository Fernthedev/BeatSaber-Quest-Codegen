#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlParserContext)
namespace System::Xml {
struct XmlSpace;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
class XmlNameTable;
}
// Forward declare root types
namespace System::Xml {
class XmlParserContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlParserContext);
// Type: System.Xml::XmlParserContext
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11454))
// CS Name: ::System.Xml::XmlParserContext*
class CORDL_TYPE XmlParserContext : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Object)]{};

/// @brief Field _nt offset 0x10
 __declspec(property(get=__get__nt, put=__set__nt)) ::System::Xml::XmlNameTable*  _nt;

/// @brief Field _nsMgr offset 0x18
 __declspec(property(get=__get__nsMgr, put=__set__nsMgr)) ::System::Xml::XmlNamespaceManager*  _nsMgr;

/// @brief Field _docTypeName offset 0x20
 __declspec(property(get=__get__docTypeName, put=__set__docTypeName)) ::StringW  _docTypeName;

/// @brief Field _pubId offset 0x28
 __declspec(property(get=__get__pubId, put=__set__pubId)) ::StringW  _pubId;

/// @brief Field _sysId offset 0x30
 __declspec(property(get=__get__sysId, put=__set__sysId)) ::StringW  _sysId;

/// @brief Field _internalSubset offset 0x38
 __declspec(property(get=__get__internalSubset, put=__set__internalSubset)) ::StringW  _internalSubset;

/// @brief Field _xmlLang offset 0x40
 __declspec(property(get=__get__xmlLang, put=__set__xmlLang)) ::StringW  _xmlLang;

/// @brief Field _xmlSpace offset 0x48
 __declspec(property(get=__get__xmlSpace, put=__set__xmlSpace)) ::System::Xml::XmlSpace  _xmlSpace;

/// @brief Field _baseURI offset 0x50
 __declspec(property(get=__get__baseURI, put=__set__baseURI)) ::StringW  _baseURI;

/// @brief Field _encoding offset 0x58
 __declspec(property(get=__get__encoding, put=__set__encoding)) ::System::Text::Encoding*  _encoding;

 __declspec(property(get=get_NameTable)) ::System::Xml::XmlNameTable*  NameTable;

 __declspec(property(get=get_NamespaceManager)) ::System::Xml::XmlNamespaceManager*  NamespaceManager;

 __declspec(property(get=get_DocTypeName)) ::StringW  DocTypeName;

 __declspec(property(get=get_PublicId)) ::StringW  PublicId;

 __declspec(property(get=get_SystemId)) ::StringW  SystemId;

 __declspec(property(get=get_BaseURI)) ::StringW  BaseURI;

 __declspec(property(get=get_InternalSubset)) ::StringW  InternalSubset;

 __declspec(property(get=get_XmlLang)) ::StringW  XmlLang;

 __declspec(property(get=get_XmlSpace)) ::System::Xml::XmlSpace  XmlSpace;

 __declspec(property(get=get_Encoding)) ::System::Text::Encoding*  Encoding;

 __declspec(property(get=get_HasDtdInfo)) bool  HasDtdInfo;

constexpr void __set__nt(::System::Xml::XmlNameTable*  value) ;

constexpr ::System::Xml::XmlNameTable* __get__nt() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> __get__nt() const;

constexpr void __set__nsMgr(::System::Xml::XmlNamespaceManager*  value) ;

constexpr ::System::Xml::XmlNamespaceManager* __get__nsMgr() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNamespaceManager*> __get__nsMgr() const;

constexpr void __set__docTypeName(::StringW  value) ;

constexpr ::StringW& __get__docTypeName() ;

constexpr ::StringW const& __get__docTypeName() const;

constexpr void __set__pubId(::StringW  value) ;

constexpr ::StringW& __get__pubId() ;

constexpr ::StringW const& __get__pubId() const;

constexpr void __set__sysId(::StringW  value) ;

constexpr ::StringW& __get__sysId() ;

constexpr ::StringW const& __get__sysId() const;

constexpr void __set__internalSubset(::StringW  value) ;

constexpr ::StringW& __get__internalSubset() ;

constexpr ::StringW const& __get__internalSubset() const;

constexpr void __set__xmlLang(::StringW  value) ;

constexpr ::StringW& __get__xmlLang() ;

constexpr ::StringW const& __get__xmlLang() const;

constexpr void __set__xmlSpace(::System::Xml::XmlSpace  value) ;

constexpr ::System::Xml::XmlSpace& __get__xmlSpace() ;

constexpr ::System::Xml::XmlSpace const& __get__xmlSpace() const;

constexpr void __set__baseURI(::StringW  value) ;

constexpr ::StringW& __get__baseURI() ;

constexpr ::StringW const& __get__baseURI() const;

constexpr void __set__encoding(::System::Text::Encoding*  value) ;

constexpr ::System::Text::Encoding* __get__encoding() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> __get__encoding() const;

static inline ::System::Xml::XmlParserContext* New_ctor(::System::Xml::XmlNameTable*  nt, ::System::Xml::XmlNamespaceManager*  nsMgr, ::StringW  docTypeName, ::StringW  pubId, ::StringW  sysId, ::StringW  internalSubset, ::StringW  baseURI, ::StringW  xmlLang, ::System::Xml::XmlSpace  xmlSpace) ;

/// @brief Method .ctor addr 0x28595f0 size 0x2c virtual false final false
inline void _ctor(::System::Xml::XmlNameTable*  nt, ::System::Xml::XmlNamespaceManager*  nsMgr, ::StringW  docTypeName, ::StringW  pubId, ::StringW  sysId, ::StringW  internalSubset, ::StringW  baseURI, ::StringW  xmlLang, ::System::Xml::XmlSpace  xmlSpace) ;

static inline ::System::Xml::XmlParserContext* New_ctor(::System::Xml::XmlNameTable*  nt, ::System::Xml::XmlNamespaceManager*  nsMgr, ::StringW  docTypeName, ::StringW  pubId, ::StringW  sysId, ::StringW  internalSubset, ::StringW  baseURI, ::StringW  xmlLang, ::System::Xml::XmlSpace  xmlSpace, ::System::Text::Encoding*  enc) ;

/// @brief Method .ctor addr 0x285961c size 0x1bc virtual false final false
inline void _ctor(::System::Xml::XmlNameTable*  nt, ::System::Xml::XmlNamespaceManager*  nsMgr, ::StringW  docTypeName, ::StringW  pubId, ::StringW  sysId, ::StringW  internalSubset, ::StringW  baseURI, ::StringW  xmlLang, ::System::Xml::XmlSpace  xmlSpace, ::System::Text::Encoding*  enc) ;

/// @brief Method get_NameTable addr 0x28597d8 size 0x8 virtual false final false
inline ::System::Xml::XmlNameTable* get_NameTable() ;

/// @brief Method get_NamespaceManager addr 0x28597e0 size 0x8 virtual false final false
inline ::System::Xml::XmlNamespaceManager* get_NamespaceManager() ;

/// @brief Method get_DocTypeName addr 0x28597e8 size 0x8 virtual false final false
inline ::StringW get_DocTypeName() ;

/// @brief Method get_PublicId addr 0x28597f0 size 0x8 virtual false final false
inline ::StringW get_PublicId() ;

/// @brief Method get_SystemId addr 0x28597f8 size 0x8 virtual false final false
inline ::StringW get_SystemId() ;

/// @brief Method get_BaseURI addr 0x2859800 size 0x8 virtual false final false
inline ::StringW get_BaseURI() ;

/// @brief Method get_InternalSubset addr 0x2859808 size 0x8 virtual false final false
inline ::StringW get_InternalSubset() ;

/// @brief Method get_XmlLang addr 0x2859810 size 0x8 virtual false final false
inline ::StringW get_XmlLang() ;

/// @brief Method get_XmlSpace addr 0x2859818 size 0x8 virtual false final false
inline ::System::Xml::XmlSpace get_XmlSpace() ;

/// @brief Method get_Encoding addr 0x2859820 size 0x8 virtual false final false
inline ::System::Text::Encoding* get_Encoding() ;

/// @brief Method get_HasDtdInfo addr 0x2859828 size 0x9c virtual false final false
inline bool get_HasDtdInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "XmlParserContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlParserContext(XmlParserContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlParserContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlParserContext(XmlParserContext const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlParserContext()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlParserContext, 0x60>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlParserContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlParserContext*, "System.Xml", "XmlParserContext");
