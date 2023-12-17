#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModalView)
namespace Zenject {
class DiContainer;
}
namespace UnityEngine {
class GameObject;
}
namespace HMUI {
class __ModalView____c__DisplayClass17_0;
}
namespace System {
class Action;
}
namespace HMUI {
class PanelAnimationSO;
}
namespace UnityEngine {
class Canvas;
}
namespace HMUI {
class ViewController;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace HMUI {
class __ModalView____c__DisplayClass21_0;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HMUI {
class ModalView;
}
namespace HMUI {
class __ModalView____c__DisplayClass17_0;
}
namespace HMUI {
class __ModalView____c__DisplayClass21_0;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ModalView);
MARK_REF_PTR_T(::HMUI::__ModalView____c__DisplayClass17_0);
MARK_REF_PTR_T(::HMUI::__ModalView____c__DisplayClass21_0);
// Type: ::<>c__DisplayClass17_0
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13634))
// CS Name: ::ModalView::<>c__DisplayClass17_0*
class CORDL_TYPE __ModalView____c__DisplayClass17_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::ModalView*  __4__this;

/// @brief Field finishedCallback offset 0x18
 __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback)) ::System::Action*  finishedCallback;

constexpr void __set___4__this(::HMUI::ModalView*  value) ;

constexpr ::HMUI::ModalView* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ModalView*> __get___4__this() const;

constexpr void __set_finishedCallback(::System::Action*  value) ;

constexpr ::System::Action* __get_finishedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_finishedCallback() const;

static inline ::HMUI::__ModalView____c__DisplayClass17_0* New_ctor() ;

/// @brief Method .ctor addr 0x2142054 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Hide>b__0 addr 0x2142aa4 size 0x7c virtual false final false
inline void _Hide_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__ModalView____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ModalView____c__DisplayClass17_0(__ModalView____c__DisplayClass17_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ModalView____c__DisplayClass17_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ModalView____c__DisplayClass17_0(__ModalView____c__DisplayClass17_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ModalView____c__DisplayClass17_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ModalView____c__DisplayClass17_0, 0x20>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<>c__DisplayClass21_0
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13635))
// CS Name: ::ModalView::<>c__DisplayClass21_0*
class CORDL_TYPE __ModalView____c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::ModalView*  __4__this;

/// @brief Field prevAnimateParentCanvas offset 0x18
 __declspec(property(get=__get_prevAnimateParentCanvas, put=__set_prevAnimateParentCanvas)) bool  prevAnimateParentCanvas;

constexpr void __set___4__this(::HMUI::ModalView*  value) ;

constexpr ::HMUI::ModalView* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ModalView*> __get___4__this() const;

constexpr void __set_prevAnimateParentCanvas(bool  value) ;

constexpr bool& __get_prevAnimateParentCanvas() ;

constexpr bool const& __get_prevAnimateParentCanvas() const;

static inline ::HMUI::__ModalView____c__DisplayClass21_0* New_ctor() ;

/// @brief Method .ctor addr 0x2142a8c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <HandleParentViewControllerDidDeactivate>b__0 addr 0x2142b20 size 0x20 virtual false final false
inline void _HandleParentViewControllerDidDeactivate_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__ModalView____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ModalView____c__DisplayClass21_0(__ModalView____c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ModalView____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ModalView____c__DisplayClass21_0(__ModalView____c__DisplayClass21_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ModalView____c__DisplayClass21_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ModalView____c__DisplayClass21_0, 0x20>, "Size mismatch!");

} // namespace end def HMUI
// Type: HMUI::ModalView
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13636))
// CS Name: ::HMUI::ModalView*
class CORDL_TYPE ModalView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass21_0 = ::HMUI::__ModalView____c__DisplayClass21_0;

using __c__DisplayClass17_0 = ::HMUI::__ModalView____c__DisplayClass17_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _presentPanelAnimations offset 0x18
 __declspec(property(get=__get__presentPanelAnimations, put=__set__presentPanelAnimations)) ::HMUI::PanelAnimationSO*  _presentPanelAnimations;

/// @brief Field _dismissPanelAnimation offset 0x20
 __declspec(property(get=__get__dismissPanelAnimation, put=__set__dismissPanelAnimation)) ::HMUI::PanelAnimationSO*  _dismissPanelAnimation;

/// @brief Field _animateParentCanvas offset 0x28
 __declspec(property(get=__get__animateParentCanvas, put=__set__animateParentCanvas)) bool  _animateParentCanvas;

/// @brief Field _container offset 0x30
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field blockerClickedEvent offset 0x38
 __declspec(property(get=__get_blockerClickedEvent, put=__set_blockerClickedEvent)) ::System::Action*  blockerClickedEvent;

/// @brief Field _previousParent offset 0x40
 __declspec(property(get=__get__previousParent, put=__set__previousParent)) ::UnityEngine::Transform*  _previousParent;

/// @brief Field _isShown offset 0x48
 __declspec(property(get=__get__isShown, put=__set__isShown)) bool  _isShown;

/// @brief Field _viewIsValid offset 0x49
 __declspec(property(get=__get__viewIsValid, put=__set__viewIsValid)) bool  _viewIsValid;

