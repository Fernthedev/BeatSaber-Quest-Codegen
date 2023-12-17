#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CoroutineStarter)
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class CoroutineStarter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CoroutineStarter);
// Type: ::CoroutineStarter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15851))
// CS Name: ::CoroutineStarter*
class CORDL_TYPE CoroutineStarter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Convert operator to "::GlobalNamespace::ICoroutineStarter"
constexpr operator  ::GlobalNamespace::ICoroutineStarter*() noexcept;

/// @brief Method ICoroutineStarter.StartCoroutine addr 0xe27308 size 0xd4 virtual true final true
inline ::UnityEngine::Coroutine* ICoroutineStarter_StartCoroutine(::System::Collections::IEnumerator*  routine) ;

/// @brief Method ICoroutineStarter.StopCoroutine addr 0xe273dc size 0xcc virtual true final true
inline void ICoroutineStarter_StopCoroutine(::UnityEngine::Coroutine*  routine) ;

static inline ::GlobalNamespace::CoroutineStarter* New_ctor() ;

/// @brief Method .ctor addr 0xe274a8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CoroutineStarter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CoroutineStarter(CoroutineStarter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoroutineStarter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoroutineStarter(CoroutineStarter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CoroutineStarter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CoroutineStarter, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CoroutineStarter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoroutineStarter*, "", "CoroutineStarter");
