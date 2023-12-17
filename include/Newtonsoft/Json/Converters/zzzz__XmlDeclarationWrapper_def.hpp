#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlDeclarationWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace Newtonsoft::Json::Converters {
class IXmlDeclaration;
}
namespace System::Xml {
class XmlDeclaration;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XmlDeclarationWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XmlDeclarationWrapper);
// Type: Newtonsoft.Json.Converters::XmlDeclarationWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12052))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12050))
// CS Name: ::Newtonsoft.Json.Converters::XmlDeclarationWrapper*
class CORDL_TYPE XmlDeclarationWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Newtonsoft::Json::Converters::XmlNodeWrapper)]{};

/// @brief Field _declaration offset 0x28
 __declspec(property(get=__get__declaration, put=__set__declaration)) ::System::Xml::XmlDeclaration*  _declaration;

 __declspec(property(get=get_Version)) ::StringW  Version;

 __declspec(property(get=get_Encoding, put=set_Encoding)) ::StringW  Encoding;

 __declspec(property(get=get_Standalone, put=set_Standalone)) ::StringW  Standalone;

/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDeclaration"
constexpr operator  ::Newtonsoft::Json::Converters::IXmlDeclaration*() noexcept;

/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr operator  ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

constexpr void __set__declaration(::System::Xml::XmlDeclaration*  value) ;

constexpr ::System::Xml::XmlDeclaration* __get__declaration() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDeclaration*> __get__declaration() const;

static inline ::Newtonsoft::Json::Converters::XmlDeclarationWrapper* New_ctor(::System::Xml::XmlDeclaration*  declaration) ;

/// @brief Method .ctor addr 0x26b9b84 size 0x2c virtual false final false
inline void _ctor(::System::Xml::XmlDeclaration*  declaration) ;

/// @brief Method get_Version addr 0x26ba1ac size 0x1c virtual true final true
inline ::StringW get_Version() ;

/// @brief Method get_Encoding addr 0x26ba1c8 size 0x1c virtual true final true
inline ::StringW get_Encoding() ;

/// @brief Method set_Encoding addr 0x26ba1e4 size 0x1c virtual true final true
inline void set_Encoding(::StringW  value) ;

/// @brief Method get_Standalone addr 0x26ba200 size 0x1c virtual true final true
inline ::StringW get_Standalone() ;

/// @brief Method set_Standalone addr 0x26ba21c size 0x1c virtual true final true
inline void set_Standalone(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlDeclarationWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlDeclarationWrapper(XmlDeclarationWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlDeclarationWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlDeclarationWrapper(XmlDeclarationWrapper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlDeclarationWrapper()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XmlDeclarationWrapper, 0x30>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlDeclarationWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlDeclarationWrapper*, "Newtonsoft.Json.Converters", "XmlDeclarationWrapper");
