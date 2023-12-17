#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Boundary)
namespace UnityEngine {
struct Vector3;
}
namespace Unity::XR::Oculus {
struct __Boundary__BoundaryType;
}
// Forward declare root types
namespace Unity::XR::Oculus {
struct __Boundary__BoundaryType;
}
namespace Unity::XR::Oculus {
class Boundary;
}
// Write type traits
MARK_VAL_T(::Unity::XR::Oculus::__Boundary__BoundaryType);
MARK_REF_PTR_T(::Unity::XR::Oculus::Boundary);
// Type: ::BoundaryType
namespace Unity::XR::Oculus {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15127))
// CS Name: ::Boundary::BoundaryType
struct CORDL_TYPE __Boundary__BoundaryType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Boundary__BoundaryType_Unwrapped
enum struct ____Boundary__BoundaryType_Unwrapped : int32_t {
__E_OuterBoundary = static_cast<int32_t>(0x0),
__E_PlayArea = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OuterBoundary value: static_cast<int32_t>(0x0)
static ::Unity::XR::Oculus::__Boundary__BoundaryType const OuterBoundary;

/// @brief Field PlayArea value: static_cast<int32_t>(0x1)
static ::Unity::XR::Oculus::__Boundary__BoundaryType const PlayArea;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____Boundary__BoundaryType_Unwrapped () const noexcept {
return std::bit_cast<____Boundary__BoundaryType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Boundary__BoundaryType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Boundary__BoundaryType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Boundary__BoundaryType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__Boundary__BoundaryType, 0x4>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
// Type: Unity.XR.Oculus::Boundary
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15128))
// CS Name: ::Unity.XR.Oculus::Boundary*
class CORDL_TYPE Boundary : public ::System::Object {
public:
// Declarations
using BoundaryType = ::Unity::XR::Oculus::__Boundary__BoundaryType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetBoundaryConfigured addr 0x2c77640 size 0x4 virtual false final false
static inline bool GetBoundaryConfigured() ;

/// @brief Method GetBoundaryDimensions addr 0x2c77648 size 0x4 virtual false final false
static inline bool GetBoundaryDimensions(::Unity::XR::Oculus::__Boundary__BoundaryType  boundaryType, ByRef<::UnityEngine::Vector3>  dimensions) ;

/// @brief Method GetBoundaryVisible addr 0x2c77650 size 0x4 virtual false final false
static inline bool GetBoundaryVisible() ;

/// @brief Method SetBoundaryVisible addr 0x2c77658 size 0x8 virtual false final false
static inline void SetBoundaryVisible(bool  boundaryVisible) ;

// Ctor Parameters [CppParam { name: "", ty: "Boundary", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Boundary(Boundary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Boundary", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Boundary(Boundary const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Boundary()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Boundary, 0x10>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__Boundary__BoundaryType, "Unity.XR.Oculus", "Boundary/BoundaryType");
NEED_NO_BOX(::Unity::XR::Oculus::Boundary);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Boundary*, "Unity.XR.Oculus", "Boundary");
