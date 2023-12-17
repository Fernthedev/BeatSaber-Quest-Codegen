#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRTrackedCamera)
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct EVRTrackedCameraError;
}
namespace OVR::OpenVR {
struct EVRTrackedCameraFrameType;
}
namespace OVR::OpenVR {
struct HmdVector2_t;
}
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
namespace OVR::OpenVR {
struct CameraVideoStreamFrameHeader_t;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraProjection;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___ReleaseVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraFrameSize;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraIntrinsics;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___HasCamera;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamFrameBuffer;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamTextureSize;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___AcquireVideoStreamingService;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___ReleaseVideoStreamingService;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamTextureD3D11;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRTrackedCamera___AcquireVideoStreamingService;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraFrameSize;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraIntrinsics;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraProjection;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamFrameBuffer;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamTextureD3D11;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamTextureSize;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___HasCamera;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___ReleaseVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___ReleaseVideoStreamingService;
}
namespace OVR::OpenVR {
struct IVRTrackedCamera;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___HasCamera);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService);
MARK_VAL_T(::OVR::OpenVR::IVRTrackedCamera);
// Type: ::_GetCameraErrorNameFromEnum
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8269))
// CS Name: ::IVRTrackedCamera::_GetCameraErrorNameFromEnum*
class CORDL_TYPE __IVRTrackedCamera___GetCameraErrorNameFromEnum : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d5294 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d5358 size 0x14 virtual true final false
inline ::cordl_internals::intptr_t Invoke(::OVR::OpenVR::EVRTrackedCameraError  eCameraError) ;

/// @brief Method BeginInvoke addr 0x27d536c size 0x84 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRTrackedCameraError  eCameraError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d53f0 size 0x28 virtual true final false
inline ::cordl_internals::intptr_t EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraErrorNameFromEnum", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRTrackedCamera___GetCameraErrorNameFromEnum(__IVRTrackedCamera___GetCameraErrorNameFromEnum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraErrorNameFromEnum", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRTrackedCamera___GetCameraErrorNameFromEnum(__IVRTrackedCamera___GetCameraErrorNameFromEnum const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRTrackedCamera___GetCameraErrorNameFromEnum()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_HasCamera
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8270))
// CS Name: ::IVRTrackedCamera::_HasCamera*
class CORDL_TYPE __IVRTrackedCamera___HasCamera : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRTrackedCamera___HasCamera* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d5418 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d54dc size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t  nDeviceIndex, ByRef<bool>  pHasCamera) ;

/// @brief Method BeginInvoke addr 0x27d54f0 size 0xb8 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  nDeviceIndex, ByRef<bool>  pHasCamera, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d55a8 size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<bool>  pHasCamera, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___HasCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRTrackedCamera___HasCamera(__IVRTrackedCamera___HasCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___HasCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRTrackedCamera___HasCamera(__IVRTrackedCamera___HasCamera const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRTrackedCamera___HasCamera()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___HasCamera, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetCameraFrameSize
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8271))
// CS Name: ::IVRTrackedCamera::_GetCameraFrameSize*
class CORDL_TYPE __IVRTrackedCamera___GetCameraFrameSize : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d55d4 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d5698 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t  nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, ByRef<uint32_t>  pnWidth, ByRef<uint32_t>  pnHeight, ByRef<uint32_t>  pnFrameBufferSize) ;

/// @brief Method BeginInvoke addr 0x27d56ac size 0x104 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, ByRef<uint32_t>  pnWidth, ByRef<uint32_t>  pnHeight, ByRef<uint32_t>  pnFrameBufferSize, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d57b0 size 0x34 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<uint32_t>  pnWidth, ByRef<uint32_t>  pnHeight, ByRef<uint32_t>  pnFrameBufferSize, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraFrameSize", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRTrackedCamera___GetCameraFrameSize(__IVRTrackedCamera___GetCameraFrameSize && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraFrameSize", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRTrackedCamera___GetCameraFrameSize(__IVRTrackedCamera___GetCameraFrameSize const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRTrackedCamera___GetCameraFrameSize()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetCameraIntrinsics
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8272))
// CS Name: ::IVRTrackedCamera::_GetCameraIntrinsics*
class CORDL_TYPE __IVRTrackedCamera___GetCameraIntrinsics : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d57e4 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d58a8 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t  nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, ByRef<::OVR::OpenVR::HmdVector2_t>  pFocalLength, ByRef<::OVR::OpenVR::HmdVector2_t>  pCenter) ;

