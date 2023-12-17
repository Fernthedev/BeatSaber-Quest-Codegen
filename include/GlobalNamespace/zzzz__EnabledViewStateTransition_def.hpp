#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(EnabledViewStateTransition)
namespace GlobalNamespace {
class EnabledTransitionSO;
}
namespace GlobalNamespace {
class BaseTransitionSO;
}
// Forward declare root types
namespace GlobalNamespace {
class EnabledViewStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnabledViewStateTransition);
// Type: ::EnabledViewStateTransition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5442), inst: 921 }), TypeDefinitionIndex(TypeDefinitionIndex(10187)), TypeDefinitionIndex(TypeDefinitionIndex(5442))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5450))
// CS Name: ::EnabledViewStateTransition*
class CORDL_TYPE EnabledViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityEngine::Behaviour*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::BaseStateTransition_1<::UnityEngine::Behaviour*>)]{};

/// @brief Field _transition offset 0x28
 __declspec(property(get=__get__transition, put=__set__transition)) ::GlobalNamespace::EnabledTransitionSO*  _transition;

 __declspec(property(get=get_transition)) ::GlobalNamespace::BaseTransitionSO*  transition;

constexpr void __set__transition(::GlobalNamespace::EnabledTransitionSO*  value) ;

constexpr ::GlobalNamespace::EnabledTransitionSO* __get__transition() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnabledTransitionSO*> __get__transition() const;

/// @brief Method get_transition addr 0x227de8c size 0x8 virtual true final false
inline ::GlobalNamespace::BaseTransitionSO* get_transition() ;

/// @brief Method TransitionToNormalState addr 0x227de94 size 0xc virtual true final false
inline void TransitionToNormalState() ;

/// @brief Method TransitionToHighlightedState addr 0x227dea0 size 0xc virtual true final false
inline void TransitionToHighlightedState() ;

/// @brief Method TransitionToPressedState addr 0x227deac size 0x10 virtual true final false
inline void TransitionToPressedState() ;

/// @brief Method TransitionToDisabledState addr 0x227debc size 0x10 virtual true final false
inline void TransitionToDisabledState() ;

/// @brief Method TransitionToSelectedState addr 0x227decc size 0x10 virtual true final false
inline void TransitionToSelectedState() ;

/// @brief Method TransitionToSelectedAndHighlightedState addr 0x227dedc size 0x10 virtual true final false
inline void TransitionToSelectedAndHighlightedState() ;

/// @brief Method SetNormalState addr 0x227deec size 0x28 virtual true final false
inline void SetNormalState() ;

/// @brief Method SetHighlightedState addr 0x227df14 size 0x28 virtual true final false
inline void SetHighlightedState() ;

/// @brief Method SetPressedState addr 0x227df3c size 0x28 virtual true final false
inline void SetPressedState() ;

/// @brief Method SetDisabledState addr 0x227df64 size 0x28 virtual true final false
inline void SetDisabledState() ;

/// @brief Method SetSelectedState addr 0x227df8c size 0x28 virtual true final false
inline void SetSelectedState() ;

/// @brief Method SetSelectedAndHighlightedState addr 0x227dfb4 size 0x28 virtual true final false
inline void SetSelectedAndHighlightedState() ;

static inline ::GlobalNamespace::EnabledViewStateTransition* New_ctor() ;

/// @brief Method .ctor addr 0x227dfdc size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnabledViewStateTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnabledViewStateTransition(EnabledViewStateTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnabledViewStateTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnabledViewStateTransition(EnabledViewStateTransition const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnabledViewStateTransition()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnabledViewStateTransition, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnabledViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnabledViewStateTransition*, "", "EnabledViewStateTransition");
