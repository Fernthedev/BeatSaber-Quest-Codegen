#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(JsonConstructorAttribute)
// Forward declare root types
namespace Newtonsoft::Json {
class JsonConstructorAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonConstructorAttribute);
// Type: Newtonsoft.Json::JsonConstructorAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11802))
// CS Name: ::Newtonsoft.Json::JsonConstructorAttribute*
class CORDL_TYPE JsonConstructorAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::Newtonsoft::Json::JsonConstructorAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x263e3b4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "JsonConstructorAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonConstructorAttribute(JsonConstructorAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonConstructorAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonConstructorAttribute(JsonConstructorAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JsonConstructorAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonConstructorAttribute, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonConstructorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonConstructorAttribute*, "Newtonsoft.Json", "JsonConstructorAttribute");
