#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(CustomSignalEventDrawer)
// Forward declare root types
namespace UnityEngine::Timeline {
class CustomSignalEventDrawer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::CustomSignalEventDrawer);
// Type: UnityEngine.Timeline::CustomSignalEventDrawer
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13891))
// CS Name: ::UnityEngine.Timeline::CustomSignalEventDrawer*
class CORDL_TYPE CustomSignalEventDrawer : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::PropertyAttribute)]{};

static inline ::UnityEngine::Timeline::CustomSignalEventDrawer* New_ctor() ;

/// @brief Method .ctor addr 0x2c68d7c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CustomSignalEventDrawer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomSignalEventDrawer(CustomSignalEventDrawer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomSignalEventDrawer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomSignalEventDrawer(CustomSignalEventDrawer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CustomSignalEventDrawer()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::CustomSignalEventDrawer, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::CustomSignalEventDrawer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::CustomSignalEventDrawer*, "UnityEngine.Timeline", "CustomSignalEventDrawer");