/// @brief Method BeginInvoke addr 0x27d58bc size 0x100 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, ByRef<::OVR::OpenVR::HmdVector2_t>  pFocalLength, ByRef<::OVR::OpenVR::HmdVector2_t>  pCenter, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d59bc size 0x34 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<::OVR::OpenVR::HmdVector2_t>  pFocalLength, ByRef<::OVR::OpenVR::HmdVector2_t>  pCenter, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraIntrinsics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRTrackedCamera___GetCameraIntrinsics(__IVRTrackedCamera___GetCameraIntrinsics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraIntrinsics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRTrackedCamera___GetCameraIntrinsics(__IVRTrackedCamera___GetCameraIntrinsics const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRTrackedCamera___GetCameraIntrinsics()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetCameraProjection
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8273))
// CS Name: ::IVRTrackedCamera::_GetCameraProjection*
class CORDL_TYPE __IVRTrackedCamera___GetCameraProjection : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d59f0 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d5ab4 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t  nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, float_t  flZNear, float_t  flZFar, ByRef<::OVR::OpenVR::HmdMatrix44_t>  pProjection) ;

/// @brief Method BeginInvoke addr 0x27d5ac8 size 0x128 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, float_t  flZNear, float_t  flZFar, ByRef<::OVR::OpenVR::HmdMatrix44_t>  pProjection, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d5bf0 size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix44_t>  pProjection, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraProjection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRTrackedCamera___GetCameraProjection(__IVRTrackedCamera___GetCameraProjection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraProjection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRTrackedCamera___GetCameraProjection(__IVRTrackedCamera___GetCameraProjection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRTrackedCamera___GetCameraProjection()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_AcquireVideoStreamingService
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8274))
// CS Name: ::IVRTrackedCamera::_AcquireVideoStreamingService*
class CORDL_TYPE __IVRTrackedCamera___AcquireVideoStreamingService : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d5c1c size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d5ce0 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t  nDeviceIndex, ByRef<uint64_t>  pHandle) ;

/// @brief Method BeginInvoke addr 0x27d5cf4 size 0xb8 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  nDeviceIndex, ByRef<uint64_t>  pHandle, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d5dac size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<uint64_t>  pHandle, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___AcquireVideoStreamingService", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRTrackedCamera___AcquireVideoStreamingService(__IVRTrackedCamera___AcquireVideoStreamingService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___AcquireVideoStreamingService", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRTrackedCamera___AcquireVideoStreamingService(__IVRTrackedCamera___AcquireVideoStreamingService const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRTrackedCamera___AcquireVideoStreamingService()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_ReleaseVideoStreamingService
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8275))
// CS Name: ::IVRTrackedCamera::_ReleaseVideoStreamingService*
class CORDL_TYPE __IVRTrackedCamera___ReleaseVideoStreamingService : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d5dd8 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d5e9c size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t  hTrackedCamera) ;

/// @brief Method BeginInvoke addr 0x27d5eb0 size 0x84 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  hTrackedCamera, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d5f34 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___ReleaseVideoStreamingService", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRTrackedCamera___ReleaseVideoStreamingService(__IVRTrackedCamera___ReleaseVideoStreamingService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___ReleaseVideoStreamingService", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRTrackedCamera___ReleaseVideoStreamingService(__IVRTrackedCamera___ReleaseVideoStreamingService const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRTrackedCamera___ReleaseVideoStreamingService()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetVideoStreamFrameBuffer
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8276))
// CS Name: ::IVRTrackedCamera::_GetVideoStreamFrameBuffer*
class CORDL_TYPE __IVRTrackedCamera___GetVideoStreamFrameBuffer : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d5f5c size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d6020 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t  hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, ::cordl_internals::intptr_t  pFrameBuffer, uint32_t  nFrameBufferSize, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>  pFrameHeader, uint32_t  nFrameHeaderSize) ;

/// @brief Method BeginInvoke addr 0x27d6034 size 0x15c virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, ::cordl_internals::intptr_t  pFrameBuffer, uint32_t  nFrameBufferSize, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>  pFrameHeader, uint32_t  nFrameHeaderSize, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d6190 size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>  pFrameHeader, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamFrameBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRTrackedCamera___GetVideoStreamFrameBuffer(__IVRTrackedCamera___GetVideoStreamFrameBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamFrameBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRTrackedCamera___GetVideoStreamFrameBuffer(__IVRTrackedCamera___GetVideoStreamFrameBuffer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRTrackedCamera___GetVideoStreamFrameBuffer()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetVideoStreamTextureSize
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8277))
// CS Name: ::IVRTrackedCamera::_GetVideoStreamTextureSize*
class CORDL_TYPE __IVRTrackedCamera___GetVideoStreamTextureSize : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d61bc size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d6280 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t  nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, ByRef<::OVR::OpenVR::VRTextureBounds_t>  pTextureBounds, ByRef<uint32_t>  pnWidth, ByRef<uint32_t>  pnHeight) ;

