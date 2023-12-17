#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActionEvent)
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __ActionEvent___m_ValueData_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct ActionEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __ActionEvent___m_ValueData_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::ActionEvent);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer);
// Type: ::<m_ValueData>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6518))
// CS Name: ::ActionEvent::<m_ValueData>e__FixedBuffer
struct CORDL_TYPE __ActionEvent___m_ValueData_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x1> {
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
constexpr __ActionEvent___m_ValueData_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ActionEvent___m_ValueData_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ActionEvent___m_ValueData_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::ActionEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6519))
// CS Name: ::UnityEngine.InputSystem.LowLevel::ActionEvent
struct CORDL_TYPE ActionEvent : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
using _m_ValueData_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field baseEvent offset 0x0
 __declspec(property(get=__get_baseEvent, put=__set_baseEvent)) ::UnityEngine::InputSystem::LowLevel::InputEvent  baseEvent;

/// @brief Field m_ControlIndex offset 0x14
 __declspec(property(get=__get_m_ControlIndex, put=__set_m_ControlIndex)) uint16_t  m_ControlIndex;

/// @brief Field m_BindingIndex offset 0x16
 __declspec(property(get=__get_m_BindingIndex, put=__set_m_BindingIndex)) uint16_t  m_BindingIndex;

/// @brief Field m_InteractionIndex offset 0x18
 __declspec(property(get=__get_m_InteractionIndex, put=__set_m_InteractionIndex)) uint16_t  m_InteractionIndex;

/// @brief Field m_StateIndex offset 0x1a
 __declspec(property(get=__get_m_StateIndex, put=__set_m_StateIndex)) uint8_t  m_StateIndex;

/// @brief Field m_Phase offset 0x1b
 __declspec(property(get=__get_m_Phase, put=__set_m_Phase)) uint8_t  m_Phase;

/// @brief Field m_StartTime offset 0x1c
 __declspec(property(get=__get_m_StartTime, put=__set_m_StartTime)) double_t  m_StartTime;

/// @brief Field m_ValueData offset 0x24
 __declspec(property(get=__get_m_ValueData, put=__set_m_ValueData)) ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer  m_ValueData;

 __declspec(property(get=get_startTime, put=set_startTime)) double_t  startTime;

 __declspec(property(get=get_phase, put=set_phase)) ::UnityEngine::InputSystem::InputActionPhase  phase;

 __declspec(property(get=get_valueData)) ::cordl_internals::Ptr<uint8_t>  valueData;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_stateIndex, put=set_stateIndex)) int32_t  stateIndex;

 __declspec(property(get=get_controlIndex, put=set_controlIndex)) int32_t  controlIndex;

 __declspec(property(get=get_bindingIndex, put=set_bindingIndex)) int32_t  bindingIndex;

 __declspec(property(get=get_interactionIndex, put=set_interactionIndex)) int32_t  interactionIndex;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*() ;

constexpr void __set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& __get_baseEvent() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& __get_baseEvent() const;

constexpr void __set_m_ControlIndex(uint16_t  value) ;

constexpr uint16_t& __get_m_ControlIndex() ;

constexpr uint16_t const& __get_m_ControlIndex() const;

constexpr void __set_m_BindingIndex(uint16_t  value) ;

constexpr uint16_t& __get_m_BindingIndex() ;

constexpr uint16_t const& __get_m_BindingIndex() const;

constexpr void __set_m_InteractionIndex(uint16_t  value) ;

constexpr uint16_t& __get_m_InteractionIndex() ;

constexpr uint16_t const& __get_m_InteractionIndex() const;

constexpr void __set_m_StateIndex(uint8_t  value) ;

constexpr uint8_t& __get_m_StateIndex() ;

constexpr uint8_t const& __get_m_StateIndex() const;

constexpr void __set_m_Phase(uint8_t  value) ;

constexpr uint8_t& __get_m_Phase() ;

constexpr uint8_t const& __get_m_Phase() const;

constexpr void __set_m_StartTime(double_t  value) ;

constexpr double_t& __get_m_StartTime() ;

constexpr double_t const& __get_m_StartTime() const;

constexpr void __set_m_ValueData(::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer& __get_m_ValueData() ;

constexpr ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer const& __get_m_ValueData() const;

/// @brief Method get_Type addr 0x2ae91d0 size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_startTime addr 0x2ae9200 size 0x8 virtual false final false
inline double_t get_startTime() ;

/// @brief Method set_startTime addr 0x2ae9208 size 0x8 virtual false final false
inline void set_startTime(double_t  value) ;

/// @brief Method get_phase addr 0x2ae9210 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::InputActionPhase get_phase() ;

/// @brief Method set_phase addr 0x2ae9218 size 0x8 virtual false final false
inline void set_phase(::UnityEngine::InputSystem::InputActionPhase  value) ;

/// @brief Method get_valueData addr 0x2ae9220 size 0x8 virtual false final false
inline ::cordl_internals::Ptr<uint8_t> get_valueData() ;

/// @brief Method get_valueSizeInBytes addr 0x2ae9228 size 0xc virtual false final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method get_stateIndex addr 0x2ae923c size 0x8 virtual false final false
inline int32_t get_stateIndex() ;

/// @brief Method set_stateIndex addr 0x2ae9244 size 0x64 virtual false final false
inline void set_stateIndex(int32_t  value) ;

/// @brief Method get_controlIndex addr 0x2ae92a8 size 0x8 virtual false final false
inline int32_t get_controlIndex() ;

/// @brief Method set_controlIndex addr 0x2ae92b0 size 0x64 virtual false final false
inline void set_controlIndex(int32_t  value) ;

/// @brief Method get_bindingIndex addr 0x2ae9314 size 0x8 virtual false final false
inline int32_t get_bindingIndex() ;

/// @brief Method set_bindingIndex addr 0x2ae931c size 0x64 virtual false final false
inline void set_bindingIndex(int32_t  value) ;

/// @brief Method get_interactionIndex addr 0x2ae9380 size 0x14 virtual false final false
inline int32_t get_interactionIndex() ;

/// @brief Method set_interactionIndex addr 0x2ae9394 size 0x74 virtual false final false
inline void set_interactionIndex(int32_t  value) ;

/// @brief Method ToEventPtr addr 0x2ae9408 size 0x4 virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr ToEventPtr() ;

/// @brief Method get_typeStatic addr 0x2ae940c size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method GetEventSizeWithValueSize addr 0x2ae943c size 0x8 virtual false final false
static inline int32_t GetEventSizeWithValueSize(int32_t  valueSizeInBytes) ;

/// @brief Method From addr 0x2ae9444 size 0x12c virtual false final false
static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> From(::UnityEngine::InputSystem::LowLevel::InputEventPtr  ptr) ;

// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "m_ControlIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_InteractionIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_StateIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_StartTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_ValueData", ty: "::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr ActionEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  baseEvent, uint16_t  m_ControlIndex, uint16_t  m_BindingIndex, uint16_t  m_InteractionIndex, uint8_t  m_StateIndex, uint8_t  m_Phase, double_t  m_StartTime, ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer  m_ValueData) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ActionEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ActionEvent()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::ActionEvent, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::ActionEvent, "UnityEngine.InputSystem.LowLevel", "ActionEvent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "ActionEvent/<m_ValueData>e__FixedBuffer");
