#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XDocumentType)
namespace System::Xml::Linq {
class XNode;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml::Linq {
class XDocumentType;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XDocumentType);
// Type: System.Xml.Linq::XDocumentType
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15453))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15439))
// CS Name: ::System.Xml.Linq::XDocumentType*
class CORDL_TYPE XDocumentType : public ::System::Xml::Linq::XNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Xml::Linq::XNode)]{};

/// @brief Field _name offset 0x28
 __declspec(property(get=__get__name, put=__set__name)) ::StringW  _name;

/// @brief Field _publicId offset 0x30
 __declspec(property(get=__get__publicId, put=__set__publicId)) ::StringW  _publicId;

/// @brief Field _systemId offset 0x38
 __declspec(property(get=__get__systemId, put=__set__systemId)) ::StringW  _systemId;

/// @brief Field _internalSubset offset 0x40
 __declspec(property(get=__get__internalSubset, put=__set__internalSubset)) ::StringW  _internalSubset;

 __declspec(property(get=get_InternalSubset)) ::StringW  InternalSubset;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_PublicId)) ::StringW  PublicId;

 __declspec(property(get=get_SystemId)) ::StringW  SystemId;

constexpr void __set__name(::StringW  value) ;

constexpr ::StringW& __get__name() ;

constexpr ::StringW const& __get__name() const;

constexpr void __set__publicId(::StringW  value) ;

constexpr ::StringW& __get__publicId() ;

constexpr ::StringW const& __get__publicId() const;

constexpr void __set__systemId(::StringW  value) ;

constexpr ::StringW& __get__systemId() ;

constexpr ::StringW const& __get__systemId() const;

constexpr void __set__internalSubset(::StringW  value) ;

constexpr ::StringW& __get__internalSubset() ;

constexpr ::StringW const& __get__internalSubset() const;

static inline ::System::Xml::Linq::XDocumentType* New_ctor(::StringW  name, ::StringW  publicId, ::StringW  systemId, ::StringW  internalSubset) ;

/// @brief Method .ctor addr 0x285e930 size 0x90 virtual false final false
inline void _ctor(::StringW  name, ::StringW  publicId, ::StringW  systemId, ::StringW  internalSubset) ;

static inline ::System::Xml::Linq::XDocumentType* New_ctor(::System::Xml::Linq::XDocumentType*  other) ;

/// @brief Method .ctor addr 0x285e9c0 size 0x84 virtual false final false
inline void _ctor(::System::Xml::Linq::XDocumentType*  other) ;

/// @brief Method get_InternalSubset addr 0x285ea44 size 0x8 virtual false final false
inline ::StringW get_InternalSubset() ;

/// @brief Method get_Name addr 0x285ea4c size 0x8 virtual false final false
inline ::StringW get_Name() ;

/// @brief Method get_NodeType addr 0x285ea54 size 0x8 virtual true final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_PublicId addr 0x285ea5c size 0x8 virtual false final false
inline ::StringW get_PublicId() ;

/// @brief Method get_SystemId addr 0x285ea64 size 0x8 virtual false final false
inline ::StringW get_SystemId() ;

/// @brief Method WriteTo addr 0x285ea6c size 0x74 virtual true final false
inline void WriteTo(::System::Xml::XmlWriter*  writer) ;

/// @brief Method CloneNode addr 0x285eae0 size 0x60 virtual true final false
inline ::System::Xml::Linq::XNode* CloneNode() ;

// Ctor Parameters [CppParam { name: "", ty: "XDocumentType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XDocumentType(XDocumentType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XDocumentType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XDocumentType(XDocumentType const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XDocumentType()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XDocumentType, 0x48>, "Size mismatch!");

} // namespace end def System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XDocumentType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XDocumentType*, "System.Xml.Linq", "XDocumentType");
