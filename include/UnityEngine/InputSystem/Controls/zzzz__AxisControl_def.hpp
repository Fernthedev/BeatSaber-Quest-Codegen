#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisControl)
namespace UnityEngine::InputSystem::Controls {
struct __AxisControl__Clamp;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
struct __AxisControl__Clamp;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Controls::__AxisControl__Clamp);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::AxisControl);
// Type: ::Clamp
namespace UnityEngine::InputSystem::Controls {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6627))
// CS Name: ::AxisControl::Clamp
struct CORDL_TYPE __AxisControl__Clamp : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____AxisControl__Clamp_Unwrapped
enum struct ____AxisControl__Clamp_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_BeforeNormalize = static_cast<int32_t>(0x1),
__E_AfterNormalize = static_cast<int32_t>(0x2),
__E_ToConstantBeforeNormalize = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp const None;

/// @brief Field BeforeNormalize value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp const BeforeNormalize;

/// @brief Field AfterNormalize value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp const AfterNormalize;

/// @brief Field ToConstantBeforeNormalize value: static_cast<int32_t>(0x3)
static ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp const ToConstantBeforeNormalize;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____AxisControl__Clamp_Unwrapped () const noexcept {
return std::bit_cast<____AxisControl__Clamp_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __AxisControl__Clamp(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AxisControl__Clamp(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AxisControl__Clamp()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::__AxisControl__Clamp, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Controls
// Type: UnityEngine.InputSystem.Controls::AxisControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 391 }), TypeDefinitionIndex(TypeDefinitionIndex(6216))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6628))
// CS Name: ::UnityEngine.InputSystem.Controls::AxisControl*
class CORDL_TYPE AxisControl : public ::UnityEngine::InputSystem::InputControl_1<float_t> {
public:
// Declarations
using Clamp = ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x118};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x118 - sizeof(::UnityEngine::InputSystem::InputControl_1<float_t>)]{};

/// @brief Field clamp offset 0xf0
 __declspec(property(get=__get_clamp, put=__set_clamp)) ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp  clamp;

/// @brief Field clampMin offset 0xf4
 __declspec(property(get=__get_clampMin, put=__set_clampMin)) float_t  clampMin;

/// @brief Field clampMax offset 0xf8
 __declspec(property(get=__get_clampMax, put=__set_clampMax)) float_t  clampMax;

/// @brief Field clampConstant offset 0xfc
 __declspec(property(get=__get_clampConstant, put=__set_clampConstant)) float_t  clampConstant;

/// @brief Field invert offset 0x100
 __declspec(property(get=__get_invert, put=__set_invert)) bool  invert;

/// @brief Field normalize offset 0x101
 __declspec(property(get=__get_normalize, put=__set_normalize)) bool  normalize;

/// @brief Field normalizeMin offset 0x104
 __declspec(property(get=__get_normalizeMin, put=__set_normalizeMin)) float_t  normalizeMin;

/// @brief Field normalizeMax offset 0x108
 __declspec(property(get=__get_normalizeMax, put=__set_normalizeMax)) float_t  normalizeMax;

/// @brief Field normalizeZero offset 0x10c
 __declspec(property(get=__get_normalizeZero, put=__set_normalizeZero)) float_t  normalizeZero;

/// @brief Field scale offset 0x110
 __declspec(property(get=__get_scale, put=__set_scale)) bool  scale;

/// @brief Field scaleFactor offset 0x114
 __declspec(property(get=__get_scaleFactor, put=__set_scaleFactor)) float_t  scaleFactor;

constexpr void __set_clamp(::UnityEngine::InputSystem::Controls::__AxisControl__Clamp  value) ;

constexpr ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp& __get_clamp() ;

constexpr ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp const& __get_clamp() const;

constexpr void __set_clampMin(float_t  value) ;

constexpr float_t& __get_clampMin() ;

constexpr float_t const& __get_clampMin() const;

constexpr void __set_clampMax(float_t  value) ;

constexpr float_t& __get_clampMax() ;

constexpr float_t const& __get_clampMax() const;

constexpr void __set_clampConstant(float_t  value) ;

constexpr float_t& __get_clampConstant() ;

constexpr float_t const& __get_clampConstant() const;

constexpr void __set_invert(bool  value) ;

constexpr bool& __get_invert() ;

constexpr bool const& __get_invert() const;

constexpr void __set_normalize(bool  value) ;

constexpr bool& __get_normalize() ;

constexpr bool const& __get_normalize() const;

constexpr void __set_normalizeMin(float_t  value) ;

constexpr float_t& __get_normalizeMin() ;

constexpr float_t const& __get_normalizeMin() const;

constexpr void __set_normalizeMax(float_t  value) ;

constexpr float_t& __get_normalizeMax() ;

constexpr float_t const& __get_normalizeMax() const;

constexpr void __set_normalizeZero(float_t  value) ;

constexpr float_t& __get_normalizeZero() ;

constexpr float_t const& __get_normalizeZero() const;

constexpr void __set_scale(bool  value) ;

constexpr bool& __get_scale() ;

constexpr bool const& __get_scale() const;

constexpr void __set_scaleFactor(float_t  value) ;

constexpr float_t& __get_scaleFactor() ;

constexpr float_t const& __get_scaleFactor() const;

/// @brief Method Preprocess addr 0x2b09ab4 size 0xd4 virtual false final false
inline float_t Preprocess(float_t  value) ;

/// @brief Method Unpreprocess addr 0x2b09b88 size 0x4c virtual false final false
inline float_t Unpreprocess(float_t  value) ;

static inline ::UnityEngine::InputSystem::Controls::AxisControl* New_ctor() ;

/// @brief Method .ctor addr 0x2b09bd4 size 0x88 virtual false final false
inline void _ctor() ;

/// @brief Method FinishSetup addr 0x2b09c5c size 0xa4 virtual true final false
inline void FinishSetup() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2b09d00 size 0x34 virtual true final false
inline float_t ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x2b09d34 size 0x40 virtual true final false
inline void WriteValueIntoState(float_t  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method CompareValue addr 0x2b09d74 size 0xec virtual true final false
inline bool CompareValue(::cordl_internals::Ptr<void>  firstStatePtr, ::cordl_internals::Ptr<void>  secondStatePtr) ;

/// @brief Method EvaluateMagnitude addr 0x2b09e60 size 0xe8 virtual true final false
inline float_t EvaluateMagnitude(::cordl_internals::Ptr<void>  statePtr) ;

// Ctor Parameters [CppParam { name: "", ty: "AxisControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AxisControl(AxisControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AxisControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AxisControl(AxisControl const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AxisControl()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::AxisControl, 0x118>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Controls
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::__AxisControl__Clamp, "UnityEngine.InputSystem.Controls", "AxisControl/Clamp");
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::AxisControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::AxisControl*, "UnityEngine.InputSystem.Controls", "AxisControl");
