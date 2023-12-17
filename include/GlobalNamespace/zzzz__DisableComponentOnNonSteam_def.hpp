#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisableComponentOnNonSteam)
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableComponentOnNonSteam;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisableComponentOnNonSteam);
// Type: ::DisableComponentOnNonSteam
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5360))
// CS Name: ::DisableComponentOnNonSteam*
class CORDL_TYPE DisableComponentOnNonSteam : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _component offset 0x18
 __declspec(property(get=__get__component, put=__set__component)) ::UnityEngine::MonoBehaviour*  _component;

constexpr void __set__component(::UnityEngine::MonoBehaviour*  value) ;

constexpr ::UnityEngine::MonoBehaviour* __get__component() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MonoBehaviour*> __get__component() const;

/// @brief Method Awake addr 0x226c460 size 0x20 virtual false final false
inline void Awake() ;

static inline ::GlobalNamespace::DisableComponentOnNonSteam* New_ctor() ;

/// @brief Method .ctor addr 0x226c480 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DisableComponentOnNonSteam", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisableComponentOnNonSteam(DisableComponentOnNonSteam && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisableComponentOnNonSteam", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisableComponentOnNonSteam(DisableComponentOnNonSteam const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DisableComponentOnNonSteam()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisableComponentOnNonSteam, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisableComponentOnNonSteam);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableComponentOnNonSteam*, "", "DisableComponentOnNonSteam");
