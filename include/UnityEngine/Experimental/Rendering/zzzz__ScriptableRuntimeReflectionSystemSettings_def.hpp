#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ScriptableRuntimeReflectionSystemSettings)
namespace UnityEngine::Experimental::Rendering {
class IScriptableRuntimeReflectionSystem;
}
namespace UnityEngine::Experimental::Rendering {
class ScriptableRuntimeReflectionSystemWrapper;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class ScriptableRuntimeReflectionSystemSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings);
// Type: UnityEngine.Experimental.Rendering::ScriptableRuntimeReflectionSystemSettings
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10407))
// CS Name: ::UnityEngine.Experimental.Rendering::ScriptableRuntimeReflectionSystemSettings*
class CORDL_TYPE ScriptableRuntimeReflectionSystemSettings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_Instance(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*  value) ;

static inline ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* getStaticF_s_Instance() ;

/// @brief Method set_Internal_ScriptableRuntimeReflectionSystemSettings_system addr 0x2cf4364 size 0x148 virtual false final false
static inline void set_Internal_ScriptableRuntimeReflectionSystemSettings_system(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*  value) ;

/// @brief Method get_Internal_ScriptableRuntimeReflectionSystemSettings_instance addr 0x2cf44ac size 0x58 virtual false final false
static inline ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* get_Internal_ScriptableRuntimeReflectionSystemSettings_instance() ;

/// @brief Method ScriptingDirtyReflectionSystemInstance addr 0x2cf4504 size 0x28 virtual false final false
static inline void ScriptingDirtyReflectionSystemInstance() ;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRuntimeReflectionSystemSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableRuntimeReflectionSystemSettings(ScriptableRuntimeReflectionSystemSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRuntimeReflectionSystemSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableRuntimeReflectionSystemSettings(ScriptableRuntimeReflectionSystemSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScriptableRuntimeReflectionSystemSettings()  = default;
public:


// Fields

// Static field s_Instance


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*, "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemSettings");
