#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Misc)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UI {
class Misc;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::Misc);
// Type: UnityEngine.UI::Misc
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13102))
// CS Name: ::UnityEngine.UI::Misc*
class CORDL_TYPE Misc : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Destroy addr 0x2d7d9b4 size 0x100 virtual false final false
static inline void Destroy(::UnityEngine::Object*  obj) ;

/// @brief Method DestroyImmediate addr 0x2d7dab4 size 0xa8 virtual false final false
static inline void DestroyImmediate(::UnityEngine::Object*  obj) ;

// Ctor Parameters [CppParam { name: "", ty: "Misc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Misc(Misc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Misc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Misc(Misc const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Misc()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Misc, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::Misc);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Misc*, "UnityEngine.UI", "Misc");
