#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__DefaultContractResolver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CamelCasePropertyNamesContractResolver)
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class CamelCasePropertyNamesContractResolver;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver);
// Type: Newtonsoft.Json.Serialization::CamelCasePropertyNamesContractResolver
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11929))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11918))
// CS Name: ::Newtonsoft.Json.Serialization::CamelCasePropertyNamesContractResolver*
class CORDL_TYPE CamelCasePropertyNamesContractResolver : public ::Newtonsoft::Json::Serialization::DefaultContractResolver {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Newtonsoft::Json::Serialization::DefaultContractResolver)]{};

static inline ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver* New_ctor() ;

/// @brief Method .ctor addr 0x266ec2c size 0x60 virtual false final false
inline void _ctor() ;

/// @brief Method ResolvePropertyName addr 0x266ecb0 size 0xc virtual true final false
inline ::StringW ResolvePropertyName(::StringW  propertyName) ;

// Ctor Parameters [CppParam { name: "", ty: "CamelCasePropertyNamesContractResolver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CamelCasePropertyNamesContractResolver(CamelCasePropertyNamesContractResolver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CamelCasePropertyNamesContractResolver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CamelCasePropertyNamesContractResolver(CamelCasePropertyNamesContractResolver const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CamelCasePropertyNamesContractResolver()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver, 0x28>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*, "Newtonsoft.Json.Serialization", "CamelCasePropertyNamesContractResolver");
