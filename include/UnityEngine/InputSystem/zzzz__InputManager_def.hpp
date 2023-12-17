#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputManager)
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceCommandDelegate;
}
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputRuntime;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputMetrics;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::InputSystem {
struct __InputManager__DeviceDisableScope;
}
namespace UnityEngine::InputSystem {
class __InputManager___ListControlLayouts_d__75;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBuffers;
}
namespace UnityEngine::InputSystem {
struct __InputManager__StateChangeMonitorsForDevice;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventStream;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputStateBuffers__DoubleBuffers;
}
namespace UnityEngine::InputSystem {
struct __InputManager__AvailableDevice;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__Collection;
}
namespace UnityEngine::InputSystem {
struct __InputManager__StateChangeMonitorListener;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
struct __InputManager__StateChangeMonitorTimeout;
}
namespace UnityEngine::InputSystem {
struct InputControlLayoutChange;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::InputSystem {
class InputSettings;
}
namespace UnityEngine::InputSystem::Layouts {
class InputDeviceFindControlLayoutDelegate;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem {
template<typename TDevice>
class __InputManager____c__60_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
namespace UnityEngine::InputSystem {
struct __InputDevice__DeviceFlags;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBlock;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class __InputManager____c;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct __Dictionary_2__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::InputSystem::Utilities {
struct __MemoryHelpers__BitRegion;
}
namespace UnityEngine::InputSystem {
struct DynamicBitfield;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template<typename TDevice>
class __InputManager____c__60_1;
}
namespace UnityEngine::InputSystem {
struct __InputManager__DeviceDisableScope;
}
namespace UnityEngine::InputSystem {
class InputManager;
}
namespace UnityEngine::InputSystem {
class __InputManager___ListControlLayouts_d__75;
}
namespace UnityEngine::InputSystem {
class __InputManager____c;
}
namespace UnityEngine::InputSystem {
template<::il2cpp_utils::il2cpp_reference_type TDevice>
class __InputManager____c__60_1<TDevice>;
}
namespace UnityEngine::InputSystem {
struct __InputManager__AvailableDevice;
}
namespace UnityEngine::InputSystem {
struct __InputManager__StateChangeMonitorListener;
}
namespace UnityEngine::InputSystem {
struct __InputManager__StateChangeMonitorTimeout;
}
namespace UnityEngine::InputSystem {
struct __InputManager__StateChangeMonitorsForDevice;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::__InputManager____c__60_1);
MARK_VAL_T(::UnityEngine::InputSystem::__InputManager__DeviceDisableScope);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputManager);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputManager____c);
MARK_VAL_T(::UnityEngine::InputSystem::__InputManager__AvailableDevice);
MARK_VAL_T(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener);
MARK_VAL_T(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout);
MARK_VAL_T(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice);
// Type: ::DeviceDisableScope
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6292))
// CS Name: ::InputManager::DeviceDisableScope
struct CORDL_TYPE __InputManager__DeviceDisableScope : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____InputManager__DeviceDisableScope_Unwrapped
enum struct ____InputManager__DeviceDisableScope_Unwrapped : int32_t {
__E_Everywhere = static_cast<int32_t>(0x0),
__E_InFrontendOnly = static_cast<int32_t>(0x1),
__E_TemporaryWhilePlayerIsInBackground = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Everywhere value: static_cast<int32_t>(0x0)
static ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope const Everywhere;

/// @brief Field InFrontendOnly value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope const InFrontendOnly;

/// @brief Field TemporaryWhilePlayerIsInBackground value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope const TemporaryWhilePlayerIsInBackground;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____InputManager__DeviceDisableScope_Unwrapped () const noexcept {
return std::bit_cast<____InputManager__DeviceDisableScope_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputManager__DeviceDisableScope(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputManager__DeviceDisableScope(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputManager__DeviceDisableScope()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputManager__DeviceDisableScope, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::AvailableDevice
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6293))
// CS Name: ::InputManager::AvailableDevice
struct CORDL_TYPE __InputManager__AvailableDevice : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field description offset 0x0
 __declspec(property(get=__get_description, put=__set_description)) ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description;

/// @brief Field deviceId offset 0x38
 __declspec(property(get=__get_deviceId, put=__set_deviceId)) int32_t  deviceId;

/// @brief Field isNative offset 0x3c
 __declspec(property(get=__get_isNative, put=__set_isNative)) bool  isNative;

/// @brief Field isRemoved offset 0x3d
 __declspec(property(get=__get_isRemoved, put=__set_isRemoved)) bool  isRemoved;

constexpr void __set_description(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription& __get_description() ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription const& __get_description() const;

constexpr void __set_deviceId(int32_t  value) ;

constexpr int32_t& __get_deviceId() ;

constexpr int32_t const& __get_deviceId() const;

constexpr void __set_isNative(bool  value) ;

constexpr bool& __get_isNative() ;

constexpr bool const& __get_isNative() const;

constexpr void __set_isRemoved(bool  value) ;

constexpr bool& __get_isRemoved() ;

constexpr bool const& __get_isRemoved() const;

// Ctor Parameters [CppParam { name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: None }, CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isNative", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isRemoved", ty: "bool", modifiers: "", def_value: None }]
constexpr __InputManager__AvailableDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description, int32_t  deviceId, bool  isNative, bool  isRemoved) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputManager__AvailableDevice(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputManager__AvailableDevice()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputManager__AvailableDevice, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::StateChangeMonitorTimeout
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6294))
// CS Name: ::InputManager::StateChangeMonitorTimeout
struct CORDL_TYPE __InputManager__StateChangeMonitorTimeout : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field control offset 0x0
 __declspec(property(get=__get_control, put=__set_control)) ::UnityEngine::InputSystem::InputControl*  control;

/// @brief Field time offset 0x8
 __declspec(property(get=__get_time, put=__set_time)) double_t  time;

/// @brief Field monitor offset 0x10
 __declspec(property(get=__get_monitor, put=__set_monitor)) ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor;

/// @brief Field monitorIndex offset 0x18
 __declspec(property(get=__get_monitorIndex, put=__set_monitorIndex)) int64_t  monitorIndex;

/// @brief Field timerIndex offset 0x20
 __declspec(property(get=__get_timerIndex, put=__set_timerIndex)) int32_t  timerIndex;

constexpr void __set_control(::UnityEngine::InputSystem::InputControl*  value) ;

constexpr ::UnityEngine::InputSystem::InputControl* __get_control() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputControl*> __get_control() const;

constexpr void __set_time(double_t  value) ;

constexpr double_t& __get_time() ;

constexpr double_t const& __get_time() const;

constexpr void __set_monitor(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* __get_monitor() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*> __get_monitor() const;

constexpr void __set_monitorIndex(int64_t  value) ;

constexpr int64_t& __get_monitorIndex() ;

constexpr int64_t const& __get_monitorIndex() const;

constexpr void __set_timerIndex(int32_t  value) ;

constexpr int32_t& __get_timerIndex() ;

constexpr int32_t const& __get_timerIndex() const;

// Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "monitor", ty: "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*", modifiers: "", def_value: None }, CppParam { name: "monitorIndex", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "timerIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputManager__StateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl*  control, double_t  time, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, int32_t  timerIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputManager__StateChangeMonitorTimeout(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputManager__StateChangeMonitorTimeout()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::StateChangeMonitorListener
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6295))
// CS Name: ::InputManager::StateChangeMonitorListener
struct CORDL_TYPE __InputManager__StateChangeMonitorListener : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field control offset 0x0
 __declspec(property(get=__get_control, put=__set_control)) ::UnityEngine::InputSystem::InputControl*  control;