/// @brief Field _mainCanvas offset 0x50
 __declspec(property(get=__get__mainCanvas, put=__set__mainCanvas)) ::UnityEngine::Canvas*  _mainCanvas;

/// @brief Field _parentCanvasGroup offset 0x58
 __declspec(property(get=__get__parentCanvasGroup, put=__set__parentCanvasGroup)) ::UnityEngine::CanvasGroup*  _parentCanvasGroup;

/// @brief Field _blockerGO offset 0x60
 __declspec(property(get=__get__blockerGO, put=__set__blockerGO)) ::UnityEngine::GameObject*  _blockerGO;

/// @brief Field _test offset 0x68
 __declspec(property(get=__get__test, put=__set__test)) int32_t  _test;

constexpr void __set__presentPanelAnimations(::HMUI::PanelAnimationSO*  value) ;

constexpr ::HMUI::PanelAnimationSO* __get__presentPanelAnimations() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::PanelAnimationSO*> __get__presentPanelAnimations() const;

constexpr void __set__dismissPanelAnimation(::HMUI::PanelAnimationSO*  value) ;

constexpr ::HMUI::PanelAnimationSO* __get__dismissPanelAnimation() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::PanelAnimationSO*> __get__dismissPanelAnimation() const;

constexpr void __set__animateParentCanvas(bool  value) ;

constexpr bool& __get__animateParentCanvas() ;

constexpr bool const& __get__animateParentCanvas() const;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set_blockerClickedEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_blockerClickedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_blockerClickedEvent() const;

constexpr void __set__previousParent(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__previousParent() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__previousParent() const;

constexpr void __set__isShown(bool  value) ;

constexpr bool& __get__isShown() ;

constexpr bool const& __get__isShown() const;

constexpr void __set__viewIsValid(bool  value) ;

constexpr bool& __get__viewIsValid() ;

constexpr bool const& __get__viewIsValid() const;

constexpr void __set__mainCanvas(::UnityEngine::Canvas*  value) ;

constexpr ::UnityEngine::Canvas* __get__mainCanvas() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> __get__mainCanvas() const;

constexpr void __set__parentCanvasGroup(::UnityEngine::CanvasGroup*  value) ;

constexpr ::UnityEngine::CanvasGroup* __get__parentCanvasGroup() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> __get__parentCanvasGroup() const;

constexpr void __set__blockerGO(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__blockerGO() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__blockerGO() const;

constexpr void __set__test(int32_t  value) ;

constexpr int32_t& __get__test() ;

constexpr int32_t const& __get__test() const;

/// @brief Method add_blockerClickedEvent addr 0x21419f0 size 0x9c virtual false final false
inline void add_blockerClickedEvent(::System::Action*  value) ;

/// @brief Method remove_blockerClickedEvent addr 0x2141a8c size 0x9c virtual false final false
inline void remove_blockerClickedEvent(::System::Action*  value) ;

/// @brief Method OnDisable addr 0x2141b28 size 0xc virtual false final false
inline void OnDisable() ;

/// @brief Method OnDestroy addr 0x2141d48 size 0x8c virtual false final false
inline void OnDestroy() ;

/// @brief Method SetupView addr 0x2141dd4 size 0x280 virtual false final false
inline void SetupView(::UnityEngine::Transform*  screenTransform) ;

/// @brief Method Hide addr 0x2141b34 size 0x214 virtual false final false
inline void Hide(bool  animated, ::System::Action*  finishedCallback) ;

/// @brief Method Show addr 0x214205c size 0x3e4 virtual false final false
inline void Show(bool  animated, bool  moveToCenter, ::System::Action*  finishedCallback) ;

/// @brief Method CreateBlocker addr 0x2142540 size 0x45c virtual false final false
inline ::UnityEngine::GameObject* CreateBlocker() ;

/// @brief Method HandleBlockerButtonClicked addr 0x214299c size 0x1c virtual false final false
inline void HandleBlockerButtonClicked() ;

/// @brief Method HandleParentViewControllerDidDeactivate addr 0x21429b8 size 0xd4 virtual false final false
inline void HandleParentViewControllerDidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method GetModalRootTransform addr 0x2142440 size 0x100 virtual false final false
static inline ::UnityEngine::Transform* GetModalRootTransform(::UnityEngine::Transform*  transform, ByRef<::UnityEngine::Canvas*>  canvas, ByRef<::HMUI::ViewController*>  viewController) ;

static inline ::HMUI::ModalView* New_ctor() ;

/// @brief Method .ctor addr 0x2142a94 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ModalView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModalView(ModalView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModalView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModalView(ModalView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ModalView()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ModalView, 0x70>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::ModalView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ModalView*, "HMUI", "ModalView");
NEED_NO_BOX(::HMUI::__ModalView____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ModalView____c__DisplayClass17_0*, "HMUI", "ModalView/<>c__DisplayClass17_0");
NEED_NO_BOX(::HMUI::__ModalView____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ModalView____c__DisplayClass21_0*, "HMUI", "ModalView/<>c__DisplayClass21_0");
