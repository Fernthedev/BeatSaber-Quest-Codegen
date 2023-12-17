#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Screenshot_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Screenshot_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Screenshot_t);
// Type: OVR.OpenVR::VREvent_Screenshot_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8680))
// CS Name: ::OVR.OpenVR::VREvent_Screenshot_t
struct CORDL_TYPE VREvent_Screenshot_t : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field handle offset 0x0
 __declspec(property(get=__get_handle, put=__set_handle)) uint32_t  handle;

/// @brief Field type offset 0x4
 __declspec(property(get=__get_type, put=__set_type)) uint32_t  type;

constexpr void __set_handle(uint32_t  value) ;

constexpr uint32_t& __get_handle() ;

constexpr uint32_t const& __get_handle() const;

constexpr void __set_type(uint32_t  value) ;

constexpr uint32_t& __get_type() ;

constexpr uint32_t const& __get_type() const;

// Ctor Parameters [CppParam { name: "handle", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_Screenshot_t(uint32_t  handle, uint32_t  type) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_Screenshot_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_Screenshot_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Screenshot_t, 0x8>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Screenshot_t, "OVR.OpenVR", "VREvent_Screenshot_t");