/// @brief Field monitor offset 0x8
 __declspec(property(get=__get_monitor, put=__set_monitor)) ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor;

/// @brief Field monitorIndex offset 0x10
 __declspec(property(get=__get_monitorIndex, put=__set_monitorIndex)) int64_t  monitorIndex;

/// @brief Field groupIndex offset 0x18
 __declspec(property(get=__get_groupIndex, put=__set_groupIndex)) uint32_t  groupIndex;

constexpr void __set_control(::UnityEngine::InputSystem::InputControl*  value) ;

constexpr ::UnityEngine::InputSystem::InputControl* __get_control() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputControl*> __get_control() const;

constexpr void __set_monitor(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* __get_monitor() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*> __get_monitor() const;

constexpr void __set_monitorIndex(int64_t  value) ;

constexpr int64_t& __get_monitorIndex() ;

constexpr int64_t const& __get_monitorIndex() const;

constexpr void __set_groupIndex(uint32_t  value) ;

constexpr uint32_t& __get_groupIndex() ;

constexpr uint32_t const& __get_groupIndex() const;

// Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: None }, CppParam { name: "monitor", ty: "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*", modifiers: "", def_value: None }, CppParam { name: "monitorIndex", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "groupIndex", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr __InputManager__StateChangeMonitorListener(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, uint32_t  groupIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputManager__StateChangeMonitorListener(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputManager__StateChangeMonitorListener()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::StateChangeMonitorsForDevice
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6296))
// CS Name: ::InputManager::StateChangeMonitorsForDevice
struct CORDL_TYPE __InputManager__StateChangeMonitorsForDevice : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field memoryRegions offset 0x0
 __declspec(property(get=__get_memoryRegions, put=__set_memoryRegions)) ::ArrayW<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion,::Array<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion>*>  memoryRegions;

/// @brief Field listeners offset 0x8
 __declspec(property(get=__get_listeners, put=__set_listeners)) ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener>*>  listeners;

/// @brief Field signalled offset 0x10
 __declspec(property(get=__get_signalled, put=__set_signalled)) ::UnityEngine::InputSystem::DynamicBitfield  signalled;

/// @brief Field needToUpdateOrderingOfMonitors offset 0x30
 __declspec(property(get=__get_needToUpdateOrderingOfMonitors, put=__set_needToUpdateOrderingOfMonitors)) bool  needToUpdateOrderingOfMonitors;

/// @brief Field needToCompactArrays offset 0x31
 __declspec(property(get=__get_needToCompactArrays, put=__set_needToCompactArrays)) bool  needToCompactArrays;

 __declspec(property(get=get_count)) int32_t  count;

