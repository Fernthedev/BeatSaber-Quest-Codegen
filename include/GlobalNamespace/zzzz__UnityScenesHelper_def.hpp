#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityScenesHelper)
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityScenesHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UnityScenesHelper);
// Type: ::UnityScenesHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15860))
// CS Name: ::UnityScenesHelper*
class CORDL_TYPE UnityScenesHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method SetActiveRootObjectsInScene addr 0xe28724 size 0x1c8 virtual false final false
static inline void SetActiveRootObjectsInScene(::UnityEngine::SceneManagement::Scene  scene, bool  active) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityScenesHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityScenesHelper(UnityScenesHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityScenesHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityScenesHelper(UnityScenesHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityScenesHelper()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityScenesHelper, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UnityScenesHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityScenesHelper*, "", "UnityScenesHelper");
