#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DisallowMultipleComponent)
// Forward declare root types
namespace UnityEngine {
class DisallowMultipleComponent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::DisallowMultipleComponent);
// Type: UnityEngine::DisallowMultipleComponent
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10213))
// CS Name: ::UnityEngine::DisallowMultipleComponent*
class CORDL_TYPE DisallowMultipleComponent : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::UnityEngine::DisallowMultipleComponent* New_ctor() ;

/// @brief Method .ctor addr 0x2cd2764 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DisallowMultipleComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisallowMultipleComponent(DisallowMultipleComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisallowMultipleComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisallowMultipleComponent(DisallowMultipleComponent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DisallowMultipleComponent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::DisallowMultipleComponent, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::DisallowMultipleComponent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DisallowMultipleComponent*, "UnityEngine", "DisallowMultipleComponent");
