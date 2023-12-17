#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(Il2CppEagerStaticClassConstructionAttribute)
// Forward declare root types
namespace Unity::IL2CPP::CompilerServices {
class Il2CppEagerStaticClassConstructionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute);
// Type: Unity.IL2CPP.CompilerServices::Il2CppEagerStaticClassConstructionAttribute
namespace Unity::IL2CPP::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9984))
// CS Name: ::Unity.IL2CPP.CompilerServices::Il2CppEagerStaticClassConstructionAttribute*
class CORDL_TYPE Il2CppEagerStaticClassConstructionAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2c9df8c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Il2CppEagerStaticClassConstructionAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Il2CppEagerStaticClassConstructionAttribute(Il2CppEagerStaticClassConstructionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Il2CppEagerStaticClassConstructionAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Il2CppEagerStaticClassConstructionAttribute(Il2CppEagerStaticClassConstructionAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Il2CppEagerStaticClassConstructionAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute, 0x10>, "Size mismatch!");

} // namespace end def Unity::IL2CPP::CompilerServices
NEED_NO_BOX(::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute*, "Unity.IL2CPP.CompilerServices", "Il2CppEagerStaticClassConstructionAttribute");
