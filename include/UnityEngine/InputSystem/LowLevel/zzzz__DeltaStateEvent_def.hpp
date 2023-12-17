#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeltaStateEvent)
namespace Unity::Collections {
struct Allocator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __DeltaStateEvent___stateData_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct DeltaStateEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __DeltaStateEvent___stateData_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::DeltaStateEvent);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer);
// Type: ::<stateData>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6520))
// CS Name: ::DeltaStateEvent::<stateData>e__FixedBuffer
struct CORDL_TYPE __DeltaStateEvent___stateData_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x1> {
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
constexpr __DeltaStateEvent___stateData_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DeltaStateEvent___stateData_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DeltaStateEvent___stateData_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::DeltaStateEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6521))
// CS Name: ::UnityEngine.InputSystem.LowLevel::DeltaStateEvent
struct CORDL_TYPE DeltaStateEvent : public ::bs_hook::ValueTypeWrapper<0x1d> {
public:
// Declarations
using _stateData_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1d};

/// @brief Field Type offset 0x0
static constexpr int32_t  Type{static_cast<int32_t>(0x444c5441)};

/// @brief Field baseEvent offset 0x0
 __declspec(property(get=__get_baseEvent, put=__set_baseEvent)) ::UnityEngine::InputSystem::LowLevel::InputEvent  baseEvent;

/// @brief Field stateFormat offset 0x14
 __declspec(property(get=__get_stateFormat, put=__set_stateFormat)) ::UnityEngine::InputSystem::Utilities::FourCC  stateFormat;

/// @brief Field stateOffset offset 0x18
 __declspec(property(get=__get_stateOffset, put=__set_stateOffset)) uint32_t  stateOffset;

/// @brief Field stateData offset 0x1c
 __declspec(property(get=__get_stateData, put=__set_stateData)) ::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer  stateData;

 __declspec(property(get=get_deltaStateSizeInBytes)) uint32_t  deltaStateSizeInBytes;

 __declspec(property(get=get_deltaState)) ::cordl_internals::Ptr<void>  deltaState;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*() ;

constexpr void __set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& __get_baseEvent() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& __get_baseEvent() const;

constexpr void __set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __get_stateFormat() ;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __get_stateFormat() const;

constexpr void __set_stateOffset(uint32_t  value) ;

constexpr uint32_t& __get_stateOffset() ;

constexpr uint32_t const& __get_stateOffset() const;

constexpr void __set_stateData(::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer& __get_stateData() ;

constexpr ::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer const& __get_stateData() const;

/// @brief Method get_deltaStateSizeInBytes addr 0x2ae9570 size 0xc virtual false final false
inline uint32_t get_deltaStateSizeInBytes() ;

/// @brief Method get_deltaState addr 0x2ae957c size 0x8 virtual false final false
inline ::cordl_internals::Ptr<void> get_deltaState() ;

/// @brief Method get_typeStatic addr 0x2ae9584 size 0x20 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method ToEventPtr addr 0x2ae95a4 size 0x4 virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr ToEventPtr() ;

/// @brief Method From addr 0x2ae95a8 size 0x130 virtual false final false
static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent> From(::UnityEngine::InputSystem::LowLevel::InputEventPtr  ptr) ;

/// @brief Method FromUnchecked addr 0x2ae96d8 size 0x4 virtual false final false
static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent> FromUnchecked(::UnityEngine::InputSystem::LowLevel::InputEventPtr  ptr) ;

/// @brief Method From addr 0x2ae96dc size 0x318 virtual false final false
static inline ::Unity::Collections::NativeArray_1<uint8_t> From(::UnityEngine::InputSystem::InputControl*  control, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>  eventPtr, ::Unity::Collections::Allocator  allocator) ;

// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "stateFormat", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "stateOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "stateData", ty: "::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr DeltaStateEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  baseEvent, ::UnityEngine::InputSystem::Utilities::FourCC  stateFormat, uint32_t  stateOffset, ::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer  stateData) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DeltaStateEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1d>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DeltaStateEvent()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent, 0x1d>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::DeltaStateEvent, "UnityEngine.InputSystem.LowLevel", "DeltaStateEvent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "DeltaStateEvent/<stateData>e__FixedBuffer");
