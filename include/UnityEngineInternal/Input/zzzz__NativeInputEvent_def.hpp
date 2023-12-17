#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeInputEvent)
namespace UnityEngineInternal::Input {
struct NativeInputEventType;
}
// Forward declare root types
namespace UnityEngineInternal::Input {
struct NativeInputEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngineInternal::Input::NativeInputEvent);
// Type: UnityEngineInternal.Input::NativeInputEvent
namespace UnityEngineInternal::Input {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16110))
// CS Name: ::UnityEngineInternal.Input::NativeInputEvent
struct CORDL_TYPE NativeInputEvent : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field structSize offset 0x0
static constexpr int32_t  structSize{static_cast<int32_t>(0x14)};

/// @brief Field type offset 0x0
 __declspec(property(get=__get_type, put=__set_type)) ::UnityEngineInternal::Input::NativeInputEventType  type;

/// @brief Field sizeInBytes offset 0x4
 __declspec(property(get=__get_sizeInBytes, put=__set_sizeInBytes)) uint16_t  sizeInBytes;

/// @brief Field deviceId offset 0x6
 __declspec(property(get=__get_deviceId, put=__set_deviceId)) uint16_t  deviceId;

/// @brief Field time offset 0x8
 __declspec(property(get=__get_time, put=__set_time)) double_t  time;

/// @brief Field eventId offset 0x10
 __declspec(property(get=__get_eventId, put=__set_eventId)) int32_t  eventId;

constexpr void __set_type(::UnityEngineInternal::Input::NativeInputEventType  value) ;

constexpr ::UnityEngineInternal::Input::NativeInputEventType& __get_type() ;

constexpr ::UnityEngineInternal::Input::NativeInputEventType const& __get_type() const;

constexpr void __set_sizeInBytes(uint16_t  value) ;

constexpr uint16_t& __get_sizeInBytes() ;

constexpr uint16_t const& __get_sizeInBytes() const;

constexpr void __set_deviceId(uint16_t  value) ;

constexpr uint16_t& __get_deviceId() ;

constexpr uint16_t const& __get_deviceId() const;

constexpr void __set_time(double_t  value) ;

constexpr double_t& __get_time() ;

constexpr double_t const& __get_time() const;

constexpr void __set_eventId(int32_t  value) ;

constexpr int32_t& __get_eventId() ;

constexpr int32_t const& __get_eventId() const;

// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngineInternal::Input::NativeInputEventType", modifiers: "", def_value: None }, CppParam { name: "sizeInBytes", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "deviceId", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "eventId", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeInputEvent(::UnityEngineInternal::Input::NativeInputEventType  type, uint16_t  sizeInBytes, uint16_t  deviceId, double_t  time, int32_t  eventId) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeInputEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeInputEvent()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::Input::NativeInputEvent, 0x14>, "Size mismatch!");

} // namespace end def UnityEngineInternal::Input
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputEvent, "UnityEngineInternal.Input", "NativeInputEvent");
