#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HoverHintPanel)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HMUI {
class HoverHintPanel;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::HoverHintPanel);
// Type: HMUI::HoverHintPanel
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13536))
// CS Name: ::HMUI::HoverHintPanel*
class CORDL_TYPE HoverHintPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _text offset 0x18
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshProUGUI*  _text;

/// @brief Field _padding offset 0x20
 __declspec(property(get=__get__padding, put=__set__padding)) ::UnityEngine::Vector2  _padding;

/// @brief Field _containerPadding offset 0x28
 __declspec(property(get=__get__containerPadding, put=__set__containerPadding)) ::UnityEngine::Vector2  _containerPadding;

/// @brief Field _separator offset 0x30
 __declspec(property(get=__get__separator, put=__set__separator)) float_t  _separator;

/// @brief Field _zOffset offset 0x34
 __declspec(property(get=__get__zOffset, put=__set__zOffset)) float_t  _zOffset;

/// @brief Field <isShown>k__BackingField offset 0x38
 __declspec(property(get=__get__isShown_k__BackingField, put=__set__isShown_k__BackingField)) bool  _isShown_k__BackingField;

 __declspec(property(get=get_isShown, put=set_isShown)) bool  isShown;

constexpr void __set__text(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__text() const;

constexpr void __set__padding(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__padding() ;

constexpr ::UnityEngine::Vector2 const& __get__padding() const;

constexpr void __set__containerPadding(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__containerPadding() ;

constexpr ::UnityEngine::Vector2 const& __get__containerPadding() const;

constexpr void __set__separator(float_t  value) ;

constexpr float_t& __get__separator() ;

constexpr float_t const& __get__separator() const;

constexpr void __set__zOffset(float_t  value) ;

constexpr float_t& __get__zOffset() ;

constexpr float_t const& __get__zOffset() const;

constexpr void __set__isShown_k__BackingField(bool  value) ;

constexpr bool& __get__isShown_k__BackingField() ;

constexpr bool const& __get__isShown_k__BackingField() const;

/// @brief Method get_isShown addr 0x211d7b4 size 0x8 virtual false final false
inline bool get_isShown() ;

/// @brief Method set_isShown addr 0x211d7bc size 0xc virtual false final false
inline void set_isShown(bool  value) ;

/// @brief Method Awake addr 0x211d7c8 size 0xb4 virtual false final false
inline void Awake() ;

/// @brief Method Show addr 0x211d2d8 size 0x274 virtual false final false
inline void Show(::StringW  text, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector2  containerSize, ::UnityEngine::Rect  spawnRect) ;

/// @brief Method Hide addr 0x211ce9c size 0x28 virtual false final false
inline void Hide() ;

/// @brief Method CalculatePanelPosition addr 0x211d87c size 0x10c virtual false final false
inline ::UnityEngine::Vector2 CalculatePanelPosition(::UnityEngine::Vector2  containerSize, ::UnityEngine::Rect  spawnRect, ::UnityEngine::Vector2  panelSize) ;

static inline ::HMUI::HoverHintPanel* New_ctor() ;

/// @brief Method .ctor addr 0x211d988 size 0x20 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HoverHintPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HoverHintPanel(HoverHintPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoverHintPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoverHintPanel(HoverHintPanel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HoverHintPanel()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::HoverHintPanel, 0x40>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::HoverHintPanel);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverHintPanel*, "HMUI", "HoverHintPanel");
