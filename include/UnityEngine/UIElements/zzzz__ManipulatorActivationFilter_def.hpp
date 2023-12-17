#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ManipulatorActivationFilter)
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct MouseButton;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine::UIElements {
class IMouseEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ManipulatorActivationFilter;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ManipulatorActivationFilter);
// Type: UnityEngine.UIElements::ManipulatorActivationFilter
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6783))
// CS Name: ::UnityEngine.UIElements::ManipulatorActivationFilter
struct CORDL_TYPE ManipulatorActivationFilter : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field <button>k__BackingField offset 0x0
 __declspec(property(get=__get__button_k__BackingField, put=__set__button_k__BackingField)) ::UnityEngine::UIElements::MouseButton  _button_k__BackingField;

/// @brief Field <modifiers>k__BackingField offset 0x4
 __declspec(property(get=__get__modifiers_k__BackingField, put=__set__modifiers_k__BackingField)) ::UnityEngine::EventModifiers  _modifiers_k__BackingField;

/// @brief Field <clickCount>k__BackingField offset 0x8
 __declspec(property(get=__get__clickCount_k__BackingField, put=__set__clickCount_k__BackingField)) int32_t  _clickCount_k__BackingField;

 __declspec(property(get=get_button, put=set_button)) ::UnityEngine::UIElements::MouseButton  button;

 __declspec(property(get=get_modifiers)) ::UnityEngine::EventModifiers  modifiers;

 __declspec(property(get=get_clickCount)) int32_t  clickCount;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::ManipulatorActivationFilter>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*() ;

constexpr void __set__button_k__BackingField(::UnityEngine::UIElements::MouseButton  value) ;

constexpr ::UnityEngine::UIElements::MouseButton& __get__button_k__BackingField() ;

constexpr ::UnityEngine::UIElements::MouseButton const& __get__button_k__BackingField() const;

constexpr void __set__modifiers_k__BackingField(::UnityEngine::EventModifiers  value) ;

constexpr ::UnityEngine::EventModifiers& __get__modifiers_k__BackingField() ;

constexpr ::UnityEngine::EventModifiers const& __get__modifiers_k__BackingField() const;

constexpr void __set__clickCount_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__clickCount_k__BackingField() ;

constexpr int32_t const& __get__clickCount_k__BackingField() const;

/// @brief Method get_button addr 0x2db9820 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::MouseButton get_button() ;

/// @brief Method set_button addr 0x2db9828 size 0x8 virtual false final false
inline void set_button(::UnityEngine::UIElements::MouseButton  value) ;

/// @brief Method get_modifiers addr 0x2db9830 size 0x8 virtual false final false
inline ::UnityEngine::EventModifiers get_modifiers() ;

/// @brief Method get_clickCount addr 0x2db9838 size 0x8 virtual false final false
inline int32_t get_clickCount() ;

/// @brief Method Equals addr 0x2db9840 size 0x98 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2db98d8 size 0x34 virtual true final true
inline bool Equals(::UnityEngine::UIElements::ManipulatorActivationFilter  other) ;

/// @brief Method GetHashCode addr 0x2db990c size 0x80 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Matches addr 0x2db998c size 0x158 virtual false final false
inline bool Matches(::UnityEngine::UIElements::IMouseEvent*  e) ;

/// @brief Method HasModifiers addr 0x2db9ae4 size 0x1f4 virtual false final false
inline bool HasModifiers(::UnityEngine::UIElements::IMouseEvent*  e) ;

/// @brief Method Matches addr 0x2db9d2c size 0x158 virtual false final false
inline bool Matches(::UnityEngine::UIElements::IPointerEvent*  e) ;

/// @brief Method HasModifiers addr 0x2db9e84 size 0x1f4 virtual false final false
inline bool HasModifiers(::UnityEngine::UIElements::IPointerEvent*  e) ;

/// @brief Method MatchModifiers addr 0x2db9cd8 size 0x54 virtual false final false
inline bool MatchModifiers(bool  alt, bool  ctrl, bool  shift, bool  command) ;

// Ctor Parameters [CppParam { name: "_button_k__BackingField", ty: "::UnityEngine::UIElements::MouseButton", modifiers: "", def_value: None }, CppParam { name: "_modifiers_k__BackingField", ty: "::UnityEngine::EventModifiers", modifiers: "", def_value: None }, CppParam { name: "_clickCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ManipulatorActivationFilter(::UnityEngine::UIElements::MouseButton  _button_k__BackingField, ::UnityEngine::EventModifiers  _modifiers_k__BackingField, int32_t  _clickCount_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ManipulatorActivationFilter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ManipulatorActivationFilter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ManipulatorActivationFilter, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ManipulatorActivationFilter, "UnityEngine.UIElements", "ManipulatorActivationFilter");
