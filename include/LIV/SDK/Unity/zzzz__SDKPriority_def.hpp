#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKPriority)
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKPriority;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKPriority);
// Type: LIV.SDK.Unity::SDKPriority
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15113))
// CS Name: ::LIV.SDK.Unity::SDKPriority
struct CORDL_TYPE SDKPriority : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field pose offset 0x0
 __declspec(property(get=__get_pose, put=__set_pose)) int8_t  pose;

/// @brief Field clipPlane offset 0x1
 __declspec(property(get=__get_clipPlane, put=__set_clipPlane)) int8_t  clipPlane;

/// @brief Field stage offset 0x2
 __declspec(property(get=__get_stage, put=__set_stage)) int8_t  stage;

/// @brief Field resolution offset 0x3
 __declspec(property(get=__get_resolution, put=__set_resolution)) int8_t  resolution;

/// @brief Field feature offset 0x4
 __declspec(property(get=__get_feature, put=__set_feature)) int8_t  feature;

/// @brief Field nearFarAdjustment offset 0x5
 __declspec(property(get=__get_nearFarAdjustment, put=__set_nearFarAdjustment)) int8_t  nearFarAdjustment;

/// @brief Field groundPlane offset 0x6
 __declspec(property(get=__get_groundPlane, put=__set_groundPlane)) int8_t  groundPlane;

/// @brief Field reserved2 offset 0x7
 __declspec(property(get=__get_reserved2, put=__set_reserved2)) int8_t  reserved2;

constexpr void __set_pose(int8_t  value) ;

constexpr int8_t& __get_pose() ;

constexpr int8_t const& __get_pose() const;

constexpr void __set_clipPlane(int8_t  value) ;

constexpr int8_t& __get_clipPlane() ;

constexpr int8_t const& __get_clipPlane() const;

constexpr void __set_stage(int8_t  value) ;

constexpr int8_t& __get_stage() ;

constexpr int8_t const& __get_stage() const;

constexpr void __set_resolution(int8_t  value) ;

constexpr int8_t& __get_resolution() ;

constexpr int8_t const& __get_resolution() const;

constexpr void __set_feature(int8_t  value) ;

constexpr int8_t& __get_feature() ;

constexpr int8_t const& __get_feature() const;

constexpr void __set_nearFarAdjustment(int8_t  value) ;

constexpr int8_t& __get_nearFarAdjustment() ;

constexpr int8_t const& __get_nearFarAdjustment() const;

constexpr void __set_groundPlane(int8_t  value) ;

constexpr int8_t& __get_groundPlane() ;

constexpr int8_t const& __get_groundPlane() const;

constexpr void __set_reserved2(int8_t  value) ;

constexpr int8_t& __get_reserved2() ;

constexpr int8_t const& __get_reserved2() const;

/// @brief Method get_empty addr 0x2214d78 size 0xc virtual false final false
static inline ::LIV::SDK::Unity::SDKPriority get_empty() ;

/// @brief Method ToString addr 0x2214d84 size 0x26c virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "pose", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "clipPlane", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "stage", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "resolution", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "feature", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "nearFarAdjustment", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "groundPlane", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "reserved2", ty: "int8_t", modifiers: "", def_value: None }]
constexpr SDKPriority(int8_t  pose, int8_t  clipPlane, int8_t  stage, int8_t  resolution, int8_t  feature, int8_t  nearFarAdjustment, int8_t  groundPlane, int8_t  reserved2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKPriority(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKPriority()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKPriority, 0x8>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKPriority, "LIV.SDK.Unity", "SDKPriority");
