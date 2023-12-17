#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidGameControllerState)
namespace UnityEngine::InputSystem::Android::LowLevel {
class __AndroidGameControllerState__Variants;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidKeyCode;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidAxis;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct __AndroidGameControllerState___axis_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct __AndroidGameControllerState___buttons_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
class __AndroidGameControllerState__Variants;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidGameControllerState;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct __AndroidGameControllerState___axis_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct __AndroidGameControllerState___buttons_e__FixedBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants);
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState);
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___axis_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___buttons_e__FixedBuffer);
// Type: ::Variants
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6446))
// CS Name: ::AndroidGameControllerState::Variants*
class CORDL_TYPE __AndroidGameControllerState__Variants : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field Gamepad offset 0x0
static constexpr ::ConstString  Gamepad{u"Gamepad"};

/// @brief Field Joystick offset 0x0
static constexpr ::ConstString  Joystick{u"Joystick"};

/// @brief Field DPadAxes offset 0x0
static constexpr ::ConstString  DPadAxes{u"DpadAxes"};

/// @brief Field DPadButtons offset 0x0
static constexpr ::ConstString  DPadButtons{u"DpadButtons"};

static inline ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants* New_ctor() ;

/// @brief Method .ctor addr 0x2ae675c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__AndroidGameControllerState__Variants", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AndroidGameControllerState__Variants(__AndroidGameControllerState__Variants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AndroidGameControllerState__Variants", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AndroidGameControllerState__Variants(__AndroidGameControllerState__Variants const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AndroidGameControllerState__Variants()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android::LowLevel
// Type: ::<buttons>e__FixedBuffer
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6447))
// CS Name: ::AndroidGameControllerState::<buttons>e__FixedBuffer
struct CORDL_TYPE __AndroidGameControllerState___buttons_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x1c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) uint32_t  FixedElementField;

constexpr void __set_FixedElementField(uint32_t  value) ;

constexpr uint32_t& __get_FixedElementField() ;

constexpr uint32_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr __AndroidGameControllerState___buttons_e__FixedBuffer(uint32_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AndroidGameControllerState___buttons_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AndroidGameControllerState___buttons_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___buttons_e__FixedBuffer, 0x1c>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android::LowLevel
// Type: ::<axis>e__FixedBuffer
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6448))
// CS Name: ::AndroidGameControllerState::<axis>e__FixedBuffer
struct CORDL_TYPE __AndroidGameControllerState___axis_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0xc0> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc0};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) float_t  FixedElementField;

constexpr void __set_FixedElementField(float_t  value) ;

constexpr float_t& __get_FixedElementField() ;

constexpr float_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
constexpr __AndroidGameControllerState___axis_e__FixedBuffer(float_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AndroidGameControllerState___axis_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc0>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AndroidGameControllerState___axis_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___axis_e__FixedBuffer, 0xc0>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android::LowLevel
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidGameControllerState
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6449))
// CS Name: ::UnityEngine.InputSystem.Android.LowLevel::AndroidGameControllerState
struct CORDL_TYPE AndroidGameControllerState : public ::bs_hook::ValueTypeWrapper<0xdc> {
public:
// Declarations
using _axis_e__FixedBuffer = ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___axis_e__FixedBuffer;

using _buttons_e__FixedBuffer = ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___buttons_e__FixedBuffer;

using Variants = ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xdc};

/// @brief Field MaxAxes offset 0x0
static constexpr int32_t  MaxAxes{static_cast<int32_t>(0x30)};

/// @brief Field MaxButtons offset 0x0
static constexpr int32_t  MaxButtons{static_cast<int32_t>(0xdc)};

/// @brief Field kAxisOffset offset 0x0
static constexpr uint32_t  kAxisOffset{static_cast<uint32_t>(0x61470e1cu)};

/// @brief Field buttons offset 0x0
 __declspec(property(get=__get_buttons, put=__set_buttons)) ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___buttons_e__FixedBuffer  buttons;

/// @brief Field axis offset 0x1c
 __declspec(property(get=__get_axis, put=__set_axis)) ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___axis_e__FixedBuffer  axis;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

static inline void setStaticF_kFormat(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_kFormat() ;

constexpr void __set_buttons(::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___buttons_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___buttons_e__FixedBuffer& __get_buttons() ;

constexpr ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___buttons_e__FixedBuffer const& __get_buttons() const;

constexpr void __set_axis(::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___axis_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___axis_e__FixedBuffer& __get_axis() ;

constexpr ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___axis_e__FixedBuffer const& __get_axis() const;

/// @brief Method get_format addr 0x2ae6638 size 0x58 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Method WithButton addr 0x2ae6690 size 0x44 virtual false final false
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState WithButton(::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode  code, bool  value) ;

/// @brief Method WithAxis addr 0x2ae66d4 size 0x1c virtual false final false
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState WithAxis(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis  axis, float_t  value) ;

// Ctor Parameters [CppParam { name: "buttons", ty: "::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___buttons_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "axis", ty: "::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___axis_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr AndroidGameControllerState(::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___buttons_e__FixedBuffer  buttons, ::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___axis_e__FixedBuffer  axis) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AndroidGameControllerState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xdc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AndroidGameControllerState()  = default;


// Fields

// Static field kFormat


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState, 0xdc>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState__Variants*, "UnityEngine.InputSystem.Android.LowLevel", "AndroidGameControllerState/Variants");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState, "UnityEngine.InputSystem.Android.LowLevel", "AndroidGameControllerState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___axis_e__FixedBuffer, "UnityEngine.InputSystem.Android.LowLevel", "AndroidGameControllerState/<axis>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::__AndroidGameControllerState___buttons_e__FixedBuffer, "UnityEngine.InputSystem.Android.LowLevel", "AndroidGameControllerState/<buttons>e__FixedBuffer");
