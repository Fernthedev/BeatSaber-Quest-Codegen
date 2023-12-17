#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeFieldAttribute)
namespace UnityEngine::Timeline {
struct __TimeFieldAttribute__UseEditMode;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct __TimeFieldAttribute__UseEditMode;
}
namespace UnityEngine::Timeline {
class TimeFieldAttribute;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode);
MARK_REF_PTR_T(::UnityEngine::Timeline::TimeFieldAttribute);
// Type: ::UseEditMode
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13921))
// CS Name: ::TimeFieldAttribute::UseEditMode
struct CORDL_TYPE __TimeFieldAttribute__UseEditMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____TimeFieldAttribute__UseEditMode_Unwrapped
enum struct ____TimeFieldAttribute__UseEditMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ApplyEditMode = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode const None;

/// @brief Field ApplyEditMode value: static_cast<int32_t>(0x1)
static ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode const ApplyEditMode;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____TimeFieldAttribute__UseEditMode_Unwrapped () const noexcept {
return std::bit_cast<____TimeFieldAttribute__UseEditMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __TimeFieldAttribute__UseEditMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeFieldAttribute__UseEditMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeFieldAttribute__UseEditMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimeFieldAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13922))
// CS Name: ::UnityEngine.Timeline::TimeFieldAttribute*
class CORDL_TYPE TimeFieldAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
using UseEditMode = ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::PropertyAttribute)]{};

/// @brief Field <useEditMode>k__BackingField offset 0x10
 __declspec(property(get=__get__useEditMode_k__BackingField, put=__set__useEditMode_k__BackingField)) ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode  _useEditMode_k__BackingField;

 __declspec(property(get=get_useEditMode)) ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode  useEditMode;

constexpr void __set__useEditMode_k__BackingField(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode  value) ;

constexpr ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode& __get__useEditMode_k__BackingField() ;

constexpr ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode const& __get__useEditMode_k__BackingField() const;

/// @brief Method get_useEditMode addr 0x2c6e760 size 0x8 virtual false final false
inline ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode get_useEditMode() ;

static inline ::UnityEngine::Timeline::TimeFieldAttribute* New_ctor(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode  useEditMode) ;

/// @brief Method .ctor addr 0x2c6e768 size 0x28 virtual false final false
inline void _ctor(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode  useEditMode) ;

// Ctor Parameters [CppParam { name: "", ty: "TimeFieldAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeFieldAttribute(TimeFieldAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeFieldAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeFieldAttribute(TimeFieldAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimeFieldAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimeFieldAttribute, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode, "UnityEngine.Timeline", "TimeFieldAttribute/UseEditMode");
NEED_NO_BOX(::UnityEngine::Timeline::TimeFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeFieldAttribute*, "UnityEngine.Timeline", "TimeFieldAttribute");
