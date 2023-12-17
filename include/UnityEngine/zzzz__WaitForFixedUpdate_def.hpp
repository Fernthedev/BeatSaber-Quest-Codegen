#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
CORDL_MODULE_EXPORT(WaitForFixedUpdate)
// Forward declare root types
namespace UnityEngine {
class WaitForFixedUpdate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::WaitForFixedUpdate);
// Type: UnityEngine::WaitForFixedUpdate
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10191))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10231))
// CS Name: ::UnityEngine::WaitForFixedUpdate*
class CORDL_TYPE WaitForFixedUpdate : public ::UnityEngine::YieldInstruction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::YieldInstruction)]{};

// Ctor Parameters [CppParam { name: "", ty: "WaitForFixedUpdate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitForFixedUpdate(WaitForFixedUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitForFixedUpdate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitForFixedUpdate(WaitForFixedUpdate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WaitForFixedUpdate()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::WaitForFixedUpdate, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::WaitForFixedUpdate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WaitForFixedUpdate*, "UnityEngine", "WaitForFixedUpdate");