constexpr void __set_memoryRegions(::ArrayW<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion,::Array<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion,::Array<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion>*>& __get_memoryRegions() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion,::Array<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion>*> const& __get_memoryRegions() const;

constexpr void __set_listeners(::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener>*>& __get_listeners() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener>*> const& __get_listeners() const;

constexpr void __set_signalled(::UnityEngine::InputSystem::DynamicBitfield  value) ;

constexpr ::UnityEngine::InputSystem::DynamicBitfield& __get_signalled() ;

constexpr ::UnityEngine::InputSystem::DynamicBitfield const& __get_signalled() const;

constexpr void __set_needToUpdateOrderingOfMonitors(bool  value) ;

constexpr bool& __get_needToUpdateOrderingOfMonitors() ;

constexpr bool const& __get_needToUpdateOrderingOfMonitors() const;

constexpr void __set_needToCompactArrays(bool  value) ;

constexpr bool& __get_needToCompactArrays() ;

constexpr bool const& __get_needToCompactArrays() const;

/// @brief Method get_count addr 0x2ab6cfc size 0x8 virtual false final false
inline int32_t get_count() ;

/// @brief Method Add addr 0x2ab6d04 size 0x114 virtual false final false
inline void Add(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, uint32_t  groupIndex) ;

/// @brief Method Remove addr 0x2ab6e8c size 0xb4 virtual false final false
inline void Remove(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, bool  deferRemoval) ;

/// @brief Method Clear addr 0x2ab7084 size 0x64 virtual false final false
inline void Clear() ;

/// @brief Method CompactArrays addr 0x2ab70e8 size 0x68 virtual false final false
inline void CompactArrays() ;

/// @brief Method RemoveAt addr 0x2ab6fd8 size 0xac virtual false final false
inline void RemoveAt(int32_t  i) ;

/// @brief Method SortMonitorsByIndex addr 0x2ab7150 size 0x13c virtual false final false
inline void SortMonitorsByIndex() ;

// Ctor Parameters [CppParam { name: "memoryRegions", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion,::Array<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion>*>", modifiers: "", def_value: None }, CppParam { name: "listeners", ty: "::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener>*>", modifiers: "", def_value: None }, CppParam { name: "signalled", ty: "::UnityEngine::InputSystem::DynamicBitfield", modifiers: "", def_value: None }, CppParam { name: "needToUpdateOrderingOfMonitors", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "needToCompactArrays", ty: "bool", modifiers: "", def_value: None }]
constexpr __InputManager__StateChangeMonitorsForDevice(::ArrayW<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion,::Array<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion>*>  memoryRegions, ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener>*>  listeners, ::UnityEngine::InputSystem::DynamicBitfield  signalled, bool  needToUpdateOrderingOfMonitors, bool  needToCompactArrays) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputManager__StateChangeMonitorsForDevice(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputManager__StateChangeMonitorsForDevice()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::<>c__60`1
// Type: ::<ListControlLayouts>d__75
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6298))
// CS Name: ::InputManager::<ListControlLayouts>d__75*
class CORDL_TYPE __InputManager___ListControlLayouts_d__75 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xe0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xe0 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::StringW  __2__current;

/// @brief Field <>l__initialThreadId offset 0x20
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field basedOn offset 0x28
 __declspec(property(get=__get_basedOn, put=__set_basedOn)) ::StringW  basedOn;

/// @brief Field <>3__basedOn offset 0x30
 __declspec(property(get=__get___3__basedOn, put=__set___3__basedOn)) ::StringW  __3__basedOn;

/// @brief Field <>4__this offset 0x38
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::UnityEngine::InputSystem::InputManager*  __4__this;

/// @brief Field <internedBasedOn>5__2 offset 0x40
 __declspec(property(get=__get__internedBasedOn_5__2, put=__set__internedBasedOn_5__2)) ::UnityEngine::InputSystem::Utilities::InternedString  _internedBasedOn_5__2;

/// @brief Field <>7__wrap2 offset 0x50
 __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2)) ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>  __7__wrap2;

/// @brief Field <>7__wrap3 offset 0x80
 __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3)) ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>  __7__wrap3;

/// @brief Field <>7__wrap4 offset 0xb0
 __declspec(property(get=__get___7__wrap4, put=__set___7__wrap4)) ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>  __7__wrap4;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_String__get_Current)) ::StringW  System_Collections_Generic_IEnumerator_System_String__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::StringW  value) ;

constexpr ::StringW& __get___2__current() ;

constexpr ::StringW const& __get___2__current() const;

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set_basedOn(::StringW  value) ;

constexpr ::StringW& __get_basedOn() ;

constexpr ::StringW const& __get_basedOn() const;

constexpr void __set___3__basedOn(::StringW  value) ;

constexpr ::StringW& __get___3__basedOn() ;

constexpr ::StringW const& __get___3__basedOn() const;

constexpr void __set___4__this(::UnityEngine::InputSystem::InputManager*  value) ;

constexpr ::UnityEngine::InputSystem::InputManager* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputManager*> __get___4__this() const;

constexpr void __set__internedBasedOn_5__2(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get__internedBasedOn_5__2() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get__internedBasedOn_5__2() const;

constexpr void __set___7__wrap2(::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>  value) ;

constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>& __get___7__wrap2() ;

constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*> const& __get___7__wrap2() const;

constexpr void __set___7__wrap3(::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>  value) ;

constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>& __get___7__wrap3() ;

constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW> const& __get___7__wrap3() const;

constexpr void __set___7__wrap4(::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>  value) ;

constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>& __get___7__wrap4() ;

constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*> const& __get___7__wrap4() const;

static inline ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x2ab728c size 0x34 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2ab72c0 size 0x44 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2ab7304 size 0x6a4 virtual true final true
inline bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2ab79a8 size 0x50 virtual false final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x2ab79f8 size 0x50 virtual false final false
inline void __m__Finally2() ;

/// @brief Method <>m__Finally3 addr 0x2ab7a48 size 0x50 virtual false final false
inline void __m__Finally3() ;

/// @brief Method <>m__Finally4 addr 0x2ab7a98 size 0x50 virtual false final false
inline void __m__Finally4() ;

/// @brief Method <>m__Finally5 addr 0x2ab7ae8 size 0x50 virtual false final false
inline void __m__Finally5() ;

/// @brief Method <>m__Finally6 addr 0x2ab7b38 size 0x50 virtual false final false
inline void __m__Finally6() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current addr 0x2ab7b88 size 0x8 virtual true final true
inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2ab7b90 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ab7bd0 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator addr 0x2ab7bd8 size 0xac virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ab7c84 size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__InputManager___ListControlLayouts_d__75", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputManager___ListControlLayouts_d__75(__InputManager___ListControlLayouts_d__75 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputManager___ListControlLayouts_d__75", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputManager___ListControlLayouts_d__75(__InputManager___ListControlLayouts_d__75 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputManager___ListControlLayouts_d__75()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75, 0xe0>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::<>c
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6299))
// CS Name: ::InputManager::<>c*
class CORDL_TYPE __InputManager____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::InputSystem::__InputManager____c*  value) ;

static inline ::UnityEngine::InputSystem::__InputManager____c* getStaticF___9() ;

static inline void setStaticF___9__144_0(::System::Func_2<::UnityEngine::InputSystem::InputDevice*,::StringW>*  value) ;

static inline ::System::Func_2<::UnityEngine::InputSystem::InputDevice*,::StringW>* getStaticF___9__144_0() ;

static inline ::UnityEngine::InputSystem::__InputManager____c* New_ctor() ;

/// @brief Method .ctor addr 0x2ab7cec size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <MakeDeviceNameUnique>b__144_0 addr 0x2ab7cf4 size 0x64 virtual false final false
inline ::StringW _MakeDeviceNameUnique_b__144_0(::UnityEngine::InputSystem::InputDevice*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputManager____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputManager____c(__InputManager____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputManager____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputManager____c(__InputManager____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputManager____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__144_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputManager____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputManager
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6300))
// CS Name: ::UnityEngine.InputSystem::InputManager*
class CORDL_TYPE InputManager : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::__InputManager____c;

using _ListControlLayouts_d__75 = ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75;

template<typename TDevice>
using __c__60_1 = ::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>;

using StateChangeMonitorsForDevice = ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice;

using StateChangeMonitorListener = ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener;

using StateChangeMonitorTimeout = ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout;

using AvailableDevice = ::UnityEngine::InputSystem::__InputManager__AvailableDevice;

using DeviceDisableScope = ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x4c8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x4c8 - sizeof(::System::Object)]{};

/// @brief Field m_LayoutRegistrationVersion offset 0x10
 __declspec(property(get=__get_m_LayoutRegistrationVersion, put=__set_m_LayoutRegistrationVersion)) int32_t  m_LayoutRegistrationVersion;

/// @brief Field m_PollingFrequency offset 0x14
 __declspec(property(get=__get_m_PollingFrequency, put=__set_m_PollingFrequency)) float_t  m_PollingFrequency;

/// @brief Field m_Layouts offset 0x18
 __declspec(property(get=__get_m_Layouts, put=__set_m_Layouts)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection  m_Layouts;

/// @brief Field m_Processors offset 0x58
 __declspec(property(get=__get_m_Processors, put=__set_m_Processors)) ::UnityEngine::InputSystem::Utilities::TypeTable  m_Processors;

/// @brief Field m_Interactions offset 0x60
 __declspec(property(get=__get_m_Interactions, put=__set_m_Interactions)) ::UnityEngine::InputSystem::Utilities::TypeTable  m_Interactions;

/// @brief Field m_Composites offset 0x68
 __declspec(property(get=__get_m_Composites, put=__set_m_Composites)) ::UnityEngine::InputSystem::Utilities::TypeTable  m_Composites;

/// @brief Field m_DevicesCount offset 0x70
 __declspec(property(get=__get_m_DevicesCount, put=__set_m_DevicesCount)) int32_t  m_DevicesCount;

/// @brief Field m_Devices offset 0x78
 __declspec(property(get=__get_m_Devices, put=__set_m_Devices)) ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  m_Devices;

/// @brief Field m_DevicesById offset 0x80
 __declspec(property(get=__get_m_DevicesById, put=__set_m_DevicesById)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice*>*  m_DevicesById;

/// @brief Field m_AvailableDeviceCount offset 0x88
 __declspec(property(get=__get_m_AvailableDeviceCount, put=__set_m_AvailableDeviceCount)) int32_t  m_AvailableDeviceCount;

/// @brief Field m_AvailableDevices offset 0x90
 __declspec(property(get=__get_m_AvailableDevices, put=__set_m_AvailableDevices)) ::ArrayW<::UnityEngine::InputSystem::__InputManager__AvailableDevice,::Array<::UnityEngine::InputSystem::__InputManager__AvailableDevice>*>  m_AvailableDevices;

/// @brief Field m_DisconnectedDevicesCount offset 0x98
 __declspec(property(get=__get_m_DisconnectedDevicesCount, put=__set_m_DisconnectedDevicesCount)) int32_t  m_DisconnectedDevicesCount;

/// @brief Field m_DisconnectedDevices offset 0xa0
 __declspec(property(get=__get_m_DisconnectedDevices, put=__set_m_DisconnectedDevices)) ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  m_DisconnectedDevices;

/// @brief Field m_UpdateMask offset 0xa8
 __declspec(property(get=__get_m_UpdateMask, put=__set_m_UpdateMask)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  m_UpdateMask;

/// @brief Field m_CurrentUpdate offset 0xac
 __declspec(property(get=__get_m_CurrentUpdate, put=__set_m_CurrentUpdate)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  m_CurrentUpdate;

/// @brief Field m_StateBuffers offset 0xb0
 __declspec(property(get=__get_m_StateBuffers, put=__set_m_StateBuffers)) ::UnityEngine::InputSystem::LowLevel::InputStateBuffers  m_StateBuffers;

/// @brief Field m_DeviceChangeListeners offset 0xe0
 __declspec(property(get=__get_m_DeviceChangeListeners, put=__set_m_DeviceChangeListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*>  m_DeviceChangeListeners;

/// @brief Field m_DeviceStateChangeListeners offset 0x130
 __declspec(property(get=__get_m_DeviceStateChangeListeners, put=__set_m_DeviceStateChangeListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  m_DeviceStateChangeListeners;

/// @brief Field m_DeviceFindLayoutCallbacks offset 0x180
 __declspec(property(get=__get_m_DeviceFindLayoutCallbacks, put=__set_m_DeviceFindLayoutCallbacks)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>  m_DeviceFindLayoutCallbacks;

/// @brief Field m_DeviceCommandCallbacks offset 0x1d0
 __declspec(property(get=__get_m_DeviceCommandCallbacks, put=__set_m_DeviceCommandCallbacks)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>  m_DeviceCommandCallbacks;

/// @brief Field m_LayoutChangeListeners offset 0x220
 __declspec(property(get=__get_m_LayoutChangeListeners, put=__set_m_LayoutChangeListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*>  m_LayoutChangeListeners;

/// @brief Field m_EventListeners offset 0x270
 __declspec(property(get=__get_m_EventListeners, put=__set_m_EventListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*>  m_EventListeners;

/// @brief Field m_BeforeUpdateListeners offset 0x2c0
 __declspec(property(get=__get_m_BeforeUpdateListeners, put=__set_m_BeforeUpdateListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  m_BeforeUpdateListeners;

/// @brief Field m_AfterUpdateListeners offset 0x310
 __declspec(property(get=__get_m_AfterUpdateListeners, put=__set_m_AfterUpdateListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  m_AfterUpdateListeners;

/// @brief Field m_SettingsChangedListeners offset 0x360
 __declspec(property(get=__get_m_SettingsChangedListeners, put=__set_m_SettingsChangedListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  m_SettingsChangedListeners;

/// @brief Field m_NativeBeforeUpdateHooked offset 0x3b0
 __declspec(property(get=__get_m_NativeBeforeUpdateHooked, put=__set_m_NativeBeforeUpdateHooked)) bool  m_NativeBeforeUpdateHooked;

/// @brief Field m_HaveDevicesWithStateCallbackReceivers offset 0x3b1
 __declspec(property(get=__get_m_HaveDevicesWithStateCallbackReceivers, put=__set_m_HaveDevicesWithStateCallbackReceivers)) bool  m_HaveDevicesWithStateCallbackReceivers;

/// @brief Field m_HasFocus offset 0x3b2
 __declspec(property(get=__get_m_HasFocus, put=__set_m_HasFocus)) bool  m_HasFocus;

/// @brief Field m_InputEventStream offset 0x3b8
 __declspec(property(get=__get_m_InputEventStream, put=__set_m_InputEventStream)) ::UnityEngine::InputSystem::LowLevel::InputEventStream  m_InputEventStream;

/// @brief Field m_DeviceFindExecuteCommandDelegate offset 0x430
 __declspec(property(get=__get_m_DeviceFindExecuteCommandDelegate, put=__set_m_DeviceFindExecuteCommandDelegate)) ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*  m_DeviceFindExecuteCommandDelegate;

/// @brief Field m_DeviceFindExecuteCommandDeviceId offset 0x438
 __declspec(property(get=__get_m_DeviceFindExecuteCommandDeviceId, put=__set_m_DeviceFindExecuteCommandDeviceId)) int32_t  m_DeviceFindExecuteCommandDeviceId;

/// @brief Field m_Runtime offset 0x440
 __declspec(property(get=__get_m_Runtime, put=__set_m_Runtime)) ::UnityEngine::InputSystem::LowLevel::IInputRuntime*  m_Runtime;

/// @brief Field m_Metrics offset 0x448
 __declspec(property(get=__get_m_Metrics, put=__set_m_Metrics)) ::UnityEngine::InputSystem::LowLevel::InputMetrics  m_Metrics;

/// @brief Field m_Settings offset 0x480
 __declspec(property(get=__get_m_Settings, put=__set_m_Settings)) ::UnityEngine::InputSystem::InputSettings*  m_Settings;

/// @brief Field m_StateChangeMonitors offset 0x488
 __declspec(property(get=__get_m_StateChangeMonitors, put=__set_m_StateChangeMonitors)) ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>*>  m_StateChangeMonitors;

/// @brief Field m_StateChangeMonitorTimeouts offset 0x490
 __declspec(property(get=__get_m_StateChangeMonitorTimeouts, put=__set_m_StateChangeMonitorTimeouts)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>  m_StateChangeMonitorTimeouts;

 __declspec(property(get=get_devices)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>  devices;

 __declspec(property(get=get_processors)) ::UnityEngine::InputSystem::Utilities::TypeTable  processors;

 __declspec(property(get=get_interactions)) ::UnityEngine::InputSystem::Utilities::TypeTable  interactions;

 __declspec(property(get=get_composites)) ::UnityEngine::InputSystem::Utilities::TypeTable  composites;

 __declspec(property(get=get_metrics)) ::UnityEngine::InputSystem::LowLevel::InputMetrics  metrics;

 __declspec(property(get=get_settings, put=set_settings)) ::UnityEngine::InputSystem::InputSettings*  settings;

 __declspec(property(get=get_updateMask, put=set_updateMask)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateMask;

 __declspec(property(get=get_defaultUpdateType)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  defaultUpdateType;

 __declspec(property(get=get_pollingFrequency, put=set_pollingFrequency)) float_t  pollingFrequency;

 __declspec(property(get=get_isProcessingEvents)) bool  isProcessingEvents;

 __declspec(property(get=get_gameIsPlaying)) bool  gameIsPlaying;

 __declspec(property(get=get_gameHasFocus)) bool  gameHasFocus;

 __declspec(property(get=get_gameShouldGetInputRegardlessOfFocus)) bool  gameShouldGetInputRegardlessOfFocus;

constexpr void __set_m_LayoutRegistrationVersion(int32_t  value) ;

constexpr int32_t& __get_m_LayoutRegistrationVersion() ;

constexpr int32_t const& __get_m_LayoutRegistrationVersion() const;

constexpr void __set_m_PollingFrequency(float_t  value) ;

constexpr float_t& __get_m_PollingFrequency() ;

constexpr float_t const& __get_m_PollingFrequency() const;

constexpr void __set_m_Layouts(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection& __get_m_Layouts() ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection const& __get_m_Layouts() const;

constexpr void __set_m_Processors(::UnityEngine::InputSystem::Utilities::TypeTable  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable& __get_m_Processors() ;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable const& __get_m_Processors() const;

constexpr void __set_m_Interactions(::UnityEngine::InputSystem::Utilities::TypeTable  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable& __get_m_Interactions() ;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable const& __get_m_Interactions() const;

constexpr void __set_m_Composites(::UnityEngine::InputSystem::Utilities::TypeTable  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable& __get_m_Composites() ;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable const& __get_m_Composites() const;

constexpr void __set_m_DevicesCount(int32_t  value) ;

constexpr int32_t& __get_m_DevicesCount() ;

constexpr int32_t const& __get_m_DevicesCount() const;

constexpr void __set_m_Devices(::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>& __get_m_Devices() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*> const& __get_m_Devices() const;

constexpr void __set_m_DevicesById(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice*>* __get_m_DevicesById() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice*>*> __get_m_DevicesById() const;

constexpr void __set_m_AvailableDeviceCount(int32_t  value) ;

constexpr int32_t& __get_m_AvailableDeviceCount() ;

constexpr int32_t const& __get_m_AvailableDeviceCount() const;

constexpr void __set_m_AvailableDevices(::ArrayW<::UnityEngine::InputSystem::__InputManager__AvailableDevice,::Array<::UnityEngine::InputSystem::__InputManager__AvailableDevice>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__AvailableDevice,::Array<::UnityEngine::InputSystem::__InputManager__AvailableDevice>*>& __get_m_AvailableDevices() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__AvailableDevice,::Array<::UnityEngine::InputSystem::__InputManager__AvailableDevice>*> const& __get_m_AvailableDevices() const;

constexpr void __set_m_DisconnectedDevicesCount(int32_t  value) ;

constexpr int32_t& __get_m_DisconnectedDevicesCount() ;

constexpr int32_t const& __get_m_DisconnectedDevicesCount() const;

constexpr void __set_m_DisconnectedDevices(::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>& __get_m_DisconnectedDevices() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*> const& __get_m_DisconnectedDevices() const;

constexpr void __set_m_UpdateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType& __get_m_UpdateMask() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType const& __get_m_UpdateMask() const;

constexpr void __set_m_CurrentUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType& __get_m_CurrentUpdate() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType const& __get_m_CurrentUpdate() const;

constexpr void __set_m_StateBuffers(::UnityEngine::InputSystem::LowLevel::InputStateBuffers  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers& __get_m_StateBuffers() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers const& __get_m_StateBuffers() const;

constexpr void __set_m_DeviceChangeListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*>& __get_m_DeviceChangeListeners() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*> const& __get_m_DeviceChangeListeners() const;

constexpr void __set_m_DeviceStateChangeListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>& __get_m_DeviceStateChangeListeners() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const& __get_m_DeviceStateChangeListeners() const;

constexpr void __set_m_DeviceFindLayoutCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>& __get_m_DeviceFindLayoutCallbacks() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*> const& __get_m_DeviceFindLayoutCallbacks() const;

constexpr void __set_m_DeviceCommandCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>& __get_m_DeviceCommandCallbacks() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*> const& __get_m_DeviceCommandCallbacks() const;

constexpr void __set_m_LayoutChangeListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*>& __get_m_LayoutChangeListeners() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*> const& __get_m_LayoutChangeListeners() const;

constexpr void __set_m_EventListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*>& __get_m_EventListeners() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*> const& __get_m_EventListeners() const;

constexpr void __set_m_BeforeUpdateListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& __get_m_BeforeUpdateListeners() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& __get_m_BeforeUpdateListeners() const;

constexpr void __set_m_AfterUpdateListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& __get_m_AfterUpdateListeners() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& __get_m_AfterUpdateListeners() const;

constexpr void __set_m_SettingsChangedListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& __get_m_SettingsChangedListeners() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& __get_m_SettingsChangedListeners() const;

constexpr void __set_m_NativeBeforeUpdateHooked(bool  value) ;

constexpr bool& __get_m_NativeBeforeUpdateHooked() ;

constexpr bool const& __get_m_NativeBeforeUpdateHooked() const;

constexpr void __set_m_HaveDevicesWithStateCallbackReceivers(bool  value) ;

constexpr bool& __get_m_HaveDevicesWithStateCallbackReceivers() ;

constexpr bool const& __get_m_HaveDevicesWithStateCallbackReceivers() const;

constexpr void __set_m_HasFocus(bool  value) ;

constexpr bool& __get_m_HasFocus() ;

constexpr bool const& __get_m_HasFocus() const;

constexpr void __set_m_InputEventStream(::UnityEngine::InputSystem::LowLevel::InputEventStream  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventStream& __get_m_InputEventStream() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventStream const& __get_m_InputEventStream() const;

constexpr void __set_m_DeviceFindExecuteCommandDelegate(::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* __get_m_DeviceFindExecuteCommandDelegate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*> __get_m_DeviceFindExecuteCommandDelegate() const;

constexpr void __set_m_DeviceFindExecuteCommandDeviceId(int32_t  value) ;

constexpr int32_t& __get_m_DeviceFindExecuteCommandDeviceId() ;

constexpr int32_t const& __get_m_DeviceFindExecuteCommandDeviceId() const;

constexpr void __set_m_Runtime(::UnityEngine::InputSystem::LowLevel::IInputRuntime*  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::IInputRuntime* __get_m_Runtime() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::IInputRuntime*> __get_m_Runtime() const;

constexpr void __set_m_Metrics(::UnityEngine::InputSystem::LowLevel::InputMetrics  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputMetrics& __get_m_Metrics() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputMetrics const& __get_m_Metrics() const;

constexpr void __set_m_Settings(::UnityEngine::InputSystem::InputSettings*  value) ;

constexpr ::UnityEngine::InputSystem::InputSettings* __get_m_Settings() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputSettings*> __get_m_Settings() const;

constexpr void __set_m_StateChangeMonitors(::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>*>& __get_m_StateChangeMonitors() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>*> const& __get_m_StateChangeMonitors() const;

constexpr void __set_m_StateChangeMonitorTimeouts(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>& __get_m_StateChangeMonitorTimeouts() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout> const& __get_m_StateChangeMonitorTimeouts() const;

/// @brief Method get_devices addr 0x2aa4ec4 size 0x68 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_devices() ;

/// @brief Method get_processors addr 0x2aaad3c size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::TypeTable get_processors() ;

/// @brief Method get_interactions addr 0x2aaad44 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::TypeTable get_interactions() ;

/// @brief Method get_composites addr 0x2aaad4c size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::TypeTable get_composites() ;

/// @brief Method get_metrics addr 0x2aaad54 size 0x19c virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::InputMetrics get_metrics() ;

/// @brief Method get_settings addr 0x2aaaef0 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::InputSettings* get_settings() ;

/// @brief Method set_settings addr 0x2aaaef8 size 0xfc virtual false final false
inline void set_settings(::UnityEngine::InputSystem::InputSettings*  value) ;

/// @brief Method get_updateMask addr 0x2aab380 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_updateMask() ;

/// @brief Method set_updateMask addr 0x2aab388 size 0x24 virtual false final false
inline void set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value) ;

/// @brief Method get_defaultUpdateType addr 0x2aab540 size 0x1c virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_defaultUpdateType() ;

/// @brief Method get_pollingFrequency addr 0x2aab55c size 0x8 virtual false final false
inline float_t get_pollingFrequency() ;

/// @brief Method set_pollingFrequency addr 0x2aab564 size 0x12c virtual false final false
inline void set_pollingFrequency(float_t  value) ;

/// @brief Method add_onDeviceChange addr 0x2aa37a4 size 0x58 virtual false final false
inline void add_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  value) ;

/// @brief Method remove_onDeviceChange addr 0x2aa3a24 size 0x58 virtual false final false
inline void remove_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  value) ;

/// @brief Method add_onDeviceStateChange addr 0x2aab690 size 0x58 virtual false final false
inline void add_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value) ;

/// @brief Method remove_onDeviceStateChange addr 0x2aab6e8 size 0x58 virtual false final false
inline void remove_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value) ;

/// @brief Method add_onDeviceCommand addr 0x2aab740 size 0x58 virtual false final false
inline void add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*  value) ;

/// @brief Method remove_onDeviceCommand addr 0x2aab798 size 0x58 virtual false final false
inline void remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*  value) ;

/// @brief Method add_onFindControlLayoutForDevice addr 0x2aab7f0 size 0x60 virtual false final false
inline void add_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*  value) ;

/// @brief Method remove_onFindControlLayoutForDevice addr 0x2aabaf8 size 0x58 virtual false final false
inline void remove_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*  value) ;

/// @brief Method add_onLayoutChange addr 0x2aa37fc size 0x58 virtual false final false
inline void add_onLayoutChange(::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*  value) ;

/// @brief Method remove_onLayoutChange addr 0x2aa3a7c size 0x58 virtual false final false
inline void remove_onLayoutChange(::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*  value) ;

/// @brief Method add_onEvent addr 0x2aa374c size 0x58 virtual false final false
inline void add_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  value) ;

/// @brief Method remove_onEvent addr 0x2aa39cc size 0x58 virtual false final false
inline void remove_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  value) ;

/// @brief Method add_onBeforeUpdate addr 0x2aabb50 size 0x60 virtual false final false
inline void add_onBeforeUpdate(::System::Action*  value) ;

/// @brief Method remove_onBeforeUpdate addr 0x2aabcbc size 0x58 virtual false final false
inline void remove_onBeforeUpdate(::System::Action*  value) ;

/// @brief Method add_onAfterUpdate addr 0x2aabd14 size 0x58 virtual false final false
inline void add_onAfterUpdate(::System::Action*  value) ;

/// @brief Method remove_onAfterUpdate addr 0x2aabd6c size 0x58 virtual false final false
inline void remove_onAfterUpdate(::System::Action*  value) ;

/// @brief Method add_onSettingsChange addr 0x2aabdc4 size 0x58 virtual false final false
inline void add_onSettingsChange(::System::Action*  value) ;

/// @brief Method remove_onSettingsChange addr 0x2aabe1c size 0x58 virtual false final false
inline void remove_onSettingsChange(::System::Action*  value) ;

/// @brief Method get_isProcessingEvents addr 0x2aabe74 size 0x8 virtual false final false
inline bool get_isProcessingEvents() ;

/// @brief Method get_gameIsPlaying addr 0x2aabe7c size 0x8 virtual false final false
inline bool get_gameIsPlaying() ;

/// @brief Method get_gameHasFocus addr 0x2aabe84 size 0x34 virtual false final false
inline bool get_gameHasFocus() ;

/// @brief Method get_gameShouldGetInputRegardlessOfFocus addr 0x2aabeb8 size 0x24 virtual false final false
inline bool get_gameShouldGetInputRegardlessOfFocus() ;

/// @brief Method RegisterControlLayout addr 0x2aabedc size 0x618 virtual false final false
inline void RegisterControlLayout(::StringW  name, ::System::Type*  type) ;

/// @brief Method RegisterControlLayout addr 0x2aa6060 size 0x4bc virtual false final false
inline void RegisterControlLayout(::StringW  json, ::StringW  name, bool  isOverride) ;

/// @brief Method RegisterControlLayoutBuilder addr 0x2aaca6c size 0x194 virtual false final false
inline void RegisterControlLayoutBuilder(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*  method, ::StringW  name, ::StringW  baseLayout) ;

/// @brief Method PerformLayoutPostRegistration addr 0x2aac4f4 size 0x458 virtual false final false
inline void PerformLayoutPostRegistration(::UnityEngine::InputSystem::Utilities::InternedString  layoutName, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  baseLayouts, bool  isReplacement, bool  isKnownToBeDeviceLayout, bool  isOverride) ;

/// @brief Method RegisterPrecompiledLayout addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
inline void RegisterPrecompiledLayout(::StringW  metadata) ;

/// @brief Method RecreateDevicesUsingLayout addr 0x2aacc00 size 0x274 virtual false final false
inline void RecreateDevicesUsingLayout(::UnityEngine::InputSystem::Utilities::InternedString  layout, bool  isKnownToBeDeviceLayout) ;

/// @brief Method IsControlOrChildUsingLayoutRecursive addr 0x2aacf44 size 0xf0 virtual false final false
inline bool IsControlOrChildUsingLayoutRecursive(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::Utilities::InternedString  layout) ;

/// @brief Method IsControlUsingLayout addr 0x2aace74 size 0xd0 virtual false final false
inline bool IsControlUsingLayout(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::Utilities::InternedString  layout) ;

/// @brief Method RegisterControlLayoutMatcher addr 0x2aac94c size 0x120 virtual false final false
inline void RegisterControlLayoutMatcher(::StringW  layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher) ;

/// @brief Method RegisterControlLayoutMatcher addr 0x2aad704 size 0x204 virtual false final false
inline void RegisterControlLayoutMatcher(::System::Type*  type, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher) ;

/// @brief Method RecreateDevicesUsingLayoutWithInferiorMatch addr 0x2aad190 size 0x1ec virtual false final false
inline void RecreateDevicesUsingLayoutWithInferiorMatch(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  deviceMatcher) ;

/// @brief Method RecreateDevice addr 0x2aad034 size 0x15c virtual false final false
inline void RecreateDevice(::UnityEngine::InputSystem::InputDevice*  oldDevice, ::UnityEngine::InputSystem::Utilities::InternedString  newLayout) ;

/// @brief Method AddAvailableDevicesMatchingDescription addr 0x2aad37c size 0x388 virtual false final false
inline void AddAvailableDevicesMatchingDescription(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher, ::UnityEngine::InputSystem::Utilities::InternedString  layout) ;

/// @brief Method RemoveControlLayout addr 0x2aae3f8 size 0x214 virtual false final false
inline void RemoveControlLayout(::StringW  name) ;

/// @brief Method TryLoadControlLayout addr 0x2aae60c size 0x230 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadControlLayout(::System::Type*  type) ;

/// @brief Method TryLoadControlLayout addr 0x2aa6050 size 0x10 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadControlLayout(::UnityEngine::InputSystem::Utilities::InternedString  name) ;

/// @brief Method TryFindMatchingControlLayout addr 0x2aad908 size 0x430 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString TryFindMatchingControlLayout(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>  deviceDescription, int32_t  deviceId) ;

/// @brief Method FindOrRegisterDeviceLayoutForType addr 0x2aae83c size 0xa0 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString FindOrRegisterDeviceLayoutForType(::System::Type*  type) ;

/// @brief Method IsDeviceLayoutMarkedAsSupportedInSettings addr 0x2aae8dc size 0x10c virtual false final false
inline bool IsDeviceLayoutMarkedAsSupportedInSettings(::UnityEngine::InputSystem::Utilities::InternedString  layoutName) ;

/// @brief Method ListControlLayouts addr 0x2aae9e8 size 0x74 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListControlLayouts(::StringW  basedOn) ;

/// @brief Method GetControls addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
inline int32_t GetControls(::StringW  path, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>  controls) ;

/// @brief Method SetDeviceUsage addr 0x2aaea5c size 0x15c virtual false final false
inline void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method AddDeviceUsage addr 0x2aa6660 size 0x134 virtual false final false
inline void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method RemoveDeviceUsage addr 0x2aa6828 size 0x134 virtual false final false
inline void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method NotifyUsageChanged addr 0x2aaebb8 size 0xa4 virtual false final false
inline void NotifyUsageChanged(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method AddDevice addr 0x2aaec5c size 0xe8 virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::System::Type*  type, ::StringW  name) ;

/// @brief Method AddDevice addr 0x2aa651c size 0x144 virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::StringW  layout, ::StringW  name, ::UnityEngine::InputSystem::Utilities::InternedString  variants) ;

/// @brief Method AddDevice addr 0x2aae248 size 0x1b0 virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Utilities::InternedString  layout, int32_t  deviceId, ::StringW  deviceName, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  deviceDescription, ::UnityEngine::InputSystem::__InputDevice__DeviceFlags  deviceFlags, ::UnityEngine::InputSystem::Utilities::InternedString  variants) ;

/// @brief Method AddDevice addr 0x2aadd38 size 0x510 virtual false final false
inline void AddDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method AddDevice addr 0x2aaf6e4 size 0x44 virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description) ;

/// @brief Method AddDevice addr 0x2aaf728 size 0x1d8 virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description, bool  throwIfNoLayoutFound, ::StringW  deviceName, int32_t  deviceId, ::UnityEngine::InputSystem::__InputDevice__DeviceFlags  deviceFlags) ;

/// @brief Method AddDevice addr 0x2aaf900 size 0xd4 virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description, ::UnityEngine::InputSystem::Utilities::InternedString  layout, ::StringW  deviceName, int32_t  deviceId, ::UnityEngine::InputSystem::__InputDevice__DeviceFlags  deviceFlags) ;

/// @brief Method RemoveDevice addr 0x2aa5b94 size 0x464 virtual false final false
inline void RemoveDevice(::UnityEngine::InputSystem::InputDevice*  device, bool  keepOnListOfAvailableDevices) ;

/// @brief Method FlushDisconnectedDevices addr 0x2aafb00 size 0x54 virtual false final false
inline void FlushDisconnectedDevices() ;

/// @brief Method ResetDevice addr 0x2aafb54 size 0x57c virtual false final false
inline void ResetDevice(::UnityEngine::InputSystem::InputDevice*  device, bool  alsoResetDontResetControls, ::System::Nullable_1<bool>  issueResetCommand) ;

/// @brief Method TryGetDevice addr 0x2ab0298 size 0x128 virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* TryGetDevice(::StringW  nameOrLayout) ;

/// @brief Method GetDevice addr 0x2ab03c0 size 0xa4 virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* GetDevice(::StringW  nameOrLayout) ;

/// @brief Method TryGetDevice addr 0x2ab0464 size 0x58 virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* TryGetDevice(::System::Type*  layoutType) ;

/// @brief Method TryGetDeviceById addr 0x2aa5a18 size 0x78 virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* TryGetDeviceById(int32_t  id) ;

/// @brief Method GetUnsupportedDevices addr 0x2ab04bc size 0x1ec virtual false final false
inline int32_t GetUnsupportedDevices(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*  descriptions) ;

/// @brief Method EnableOrDisableDevice addr 0x2aaf2b8 size 0x42c virtual false final false
inline void EnableOrDisableDevice(::UnityEngine::InputSystem::InputDevice*  device, bool  enable, ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope  scope) ;

/// @brief Method QueueEvent addr 0x2ab06a8 size 0xcc virtual false final false
inline void QueueEvent(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  eventPtr) ;

/// @brief Method QueueEvent addr 0x2aa6824 size 0x4 virtual false final false
inline void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  ptr) ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TEvent>
inline void QueueEvent(ByRef<TEvent>  inputEvent) ;

/// @brief Method Update addr 0x2ab0774 size 0x2c virtual false final false
inline void Update() ;

/// @brief Method Update addr 0x2ab07a0 size 0xac virtual false final false
inline void Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method Initialize addr 0x2ab084c size 0x3c virtual false final false
inline void Initialize(::UnityEngine::InputSystem::LowLevel::IInputRuntime*  runtime, ::UnityEngine::InputSystem::InputSettings*  settings) ;

/// @brief Method Destroy addr 0x2ab25e4 size 0x10c virtual false final false
inline void Destroy() ;

/// @brief Method InitializeData addr 0x2ab0888 size 0x146c virtual false final false
inline void InitializeData() ;

/// @brief Method InstallRuntime addr 0x2ab1cf4 size 0x6e0 virtual false final false
inline void InstallRuntime(::UnityEngine::InputSystem::LowLevel::IInputRuntime*  runtime) ;

/// @brief Method InstallGlobals addr 0x2ab23d4 size 0x210 virtual false final false
inline void InstallGlobals() ;

/// @brief Method UninstallGlobals addr 0x2ab26f0 size 0x38c virtual false final false
inline void UninstallGlobals() ;

/// @brief Method MakeDeviceNameUnique addr 0x2aaed44 size 0x184 virtual false final false
inline void MakeDeviceNameUnique(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method ResetControlPathsRecursive addr 0x2ab2a7c size 0xa4 virtual false final false
static inline void ResetControlPathsRecursive(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method AssignUniqueDeviceId addr 0x2aaeec8 size 0x18c virtual false final false
inline void AssignUniqueDeviceId(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method ReallocateStateBuffers addr 0x2aab3ac size 0x194 virtual false final false
inline void ReallocateStateBuffers() ;

/// @brief Method InitializeDefaultState addr 0x2ab2b20 size 0x158 virtual false final false
inline void InitializeDefaultState(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method InitializeDeviceState addr 0x2aaf054 size 0x228 virtual false final false
inline void InitializeDeviceState(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method OnNativeDeviceDiscovered addr 0x2ab2c78 size 0x3e8 virtual false final false
inline void OnNativeDeviceDiscovered(int32_t  deviceId, ::StringW  deviceDescriptor) ;

/// @brief Method TryMatchDisconnectedDevice addr 0x2ab3064 size 0x1e4 virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* TryMatchDisconnectedDevice(::StringW  deviceDescriptor) ;

/// @brief Method InstallBeforeUpdateHookIfNecessary addr 0x2aabbb0 size 0x10c virtual false final false
inline void InstallBeforeUpdateHookIfNecessary() ;

/// @brief Method RestoreDevicesAfterDomainReloadIfNecessary addr 0x2ab3060 size 0x4 virtual false final false
inline void RestoreDevicesAfterDomainReloadIfNecessary() ;

/// @brief Method WarnAboutDevicesFailingToRecreateAfterDomainReload addr 0x2ab3248 size 0x4 virtual false final false
inline void WarnAboutDevicesFailingToRecreateAfterDomainReload() ;

/// @brief Method OnBeforeUpdate addr 0x2ab324c size 0x1c0 virtual false final false
inline void OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method ApplySettings addr 0x2aaaff4 size 0x38c virtual false final false
inline void ApplySettings() ;

/// @brief Method ExecuteGlobalCommand addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TCommand>
inline int64_t ExecuteGlobalCommand(ByRef<TCommand>  command) ;

/// @brief Method AddAvailableDevicesThatAreNowRecognized addr 0x2aab850 size 0x2a8 virtual false final false
inline void AddAvailableDevicesThatAreNowRecognized() ;

/// @brief Method ShouldRunDeviceInBackground addr 0x2aaf27c size 0x3c virtual false final false
inline bool ShouldRunDeviceInBackground(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method OnFocusChanged addr 0x2ab340c size 0x240 virtual false final false
inline void OnFocusChanged(bool  focus) ;

/// @brief Method ShouldRunUpdate addr 0x2ab364c size 0x1c virtual false final false
inline bool ShouldRunUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method OnUpdate addr 0x2ab3668 size 0x12e0 virtual false final false
inline void OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>  eventBuffer) ;

/// @brief Method InvokeAfterUpdateCallback addr 0x2ab4bfc size 0x68 virtual false final false
inline void InvokeAfterUpdateCallback(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method UpdateState addr 0x2ab4c64 size 0x154 virtual false final false
inline bool UpdateState(::UnityEngine::InputSystem::InputDevice*  device, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  eventPtr, ::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method UpdateState addr 0x2ab00d0 size 0x1c8 virtual false final false
inline bool UpdateState(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType, ::cordl_internals::Ptr<void>  statePtr, uint32_t  stateOffsetInDevice, uint32_t  stateSize, double_t  internalTime, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method WriteStateChange addr 0x2ab5138 size 0xb4 virtual false final false
static inline void WriteStateChange(::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers  buffers, int32_t  deviceIndex, ByRef<::UnityEngine::InputSystem::LowLevel::InputStateBlock>  deviceStateBlock, uint32_t  stateOffsetInDevice, ::cordl_internals::Ptr<void>  statePtr, uint32_t  stateSizeInBytes, bool  flippedBuffers) ;

/// @brief Method FlipBuffersForDeviceIfNecessary addr 0x2ab5094 size 0xa4 virtual false final false
inline bool FlipBuffersForDeviceIfNecessary(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method AddStateChangeMonitor addr 0x2ab5604 size 0x13c virtual false final false
inline void AddStateChangeMonitor(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, uint32_t  groupIndex) ;

/// @brief Method RemoveStateChangeMonitors addr 0x2aaf9d4 size 0x12c virtual false final false
inline void RemoveStateChangeMonitors(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method RemoveStateChangeMonitor addr 0x2ab5740 size 0x158 virtual false final false
inline void RemoveStateChangeMonitor(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex) ;

/// @brief Method AddStateChangeMonitorTimeout addr 0x2ab5898 size 0x94 virtual false final false
inline void AddStateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, double_t  time, int64_t  monitorIndex, int32_t  timerIndex) ;

/// @brief Method RemoveStateChangeMonitorTimeout addr 0x2ab592c size 0x124 virtual false final false
inline void RemoveStateChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, int32_t  timerIndex) ;

/// @brief Method SortStateChangeMonitorsIfNecessary addr 0x2ab4db8 size 0x54 virtual false final false
inline void SortStateChangeMonitorsIfNecessary(int32_t  deviceIndex) ;

/// @brief Method SignalStateChangeMonitor addr 0x2ab5a50 size 0xf0 virtual false final false
inline void SignalStateChangeMonitor(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor) ;

/// @brief Method FireStateChangeNotifications addr 0x2ab5b40 size 0x14c virtual false final false
inline void FireStateChangeNotifications() ;

/// @brief Method ProcessStateChangeMonitors addr 0x2ab4e0c size 0x288 virtual false final false
inline bool ProcessStateChangeMonitors(int32_t  deviceIndex, ::cordl_internals::Ptr<void>  newStateFromEvent, ::cordl_internals::Ptr<void>  oldStateOfDevice, uint32_t  newStateSizeInBytes, uint32_t  newStateOffsetInBytes) ;

/// @brief Method FireStateChangeNotifications addr 0x2ab51ec size 0x418 virtual false final false
inline void FireStateChangeNotifications(int32_t  deviceIndex, double_t  internalTime, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  eventPtr) ;

/// @brief Method ProcessStateChangeMonitorTimeouts addr 0x2ab4948 size 0x2b4 virtual false final false
inline void ProcessStateChangeMonitorTimeouts() ;

static inline ::UnityEngine::InputSystem::InputManager* New_ctor() ;

/// @brief Method .ctor addr 0x2ab5c8c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <TryFindMatchingControlLayout>b__72_0 addr 0x2ab5c94 size 0x1068 virtual false final false
inline int64_t _TryFindMatchingControlLayout_b__72_0(ByRef<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>  commandRef) ;

// Ctor Parameters [CppParam { name: "", ty: "InputManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputManager(InputManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputManager(InputManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputManager()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputManager, 0x4c8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::<>c__60`1
namespace UnityEngine::InputSystem {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TDevice>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6297))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6297), inst: 2 })
// CS Name: ::InputManager::<>c__60`1<TDevice>*
class CORDL_TYPE __InputManager____c__60_1<TDevice> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>*  value) ;

