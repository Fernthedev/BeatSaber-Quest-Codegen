#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Reserved_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Reserved_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Reserved_t);
// Type: OVR.OpenVR::VREvent_Reserved_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8677))
// CS Name: ::OVR.OpenVR::VREvent_Reserved_t
struct CORDL_TYPE VREvent_Reserved_t : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field reserved0 offset 0x0
 __declspec(property(get=__get_reserved0, put=__set_reserved0)) uint64_t  reserved0;

/// @brief Field reserved1 offset 0x8
 __declspec(property(get=__get_reserved1, put=__set_reserved1)) uint64_t  reserved1;

/// @brief Field reserved2 offset 0x10
 __declspec(property(get=__get_reserved2, put=__set_reserved2)) uint64_t  reserved2;

/// @brief Field reserved3 offset 0x18
 __declspec(property(get=__get_reserved3, put=__set_reserved3)) uint64_t  reserved3;

constexpr void __set_reserved0(uint64_t  value) ;

constexpr uint64_t& __get_reserved0() ;

constexpr uint64_t const& __get_reserved0() const;

constexpr void __set_reserved1(uint64_t  value) ;

constexpr uint64_t& __get_reserved1() ;

constexpr uint64_t const& __get_reserved1() const;

constexpr void __set_reserved2(uint64_t  value) ;

constexpr uint64_t& __get_reserved2() ;

constexpr uint64_t const& __get_reserved2() const;

constexpr void __set_reserved3(uint64_t  value) ;

constexpr uint64_t& __get_reserved3() ;

constexpr uint64_t const& __get_reserved3() const;

// Ctor Parameters [CppParam { name: "reserved0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "reserved1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "reserved2", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "reserved3", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr VREvent_Reserved_t(uint64_t  reserved0, uint64_t  reserved1, uint64_t  reserved2, uint64_t  reserved3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_Reserved_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_Reserved_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Reserved_t, 0x20>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Reserved_t, "OVR.OpenVR", "VREvent_Reserved_t");