/// @brief Method BeginInvoke addr 0x27d6294 size 0x120 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, ByRef<::OVR::OpenVR::VRTextureBounds_t>  pTextureBounds, ByRef<uint32_t>  pnWidth, ByRef<uint32_t>  pnHeight, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d63b4 size 0x34 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<::OVR::OpenVR::VRTextureBounds_t>  pTextureBounds, ByRef<uint32_t>  pnWidth, ByRef<uint32_t>  pnHeight, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamTextureSize", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRTrackedCamera___GetVideoStreamTextureSize(__IVRTrackedCamera___GetVideoStreamTextureSize && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamTextureSize", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRTrackedCamera___GetVideoStreamTextureSize(__IVRTrackedCamera___GetVideoStreamTextureSize const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRTrackedCamera___GetVideoStreamTextureSize()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetVideoStreamTextureD3D11
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8278))
// CS Name: ::IVRTrackedCamera::_GetVideoStreamTextureD3D11*
class CORDL_TYPE __IVRTrackedCamera___GetVideoStreamTextureD3D11 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d63e8 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d64ac size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t  hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, ::cordl_internals::intptr_t  pD3D11DeviceOrResource, ByRef<::cordl_internals::intptr_t>  ppD3D11ShaderResourceView, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>  pFrameHeader, uint32_t  nFrameHeaderSize) ;

/// @brief Method BeginInvoke addr 0x27d64c0 size 0x164 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, ::cordl_internals::intptr_t  pD3D11DeviceOrResource, ByRef<::cordl_internals::intptr_t>  ppD3D11ShaderResourceView, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>  pFrameHeader, uint32_t  nFrameHeaderSize, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d6624 size 0x34 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<::cordl_internals::intptr_t>  ppD3D11ShaderResourceView, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>  pFrameHeader, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamTextureD3D11", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRTrackedCamera___GetVideoStreamTextureD3D11(__IVRTrackedCamera___GetVideoStreamTextureD3D11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamTextureD3D11", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRTrackedCamera___GetVideoStreamTextureD3D11(__IVRTrackedCamera___GetVideoStreamTextureD3D11 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRTrackedCamera___GetVideoStreamTextureD3D11()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetVideoStreamTextureGL
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8279))
// CS Name: ::IVRTrackedCamera::_GetVideoStreamTextureGL*
class CORDL_TYPE __IVRTrackedCamera___GetVideoStreamTextureGL : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d6658 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d671c size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t  hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, ByRef<uint32_t>  pglTextureId, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>  pFrameHeader, uint32_t  nFrameHeaderSize) ;

/// @brief Method BeginInvoke addr 0x27d6730 size 0x130 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, ByRef<uint32_t>  pglTextureId, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>  pFrameHeader, uint32_t  nFrameHeaderSize, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d6860 size 0x34 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<uint32_t>  pglTextureId, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>  pFrameHeader, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamTextureGL", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRTrackedCamera___GetVideoStreamTextureGL(__IVRTrackedCamera___GetVideoStreamTextureGL && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamTextureGL", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRTrackedCamera___GetVideoStreamTextureGL(__IVRTrackedCamera___GetVideoStreamTextureGL const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRTrackedCamera___GetVideoStreamTextureGL()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_ReleaseVideoStreamTextureGL
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8280))
// CS Name: ::IVRTrackedCamera::_ReleaseVideoStreamTextureGL*
class CORDL_TYPE __IVRTrackedCamera___ReleaseVideoStreamTextureGL : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d6894 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d6958 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t  hTrackedCamera, uint32_t  glTextureId) ;

/// @brief Method BeginInvoke addr 0x27d696c size 0xb4 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  hTrackedCamera, uint32_t  glTextureId, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d6a20 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___ReleaseVideoStreamTextureGL", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRTrackedCamera___ReleaseVideoStreamTextureGL(__IVRTrackedCamera___ReleaseVideoStreamTextureGL && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___ReleaseVideoStreamTextureGL", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRTrackedCamera___ReleaseVideoStreamTextureGL(__IVRTrackedCamera___ReleaseVideoStreamTextureGL const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRTrackedCamera___ReleaseVideoStreamTextureGL()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRTrackedCamera
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8281))
// CS Name: ::OVR.OpenVR::IVRTrackedCamera
struct CORDL_TYPE IVRTrackedCamera : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
using _ReleaseVideoStreamTextureGL = ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL;

