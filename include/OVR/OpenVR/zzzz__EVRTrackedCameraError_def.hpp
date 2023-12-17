#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRTrackedCameraError)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRTrackedCameraError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRTrackedCameraError);
// Type: OVR.OpenVR::EVRTrackedCameraError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8610))
// CS Name: ::OVR.OpenVR::EVRTrackedCameraError
struct CORDL_TYPE EVRTrackedCameraError : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRTrackedCameraError_Unwrapped
enum struct __EVRTrackedCameraError_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_OperationFailed = static_cast<int32_t>(0x64),
__E_InvalidHandle = static_cast<int32_t>(0x65),
__E_InvalidFrameHeaderVersion = static_cast<int32_t>(0x66),
__E_OutOfHandles = static_cast<int32_t>(0x67),
__E_IPCFailure = static_cast<int32_t>(0x68),
__E_NotSupportedForThisDevice = static_cast<int32_t>(0x69),
__E_SharedMemoryFailure = static_cast<int32_t>(0x6a),
__E_FrameBufferingFailure = static_cast<int32_t>(0x6b),
__E_StreamSetupFailure = static_cast<int32_t>(0x6c),
__E_InvalidGLTextureId = static_cast<int32_t>(0x6d),
__E_InvalidSharedTextureHandle = static_cast<int32_t>(0x6e),
__E_FailedToGetGLTextureId = static_cast<int32_t>(0x6f),
__E_SharedTextureFailure = static_cast<int32_t>(0x70),
__E_NoFrameAvailable = static_cast<int32_t>(0x71),
__E_InvalidArgument = static_cast<int32_t>(0x72),
__E_InvalidFrameBufferSize = static_cast<int32_t>(0x73),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::EVRTrackedCameraError const None;

/// @brief Field OperationFailed value: static_cast<int32_t>(0x64)
static ::OVR::OpenVR::EVRTrackedCameraError const OperationFailed;

/// @brief Field InvalidHandle value: static_cast<int32_t>(0x65)
static ::OVR::OpenVR::EVRTrackedCameraError const InvalidHandle;

/// @brief Field InvalidFrameHeaderVersion value: static_cast<int32_t>(0x66)
static ::OVR::OpenVR::EVRTrackedCameraError const InvalidFrameHeaderVersion;

/// @brief Field OutOfHandles value: static_cast<int32_t>(0x67)
static ::OVR::OpenVR::EVRTrackedCameraError const OutOfHandles;

/// @brief Field IPCFailure value: static_cast<int32_t>(0x68)
static ::OVR::OpenVR::EVRTrackedCameraError const IPCFailure;

/// @brief Field NotSupportedForThisDevice value: static_cast<int32_t>(0x69)
static ::OVR::OpenVR::EVRTrackedCameraError const NotSupportedForThisDevice;

/// @brief Field SharedMemoryFailure value: static_cast<int32_t>(0x6a)
static ::OVR::OpenVR::EVRTrackedCameraError const SharedMemoryFailure;

/// @brief Field FrameBufferingFailure value: static_cast<int32_t>(0x6b)
static ::OVR::OpenVR::EVRTrackedCameraError const FrameBufferingFailure;

/// @brief Field StreamSetupFailure value: static_cast<int32_t>(0x6c)
static ::OVR::OpenVR::EVRTrackedCameraError const StreamSetupFailure;

/// @brief Field InvalidGLTextureId value: static_cast<int32_t>(0x6d)
static ::OVR::OpenVR::EVRTrackedCameraError const InvalidGLTextureId;

/// @brief Field InvalidSharedTextureHandle value: static_cast<int32_t>(0x6e)
static ::OVR::OpenVR::EVRTrackedCameraError const InvalidSharedTextureHandle;

/// @brief Field FailedToGetGLTextureId value: static_cast<int32_t>(0x6f)
static ::OVR::OpenVR::EVRTrackedCameraError const FailedToGetGLTextureId;

/// @brief Field SharedTextureFailure value: static_cast<int32_t>(0x70)
static ::OVR::OpenVR::EVRTrackedCameraError const SharedTextureFailure;

/// @brief Field NoFrameAvailable value: static_cast<int32_t>(0x71)
static ::OVR::OpenVR::EVRTrackedCameraError const NoFrameAvailable;

/// @brief Field InvalidArgument value: static_cast<int32_t>(0x72)
static ::OVR::OpenVR::EVRTrackedCameraError const InvalidArgument;

/// @brief Field InvalidFrameBufferSize value: static_cast<int32_t>(0x73)
static ::OVR::OpenVR::EVRTrackedCameraError const InvalidFrameBufferSize;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRTrackedCameraError_Unwrapped () const noexcept {
return std::bit_cast<__EVRTrackedCameraError_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRTrackedCameraError(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EVRTrackedCameraError(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EVRTrackedCameraError()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRTrackedCameraError, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRTrackedCameraError, "OVR.OpenVR", "EVRTrackedCameraError");
