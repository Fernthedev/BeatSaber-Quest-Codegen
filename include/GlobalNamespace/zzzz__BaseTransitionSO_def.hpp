#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BaseTransitionSO)
namespace GlobalNamespace {
class TransitionTimingSO;
}
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseTransitionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BaseTransitionSO);
// Type: ::BaseTransitionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5443))
// CS Name: ::BaseTransitionSO*
class CORDL_TYPE BaseTransitionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _transitionTiming offset 0x18
 __declspec(property(get=__get__transitionTiming, put=__set__transitionTiming)) ::GlobalNamespace::TransitionTimingSO*  _transitionTiming;

 __declspec(property(get=get_easeType)) ::GlobalNamespace::EaseType  easeType;

 __declspec(property(get=get_easeDuration)) float_t  easeDuration;

constexpr void __set__transitionTiming(::GlobalNamespace::TransitionTimingSO*  value) ;

constexpr ::GlobalNamespace::TransitionTimingSO* __get__transitionTiming() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TransitionTimingSO*> __get__transitionTiming() const;

/// @brief Method get_easeType addr 0x227cddc size 0x1c virtual false final false
inline ::GlobalNamespace::EaseType get_easeType() ;

/// @brief Method get_easeDuration addr 0x227cdf8 size 0x1c virtual false final false
inline float_t get_easeDuration() ;

static inline ::GlobalNamespace::BaseTransitionSO* New_ctor() ;

/// @brief Method .ctor addr 0x227ce14 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseTransitionSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseTransitionSO(BaseTransitionSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseTransitionSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseTransitionSO(BaseTransitionSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseTransitionSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseTransitionSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BaseTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseTransitionSO*, "", "BaseTransitionSO");
