#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SoloModeSelectionViewController)
namespace GlobalNamespace {
struct __SoloModeSelectionViewController__MenuType;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SoloModeSelectionViewController__MenuType;
}
namespace GlobalNamespace {
class SoloModeSelectionViewController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SoloModeSelectionViewController__MenuType);
MARK_REF_PTR_T(::GlobalNamespace::SoloModeSelectionViewController);
// Type: ::MenuType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5764))
// CS Name: ::SoloModeSelectionViewController::MenuType
struct CORDL_TYPE __SoloModeSelectionViewController__MenuType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____SoloModeSelectionViewController__MenuType_Unwrapped
enum struct ____SoloModeSelectionViewController__MenuType_Unwrapped : int32_t {
__E_FreePlayMode = static_cast<int32_t>(0x0),
__E_NoArrowsMode = static_cast<int32_t>(0x1),
__E_OneSaberMode = static_cast<int32_t>(0x2),
__E_Back = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field FreePlayMode value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__SoloModeSelectionViewController__MenuType const FreePlayMode;

/// @brief Field NoArrowsMode value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__SoloModeSelectionViewController__MenuType const NoArrowsMode;

/// @brief Field OneSaberMode value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__SoloModeSelectionViewController__MenuType const OneSaberMode;

/// @brief Field Back value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__SoloModeSelectionViewController__MenuType const Back;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____SoloModeSelectionViewController__MenuType_Unwrapped () const noexcept {
return std::bit_cast<____SoloModeSelectionViewController__MenuType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __SoloModeSelectionViewController__MenuType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SoloModeSelectionViewController__MenuType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SoloModeSelectionViewController__MenuType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SoloModeSelectionViewController__MenuType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SoloModeSelectionViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5765))
// CS Name: ::SoloModeSelectionViewController*
class CORDL_TYPE SoloModeSelectionViewController : public ::HMUI::ViewController {
public:
// Declarations
using MenuType = ::GlobalNamespace::__SoloModeSelectionViewController__MenuType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _freePlayModeButton offset 0x70
 __declspec(property(get=__get__freePlayModeButton, put=__set__freePlayModeButton)) ::UnityEngine::UI::Button*  _freePlayModeButton;

/// @brief Field _oneSaberModeButton offset 0x78
 __declspec(property(get=__get__oneSaberModeButton, put=__set__oneSaberModeButton)) ::UnityEngine::UI::Button*  _oneSaberModeButton;

/// @brief Field _noArrowsModeButton offset 0x80
 __declspec(property(get=__get__noArrowsModeButton, put=__set__noArrowsModeButton)) ::UnityEngine::UI::Button*  _noArrowsModeButton;

/// @brief Field _dismissButton offset 0x88
 __declspec(property(get=__get__dismissButton, put=__set__dismissButton)) ::UnityEngine::UI::Button*  _dismissButton;

/// @brief Field didFinishEvent offset 0x90
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*  didFinishEvent;

constexpr void __set__freePlayModeButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__freePlayModeButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__freePlayModeButton() const;

constexpr void __set__oneSaberModeButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__oneSaberModeButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__oneSaberModeButton() const;

constexpr void __set__noArrowsModeButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__noArrowsModeButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__noArrowsModeButton() const;

constexpr void __set__dismissButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__dismissButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__dismissButton() const;

constexpr void __set_didFinishEvent(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*> __get_didFinishEvent() const;

/// @brief Method add_didFinishEvent addr 0x22dbc38 size 0xb0 virtual false final false
inline void add_didFinishEvent(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x22dbce8 size 0xb0 virtual false final false
inline void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*  value) ;

/// @brief Method DidActivate addr 0x22dbd98 size 0x1b0 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method HandleMenuButton addr 0x22dbf48 size 0x28 virtual false final false
inline void HandleMenuButton(::GlobalNamespace::__SoloModeSelectionViewController__MenuType  subMenuType) ;

static inline ::GlobalNamespace::SoloModeSelectionViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22dbf70 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__8_0 addr 0x22dbf78 size 0x24 virtual false final false
inline void _DidActivate_b__8_0() ;

/// @brief Method <DidActivate>b__8_1 addr 0x22dbf9c size 0x24 virtual false final false
inline void _DidActivate_b__8_1() ;

/// @brief Method <DidActivate>b__8_2 addr 0x22dbfc0 size 0x24 virtual false final false
inline void _DidActivate_b__8_2() ;

/// @brief Method <DidActivate>b__8_3 addr 0x22dbfe4 size 0x24 virtual false final false
inline void _DidActivate_b__8_3() ;

// Ctor Parameters [CppParam { name: "", ty: "SoloModeSelectionViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SoloModeSelectionViewController(SoloModeSelectionViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoloModeSelectionViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoloModeSelectionViewController(SoloModeSelectionViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SoloModeSelectionViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SoloModeSelectionViewController, 0x98>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SoloModeSelectionViewController__MenuType, "", "SoloModeSelectionViewController/MenuType");
NEED_NO_BOX(::GlobalNamespace::SoloModeSelectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoloModeSelectionViewController*, "", "SoloModeSelectionViewController");
