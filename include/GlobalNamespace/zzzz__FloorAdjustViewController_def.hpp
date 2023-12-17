#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloorAdjustViewController)
namespace GlobalNamespace {
class Vector3SO;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class FloorAdjustViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloorAdjustViewController);
// Type: ::FloorAdjustViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5633))
// CS Name: ::FloorAdjustViewController*
class CORDL_TYPE FloorAdjustViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::HMUI::ViewController)]{};

/// @brief Field kMoveStep offset 0x0
static constexpr float_t  kMoveStep{0.05};

/// @brief Field kMinPlayerHeight offset 0x0
static constexpr float_t  kMinPlayerHeight{0.5};

/// @brief Field kMaxPlayerHeight offset 0x0
static constexpr float_t  kMaxPlayerHeight{3.0};

/// @brief Field _roomCenter offset 0x70
 __declspec(property(get=__get__roomCenter, put=__set__roomCenter)) ::GlobalNamespace::Vector3SO*  _roomCenter;

/// @brief Field _yIncButton offset 0x78
 __declspec(property(get=__get__yIncButton, put=__set__yIncButton)) ::UnityEngine::UI::Button*  _yIncButton;

/// @brief Field _yDecButton offset 0x80
 __declspec(property(get=__get__yDecButton, put=__set__yDecButton)) ::UnityEngine::UI::Button*  _yDecButton;

/// @brief Field _playerHeightText offset 0x88
 __declspec(property(get=__get__playerHeightText, put=__set__playerHeightText)) ::TMPro::TextMeshProUGUI*  _playerHeightText;

/// @brief Field _vrPlatformHelper offset 0x90
 __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper*  _vrPlatformHelper;

/// @brief Field _playerHeight offset 0x98
 __declspec(property(get=__get__playerHeight, put=__set__playerHeight)) float_t  _playerHeight;

constexpr void __set__roomCenter(::GlobalNamespace::Vector3SO*  value) ;

constexpr ::GlobalNamespace::Vector3SO* __get__roomCenter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> __get__roomCenter() const;

constexpr void __set__yIncButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__yIncButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__yIncButton() const;

constexpr void __set__yDecButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__yDecButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__yDecButton() const;

constexpr void __set__playerHeightText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__playerHeightText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__playerHeightText() const;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper* __get__vrPlatformHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> __get__vrPlatformHelper() const;

constexpr void __set__playerHeight(float_t  value) ;

constexpr float_t& __get__playerHeight() ;

constexpr float_t const& __get__playerHeight() const;

/// @brief Method DidActivate addr 0x22b0cf4 size 0x108 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method Update addr 0x22b0dfc size 0x240 virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::FloorAdjustViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22b103c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__9_0 addr 0x22b1044 size 0x7c virtual false final false
inline void _DidActivate_b__9_0() ;

/// @brief Method <DidActivate>b__9_1 addr 0x22b10c0 size 0x7c virtual false final false
inline void _DidActivate_b__9_1() ;

// Ctor Parameters [CppParam { name: "", ty: "FloorAdjustViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloorAdjustViewController(FloorAdjustViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloorAdjustViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloorAdjustViewController(FloorAdjustViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FloorAdjustViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloorAdjustViewController, 0xa0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloorAdjustViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloorAdjustViewController*, "", "FloorAdjustViewController");
