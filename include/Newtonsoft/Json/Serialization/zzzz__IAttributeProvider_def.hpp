#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAttributeProvider)
namespace System {
class Attribute;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class IAttributeProvider;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::IAttributeProvider);
// Type: Newtonsoft.Json.Serialization::IAttributeProvider
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11905))
// CS Name: ::Newtonsoft.Json.Serialization::IAttributeProvider*
class CORDL_TYPE IAttributeProvider {
public:
// Declarations
/// @brief Method GetAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::IList_1<::System::Attribute*>* GetAttributes(bool  inherit) ;

/// @brief Method GetAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::IList_1<::System::Attribute*>* GetAttributes(::System::Type*  attributeType, bool  inherit) ;

// Ctor Parameters [CppParam { name: "", ty: "IAttributeProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IAttributeProvider(IAttributeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAttributeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAttributeProvider(IAttributeProvider const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::IAttributeProvider);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::IAttributeProvider*, "Newtonsoft.Json.Serialization", "IAttributeProvider");
