#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSlider)
namespace HMUI {
struct __TimeSlider__TimeType;
}
// Forward declare root types
namespace HMUI {
struct __TimeSlider__TimeType;
}
namespace HMUI {
class TimeSlider;
}
// Write type traits
MARK_VAL_T(::HMUI::__TimeSlider__TimeType);
MARK_REF_PTR_T(::HMUI::TimeSlider);
// Type: ::TimeType
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13561))
// CS Name: ::TimeSlider::TimeType
struct CORDL_TYPE __TimeSlider__TimeType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____TimeSlider__TimeType_Unwrapped
enum struct ____TimeSlider__TimeType_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Miliseconds = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Default value: static_cast<int32_t>(0x0)
static ::HMUI::__TimeSlider__TimeType const Default;

/// @brief Field Miliseconds value: static_cast<int32_t>(0x1)
static ::HMUI::__TimeSlider__TimeType const Miliseconds;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____TimeSlider__TimeType_Unwrapped () const noexcept {
return std::bit_cast<____TimeSlider__TimeType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __TimeSlider__TimeType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeSlider__TimeType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeSlider__TimeType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__TimeSlider__TimeType, 0x4>, "Size mismatch!");

} // namespace end def HMUI
// Type: HMUI::TimeSlider
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13562))
// CS Name: ::HMUI::TimeSlider*
class CORDL_TYPE TimeSlider : public ::HMUI::RangeValuesTextSlider {
public:
// Declarations
using TimeType = ::HMUI::__TimeSlider__TimeType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x170};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x170 - sizeof(::HMUI::RangeValuesTextSlider)]{};

/// @brief Field _timeType offset 0x168
 __declspec(property(get=__get__timeType, put=__set__timeType)) ::HMUI::__TimeSlider__TimeType  _timeType;

constexpr void __set__timeType(::HMUI::__TimeSlider__TimeType  value) ;

constexpr ::HMUI::__TimeSlider__TimeType& __get__timeType() ;

constexpr ::HMUI::__TimeSlider__TimeType const& __get__timeType() const;

/// @brief Method TextForValue addr 0x2124180 size 0x254 virtual true final false
inline ::StringW TextForValue(float_t  value) ;

static inline ::HMUI::TimeSlider* New_ctor() ;

/// @brief Method .ctor addr 0x21243d4 size 0xc virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TimeSlider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSlider(TimeSlider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSlider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSlider(TimeSlider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimeSlider()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TimeSlider, 0x170>, "Size mismatch!");

} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__TimeSlider__TimeType, "HMUI", "TimeSlider/TimeType");
NEED_NO_BOX(::HMUI::TimeSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TimeSlider*, "HMUI", "TimeSlider");
