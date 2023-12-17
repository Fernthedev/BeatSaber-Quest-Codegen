#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEventBuffer)
namespace System {
class ICloneable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputEventBuffer__Enumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputEventBuffer__Enumerator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEventBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__InputEventBuffer__Enumerator);
// Type: ::Enumerator
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6531))
// CS Name: ::InputEventBuffer::Enumerator
struct CORDL_TYPE __InputEventBuffer__Enumerator : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  m_Buffer;

/// @brief Field m_EventCount offset 0x8
 __declspec(property(get=__get_m_EventCount, put=__set_m_EventCount)) int32_t  m_EventCount;

/// @brief Field m_CurrentEvent offset 0x10
 __declspec(property(get=__get_m_CurrentEvent, put=__set_m_CurrentEvent)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  m_CurrentEvent;

/// @brief Field m_CurrentIndex offset 0x18
 __declspec(property(get=__get_m_CurrentIndex, put=__set_m_CurrentIndex)) int32_t  m_CurrentIndex;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  value) ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> const& __get_m_Buffer() const;

constexpr void __set_m_EventCount(int32_t  value) ;

constexpr int32_t& __get_m_EventCount() ;

constexpr int32_t const& __get_m_EventCount() const;

constexpr void __set_m_CurrentEvent(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  value) ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>& __get_m_CurrentEvent() ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> const& __get_m_CurrentEvent() const;

constexpr void __set_m_CurrentIndex(int32_t  value) ;

constexpr int32_t& __get_m_CurrentIndex() ;

constexpr int32_t const& __get_m_CurrentIndex() const;

/// @brief Method .ctor addr 0x2aeaf5c size 0x38 virtual false final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventBuffer  buffer) ;

/// @brief Method MoveNext addr 0x2aeb14c size 0x6c virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x2aeb1b8 size 0xc virtual true final true
inline void Reset() ;

/// @brief Method Dispose addr 0x2aeb1c4 size 0x4 virtual true final true
inline void Dispose() ;

/// @brief Method get_Current addr 0x2aeb1c8 size 0x8 virtual true final true
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2aeb1d0 size 0x5c virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_EventCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentEvent", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputEventBuffer__Enumerator(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  m_Buffer, int32_t  m_EventCount, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  m_CurrentEvent, int32_t  m_CurrentIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputEventBuffer__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputEventBuffer__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputEventBuffer__Enumerator, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputEventBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6532))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputEventBuffer
struct CORDL_TYPE InputEventBuffer : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::LowLevel::__InputEventBuffer__Enumerator;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field BufferSizeUnknown offset 0x0
static constexpr int64_t  BufferSizeUnknown{static_cast<int64_t>(0xffffffffffffffff)};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::Unity::Collections::NativeArray_1<uint8_t>  m_Buffer;

/// @brief Field m_SizeInBytes offset 0x10
 __declspec(property(get=__get_m_SizeInBytes, put=__set_m_SizeInBytes)) int64_t  m_SizeInBytes;

/// @brief Field m_EventCount offset 0x18
 __declspec(property(get=__get_m_EventCount, put=__set_m_EventCount)) int32_t  m_EventCount;