using _GetVideoStreamTextureGL = ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL;

using _GetVideoStreamTextureD3D11 = ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11;

using _GetVideoStreamTextureSize = ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize;

using _GetVideoStreamFrameBuffer = ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer;

using _ReleaseVideoStreamingService = ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService;

using _AcquireVideoStreamingService = ::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService;

using _GetCameraProjection = ::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection;

using _GetCameraIntrinsics = ::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics;

using _GetCameraFrameSize = ::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize;

using _HasCamera = ::OVR::OpenVR::__IVRTrackedCamera___HasCamera;

using _GetCameraErrorNameFromEnum = ::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field GetCameraErrorNameFromEnum offset 0x0
 __declspec(property(get=__get_GetCameraErrorNameFromEnum, put=__set_GetCameraErrorNameFromEnum)) ::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum*  GetCameraErrorNameFromEnum;

/// @brief Field HasCamera offset 0x8
 __declspec(property(get=__get_HasCamera, put=__set_HasCamera)) ::OVR::OpenVR::__IVRTrackedCamera___HasCamera*  HasCamera;

/// @brief Field GetCameraFrameSize offset 0x10
 __declspec(property(get=__get_GetCameraFrameSize, put=__set_GetCameraFrameSize)) ::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize*  GetCameraFrameSize;

/// @brief Field GetCameraIntrinsics offset 0x18
 __declspec(property(get=__get_GetCameraIntrinsics, put=__set_GetCameraIntrinsics)) ::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics*  GetCameraIntrinsics;

/// @brief Field GetCameraProjection offset 0x20
 __declspec(property(get=__get_GetCameraProjection, put=__set_GetCameraProjection)) ::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection*  GetCameraProjection;

/// @brief Field AcquireVideoStreamingService offset 0x28
 __declspec(property(get=__get_AcquireVideoStreamingService, put=__set_AcquireVideoStreamingService)) ::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService*  AcquireVideoStreamingService;

/// @brief Field ReleaseVideoStreamingService offset 0x30
 __declspec(property(get=__get_ReleaseVideoStreamingService, put=__set_ReleaseVideoStreamingService)) ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService*  ReleaseVideoStreamingService;

/// @brief Field GetVideoStreamFrameBuffer offset 0x38
 __declspec(property(get=__get_GetVideoStreamFrameBuffer, put=__set_GetVideoStreamFrameBuffer)) ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer*  GetVideoStreamFrameBuffer;

/// @brief Field GetVideoStreamTextureSize offset 0x40
 __declspec(property(get=__get_GetVideoStreamTextureSize, put=__set_GetVideoStreamTextureSize)) ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize*  GetVideoStreamTextureSize;

/// @brief Field GetVideoStreamTextureD3D11 offset 0x48
 __declspec(property(get=__get_GetVideoStreamTextureD3D11, put=__set_GetVideoStreamTextureD3D11)) ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11*  GetVideoStreamTextureD3D11;

/// @brief Field GetVideoStreamTextureGL offset 0x50
 __declspec(property(get=__get_GetVideoStreamTextureGL, put=__set_GetVideoStreamTextureGL)) ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL*  GetVideoStreamTextureGL;

/// @brief Field ReleaseVideoStreamTextureGL offset 0x58
 __declspec(property(get=__get_ReleaseVideoStreamTextureGL, put=__set_ReleaseVideoStreamTextureGL)) ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL*  ReleaseVideoStreamTextureGL;

constexpr void __set_GetCameraErrorNameFromEnum(::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum*  value) ;

constexpr ::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum* __get_GetCameraErrorNameFromEnum() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum*> __get_GetCameraErrorNameFromEnum() const;

constexpr void __set_HasCamera(::OVR::OpenVR::__IVRTrackedCamera___HasCamera*  value) ;

constexpr ::OVR::OpenVR::__IVRTrackedCamera___HasCamera* __get_HasCamera() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRTrackedCamera___HasCamera*> __get_HasCamera() const;

constexpr void __set_GetCameraFrameSize(::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize*  value) ;

