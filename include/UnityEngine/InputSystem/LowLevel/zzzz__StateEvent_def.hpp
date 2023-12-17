#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StateEvent)
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace Unity::Collections {
struct Allocator;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __StateEvent___stateData_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct StateEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __StateEvent___stateData_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::StateEvent);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer);
// Type: ::<stateData>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6545))
// CS Name: ::StateEvent::<stateData>e__FixedBuffer
struct CORDL_TYPE __StateEvent___stateData_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) uint8_t  FixedElementField;

constexpr void __set_FixedElementField(uint8_t  value) ;

constexpr uint8_t& __get_FixedElementField() ;

constexpr uint8_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __StateEvent___stateData_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StateEvent___stateData_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StateEvent___stateData_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::StateEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6546))
// CS Name: ::UnityEngine.InputSystem.LowLevel::StateEvent
struct CORDL_TYPE StateEvent : public ::bs_hook::ValueTypeWrapper<0x19> {
public:
// Declarations
using _stateData_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x19};

/// @brief Field Type offset 0x0
static constexpr int32_t  Type{static_cast<int32_t>(0x53544154)};

/// @brief Field kStateDataSizeToSubtract offset 0x0
static constexpr int32_t  kStateDataSizeToSubtract{static_cast<int32_t>(0x1)};

/// @brief Field baseEvent offset 0x0
 __declspec(property(get=__get_baseEvent, put=__set_baseEvent)) ::UnityEngine::InputSystem::LowLevel::InputEvent  baseEvent;

/// @brief Field stateFormat offset 0x14
 __declspec(property(get=__get_stateFormat, put=__set_stateFormat)) ::UnityEngine::InputSystem::Utilities::FourCC  stateFormat;

/// @brief Field stateData offset 0x18
 __declspec(property(get=__get_stateData, put=__set_stateData)) ::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer  stateData;

 __declspec(property(get=get_stateSizeInBytes)) uint32_t  stateSizeInBytes;

 __declspec(property(get=get_state)) ::cordl_internals::Ptr<void>  state;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*() ;

constexpr void __set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& __get_baseEvent() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& __get_baseEvent() const;

constexpr void __set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __get_stateFormat() ;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __get_stateFormat() const;

constexpr void __set_stateData(::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer& __get_stateData() ;

constexpr ::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer const& __get_stateData() const;

/// @brief Method get_stateSizeInBytes addr 0x2aebca0 size 0xc virtual false final false
inline uint32_t get_stateSizeInBytes() ;

/// @brief Method get_state addr 0x2af042c size 0x8 virtual false final false
inline ::cordl_internals::Ptr<void> get_state() ;

/// @brief Method ToEventPtr addr 0x2af0434 size 0x4 virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr ToEventPtr() ;

/// @brief Method get_typeStatic addr 0x2af0438 size 0x20 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TState>
inline TState GetState() ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TState>
static inline TState GetState(::UnityEngine::InputSystem::LowLevel::InputEventPtr  ptr) ;

/// @brief Method GetEventSizeWithPayload addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TState>
static inline int32_t GetEventSizeWithPayload() ;

/// @brief Method From addr 0x2aebb70 size 0x130 virtual false final false
static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::StateEvent> From(::UnityEngine::InputSystem::LowLevel::InputEventPtr  ptr) ;

/// @brief Method FromUnchecked addr 0x2aeb9b8 size 0x4 virtual false final false
static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::StateEvent> FromUnchecked(::UnityEngine::InputSystem::LowLevel::InputEventPtr  ptr) ;

/// @brief Method From addr 0x2af0458 size 0x8 virtual false final false
static inline ::Unity::Collections::NativeArray_1<uint8_t> From(::UnityEngine::InputSystem::InputDevice*  device, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>  eventPtr, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FromDefaultStateFor addr 0x2af0798 size 0x8 virtual false final false
static inline ::Unity::Collections::NativeArray_1<uint8_t> FromDefaultStateFor(::UnityEngine::InputSystem::InputDevice*  device, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>  eventPtr, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method From addr 0x2af0460 size 0x338 virtual false final false
static inline ::Unity::Collections::NativeArray_1<uint8_t> From(::UnityEngine::InputSystem::InputDevice*  device, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>  eventPtr, ::Unity::Collections::Allocator  allocator, bool  useDefaultState) ;

// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "stateFormat", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "stateData", ty: "::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr StateEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  baseEvent, ::UnityEngine::InputSystem::Utilities::FourCC  stateFormat, ::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer  stateData) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StateEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x19>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StateEvent()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::StateEvent, 0x19>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::StateEvent, "UnityEngine.InputSystem.LowLevel", "StateEvent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "StateEvent/<stateData>e__FixedBuffer");