static inline ::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>* getStaticF___9() ;

static inline void setStaticF___9__60_0(::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*  value) ;

static inline ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* getStaticF___9__60_0() ;

static inline ::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <RegisterPrecompiledLayout>b__60_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* _RegisterPrecompiledLayout_b__60_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__InputManager____c__60_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputManager____c__60_1(__InputManager____c__60_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputManager____c__60_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputManager____c__60_1(__InputManager____c__60_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputManager____c__60_1()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__60_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::__InputManager____c__60_1, "UnityEngine.InputSystem", "InputManager/<>c__60`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputManager__DeviceDisableScope, "UnityEngine.InputSystem", "InputManager/DeviceDisableScope");
NEED_NO_BOX(::UnityEngine::InputSystem::InputManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputManager*, "UnityEngine.InputSystem", "InputManager");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*, "UnityEngine.InputSystem", "InputManager/<ListControlLayouts>d__75");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputManager____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputManager____c*, "UnityEngine.InputSystem", "InputManager/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputManager__AvailableDevice, "UnityEngine.InputSystem", "InputManager/AvailableDevice");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener, "UnityEngine.InputSystem", "InputManager/StateChangeMonitorListener");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout, "UnityEngine.InputSystem", "InputManager/StateChangeMonitorTimeout");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, "UnityEngine.InputSystem", "InputManager/StateChangeMonitorsForDevice");
