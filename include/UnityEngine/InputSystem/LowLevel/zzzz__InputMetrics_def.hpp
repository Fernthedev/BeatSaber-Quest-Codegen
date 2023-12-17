#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputMetrics)
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputMetrics;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputMetrics);
// Type: UnityEngine.InputSystem.LowLevel::InputMetrics
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6552))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputMetrics
struct CORDL_TYPE InputMetrics : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <maxNumDevices>k__BackingField offset 0x0
 __declspec(property(get=__get__maxNumDevices_k__BackingField, put=__set__maxNumDevices_k__BackingField)) int32_t  _maxNumDevices_k__BackingField;

/// @brief Field <currentNumDevices>k__BackingField offset 0x4
 __declspec(property(get=__get__currentNumDevices_k__BackingField, put=__set__currentNumDevices_k__BackingField)) int32_t  _currentNumDevices_k__BackingField;

/// @brief Field <maxStateSizeInBytes>k__BackingField offset 0x8
 __declspec(property(get=__get__maxStateSizeInBytes_k__BackingField, put=__set__maxStateSizeInBytes_k__BackingField)) int32_t  _maxStateSizeInBytes_k__BackingField;

/// @brief Field <currentStateSizeInBytes>k__BackingField offset 0xc
 __declspec(property(get=__get__currentStateSizeInBytes_k__BackingField, put=__set__currentStateSizeInBytes_k__BackingField)) int32_t  _currentStateSizeInBytes_k__BackingField;

/// @brief Field <currentControlCount>k__BackingField offset 0x10
 __declspec(property(get=__get__currentControlCount_k__BackingField, put=__set__currentControlCount_k__BackingField)) int32_t  _currentControlCount_k__BackingField;

/// @brief Field <currentLayoutCount>k__BackingField offset 0x14
 __declspec(property(get=__get__currentLayoutCount_k__BackingField, put=__set__currentLayoutCount_k__BackingField)) int32_t  _currentLayoutCount_k__BackingField;

/// @brief Field <totalEventBytes>k__BackingField offset 0x18
 __declspec(property(get=__get__totalEventBytes_k__BackingField, put=__set__totalEventBytes_k__BackingField)) int32_t  _totalEventBytes_k__BackingField;

/// @brief Field <totalEventCount>k__BackingField offset 0x1c
 __declspec(property(get=__get__totalEventCount_k__BackingField, put=__set__totalEventCount_k__BackingField)) int32_t  _totalEventCount_k__BackingField;

/// @brief Field <totalUpdateCount>k__BackingField offset 0x20
 __declspec(property(get=__get__totalUpdateCount_k__BackingField, put=__set__totalUpdateCount_k__BackingField)) int32_t  _totalUpdateCount_k__BackingField;

/// @brief Field <totalEventProcessingTime>k__BackingField offset 0x28
 __declspec(property(get=__get__totalEventProcessingTime_k__BackingField, put=__set__totalEventProcessingTime_k__BackingField)) double_t  _totalEventProcessingTime_k__BackingField;

/// @brief Field <totalEventLagTime>k__BackingField offset 0x30
 __declspec(property(get=__get__totalEventLagTime_k__BackingField, put=__set__totalEventLagTime_k__BackingField)) double_t  _totalEventLagTime_k__BackingField;

 __declspec(property(get=get_maxNumDevices, put=set_maxNumDevices)) int32_t  maxNumDevices;

 __declspec(property(get=get_currentNumDevices, put=set_currentNumDevices)) int32_t  currentNumDevices;

 __declspec(property(get=get_maxStateSizeInBytes, put=set_maxStateSizeInBytes)) int32_t  maxStateSizeInBytes;

 __declspec(property(get=get_currentStateSizeInBytes, put=set_currentStateSizeInBytes)) int32_t  currentStateSizeInBytes;

 __declspec(property(get=get_currentControlCount, put=set_currentControlCount)) int32_t  currentControlCount;

 __declspec(property(get=get_currentLayoutCount, put=set_currentLayoutCount)) int32_t  currentLayoutCount;

 __declspec(property(get=get_totalEventBytes, put=set_totalEventBytes)) int32_t  totalEventBytes;

 __declspec(property(get=get_totalEventCount, put=set_totalEventCount)) int32_t  totalEventCount;

 __declspec(property(get=get_totalUpdateCount, put=set_totalUpdateCount)) int32_t  totalUpdateCount;

 __declspec(property(get=get_totalEventProcessingTime, put=set_totalEventProcessingTime)) double_t  totalEventProcessingTime;

 __declspec(property(get=get_totalEventLagTime, put=set_totalEventLagTime)) double_t  totalEventLagTime;

 __declspec(property(get=get_averageEventBytesPerFrame)) float_t  averageEventBytesPerFrame;

 __declspec(property(get=get_averageProcessingTimePerEvent)) double_t  averageProcessingTimePerEvent;

 __declspec(property(get=get_averageLagTimePerEvent)) double_t  averageLagTimePerEvent;

