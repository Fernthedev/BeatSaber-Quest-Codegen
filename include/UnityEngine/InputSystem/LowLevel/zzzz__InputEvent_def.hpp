#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEvent)
namespace UnityEngineInternal::Input {
struct NativeInputEvent;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEvent);
// Type: UnityEngine.InputSystem.LowLevel::InputEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6530))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputEvent
struct CORDL_TYPE InputEvent : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field kHandledMask offset 0x0
static constexpr uint32_t  kHandledMask{static_cast<uint32_t>(0xf0u)};

/// @brief Field kIdMask offset 0x0
static constexpr uint32_t  kIdMask{static_cast<uint32_t>(0xfffffff0u)};

/// @brief Field kBaseEventSize offset 0x0
static constexpr int32_t  kBaseEventSize{static_cast<int32_t>(0x14)};

/// @brief Field InvalidEventId offset 0x0
static constexpr int32_t  InvalidEventId{static_cast<int32_t>(0x0)};

/// @brief Field kAlignment offset 0x0
static constexpr int32_t  kAlignment{static_cast<int32_t>(0x4)};

/// @brief Field m_Event offset 0x0
 __declspec(property(get=__get_m_Event, put=__set_m_Event)) ::UnityEngineInternal::Input::NativeInputEvent  m_Event;

 __declspec(property(get=get_type, put=set_type)) ::UnityEngine::InputSystem::Utilities::FourCC  type;

 __declspec(property(get=get_sizeInBytes, put=set_sizeInBytes)) uint32_t  sizeInBytes;

 __declspec(property(get=get_eventId, put=set_eventId)) int32_t  eventId;

 __declspec(property(get=get_deviceId, put=set_deviceId)) int32_t  deviceId;

 __declspec(property(get=get_time, put=set_time)) double_t  time;

 __declspec(property(get=get_internalTime, put=set_internalTime)) double_t  internalTime;

 __declspec(property(get=get_handled, put=set_handled)) bool  handled;

constexpr void __set_m_Event(::UnityEngineInternal::Input::NativeInputEvent  value) ;

constexpr ::UnityEngineInternal::Input::NativeInputEvent& __get_m_Event() ;

constexpr ::UnityEngineInternal::Input::NativeInputEvent const& __get_m_Event() const;

/// @brief Method get_type addr 0x2aea0d4 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::FourCC get_type() ;

/// @brief Method set_type addr 0x2aea0dc size 0x8 virtual false final false
inline void set_type(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

/// @brief Method get_sizeInBytes addr 0x2ae9234 size 0x8 virtual false final false
inline uint32_t get_sizeInBytes() ;

/// @brief Method set_sizeInBytes addr 0x2aea0e4 size 0xa8 virtual false final false
inline void set_sizeInBytes(uint32_t  value) ;

/// @brief Method get_eventId addr 0x2aea18c size 0xc virtual false final false
inline int32_t get_eventId() ;

/// @brief Method set_eventId addr 0x2aea198 size 0x14 virtual false final false
inline void set_eventId(int32_t  value) ;

/// @brief Method get_deviceId addr 0x2aea1ac size 0x8 virtual false final false
inline int32_t get_deviceId() ;

/// @brief Method set_deviceId addr 0x2aea1b4 size 0x8 virtual false final false
inline void set_deviceId(int32_t  value) ;

/// @brief Method get_time addr 0x2aea1bc size 0x54 virtual false final false
inline double_t get_time() ;

/// @brief Method set_time addr 0x2aea210 size 0x60 virtual false final false
inline void set_time(double_t  value) ;

/// @brief Method get_internalTime addr 0x2aea270 size 0x8 virtual false final false
inline double_t get_internalTime() ;

/// @brief Method set_internalTime addr 0x2aea278 size 0x8 virtual false final false
inline void set_internalTime(double_t  value) ;

/// @brief Method .ctor addr 0x2ae9a04 size 0x104 virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Utilities::FourCC  type, int32_t  sizeInBytes, int32_t  deviceId, double_t  time) ;

/// @brief Method get_handled addr 0x2aea280 size 0xc virtual false final false
inline bool get_handled() ;

/// @brief Method set_handled addr 0x2aea28c size 0x1c virtual false final false
inline void set_handled(bool  value) ;

/// @brief Method ToString addr 0x2aea2a8 size 0x264 virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetNextInMemory addr 0x2aea50c size 0x20 virtual false final false
static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> GetNextInMemory(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  currentPtr) ;

/// @brief Method GetNextInMemoryChecked addr 0x2aea52c size 0xf0 virtual false final false
static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> GetNextInMemoryChecked(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  currentPtr, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>  buffer) ;

/// @brief Method Equals addr 0x2aea6a4 size 0x54 virtual false final false
static inline bool Equals(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  first, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  second) ;

// Ctor Parameters [CppParam { name: "m_Event", ty: "::UnityEngineInternal::Input::NativeInputEvent", modifiers: "", def_value: None }]
constexpr InputEvent(::UnityEngineInternal::Input::NativeInputEvent  m_Event) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputEvent()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEvent, 0x14>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEvent, "UnityEngine.InputSystem.LowLevel", "InputEvent");
