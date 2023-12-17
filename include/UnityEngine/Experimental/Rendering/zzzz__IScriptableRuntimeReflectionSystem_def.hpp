#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IScriptableRuntimeReflectionSystem)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class IScriptableRuntimeReflectionSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem);
// Type: UnityEngine.Experimental.Rendering::IScriptableRuntimeReflectionSystem
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10408))
// CS Name: ::UnityEngine.Experimental.Rendering::IScriptableRuntimeReflectionSystem*
class CORDL_TYPE IScriptableRuntimeReflectionSystem {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method TickRealtimeProbes addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool TickRealtimeProbes() ;

// Ctor Parameters [CppParam { name: "", ty: "IScriptableRuntimeReflectionSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IScriptableRuntimeReflectionSystem(IScriptableRuntimeReflectionSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IScriptableRuntimeReflectionSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IScriptableRuntimeReflectionSystem(IScriptableRuntimeReflectionSystem const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*, "UnityEngine.Experimental.Rendering", "IScriptableRuntimeReflectionSystem");