constexpr ::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize* __get_GetCameraFrameSize() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize*> __get_GetCameraFrameSize() const;

constexpr void __set_GetCameraIntrinsics(::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics*  value) ;

constexpr ::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics* __get_GetCameraIntrinsics() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics*> __get_GetCameraIntrinsics() const;

constexpr void __set_GetCameraProjection(::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection*  value) ;

constexpr ::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection* __get_GetCameraProjection() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection*> __get_GetCameraProjection() const;

constexpr void __set_AcquireVideoStreamingService(::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService*  value) ;

constexpr ::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService* __get_AcquireVideoStreamingService() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService*> __get_AcquireVideoStreamingService() const;

constexpr void __set_ReleaseVideoStreamingService(::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService*  value) ;

constexpr ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService* __get_ReleaseVideoStreamingService() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService*> __get_ReleaseVideoStreamingService() const;

constexpr void __set_GetVideoStreamFrameBuffer(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer*  value) ;

constexpr ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer* __get_GetVideoStreamFrameBuffer() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer*> __get_GetVideoStreamFrameBuffer() const;

constexpr void __set_GetVideoStreamTextureSize(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize*  value) ;

constexpr ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize* __get_GetVideoStreamTextureSize() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize*> __get_GetVideoStreamTextureSize() const;

constexpr void __set_GetVideoStreamTextureD3D11(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11*  value) ;

constexpr ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11* __get_GetVideoStreamTextureD3D11() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11*> __get_GetVideoStreamTextureD3D11() const;

constexpr void __set_GetVideoStreamTextureGL(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL*  value) ;

constexpr ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL* __get_GetVideoStreamTextureGL() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL*> __get_GetVideoStreamTextureGL() const;

constexpr void __set_ReleaseVideoStreamTextureGL(::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL*  value) ;

constexpr ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL* __get_ReleaseVideoStreamTextureGL() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL*> __get_ReleaseVideoStreamTextureGL() const;

// Ctor Parameters [CppParam { name: "GetCameraErrorNameFromEnum", ty: "::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "HasCamera", ty: "::OVR::OpenVR::__IVRTrackedCamera___HasCamera*", modifiers: "", def_value: None }, CppParam { name: "GetCameraFrameSize", ty: "::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize*", modifiers: "", def_value: None }, CppParam { name: "GetCameraIntrinsics", ty: "::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics*", modifiers: "", def_value: None }, CppParam { name: "GetCameraProjection", ty: "::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection*", modifiers: "", def_value: None }, CppParam { name: "AcquireVideoStreamingService", ty: "::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService*", modifiers: "", def_value: None }, CppParam { name: "ReleaseVideoStreamingService", ty: "::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService*", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamFrameBuffer", ty: "::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer*", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamTextureSize", ty: "::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize*", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamTextureD3D11", ty: "::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11*", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamTextureGL", ty: "::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL*", modifiers: "", def_value: None }, CppParam { name: "ReleaseVideoStreamTextureGL", ty: "::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL*", modifiers: "", def_value: None }]
constexpr IVRTrackedCamera(::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum*  GetCameraErrorNameFromEnum, ::OVR::OpenVR::__IVRTrackedCamera___HasCamera*  HasCamera, ::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize*  GetCameraFrameSize, ::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics*  GetCameraIntrinsics, ::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection*  GetCameraProjection, ::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService*  AcquireVideoStreamingService, ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService*  ReleaseVideoStreamingService, ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer*  GetVideoStreamFrameBuffer, ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize*  GetVideoStreamTextureSize, ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11*  GetVideoStreamTextureD3D11, ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL*  GetVideoStreamTextureGL, ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL*  ReleaseVideoStreamTextureGL) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IVRTrackedCamera(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IVRTrackedCamera()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRTrackedCamera, 0x60>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService*, "OVR.OpenVR", "IVRTrackedCamera/_AcquireVideoStreamingService");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraErrorNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraFrameSize");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraIntrinsics");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraProjection");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamFrameBuffer");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureD3D11");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureGL");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureSize");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___HasCamera);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___HasCamera*, "OVR.OpenVR", "IVRTrackedCamera/_HasCamera");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL*, "OVR.OpenVR", "IVRTrackedCamera/_ReleaseVideoStreamTextureGL");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService*, "OVR.OpenVR", "IVRTrackedCamera/_ReleaseVideoStreamingService");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera, "OVR.OpenVR", "IVRTrackedCamera");
