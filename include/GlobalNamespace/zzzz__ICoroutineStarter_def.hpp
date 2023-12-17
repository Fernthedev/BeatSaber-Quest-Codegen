#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICoroutineStarter)
namespace UnityEngine {
class Coroutine;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace GlobalNamespace {
class ICoroutineStarter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ICoroutineStarter);
// Type: ::ICoroutineStarter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15850))
// CS Name: ::ICoroutineStarter*
class CORDL_TYPE ICoroutineStarter {
public:
// Declarations
/// @brief Method StartCoroutine addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator*  routine) ;

/// @brief Method StopCoroutine addr 0x0 size 0xffffffffffffffff virtual true final false
inline void StopCoroutine(::UnityEngine::Coroutine*  routine) ;

// Ctor Parameters [CppParam { name: "", ty: "ICoroutineStarter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ICoroutineStarter(ICoroutineStarter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ICoroutineStarter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICoroutineStarter(ICoroutineStarter const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ICoroutineStarter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ICoroutineStarter*, "", "ICoroutineStarter");