constexpr void __set__maxNumDevices_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__maxNumDevices_k__BackingField() ;

constexpr int32_t const& __get__maxNumDevices_k__BackingField() const;

constexpr void __set__currentNumDevices_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__currentNumDevices_k__BackingField() ;

constexpr int32_t const& __get__currentNumDevices_k__BackingField() const;

constexpr void __set__maxStateSizeInBytes_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__maxStateSizeInBytes_k__BackingField() ;

constexpr int32_t const& __get__maxStateSizeInBytes_k__BackingField() const;

constexpr void __set__currentStateSizeInBytes_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__currentStateSizeInBytes_k__BackingField() ;

constexpr int32_t const& __get__currentStateSizeInBytes_k__BackingField() const;

constexpr void __set__currentControlCount_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__currentControlCount_k__BackingField() ;

constexpr int32_t const& __get__currentControlCount_k__BackingField() const;

constexpr void __set__currentLayoutCount_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__currentLayoutCount_k__BackingField() ;

constexpr int32_t const& __get__currentLayoutCount_k__BackingField() const;

constexpr void __set__totalEventBytes_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__totalEventBytes_k__BackingField() ;

constexpr int32_t const& __get__totalEventBytes_k__BackingField() const;

constexpr void __set__totalEventCount_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__totalEventCount_k__BackingField() ;

constexpr int32_t const& __get__totalEventCount_k__BackingField() const;

constexpr void __set__totalUpdateCount_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__totalUpdateCount_k__BackingField() ;

constexpr int32_t const& __get__totalUpdateCount_k__BackingField() const;

constexpr void __set__totalEventProcessingTime_k__BackingField(double_t  value) ;

constexpr double_t& __get__totalEventProcessingTime_k__BackingField() ;

constexpr double_t const& __get__totalEventProcessingTime_k__BackingField() const;

constexpr void __set__totalEventLagTime_k__BackingField(double_t  value) ;

constexpr double_t& __get__totalEventLagTime_k__BackingField() ;

constexpr double_t const& __get__totalEventLagTime_k__BackingField() const;

/// @brief Method get_maxNumDevices addr 0x2af0bd4 size 0x8 virtual false final false
inline int32_t get_maxNumDevices() ;

/// @brief Method set_maxNumDevices addr 0x2af0bdc size 0x8 virtual false final false
inline void set_maxNumDevices(int32_t  value) ;

/// @brief Method get_currentNumDevices addr 0x2af0be4 size 0x8 virtual false final false
inline int32_t get_currentNumDevices() ;

/// @brief Method set_currentNumDevices addr 0x2af0bec size 0x8 virtual false final false
inline void set_currentNumDevices(int32_t  value) ;

/// @brief Method get_maxStateSizeInBytes addr 0x2af0bf4 size 0x8 virtual false final false
inline int32_t get_maxStateSizeInBytes() ;

/// @brief Method set_maxStateSizeInBytes addr 0x2af0bfc size 0x8 virtual false final false
inline void set_maxStateSizeInBytes(int32_t  value) ;

/// @brief Method get_currentStateSizeInBytes addr 0x2af0c04 size 0x8 virtual false final false
inline int32_t get_currentStateSizeInBytes() ;