/// @brief Field m_WeOwnTheBuffer offset 0x1c
 __declspec(property(get=__get_m_WeOwnTheBuffer, put=__set_m_WeOwnTheBuffer)) bool  m_WeOwnTheBuffer;

 __declspec(property(get=get_eventCount)) int32_t  eventCount;

 __declspec(property(get=get_sizeInBytes)) int64_t  sizeInBytes;

 __declspec(property(get=get_capacityInBytes)) int64_t  capacityInBytes;

 __declspec(property(get=get_data)) ::Unity::Collections::NativeArray_1<uint8_t>  data;

 __declspec(property(get=get_bufferPtr)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr  bufferPtr;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() ;

constexpr void __set_m_Buffer(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __get_m_Buffer() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __get_m_Buffer() const;

constexpr void __set_m_SizeInBytes(int64_t  value) ;

constexpr int64_t& __get_m_SizeInBytes() ;

constexpr int64_t const& __get_m_SizeInBytes() const;

constexpr void __set_m_EventCount(int32_t  value) ;

constexpr int32_t& __get_m_EventCount() ;

constexpr int32_t const& __get_m_EventCount() const;

constexpr void __set_m_WeOwnTheBuffer(bool  value) ;

constexpr bool& __get_m_WeOwnTheBuffer() ;

constexpr bool const& __get_m_WeOwnTheBuffer() const;

/// @brief Method get_eventCount addr 0x2aea6f8 size 0x8 virtual false final false
inline int32_t get_eventCount() ;

/// @brief Method get_sizeInBytes addr 0x2aea700 size 0x8 virtual false final false
inline int64_t get_sizeInBytes() ;

/// @brief Method get_capacityInBytes addr 0x2aea708 size 0x5c virtual false final false
inline int64_t get_capacityInBytes() ;

/// @brief Method get_data addr 0x2aea764 size 0xc virtual false final false
inline ::Unity::Collections::NativeArray_1<uint8_t> get_data() ;

/// @brief Method get_bufferPtr addr 0x2aea770 size 0x48 virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr get_bufferPtr() ;

/// @brief Method .ctor addr 0x2aea7bc size 0x1c0 virtual false final false
inline void _ctor(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  eventPtr, int32_t  eventCount, int32_t  sizeInBytes, int32_t  capacityInBytes) ;

/// @brief Method .ctor addr 0x2aea97c size 0x14c virtual false final false
inline void _ctor(::Unity::Collections::NativeArray_1<uint8_t>  buffer, int32_t  eventCount, int32_t  sizeInBytes, bool  transferNativeArrayOwnership) ;

/// @brief Method AppendEvent addr 0x2aeaac8 size 0x80 virtual false final false
inline void AppendEvent(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  eventPtr, int32_t  capacityIncrementInBytes, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method AllocateEvent addr 0x2aeab48 size 0x2c8 virtual false final false
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> AllocateEvent(int32_t  sizeInBytes, int32_t  capacityIncrementInBytes, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Contains addr 0x2aea61c size 0x88 virtual false final false
inline bool Contains(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  eventPtr) ;

/// @brief Method Reset addr 0x2aeae10 size 0x18 virtual false final false
inline void Reset() ;

/// @brief Method AdvanceToNextEvent addr 0x2aeae28 size 0xc0 virtual false final false
inline void AdvanceToNextEvent(ByRef<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>  currentReadPos, ByRef<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>  currentWritePos, ByRef<int32_t>  numEventsRetainedInBuffer, ByRef<int32_t>  numRemainingEvents, bool  leaveEventInBuffer) ;

/// @brief Method GetEnumerator addr 0x2aeaee8 size 0x74 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2aeaf94 size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dispose addr 0x2aeaf98 size 0x60 virtual true final true
inline void Dispose() ;

/// @brief Method Clone addr 0x2aeaff8 size 0xe8 virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::InputEventBuffer Clone() ;

/// @brief Method System.ICloneable.Clone addr 0x2aeb0e0 size 0x68 virtual true final true
inline ::System::Object* System_ICloneable_Clone() ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_SizeInBytes", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_EventCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_WeOwnTheBuffer", ty: "bool", modifiers: "", def_value: None }]
constexpr InputEventBuffer(::Unity::Collections::NativeArray_1<uint8_t>  m_Buffer, int64_t  m_SizeInBytes, int32_t  m_EventCount, bool  m_WeOwnTheBuffer) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputEventBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputEventBuffer()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventBuffer, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventBuffer, "UnityEngine.InputSystem.LowLevel", "InputEventBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputEventBuffer__Enumerator, "UnityEngine.InputSystem.LowLevel", "InputEventBuffer/Enumerator");
