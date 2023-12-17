#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_DefaultControls)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Color;
}
namespace TMPro {
class TMP_Text;
}
namespace TMPro {
struct __TMP_DefaultControls__Resources;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace TMPro {
class TMP_DefaultControls;
}
namespace TMPro {
struct __TMP_DefaultControls__Resources;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_DefaultControls);
MARK_VAL_T(::TMPro::__TMP_DefaultControls__Resources);
// Type: ::Resources
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12345))
// CS Name: ::TMP_DefaultControls::Resources
struct CORDL_TYPE __TMP_DefaultControls__Resources : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field standard offset 0x0
 __declspec(property(get=__get_standard, put=__set_standard)) ::UnityEngine::Sprite*  standard;

/// @brief Field background offset 0x8
 __declspec(property(get=__get_background, put=__set_background)) ::UnityEngine::Sprite*  background;

/// @brief Field inputField offset 0x10
 __declspec(property(get=__get_inputField, put=__set_inputField)) ::UnityEngine::Sprite*  inputField;

/// @brief Field knob offset 0x18
 __declspec(property(get=__get_knob, put=__set_knob)) ::UnityEngine::Sprite*  knob;

/// @brief Field checkmark offset 0x20
 __declspec(property(get=__get_checkmark, put=__set_checkmark)) ::UnityEngine::Sprite*  checkmark;

/// @brief Field dropdown offset 0x28
 __declspec(property(get=__get_dropdown, put=__set_dropdown)) ::UnityEngine::Sprite*  dropdown;

/// @brief Field mask offset 0x30
 __declspec(property(get=__get_mask, put=__set_mask)) ::UnityEngine::Sprite*  mask;

constexpr void __set_standard(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get_standard() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get_standard() const;

constexpr void __set_background(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get_background() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get_background() const;

constexpr void __set_inputField(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get_inputField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get_inputField() const;

constexpr void __set_knob(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get_knob() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get_knob() const;

constexpr void __set_checkmark(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get_checkmark() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get_checkmark() const;

constexpr void __set_dropdown(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get_dropdown() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get_dropdown() const;

constexpr void __set_mask(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get_mask() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get_mask() const;

// Ctor Parameters [CppParam { name: "standard", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "background", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "inputField", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "knob", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "checkmark", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "dropdown", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "mask", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }]
constexpr __TMP_DefaultControls__Resources(::UnityEngine::Sprite*  standard, ::UnityEngine::Sprite*  background, ::UnityEngine::Sprite*  inputField, ::UnityEngine::Sprite*  knob, ::UnityEngine::Sprite*  checkmark, ::UnityEngine::Sprite*  dropdown, ::UnityEngine::Sprite*  mask) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TMP_DefaultControls__Resources(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TMP_DefaultControls__Resources()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_DefaultControls__Resources, 0x38>, "Size mismatch!");

} // namespace end def TMPro
// Type: TMPro::TMP_DefaultControls
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12346))
// CS Name: ::TMPro::TMP_DefaultControls*
class CORDL_TYPE TMP_DefaultControls : public ::System::Object {
public:
// Declarations
using Resources = ::TMPro::__TMP_DefaultControls__Resources;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kWidth offset 0x0
static constexpr float_t  kWidth{160.0};

/// @brief Field kThickHeight offset 0x0
static constexpr float_t  kThickHeight{30.0};

/// @brief Field kThinHeight offset 0x0
static constexpr float_t  kThinHeight{20.0};

static inline void setStaticF_s_TextElementSize(::UnityEngine::Vector2  value) ;

static inline ::UnityEngine::Vector2 getStaticF_s_TextElementSize() ;

static inline void setStaticF_s_ThickElementSize(::UnityEngine::Vector2  value) ;

static inline ::UnityEngine::Vector2 getStaticF_s_ThickElementSize() ;

static inline void setStaticF_s_ThinElementSize(::UnityEngine::Vector2  value) ;

static inline ::UnityEngine::Vector2 getStaticF_s_ThinElementSize() ;

static inline void setStaticF_s_DefaultSelectableColor(::UnityEngine::Color  value) ;

static inline ::UnityEngine::Color getStaticF_s_DefaultSelectableColor() ;

static inline void setStaticF_s_TextColor(::UnityEngine::Color  value) ;

static inline ::UnityEngine::Color getStaticF_s_TextColor() ;

/// @brief Method CreateUIElementRoot addr 0x2c024c4 size 0xa8 virtual false final false
static inline ::UnityEngine::GameObject* CreateUIElementRoot(::StringW  name, ::UnityEngine::Vector2  size) ;

/// @brief Method CreateUIObject addr 0x2c0256c size 0xc0 virtual false final false
static inline ::UnityEngine::GameObject* CreateUIObject(::StringW  name, ::UnityEngine::GameObject*  parent) ;

/// @brief Method SetDefaultTextValues addr 0x2c0272c size 0x88 virtual false final false
static inline void SetDefaultTextValues(::TMPro::TMP_Text*  lbl) ;

/// @brief Method SetDefaultColorTransitionValues addr 0x2c027b4 size 0x10 virtual false final false
static inline void SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable*  slider) ;

/// @brief Method SetParentAndAlign addr 0x2c0262c size 0x100 virtual false final false
static inline void SetParentAndAlign(::UnityEngine::GameObject*  child, ::UnityEngine::GameObject*  parent) ;

/// @brief Method SetLayerRecursively addr 0x2c027c4 size 0xe4 virtual false final false
static inline void SetLayerRecursively(::UnityEngine::GameObject*  go, int32_t  layer) ;

/// @brief Method CreateScrollbar addr 0x2c028a8 size 0x2c4 virtual false final false
static inline ::UnityEngine::GameObject* CreateScrollbar(::TMPro::__TMP_DefaultControls__Resources  resources) ;

/// @brief Method CreateButton addr 0x2c02b6c size 0x2c0 virtual false final false
static inline ::UnityEngine::GameObject* CreateButton(::TMPro::__TMP_DefaultControls__Resources  resources) ;

/// @brief Method CreateText addr 0x2c02e2c size 0xa0 virtual false final false
static inline ::UnityEngine::GameObject* CreateText(::TMPro::__TMP_DefaultControls__Resources  resources) ;

/// @brief Method CreateInputField addr 0x2c02ecc size 0x65c virtual false final false
static inline ::UnityEngine::GameObject* CreateInputField(::TMPro::__TMP_DefaultControls__Resources  resources) ;

/// @brief Method CreateDropdown addr 0x2c036cc size 0xdf4 virtual false final false
static inline ::UnityEngine::GameObject* CreateDropdown(::TMPro::__TMP_DefaultControls__Resources  resources) ;

// Ctor Parameters [CppParam { name: "", ty: "TMP_DefaultControls", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_DefaultControls(TMP_DefaultControls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_DefaultControls", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_DefaultControls(TMP_DefaultControls const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TMP_DefaultControls()  = default;
public:


// Fields

// Static field s_TextElementSize

// Static field s_ThickElementSize

// Static field s_ThinElementSize

// Static field s_DefaultSelectableColor

// Static field s_TextColor


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_DefaultControls, 0x10>, "Size mismatch!");

} // namespace end def TMPro
NEED_NO_BOX(::TMPro::TMP_DefaultControls);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_DefaultControls*, "TMPro", "TMP_DefaultControls");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_DefaultControls__Resources, "TMPro", "TMP_DefaultControls/Resources");
