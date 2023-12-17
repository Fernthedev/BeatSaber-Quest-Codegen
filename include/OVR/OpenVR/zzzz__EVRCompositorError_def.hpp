#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRCompositorError)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRCompositorError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRCompositorError);
// Type: OVR.OpenVR::EVRCompositorError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8622))
// CS Name: ::OVR.OpenVR::EVRCompositorError
struct CORDL_TYPE EVRCompositorError : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRCompositorError_Unwrapped
enum struct __EVRCompositorError_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_RequestFailed = static_cast<int32_t>(0x1),
__E_IncompatibleVersion = static_cast<int32_t>(0x64),
__E_DoNotHaveFocus = static_cast<int32_t>(0x65),
__E_InvalidTexture = static_cast<int32_t>(0x66),
__E_IsNotSceneApplication = static_cast<int32_t>(0x67),
__E_TextureIsOnWrongDevice = static_cast<int32_t>(0x68),
__E_TextureUsesUnsupportedFormat = static_cast<int32_t>(0x69),
__E_SharedTexturesNotSupported = static_cast<int32_t>(0x6a),
__E_IndexOutOfRange = static_cast<int32_t>(0x6b),
__E_AlreadySubmitted = static_cast<int32_t>(0x6c),
__E_InvalidBounds = static_cast<int32_t>(0x6d),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::EVRCompositorError const None;

/// @brief Field RequestFailed value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::EVRCompositorError const RequestFailed;

/// @brief Field IncompatibleVersion value: static_cast<int32_t>(0x64)
static ::OVR::OpenVR::EVRCompositorError const IncompatibleVersion;

/// @brief Field DoNotHaveFocus value: static_cast<int32_t>(0x65)
static ::OVR::OpenVR::EVRCompositorError const DoNotHaveFocus;

/// @brief Field InvalidTexture value: static_cast<int32_t>(0x66)
static ::OVR::OpenVR::EVRCompositorError const InvalidTexture;

/// @brief Field IsNotSceneApplication value: static_cast<int32_t>(0x67)
static ::OVR::OpenVR::EVRCompositorError const IsNotSceneApplication;

/// @brief Field TextureIsOnWrongDevice value: static_cast<int32_t>(0x68)
static ::OVR::OpenVR::EVRCompositorError const TextureIsOnWrongDevice;

/// @brief Field TextureUsesUnsupportedFormat value: static_cast<int32_t>(0x69)
static ::OVR::OpenVR::EVRCompositorError const TextureUsesUnsupportedFormat;

/// @brief Field SharedTexturesNotSupported value: static_cast<int32_t>(0x6a)
static ::OVR::OpenVR::EVRCompositorError const SharedTexturesNotSupported;

/// @brief Field IndexOutOfRange value: static_cast<int32_t>(0x6b)
static ::OVR::OpenVR::EVRCompositorError const IndexOutOfRange;

/// @brief Field AlreadySubmitted value: static_cast<int32_t>(0x6c)
static ::OVR::OpenVR::EVRCompositorError const AlreadySubmitted;

/// @brief Field InvalidBounds value: static_cast<int32_t>(0x6d)
static ::OVR::OpenVR::EVRCompositorError const InvalidBounds;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRCompositorError_Unwrapped () const noexcept {
return std::bit_cast<__EVRCompositorError_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRCompositorError(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EVRCompositorError(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EVRCompositorError()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRCompositorError, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRCompositorError, "OVR.OpenVR", "EVRCompositorError");
