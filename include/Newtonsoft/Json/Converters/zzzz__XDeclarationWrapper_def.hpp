#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XDeclarationWrapper)
namespace System::Xml {
struct XmlNodeType;
}
namespace Newtonsoft::Json::Converters {
class IXmlDeclaration;
}
namespace System::Xml::Linq {
class XDeclaration;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XDeclarationWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XDeclarationWrapper);
// Type: Newtonsoft.Json.Converters::XDeclarationWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12065))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12058))
// CS Name: ::Newtonsoft.Json.Converters::XDeclarationWrapper*
class CORDL_TYPE XDeclarationWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Newtonsoft::Json::Converters::XObjectWrapper)]{};

/// @brief Field <Declaration>k__BackingField offset 0x18
 __declspec(property(get=__get__Declaration_k__BackingField, put=__set__Declaration_k__BackingField)) ::System::Xml::Linq::XDeclaration*  _Declaration_k__BackingField;

 __declspec(property(get=get_Declaration, put=set_Declaration)) ::System::Xml::Linq::XDeclaration*  Declaration;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_Version)) ::StringW  Version;

 __declspec(property(get=get_Encoding, put=set_Encoding)) ::StringW  Encoding;

 __declspec(property(get=get_Standalone, put=set_Standalone)) ::StringW  Standalone;

/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDeclaration"
constexpr operator  ::Newtonsoft::Json::Converters::IXmlDeclaration*() noexcept;

/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr operator  ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

constexpr void __set__Declaration_k__BackingField(::System::Xml::Linq::XDeclaration*  value) ;

constexpr ::System::Xml::Linq::XDeclaration* __get__Declaration_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XDeclaration*> __get__Declaration_k__BackingField() const;

/// @brief Method get_Declaration addr 0x26bae44 size 0x8 virtual false final false
inline ::System::Xml::Linq::XDeclaration* get_Declaration() ;

/// @brief Method set_Declaration addr 0x26bae4c size 0x8 virtual false final false
inline void set_Declaration(::System::Xml::Linq::XDeclaration*  value) ;

static inline ::Newtonsoft::Json::Converters::XDeclarationWrapper* New_ctor(::System::Xml::Linq::XDeclaration*  declaration) ;

/// @brief Method .ctor addr 0x26bae54 size 0x6c virtual false final false
inline void _ctor(::System::Xml::Linq::XDeclaration*  declaration) ;

/// @brief Method get_NodeType addr 0x26baee8 size 0x8 virtual true final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Version addr 0x26baef0 size 0x1c virtual true final true
inline ::StringW get_Version() ;

/// @brief Method get_Encoding addr 0x26baf0c size 0x1c virtual true final true
inline ::StringW get_Encoding() ;

/// @brief Method set_Encoding addr 0x26baf28 size 0x1c virtual true final true
inline void set_Encoding(::StringW  value) ;

/// @brief Method get_Standalone addr 0x26baf44 size 0x1c virtual true final true
inline ::StringW get_Standalone() ;

/// @brief Method set_Standalone addr 0x26baf60 size 0x1c virtual true final true
inline void set_Standalone(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "XDeclarationWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XDeclarationWrapper(XDeclarationWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XDeclarationWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XDeclarationWrapper(XDeclarationWrapper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XDeclarationWrapper()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XDeclarationWrapper, 0x20>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XDeclarationWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XDeclarationWrapper*, "Newtonsoft.Json.Converters", "XDeclarationWrapper");
