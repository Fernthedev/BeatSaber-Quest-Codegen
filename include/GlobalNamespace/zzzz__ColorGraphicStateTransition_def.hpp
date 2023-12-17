#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
CORDL_MODULE_EXPORT(ColorGraphicStateTransition)
namespace GlobalNamespace {
class ColorTransitionSO;
}
namespace Tweening {
class ColorTween;
}
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorGraphicStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorGraphicStateTransition);
// Type: ::ColorGraphicStateTransition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13042)), TypeDefinitionIndex(TypeDefinitionIndex(5442)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5442), inst: 923 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5446))
// CS Name: ::ColorGraphicStateTransition*
class CORDL_TYPE ColorGraphicStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityEngine::UI::Graphic*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::BaseStateTransition_1<::UnityEngine::UI::Graphic*>)]{};

/// @brief Field _transition offset 0x28
 __declspec(property(get=__get__transition, put=__set__transition)) ::GlobalNamespace::ColorTransitionSO*  _transition;

/// @brief Field _colorTween offset 0x30
 __declspec(property(get=__get__colorTween, put=__set__colorTween)) ::Tweening::ColorTween*  _colorTween;

 __declspec(property(get=get_transition)) ::GlobalNamespace::BaseTransitionSO*  transition;

constexpr void __set__transition(::GlobalNamespace::ColorTransitionSO*  value) ;

constexpr ::GlobalNamespace::ColorTransitionSO* __get__transition() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorTransitionSO*> __get__transition() const;

constexpr void __set__colorTween(::Tweening::ColorTween*  value) ;

constexpr ::Tweening::ColorTween* __get__colorTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> __get__colorTween() const;

/// @brief Method get_transition addr 0x227d2bc size 0x8 virtual true final false
inline ::GlobalNamespace::BaseTransitionSO* get_transition() ;

/// @brief Method TransitionToNormalState addr 0x227d2c4 size 0x2c virtual true final false
inline void TransitionToNormalState() ;

/// @brief Method TransitionToHighlightedState addr 0x227d534 size 0x2c virtual true final false
inline void TransitionToHighlightedState() ;

/// @brief Method TransitionToPressedState addr 0x227d56c size 0x2c virtual true final false
inline void TransitionToPressedState() ;

/// @brief Method TransitionToDisabledState addr 0x227d5a4 size 0x2c virtual true final false
inline void TransitionToDisabledState() ;

/// @brief Method TransitionToSelectedState addr 0x227d5dc size 0x2c virtual true final false
inline void TransitionToSelectedState() ;

/// @brief Method TransitionToSelectedAndHighlightedState addr 0x227d614 size 0x2c virtual true final false
inline void TransitionToSelectedAndHighlightedState() ;

/// @brief Method SetNormalState addr 0x227d64c size 0x3c virtual true final false
inline void SetNormalState() ;

/// @brief Method SetHighlightedState addr 0x227d688 size 0x3c virtual true final false
inline void SetHighlightedState() ;

/// @brief Method SetPressedState addr 0x227d6c4 size 0x3c virtual true final false
inline void SetPressedState() ;

/// @brief Method SetDisabledState addr 0x227d700 size 0x3c virtual true final false
inline void SetDisabledState() ;

/// @brief Method SetSelectedState addr 0x227d73c size 0x3c virtual true final false
inline void SetSelectedState() ;

/// @brief Method SetSelectedAndHighlightedState addr 0x227d778 size 0x3c virtual true final false
inline void SetSelectedAndHighlightedState() ;

/// @brief Method StartTween addr 0x227d2fc size 0x238 virtual false final false
inline void StartTween(::UnityEngine::Color  endColor) ;

static inline ::GlobalNamespace::ColorGraphicStateTransition* New_ctor() ;

/// @brief Method .ctor addr 0x227d7b4 size 0x48 virtual false final false
inline void _ctor() ;

/// @brief Method <StartTween>b__16_0 addr 0x227d7fc size 0x24 virtual false final false
inline void _StartTween_b__16_0(::UnityEngine::Color  color) ;

/// @brief Method <StartTween>b__16_1 addr 0x227d820 size 0x88 virtual false final false
inline void _StartTween_b__16_1() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorGraphicStateTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorGraphicStateTransition(ColorGraphicStateTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorGraphicStateTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorGraphicStateTransition(ColorGraphicStateTransition const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorGraphicStateTransition()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorGraphicStateTransition, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorGraphicStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorGraphicStateTransition*, "", "ColorGraphicStateTransition");
