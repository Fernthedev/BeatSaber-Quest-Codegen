#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEventStream)
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventStream;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEventStream);
// Type: UnityEngine.InputSystem.LowLevel::InputEventStream
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6537))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputEventStream
struct CORDL_TYPE InputEventStream : public ::bs_hook::ValueTypeWrapper<0x78> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field m_NativeBuffer offset 0x0
 __declspec(property(get=__get_m_NativeBuffer, put=__set_m_NativeBuffer)) ::UnityEngine::InputSystem::LowLevel::InputEventBuffer  m_NativeBuffer;

/// @brief Field m_CurrentNativeEventReadPtr offset 0x20
 __declspec(property(get=__get_m_CurrentNativeEventReadPtr, put=__set_m_CurrentNativeEventReadPtr)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  m_CurrentNativeEventReadPtr;

/// @brief Field m_CurrentNativeEventWritePtr offset 0x28
 __declspec(property(get=__get_m_CurrentNativeEventWritePtr, put=__set_m_CurrentNativeEventWritePtr)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  m_CurrentNativeEventWritePtr;

/// @brief Field m_RemainingNativeEventCount offset 0x30
 __declspec(property(get=__get_m_RemainingNativeEventCount, put=__set_m_RemainingNativeEventCount)) int32_t  m_RemainingNativeEventCount;

/// @brief Field m_MaxAppendedEvents offset 0x34
 __declspec(property(get=__get_m_MaxAppendedEvents, put=__set_m_MaxAppendedEvents)) int32_t  m_MaxAppendedEvents;

/// @brief Field m_AppendBuffer offset 0x38
 __declspec(property(get=__get_m_AppendBuffer, put=__set_m_AppendBuffer)) ::UnityEngine::InputSystem::LowLevel::InputEventBuffer  m_AppendBuffer;

/// @brief Field m_CurrentAppendEventReadPtr offset 0x58
 __declspec(property(get=__get_m_CurrentAppendEventReadPtr, put=__set_m_CurrentAppendEventReadPtr)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  m_CurrentAppendEventReadPtr;

/// @brief Field m_CurrentAppendEventWritePtr offset 0x60
 __declspec(property(get=__get_m_CurrentAppendEventWritePtr, put=__set_m_CurrentAppendEventWritePtr)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  m_CurrentAppendEventWritePtr;

/// @brief Field m_RemainingAppendEventCount offset 0x68
 __declspec(property(get=__get_m_RemainingAppendEventCount, put=__set_m_RemainingAppendEventCount)) int32_t  m_RemainingAppendEventCount;

/// @brief Field m_NumEventsRetainedInBuffer offset 0x6c
 __declspec(property(get=__get_m_NumEventsRetainedInBuffer, put=__set_m_NumEventsRetainedInBuffer)) int32_t  m_NumEventsRetainedInBuffer;

/// @brief Field m_IsOpen offset 0x70
 __declspec(property(get=__get_m_IsOpen, put=__set_m_IsOpen)) bool  m_IsOpen;

 __declspec(property(get=get_isOpen)) bool  isOpen;

 __declspec(property(get=get_remainingEventCount)) int32_t  remainingEventCount;

 __declspec(property(get=get_numEventsRetainedInBuffer)) int32_t  numEventsRetainedInBuffer;

 __declspec(property(get=get_currentEventPtr)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  currentEventPtr;

 __declspec(property(get=get_numBytesRetainedInBuffer)) uint32_t  numBytesRetainedInBuffer;

constexpr void __set_m_NativeBuffer(::UnityEngine::InputSystem::LowLevel::InputEventBuffer  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer& __get_m_NativeBuffer() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer const& __get_m_NativeBuffer() const;

constexpr void __set_m_CurrentNativeEventReadPtr(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  value) ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>& __get_m_CurrentNativeEventReadPtr() ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> const& __get_m_CurrentNativeEventReadPtr() const;

constexpr void __set_m_CurrentNativeEventWritePtr(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  value) ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>& __get_m_CurrentNativeEventWritePtr() ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> const& __get_m_CurrentNativeEventWritePtr() const;

constexpr void __set_m_RemainingNativeEventCount(int32_t  value) ;

constexpr int32_t& __get_m_RemainingNativeEventCount() ;

constexpr int32_t const& __get_m_RemainingNativeEventCount() const;

constexpr void __set_m_MaxAppendedEvents(int32_t  value) ;

constexpr int32_t& __get_m_MaxAppendedEvents() ;

constexpr int32_t const& __get_m_MaxAppendedEvents() const;

constexpr void __set_m_AppendBuffer(::UnityEngine::InputSystem::LowLevel::InputEventBuffer  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer& __get_m_AppendBuffer() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer const& __get_m_AppendBuffer() const;

constexpr void __set_m_CurrentAppendEventReadPtr(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  value) ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>& __get_m_CurrentAppendEventReadPtr() ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> const& __get_m_CurrentAppendEventReadPtr() const;

constexpr void __set_m_CurrentAppendEventWritePtr(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  value) ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>& __get_m_CurrentAppendEventWritePtr() ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> const& __get_m_CurrentAppendEventWritePtr() const;

constexpr void __set_m_RemainingAppendEventCount(int32_t  value) ;

constexpr int32_t& __get_m_RemainingAppendEventCount() ;

constexpr int32_t const& __get_m_RemainingAppendEventCount() const;

constexpr void __set_m_NumEventsRetainedInBuffer(int32_t  value) ;

constexpr int32_t& __get_m_NumEventsRetainedInBuffer() ;

constexpr int32_t const& __get_m_NumEventsRetainedInBuffer() const;

constexpr void __set_m_IsOpen(bool  value) ;

constexpr bool& __get_m_IsOpen() ;

constexpr bool const& __get_m_IsOpen() const;

/// @brief Method get_isOpen addr 0x2aebe8c size 0x8 virtual false final false
inline bool get_isOpen() ;

/// @brief Method get_remainingEventCount addr 0x2aebe94 size 0x10 virtual false final false
inline int32_t get_remainingEventCount() ;

/// @brief Method get_numEventsRetainedInBuffer addr 0x2aebea4 size 0x8 virtual false final false
inline int32_t get_numEventsRetainedInBuffer() ;

/// @brief Method get_currentEventPtr addr 0x2aebeac size 0x34 virtual false final false
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> get_currentEventPtr() ;

/// @brief Method get_numBytesRetainedInBuffer addr 0x2aebee0 size 0x54 virtual false final false
inline uint32_t get_numBytesRetainedInBuffer() ;

/// @brief Method .ctor addr 0x2aebf34 size 0x8c virtual false final false
inline void _ctor(ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>  eventBuffer, int32_t  maxAppendedEvents) ;

/// @brief Method Close addr 0x2aebfc0 size 0x114 virtual false final false
inline void Close(ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>  eventBuffer) ;

/// @brief Method CleanUpAfterException addr 0x2aec0d4 size 0x90 virtual false final false
inline void CleanUpAfterException() ;

/// @brief Method Write addr 0x2aec164 size 0x1b0 virtual false final false
inline void Write(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  eventPtr) ;

/// @brief Method Advance addr 0x2aec314 size 0xa4 virtual false final false
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> Advance(bool  leaveEventInBuffer) ;

/// @brief Method Peek addr 0x2aec3b8 size 0x64 virtual false final false
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> Peek() ;

// Ctor Parameters [CppParam { name: "m_NativeBuffer", ty: "::UnityEngine::InputSystem::LowLevel::InputEventBuffer", modifiers: "", def_value: None }, CppParam { name: "m_CurrentNativeEventReadPtr", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_CurrentNativeEventWritePtr", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_RemainingNativeEventCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_MaxAppendedEvents", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AppendBuffer", ty: "::UnityEngine::InputSystem::LowLevel::InputEventBuffer", modifiers: "", def_value: None }, CppParam { name: "m_CurrentAppendEventReadPtr", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_CurrentAppendEventWritePtr", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_RemainingAppendEventCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_NumEventsRetainedInBuffer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IsOpen", ty: "bool", modifiers: "", def_value: None }]
constexpr InputEventStream(::UnityEngine::InputSystem::LowLevel::InputEventBuffer  m_NativeBuffer, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  m_CurrentNativeEventReadPtr, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  m_CurrentNativeEventWritePtr, int32_t  m_RemainingNativeEventCount, int32_t  m_MaxAppendedEvents, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer  m_AppendBuffer, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  m_CurrentAppendEventReadPtr, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  m_CurrentAppendEventWritePtr, int32_t  m_RemainingAppendEventCount, int32_t  m_NumEventsRetainedInBuffer, bool  m_IsOpen) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputEventStream(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x78>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputEventStream()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventStream, 0x78>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventStream, "UnityEngine.InputSystem.LowLevel", "InputEventStream");
