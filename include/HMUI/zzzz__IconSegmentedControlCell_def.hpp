#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IconSegmentedControlCell)
namespace HMUI {
class HoverHint;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace HMUI {
class IconSegmentedControlCell;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::IconSegmentedControlCell);
// Type: HMUI::IconSegmentedControlCell
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13551))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13548))
// CS Name: ::HMUI::IconSegmentedControlCell*
class CORDL_TYPE IconSegmentedControlCell : public ::HMUI::SegmentedControlCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::HMUI::SegmentedControlCell)]{};

/// @brief Field _icon offset 0x50
 __declspec(property(get=__get__icon, put=__set__icon)) ::UnityEngine::UI::Image*  _icon;

/// @brief Field _hoverHint offset 0x58
 __declspec(property(get=__get__hoverHint, put=__set__hoverHint)) ::HMUI::HoverHint*  _hoverHint;

/// @brief Field _backgroundGameObject offset 0x60
 __declspec(property(get=__get__backgroundGameObject, put=__set__backgroundGameObject)) ::UnityEngine::GameObject*  _backgroundGameObject;

 __declspec(property(get=get_sprite, put=set_sprite)) ::UnityEngine::Sprite*  sprite;

 __declspec(property(put=set_hintText)) ::StringW  hintText;

 __declspec(property(put=set_iconSize)) float_t  iconSize;

 __declspec(property(put=set_hideBackgroundImage)) bool  hideBackgroundImage;

constexpr void __set__icon(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__icon() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__icon() const;

constexpr void __set__hoverHint(::HMUI::HoverHint*  value) ;

constexpr ::HMUI::HoverHint* __get__hoverHint() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> __get__hoverHint() const;

constexpr void __set__backgroundGameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__backgroundGameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__backgroundGameObject() const;

/// @brief Method set_sprite addr 0x211f724 size 0x1c virtual false final false
inline void set_sprite(::UnityEngine::Sprite*  value) ;

/// @brief Method get_sprite addr 0x211f99c size 0x1c virtual false final false
inline ::UnityEngine::Sprite* get_sprite() ;

/// @brief Method set_hintText addr 0x211f740 size 0x1c virtual false final false
inline void set_hintText(::StringW  value) ;

/// @brief Method set_iconSize addr 0x211f7f8 size 0x3c virtual false final false
inline void set_iconSize(float_t  value) ;

/// @brief Method set_hideBackgroundImage addr 0x211f75c size 0x9c virtual false final false
inline void set_hideBackgroundImage(bool  value) ;

static inline ::HMUI::IconSegmentedControlCell* New_ctor() ;

/// @brief Method .ctor addr 0x211f9b8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControlCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IconSegmentedControlCell(IconSegmentedControlCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControlCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IconSegmentedControlCell(IconSegmentedControlCell const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IconSegmentedControlCell()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::IconSegmentedControlCell, 0x68>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::IconSegmentedControlCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::IconSegmentedControlCell*, "HMUI", "IconSegmentedControlCell");
