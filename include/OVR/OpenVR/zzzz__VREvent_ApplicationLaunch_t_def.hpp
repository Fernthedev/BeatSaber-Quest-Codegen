#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_ApplicationLaunch_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_ApplicationLaunch_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_ApplicationLaunch_t);
// Type: OVR.OpenVR::VREvent_ApplicationLaunch_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8682))
// CS Name: ::OVR.OpenVR::VREvent_ApplicationLaunch_t
struct CORDL_TYPE VREvent_ApplicationLaunch_t : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field pid offset 0x0
 __declspec(property(get=__get_pid, put=__set_pid)) uint32_t  pid;

/// @brief Field unArgsHandle offset 0x4
 __declspec(property(get=__get_unArgsHandle, put=__set_unArgsHandle)) uint32_t  unArgsHandle;

constexpr void __set_pid(uint32_t  value) ;

constexpr uint32_t& __get_pid() ;

constexpr uint32_t const& __get_pid() const;

constexpr void __set_unArgsHandle(uint32_t  value) ;

constexpr uint32_t& __get_unArgsHandle() ;

constexpr uint32_t const& __get_unArgsHandle() const;

// Ctor Parameters [CppParam { name: "pid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unArgsHandle", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_ApplicationLaunch_t(uint32_t  pid, uint32_t  unArgsHandle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_ApplicationLaunch_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_ApplicationLaunch_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_ApplicationLaunch_t, 0x8>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_ApplicationLaunch_t, "OVR.OpenVR", "VREvent_ApplicationLaunch_t");
