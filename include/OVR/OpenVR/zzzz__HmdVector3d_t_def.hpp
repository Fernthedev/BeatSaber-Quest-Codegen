#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HmdVector3d_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HmdVector3d_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdVector3d_t);
// Type: OVR.OpenVR::HmdVector3d_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8649))
// CS Name: ::OVR.OpenVR::HmdVector3d_t
struct CORDL_TYPE HmdVector3d_t : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field v0 offset 0x0
 __declspec(property(get=__get_v0, put=__set_v0)) double_t  v0;

/// @brief Field v1 offset 0x8
 __declspec(property(get=__get_v1, put=__set_v1)) double_t  v1;

/// @brief Field v2 offset 0x10
 __declspec(property(get=__get_v2, put=__set_v2)) double_t  v2;

constexpr void __set_v0(double_t  value) ;

constexpr double_t& __get_v0() ;

constexpr double_t const& __get_v0() const;

constexpr void __set_v1(double_t  value) ;

constexpr double_t& __get_v1() ;

constexpr double_t const& __get_v1() const;

constexpr void __set_v2(double_t  value) ;

constexpr double_t& __get_v2() ;

constexpr double_t const& __get_v2() const;

// Ctor Parameters [CppParam { name: "v0", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "v1", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "v2", ty: "double_t", modifiers: "", def_value: None }]
constexpr HmdVector3d_t(double_t  v0, double_t  v1, double_t  v2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HmdVector3d_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HmdVector3d_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdVector3d_t, 0x18>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdVector3d_t, "OVR.OpenVR", "HmdVector3d_t");