/// @brief Method set_currentStateSizeInBytes addr 0x2af0c0c size 0x8 virtual false final false
inline void set_currentStateSizeInBytes(int32_t  value) ;

/// @brief Method get_currentControlCount addr 0x2af0c14 size 0x8 virtual false final false
inline int32_t get_currentControlCount() ;

/// @brief Method set_currentControlCount addr 0x2af0c1c size 0x8 virtual false final false
inline void set_currentControlCount(int32_t  value) ;

/// @brief Method get_currentLayoutCount addr 0x2af0c24 size 0x8 virtual false final false
inline int32_t get_currentLayoutCount() ;

/// @brief Method set_currentLayoutCount addr 0x2af0c2c size 0x8 virtual false final false
inline void set_currentLayoutCount(int32_t  value) ;

/// @brief Method get_totalEventBytes addr 0x2af0c34 size 0x8 virtual false final false
inline int32_t get_totalEventBytes() ;

/// @brief Method set_totalEventBytes addr 0x2af0c3c size 0x8 virtual false final false
inline void set_totalEventBytes(int32_t  value) ;

/// @brief Method get_totalEventCount addr 0x2af0c44 size 0x8 virtual false final false
inline int32_t get_totalEventCount() ;

/// @brief Method set_totalEventCount addr 0x2af0c4c size 0x8 virtual false final false
inline void set_totalEventCount(int32_t  value) ;

/// @brief Method get_totalUpdateCount addr 0x2af0c54 size 0x8 virtual false final false
inline int32_t get_totalUpdateCount() ;

/// @brief Method set_totalUpdateCount addr 0x2af0c5c size 0x8 virtual false final false
inline void set_totalUpdateCount(int32_t  value) ;

/// @brief Method get_totalEventProcessingTime addr 0x2af0c64 size 0x8 virtual false final false
inline double_t get_totalEventProcessingTime() ;

/// @brief Method set_totalEventProcessingTime addr 0x2af0c6c size 0x8 virtual false final false
inline void set_totalEventProcessingTime(double_t  value) ;

/// @brief Method get_totalEventLagTime addr 0x2af0c74 size 0x8 virtual false final false
inline double_t get_totalEventLagTime() ;

/// @brief Method set_totalEventLagTime addr 0x2af0c7c size 0x8 virtual false final false
inline void set_totalEventLagTime(double_t  value) ;

/// @brief Method get_averageEventBytesPerFrame addr 0x2af0c84 size 0x18 virtual false final false
inline float_t get_averageEventBytesPerFrame() ;

/// @brief Method get_averageProcessingTimePerEvent addr 0x2af0c9c size 0x14 virtual false final false
inline double_t get_averageProcessingTimePerEvent() ;

/// @brief Method get_averageLagTimePerEvent addr 0x2af0cb0 size 0x14 virtual false final false
inline double_t get_averageLagTimePerEvent() ;

// Ctor Parameters [CppParam { name: "_maxNumDevices_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentNumDevices_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_maxStateSizeInBytes_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentStateSizeInBytes_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentControlCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentLayoutCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_totalEventBytes_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_totalEventCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_totalUpdateCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_totalEventProcessingTime_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_totalEventLagTime_k__BackingField", ty: "double_t", modifiers: "", def_value: None }]
constexpr InputMetrics(int32_t  _maxNumDevices_k__BackingField, int32_t  _currentNumDevices_k__BackingField, int32_t  _maxStateSizeInBytes_k__BackingField, int32_t  _currentStateSizeInBytes_k__BackingField, int32_t  _currentControlCount_k__BackingField, int32_t  _currentLayoutCount_k__BackingField, int32_t  _totalEventBytes_k__BackingField, int32_t  _totalEventCount_k__BackingField, int32_t  _totalUpdateCount_k__BackingField, double_t  _totalEventProcessingTime_k__BackingField, double_t  _totalEventLagTime_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputMetrics(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputMetrics()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputMetrics, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputMetrics, "UnityEngine.InputSystem.LowLevel", "InputMetrics");
