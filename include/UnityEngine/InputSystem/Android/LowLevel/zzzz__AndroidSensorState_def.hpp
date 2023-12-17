#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AndroidSensorState)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct __AndroidSensorState___data_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidSensorState;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct __AndroidSensorState___data_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState);
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer);
// Type: ::<data>e__FixedBuffer
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6456))
// CS Name: ::AndroidSensorState::<data>e__FixedBuffer
struct CORDL_TYPE __AndroidSensorState___data_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) float_t  FixedElementField;

constexpr void __set_FixedElementField(float_t  value) ;

constexpr float_t& __get_FixedElementField() ;

constexpr float_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
constexpr __AndroidSensorState___data_e__FixedBuffer(float_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AndroidSensorState___data_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AndroidSensorState___data_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android::LowLevel
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidSensorState
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6457))
// CS Name: ::UnityEngine.InputSystem.Android.LowLevel::AndroidSensorState
struct CORDL_TYPE AndroidSensorState : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
using _data_e__FixedBuffer = ::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field data offset 0x0
 __declspec(property(get=__get_data, put=__set_data)) ::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer  data;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

static inline void setStaticF_kFormat(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_kFormat() ;

constexpr void __set_data(::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer& __get_data() ;

constexpr ::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer const& __get_data() const;

/// @brief Method WithData addr 0x2ae6dac size 0xd0 virtual false final false
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState WithData(::ArrayW<float_t,::Array<float_t>*>  data) ;

/// @brief Method get_format addr 0x2ae6e7c size 0x58 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

// Ctor Parameters [CppParam { name: "data", ty: "::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr AndroidSensorState(::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer  data) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AndroidSensorState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AndroidSensorState()  = default;


// Fields

// Static field kFormat


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState, "UnityEngine.InputSystem.Android.LowLevel", "AndroidSensorState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer, "UnityEngine.InputSystem.Android.LowLevel", "AndroidSensorState/<data>e__FixedBuffer");
