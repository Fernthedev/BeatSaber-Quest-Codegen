#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScriptPlayableBinding)
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace UnityEngine::Playables {
class ScriptPlayableBinding;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::ScriptPlayableBinding);
// Type: UnityEngine.Playables::ScriptPlayableBinding
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10432))
// CS Name: ::UnityEngine.Playables::ScriptPlayableBinding*
class CORDL_TYPE ScriptPlayableBinding : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Create addr 0x2cf6140 size 0xbc virtual false final false
static inline ::UnityEngine::Playables::PlayableBinding Create(::StringW  name, ::UnityEngine::Object*  key, ::System::Type*  type) ;

/// @brief Method CreateScriptOutput addr 0x2cf61fc size 0x4 virtual false final false
static inline ::UnityEngine::Playables::PlayableOutput CreateScriptOutput(::UnityEngine::Playables::PlayableGraph  graph, ::StringW  name) ;

// Ctor Parameters [CppParam { name: "", ty: "ScriptPlayableBinding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptPlayableBinding(ScriptPlayableBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptPlayableBinding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptPlayableBinding(ScriptPlayableBinding const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScriptPlayableBinding()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::ScriptPlayableBinding, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::ScriptPlayableBinding);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::ScriptPlayableBinding*, "UnityEngine.Playables", "ScriptPlayableBinding");
