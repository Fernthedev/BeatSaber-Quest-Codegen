#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SelectableCellStaticAnimations)
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationClip;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace HMUI {
class SelectableCell;
}
// Forward declare root types
namespace HMUI {
class SelectableCellStaticAnimations;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::SelectableCellStaticAnimations);
// Type: HMUI::SelectableCellStaticAnimations
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13654))
// CS Name: ::HMUI::SelectableCellStaticAnimations*
class CORDL_TYPE SelectableCellStaticAnimations : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _selectableCell offset 0x18
 __declspec(property(get=__get__selectableCell, put=__set__selectableCell)) ::HMUI::SelectableCell*  _selectableCell;

/// @brief Field _normalAnimationClip offset 0x20
 __declspec(property(get=__get__normalAnimationClip, put=__set__normalAnimationClip)) ::UnityEngine::AnimationClip*  _normalAnimationClip;

/// @brief Field _highlightedAnimationClip offset 0x28
 __declspec(property(get=__get__highlightedAnimationClip, put=__set__highlightedAnimationClip)) ::UnityEngine::AnimationClip*  _highlightedAnimationClip;

/// @brief Field _selectedAnimationClip offset 0x30
 __declspec(property(get=__get__selectedAnimationClip, put=__set__selectedAnimationClip)) ::UnityEngine::AnimationClip*  _selectedAnimationClip;

/// @brief Field _selectedAndHighlightedAnimationClip offset 0x38
 __declspec(property(get=__get__selectedAndHighlightedAnimationClip, put=__set__selectedAndHighlightedAnimationClip)) ::UnityEngine::AnimationClip*  _selectedAndHighlightedAnimationClip;

constexpr void __set__selectableCell(::HMUI::SelectableCell*  value) ;

constexpr ::HMUI::SelectableCell* __get__selectableCell() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::SelectableCell*> __get__selectableCell() const;

constexpr void __set__normalAnimationClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__normalAnimationClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__normalAnimationClip() const;

constexpr void __set__highlightedAnimationClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__highlightedAnimationClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__highlightedAnimationClip() const;

constexpr void __set__selectedAnimationClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__selectedAnimationClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__selectedAnimationClip() const;

constexpr void __set__selectedAndHighlightedAnimationClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__selectedAndHighlightedAnimationClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__selectedAndHighlightedAnimationClip() const;

/// @brief Method Awake addr 0x2145e20 size 0xec virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x2145f0c size 0x4 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x2145f74 size 0xec virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleSelectionDidChange addr 0x2146060 size 0x4 virtual false final false
inline void HandleSelectionDidChange(::HMUI::SelectableCell*  selectableCell, ::HMUI::__SelectableCell__TransitionType  transitionType, ::System::Object*  changeOwner) ;

/// @brief Method HandleHighlightDidChange addr 0x2146064 size 0x4 virtual false final false
inline void HandleHighlightDidChange(::HMUI::SelectableCell*  selectableCell, ::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method RefreshVisuals addr 0x2145f10 size 0x64 virtual false final false
inline void RefreshVisuals() ;

static inline ::HMUI::SelectableCellStaticAnimations* New_ctor() ;

/// @brief Method .ctor addr 0x2146068 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SelectableCellStaticAnimations", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectableCellStaticAnimations(SelectableCellStaticAnimations && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectableCellStaticAnimations", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectableCellStaticAnimations(SelectableCellStaticAnimations const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SelectableCellStaticAnimations()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::SelectableCellStaticAnimations, 0x40>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::SelectableCellStaticAnimations);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SelectableCellStaticAnimations*, "HMUI", "SelectableCellStaticAnimations");
