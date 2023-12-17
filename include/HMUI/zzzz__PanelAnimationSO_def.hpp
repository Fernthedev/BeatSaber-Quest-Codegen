#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PanelAnimationSO)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
class Action;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace HMUI {
class PanelAnimationSO;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::PanelAnimationSO);
// Type: HMUI::PanelAnimationSO
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13510))
// CS Name: ::HMUI::PanelAnimationSO*
class CORDL_TYPE PanelAnimationSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field _duration offset 0x18
 __declspec(property(get=__get__duration, put=__set__duration)) float_t  _duration;

/// @brief Field _scaleXAnimationCurve offset 0x20
 __declspec(property(get=__get__scaleXAnimationCurve, put=__set__scaleXAnimationCurve)) ::UnityEngine::AnimationCurve*  _scaleXAnimationCurve;

/// @brief Field _scaleYAnimationCurve offset 0x28
 __declspec(property(get=__get__scaleYAnimationCurve, put=__set__scaleYAnimationCurve)) ::UnityEngine::AnimationCurve*  _scaleYAnimationCurve;

/// @brief Field _alphaAnimationCurve offset 0x30
 __declspec(property(get=__get__alphaAnimationCurve, put=__set__alphaAnimationCurve)) ::UnityEngine::AnimationCurve*  _alphaAnimationCurve;

/// @brief Field _parentAlphaAnimationCurve offset 0x38
 __declspec(property(get=__get__parentAlphaAnimationCurve, put=__set__parentAlphaAnimationCurve)) ::UnityEngine::AnimationCurve*  _parentAlphaAnimationCurve;

constexpr void __set__duration(float_t  value) ;

constexpr float_t& __get__duration() ;

constexpr float_t const& __get__duration() const;

constexpr void __set__scaleXAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__scaleXAnimationCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__scaleXAnimationCurve() const;

constexpr void __set__scaleYAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__scaleYAnimationCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__scaleYAnimationCurve() const;

constexpr void __set__alphaAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__alphaAnimationCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__alphaAnimationCurve() const;

constexpr void __set__parentAlphaAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__parentAlphaAnimationCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__parentAlphaAnimationCurve() const;

/// @brief Method ExecuteAnimation addr 0x2118200 size 0x10 virtual false final false
inline void ExecuteAnimation(::UnityEngine::GameObject*  go) ;

/// @brief Method ExecuteAnimation addr 0x21182dc size 0x10 virtual false final false
inline void ExecuteAnimation(::UnityEngine::GameObject*  go, ::System::Action*  finishedCallback) ;

/// @brief Method ExecuteAnimation addr 0x21182ec size 0xc virtual false final false
inline void ExecuteAnimation(::UnityEngine::GameObject*  go, ::UnityEngine::CanvasGroup*  parentCanvasGroup, ::System::Action*  finishedCallback) ;

/// @brief Method ExecuteAnimation addr 0x2118210 size 0xcc virtual false final false
inline void ExecuteAnimation(::UnityEngine::GameObject*  go, ::UnityEngine::CanvasGroup*  parentCanvasGroup, bool  instant, ::System::Action*  finishedCallback) ;

static inline ::HMUI::PanelAnimationSO* New_ctor() ;

/// @brief Method .ctor addr 0x21182f8 size 0x94 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PanelAnimationSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PanelAnimationSO(PanelAnimationSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PanelAnimationSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PanelAnimationSO(PanelAnimationSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PanelAnimationSO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::PanelAnimationSO, 0x40>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::PanelAnimationSO);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::PanelAnimationSO*, "HMUI", "PanelAnimationSO");
