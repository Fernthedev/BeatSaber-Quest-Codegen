#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDevice)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR {
struct InputDevice;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::InputDevice);
// Type: UnityEngine.XR::InputDevice
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15621))
// CS Name: ::UnityEngine.XR::InputDevice
struct CORDL_TYPE InputDevice : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_DeviceId offset 0x0
 __declspec(property(get=__get_m_DeviceId, put=__set_m_DeviceId)) uint64_t  m_DeviceId;

/// @brief Field m_Initialized offset 0x8
 __declspec(property(get=__get_m_Initialized, put=__set_m_Initialized)) bool  m_Initialized;

 __declspec(property(get=get_deviceId)) uint64_t  deviceId;

 __declspec(property(get=get_isValid)) bool  isValid;

 __declspec(property(get=get_manufacturer)) ::StringW  manufacturer;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::InputDevice>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::XR::InputDevice>*() ;

constexpr void __set_m_DeviceId(uint64_t  value) ;

constexpr uint64_t& __get_m_DeviceId() ;

constexpr uint64_t const& __get_m_DeviceId() const;

constexpr void __set_m_Initialized(bool  value) ;

constexpr bool& __get_m_Initialized() ;

constexpr bool const& __get_m_Initialized() const;

/// @brief Method .ctor addr 0x2eb2158 size 0x10 virtual false final false
inline void _ctor(uint64_t  deviceId) ;

/// @brief Method get_deviceId addr 0x2eb2168 size 0x18 virtual false final false
inline uint64_t get_deviceId() ;

/// @brief Method get_isValid addr 0x2eb2180 size 0x5c virtual false final false
inline bool get_isValid() ;

/// @brief Method get_manufacturer addr 0x2eb2238 size 0x5c virtual false final false
inline ::StringW get_manufacturer() ;

/// @brief Method IsValidId addr 0x2eb21dc size 0x20 virtual false final false
inline bool IsValidId() ;

/// @brief Method SendHapticImpulse addr 0x2eb22d0 size 0x100 virtual false final false
inline bool SendHapticImpulse(uint32_t  channel, float_t  amplitude, float_t  duration) ;

/// @brief Method StopHaptics addr 0x2eb242c size 0x58 virtual false final false
inline void StopHaptics() ;

/// @brief Method Equals addr 0x2eb24c0 size 0x94 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2eb2554 size 0x28 virtual true final true
inline bool Equals(::UnityEngine::XR::InputDevice  other) ;

/// @brief Method GetHashCode addr 0x2eb257c size 0x34 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "m_DeviceId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_Initialized", ty: "bool", modifiers: "", def_value: None }]
constexpr InputDevice(uint64_t  m_DeviceId, bool  m_Initialized) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputDevice(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputDevice()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::InputDevice, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputDevice, "UnityEngine.XR", "InputDevice");
