#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Process_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Process_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Process_t);
// Type: OVR.OpenVR::VREvent_Process_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8671))
// CS Name: ::OVR.OpenVR::VREvent_Process_t
struct CORDL_TYPE VREvent_Process_t : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field pid offset 0x0
 __declspec(property(get=__get_pid, put=__set_pid)) uint32_t  pid;

/// @brief Field oldPid offset 0x4
 __declspec(property(get=__get_oldPid, put=__set_oldPid)) uint32_t  oldPid;

/// @brief Field bForced offset 0x8
 __declspec(property(get=__get_bForced, put=__set_bForced)) bool  bForced;

constexpr void __set_pid(uint32_t  value) ;

constexpr uint32_t& __get_pid() ;

constexpr uint32_t const& __get_pid() const;

constexpr void __set_oldPid(uint32_t  value) ;

constexpr uint32_t& __get_oldPid() ;

constexpr uint32_t const& __get_oldPid() const;

constexpr void __set_bForced(bool  value) ;

constexpr bool& __get_bForced() ;

constexpr bool const& __get_bForced() const;

// Ctor Parameters [CppParam { name: "pid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "oldPid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "bForced", ty: "bool", modifiers: "", def_value: None }]
constexpr VREvent_Process_t(uint32_t  pid, uint32_t  oldPid, bool  bForced) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_Process_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_Process_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Process_t, 0xc>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Process_t, "OVR.OpenVR", "VREvent_Process_t");
