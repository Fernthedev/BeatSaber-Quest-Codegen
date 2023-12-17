#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneManagerAPIInternal)
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
class SceneManagerAPIInternal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SceneManagement::SceneManagerAPIInternal);
// Type: UnityEngine.SceneManagement::SceneManagerAPIInternal
namespace UnityEngine::SceneManagement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10381))
// CS Name: ::UnityEngine.SceneManagement::SceneManagerAPIInternal*
class CORDL_TYPE SceneManagerAPIInternal : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetNumScenesInBuildSettings addr 0x2cf1b28 size 0x28 virtual false final false
static inline int32_t GetNumScenesInBuildSettings() ;

/// @brief Method LoadSceneAsyncNameIndexInternal addr 0x2cf1b50 size 0x60 virtual false final false
static inline ::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::StringW  sceneName, int32_t  sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters, bool  mustCompleteNextFrame) ;

/// @brief Method UnloadSceneNameIndexInternal addr 0x2cf1c0c size 0x6c virtual false final false
static inline ::UnityEngine::AsyncOperation* UnloadSceneNameIndexInternal(::StringW  sceneName, int32_t  sceneBuildIndex, bool  immediately, ::UnityEngine::SceneManagement::UnloadSceneOptions  options, ByRef<bool>  outSuccess) ;

/// @brief Method LoadSceneAsyncNameIndexInternal_Injected addr 0x2cf1bb0 size 0x5c virtual false final false
static inline ::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal_Injected(::StringW  sceneName, int32_t  sceneBuildIndex, ByRef<::UnityEngine::SceneManagement::LoadSceneParameters>  parameters, bool  mustCompleteNextFrame) ;

// Ctor Parameters [CppParam { name: "", ty: "SceneManagerAPIInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneManagerAPIInternal(SceneManagerAPIInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneManagerAPIInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneManagerAPIInternal(SceneManagerAPIInternal const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SceneManagerAPIInternal()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SceneManagement::SceneManagerAPIInternal, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::SceneManagement
NEED_NO_BOX(::UnityEngine::SceneManagement::SceneManagerAPIInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::SceneManagerAPIInternal*, "UnityEngine.SceneManagement", "SceneManagerAPIInternal");
