#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_InputBindingLoad_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_InputBindingLoad_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_InputBindingLoad_t);
// Type: OVR.OpenVR::VREvent_InputBindingLoad_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8689))
// CS Name: ::OVR.OpenVR::VREvent_InputBindingLoad_t
struct CORDL_TYPE VREvent_InputBindingLoad_t : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field ulAppContainer offset 0x0
 __declspec(property(get=__get_ulAppContainer, put=__set_ulAppContainer)) uint64_t  ulAppContainer;

/// @brief Field pathMessage offset 0x8
 __declspec(property(get=__get_pathMessage, put=__set_pathMessage)) uint64_t  pathMessage;

/// @brief Field pathUrl offset 0x10
 __declspec(property(get=__get_pathUrl, put=__set_pathUrl)) uint64_t  pathUrl;

/// @brief Field pathControllerType offset 0x18
 __declspec(property(get=__get_pathControllerType, put=__set_pathControllerType)) uint64_t  pathControllerType;

constexpr void __set_ulAppContainer(uint64_t  value) ;

constexpr uint64_t& __get_ulAppContainer() ;

constexpr uint64_t const& __get_ulAppContainer() const;

constexpr void __set_pathMessage(uint64_t  value) ;

constexpr uint64_t& __get_pathMessage() ;

constexpr uint64_t const& __get_pathMessage() const;

constexpr void __set_pathUrl(uint64_t  value) ;

constexpr uint64_t& __get_pathUrl() ;

constexpr uint64_t const& __get_pathUrl() const;

constexpr void __set_pathControllerType(uint64_t  value) ;

constexpr uint64_t& __get_pathControllerType() ;

constexpr uint64_t const& __get_pathControllerType() const;

// Ctor Parameters [CppParam { name: "ulAppContainer", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathMessage", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathUrl", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathControllerType", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr VREvent_InputBindingLoad_t(uint64_t  ulAppContainer, uint64_t  pathMessage, uint64_t  pathUrl, uint64_t  pathControllerType) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_InputBindingLoad_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_InputBindingLoad_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_InputBindingLoad_t, 0x20>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_InputBindingLoad_t, "OVR.OpenVR", "VREvent_InputBindingLoad_t");
