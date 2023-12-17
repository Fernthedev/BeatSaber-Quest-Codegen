#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimerState)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TimerState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TimerState);
// Type: UnityEngine.UIElements::TimerState
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6939))
// CS Name: ::UnityEngine.UIElements::TimerState
struct CORDL_TYPE TimerState : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <start>k__BackingField offset 0x0
 __declspec(property(get=__get__start_k__BackingField, put=__set__start_k__BackingField)) int64_t  _start_k__BackingField;

/// @brief Field <now>k__BackingField offset 0x8
 __declspec(property(get=__get__now_k__BackingField, put=__set__now_k__BackingField)) int64_t  _now_k__BackingField;

 __declspec(property(get=get_start, put=set_start)) int64_t  start;

 __declspec(property(get=get_now, put=set_now)) int64_t  now;

 __declspec(property(get=get_deltaTime)) int64_t  deltaTime;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TimerState>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::TimerState>*() ;

constexpr void __set__start_k__BackingField(int64_t  value) ;

constexpr int64_t& __get__start_k__BackingField() ;

constexpr int64_t const& __get__start_k__BackingField() const;

constexpr void __set__now_k__BackingField(int64_t  value) ;

constexpr int64_t& __get__now_k__BackingField() ;

constexpr int64_t const& __get__now_k__BackingField() const;

/// @brief Method get_start addr 0x2e07594 size 0x8 virtual false final false
inline int64_t get_start() ;

/// @brief Method set_start addr 0x2e0759c size 0x8 virtual false final false
inline void set_start(int64_t  value) ;

/// @brief Method get_now addr 0x2e075a4 size 0x8 virtual false final false
inline int64_t get_now() ;

/// @brief Method set_now addr 0x2e075ac size 0x8 virtual false final false
inline void set_now(int64_t  value) ;

/// @brief Method get_deltaTime addr 0x2e075b4 size 0xc virtual false final false
inline int64_t get_deltaTime() ;

/// @brief Method Equals addr 0x2e075c0 size 0x88 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2e07648 size 0x24 virtual true final true
inline bool Equals(::UnityEngine::UIElements::TimerState  other) ;

/// @brief Method GetHashCode addr 0x2e0766c size 0x7c virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "_start_k__BackingField", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_now_k__BackingField", ty: "int64_t", modifiers: "", def_value: None }]
constexpr TimerState(int64_t  _start_k__BackingField, int64_t  _now_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TimerState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TimerState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TimerState, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TimerState, "UnityEngine.UIElements", "TimerState");
