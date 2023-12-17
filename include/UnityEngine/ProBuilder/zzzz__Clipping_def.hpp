#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Clipping)
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::ProBuilder {
struct __Clipping__OutCode;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct __Clipping__OutCode;
}
namespace UnityEngine::ProBuilder {
class Clipping;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::__Clipping__OutCode);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Clipping);
// Type: ::OutCode
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12109))
// CS Name: ::Clipping::OutCode
struct CORDL_TYPE __Clipping__OutCode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Clipping__OutCode_Unwrapped
enum struct ____Clipping__OutCode_Unwrapped : int32_t {
__E_Inside = static_cast<int32_t>(0x0),
__E_Left = static_cast<int32_t>(0x1),
__E_Right = static_cast<int32_t>(0x2),
__E_Bottom = static_cast<int32_t>(0x4),
__E_Top = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Inside value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::__Clipping__OutCode const Inside;

/// @brief Field Left value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::__Clipping__OutCode const Left;

/// @brief Field Right value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::__Clipping__OutCode const Right;

/// @brief Field Bottom value: static_cast<int32_t>(0x4)
static ::UnityEngine::ProBuilder::__Clipping__OutCode const Bottom;

/// @brief Field Top value: static_cast<int32_t>(0x8)
static ::UnityEngine::ProBuilder::__Clipping__OutCode const Top;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____Clipping__OutCode_Unwrapped () const noexcept {
return std::bit_cast<____Clipping__OutCode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Clipping__OutCode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Clipping__OutCode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Clipping__OutCode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__Clipping__OutCode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::Clipping
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12110))
// CS Name: ::UnityEngine.ProBuilder::Clipping*
class CORDL_TYPE Clipping : public ::System::Object {
public:
// Declarations
using OutCode = ::UnityEngine::ProBuilder::__Clipping__OutCode;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ComputeOutCode addr 0x2b3c214 size 0x9c virtual false final false
static inline ::UnityEngine::ProBuilder::__Clipping__OutCode ComputeOutCode(::UnityEngine::Rect  rect, float_t  x, float_t  y) ;

/// @brief Method RectContainsLineSegment addr 0x2b3c2b0 size 0x1c0 virtual false final false
static inline bool RectContainsLineSegment(::UnityEngine::Rect  rect, float_t  x0, float_t  y0, float_t  x1, float_t  y1) ;

// Ctor Parameters [CppParam { name: "", ty: "Clipping", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Clipping(Clipping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Clipping", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Clipping(Clipping const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Clipping()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Clipping, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__Clipping__OutCode, "UnityEngine.ProBuilder", "Clipping/OutCode");
NEED_NO_BOX(::UnityEngine::ProBuilder::Clipping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Clipping*, "UnityEngine.ProBuilder", "Clipping");
