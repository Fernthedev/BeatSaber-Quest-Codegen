#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_InputActionManifestLoad_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_InputActionManifestLoad_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_InputActionManifestLoad_t);
// Type: OVR.OpenVR::VREvent_InputActionManifestLoad_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8690))
// CS Name: ::OVR.OpenVR::VREvent_InputActionManifestLoad_t
struct CORDL_TYPE VREvent_InputActionManifestLoad_t : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field pathAppKey offset 0x0
 __declspec(property(get=__get_pathAppKey, put=__set_pathAppKey)) uint64_t  pathAppKey;

/// @brief Field pathMessage offset 0x8
 __declspec(property(get=__get_pathMessage, put=__set_pathMessage)) uint64_t  pathMessage;

/// @brief Field pathMessageParam offset 0x10
 __declspec(property(get=__get_pathMessageParam, put=__set_pathMessageParam)) uint64_t  pathMessageParam;

/// @brief Field pathManifestPath offset 0x18
 __declspec(property(get=__get_pathManifestPath, put=__set_pathManifestPath)) uint64_t  pathManifestPath;

constexpr void __set_pathAppKey(uint64_t  value) ;

constexpr uint64_t& __get_pathAppKey() ;

constexpr uint64_t const& __get_pathAppKey() const;

constexpr void __set_pathMessage(uint64_t  value) ;

constexpr uint64_t& __get_pathMessage() ;

constexpr uint64_t const& __get_pathMessage() const;

constexpr void __set_pathMessageParam(uint64_t  value) ;

constexpr uint64_t& __get_pathMessageParam() ;

constexpr uint64_t const& __get_pathMessageParam() const;

constexpr void __set_pathManifestPath(uint64_t  value) ;

constexpr uint64_t& __get_pathManifestPath() ;

constexpr uint64_t const& __get_pathManifestPath() const;

// Ctor Parameters [CppParam { name: "pathAppKey", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathMessage", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathMessageParam", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathManifestPath", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr VREvent_InputActionManifestLoad_t(uint64_t  pathAppKey, uint64_t  pathMessage, uint64_t  pathMessageParam, uint64_t  pathManifestPath) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_InputActionManifestLoad_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_InputActionManifestLoad_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_InputActionManifestLoad_t, 0x20>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_InputActionManifestLoad_t, "OVR.OpenVR", "VREvent_InputActionManifestLoad_t");
