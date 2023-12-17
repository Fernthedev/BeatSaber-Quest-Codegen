#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AveragingValueRecorder)
namespace GlobalNamespace {
struct __AveragingValueRecorder__AverageValueData;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AveragingValueRecorder;
}
namespace GlobalNamespace {
struct __AveragingValueRecorder__AverageValueData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AveragingValueRecorder);
MARK_VAL_T(::GlobalNamespace::__AveragingValueRecorder__AverageValueData);
// Type: ::AverageValueData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5838))
// CS Name: ::AveragingValueRecorder::AverageValueData
struct CORDL_TYPE __AveragingValueRecorder__AverageValueData : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <value>k__BackingField offset 0x0
 __declspec(property(get=__get__value_k__BackingField, put=__set__value_k__BackingField)) float_t  _value_k__BackingField;

/// @brief Field <time>k__BackingField offset 0x4
 __declspec(property(get=__get__time_k__BackingField, put=__set__time_k__BackingField)) float_t  _time_k__BackingField;

 __declspec(property(get=get_value, put=set_value)) float_t  value;

 __declspec(property(get=get_time, put=set_time)) float_t  time;

constexpr void __set__value_k__BackingField(float_t  value) ;

constexpr float_t& __get__value_k__BackingField() ;

constexpr float_t const& __get__value_k__BackingField() const;

constexpr void __set__time_k__BackingField(float_t  value) ;

constexpr float_t& __get__time_k__BackingField() ;

constexpr float_t const& __get__time_k__BackingField() const;

/// @brief Method get_value addr 0x22eecf8 size 0x8 virtual false final false
inline float_t get_value() ;

/// @brief Method set_value addr 0x22eed00 size 0x8 virtual false final false
inline void set_value(float_t  value) ;

/// @brief Method get_time addr 0x22eed08 size 0x8 virtual false final false
inline float_t get_time() ;

/// @brief Method set_time addr 0x22eed10 size 0x8 virtual false final false
inline void set_time(float_t  value) ;

/// @brief Method .ctor addr 0x22eecd8 size 0x8 virtual false final false
inline void _ctor(float_t  value, float_t  time) ;

// Ctor Parameters [CppParam { name: "_value_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_time_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr __AveragingValueRecorder__AverageValueData(float_t  _value_k__BackingField, float_t  _time_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AveragingValueRecorder__AverageValueData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AveragingValueRecorder__AverageValueData()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AveragingValueRecorder__AverageValueData, 0x8>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::AveragingValueRecorder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5839))
// CS Name: ::AveragingValueRecorder*
class CORDL_TYPE AveragingValueRecorder : public ::System::Object {
public:
// Declarations
using AverageValueData = ::GlobalNamespace::__AveragingValueRecorder__AverageValueData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field _averageWindowDuration offset 0x10
 __declspec(property(get=__get__averageWindowDuration, put=__set__averageWindowDuration)) float_t  _averageWindowDuration;

/// @brief Field _historyValuesPerSecond offset 0x14
 __declspec(property(get=__get__historyValuesPerSecond, put=__set__historyValuesPerSecond)) float_t  _historyValuesPerSecond;

/// @brief Field _historyValuesCount offset 0x18
 __declspec(property(get=__get__historyValuesCount, put=__set__historyValuesCount)) int32_t  _historyValuesCount;

/// @brief Field _averageWindowValues offset 0x20
 __declspec(property(get=__get__averageWindowValues, put=__set__averageWindowValues)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*  _averageWindowValues;

/// @brief Field _historyValues offset 0x28
 __declspec(property(get=__get__historyValues, put=__set__historyValues)) ::System::Collections::Generic::Queue_1<float_t>*  _historyValues;

/// @brief Field _time offset 0x30
 __declspec(property(get=__get__time, put=__set__time)) float_t  _time;

/// @brief Field _historyTime offset 0x34
 __declspec(property(get=__get__historyTime, put=__set__historyTime)) float_t  _historyTime;

/// @brief Field _averageValue offset 0x38
 __declspec(property(get=__get__averageValue, put=__set__averageValue)) float_t  _averageValue;

/// @brief Field _averageWindowValuesDuration offset 0x3c
 __declspec(property(get=__get__averageWindowValuesDuration, put=__set__averageWindowValuesDuration)) float_t  _averageWindowValuesDuration;

/// @brief Field _lastValue offset 0x40
 __declspec(property(get=__get__lastValue, put=__set__lastValue)) float_t  _lastValue;

constexpr void __set__averageWindowDuration(float_t  value) ;

constexpr float_t& __get__averageWindowDuration() ;

constexpr float_t const& __get__averageWindowDuration() const;

constexpr void __set__historyValuesPerSecond(float_t  value) ;

constexpr float_t& __get__historyValuesPerSecond() ;

constexpr float_t const& __get__historyValuesPerSecond() const;

constexpr void __set__historyValuesCount(int32_t  value) ;

constexpr int32_t& __get__historyValuesCount() ;

constexpr int32_t const& __get__historyValuesCount() const;

constexpr void __set__averageWindowValues(::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>* __get__averageWindowValues() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*> __get__averageWindowValues() const;

constexpr void __set__historyValues(::System::Collections::Generic::Queue_1<float_t>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<float_t>* __get__historyValues() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<float_t>*> __get__historyValues() const;

constexpr void __set__time(float_t  value) ;

constexpr float_t& __get__time() ;

constexpr float_t const& __get__time() const;

constexpr void __set__historyTime(float_t  value) ;

constexpr float_t& __get__historyTime() ;

constexpr float_t const& __get__historyTime() const;

constexpr void __set__averageValue(float_t  value) ;

constexpr float_t& __get__averageValue() ;

constexpr float_t const& __get__averageValue() const;

constexpr void __set__averageWindowValuesDuration(float_t  value) ;

constexpr float_t& __get__averageWindowValuesDuration() ;

constexpr float_t const& __get__averageWindowValuesDuration() const;

constexpr void __set__lastValue(float_t  value) ;

constexpr float_t& __get__lastValue() ;

constexpr float_t const& __get__lastValue() const;

static inline ::GlobalNamespace::AveragingValueRecorder* New_ctor(float_t  averageWindowDuration, float_t  historyWindowDuration, float_t  historyValuesPerSecond) ;

/// @brief Method .ctor addr 0x22ee8c4 size 0x154 virtual false final false
inline void _ctor(float_t  averageWindowDuration, float_t  historyWindowDuration, float_t  historyValuesPerSecond) ;

/// @brief Method Update addr 0x22eea18 size 0x2c0 virtual false final false
inline void Update(float_t  value, float_t  deltaTime) ;

/// @brief Method GetAverageValue addr 0x22eece0 size 0x8 virtual false final false
inline float_t GetAverageValue() ;

/// @brief Method GetLastValue addr 0x22eece8 size 0x8 virtual false final false
inline float_t GetLastValue() ;

/// @brief Method GetHistoryValues addr 0x22eecf0 size 0x8 virtual false final false
inline ::System::Collections::Generic::Queue_1<float_t>* GetHistoryValues() ;

// Ctor Parameters [CppParam { name: "", ty: "AveragingValueRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AveragingValueRecorder(AveragingValueRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AveragingValueRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AveragingValueRecorder(AveragingValueRecorder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AveragingValueRecorder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AveragingValueRecorder, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AveragingValueRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AveragingValueRecorder*, "", "AveragingValueRecorder");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AveragingValueRecorder__AverageValueData, "", "AveragingValueRecorder/AverageValueData");
