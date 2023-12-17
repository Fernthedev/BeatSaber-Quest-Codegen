#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_WebConsole_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_WebConsole_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_WebConsole_t);
// Type: OVR.OpenVR::VREvent_WebConsole_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8688))
// CS Name: ::OVR.OpenVR::VREvent_WebConsole_t
struct CORDL_TYPE VREvent_WebConsole_t : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field webConsoleHandle offset 0x0
 __declspec(property(get=__get_webConsoleHandle, put=__set_webConsoleHandle)) uint64_t  webConsoleHandle;

constexpr void __set_webConsoleHandle(uint64_t  value) ;

constexpr uint64_t& __get_webConsoleHandle() ;

constexpr uint64_t const& __get_webConsoleHandle() const;

// Ctor Parameters [CppParam { name: "webConsoleHandle", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr VREvent_WebConsole_t(uint64_t  webConsoleHandle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_WebConsole_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_WebConsole_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_WebConsole_t, 0x8>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_WebConsole_t, "OVR.OpenVR", "VREvent_WebConsole_t");
