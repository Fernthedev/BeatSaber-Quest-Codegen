#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRSpatialAnchors)
namespace OVR::OpenVR {
struct EVRSpatialAnchorError;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct SpatialAnchorPose_t;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
class __IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor;
}
namespace OVR::OpenVR {
class __IVRSpatialAnchors___CreateSpatialAnchorFromPose;
}
namespace OVR::OpenVR {
class __IVRSpatialAnchors___GetSpatialAnchorDescriptor;
}
namespace OVR::OpenVR {
class __IVRSpatialAnchors___GetSpatialAnchorPose;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor;
}
namespace OVR::OpenVR {
class __IVRSpatialAnchors___CreateSpatialAnchorFromPose;
}
namespace OVR::OpenVR {
class __IVRSpatialAnchors___GetSpatialAnchorDescriptor;
}
namespace OVR::OpenVR {
class __IVRSpatialAnchors___GetSpatialAnchorPose;
}
namespace OVR::OpenVR {
struct IVRSpatialAnchors;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose);
MARK_VAL_T(::OVR::OpenVR::IVRSpatialAnchors);
// Type: ::_CreateSpatialAnchorFromDescriptor
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8547))
// CS Name: ::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor*
class CORDL_TYPE __IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27f0164 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27f023c size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRSpatialAnchorError Invoke(::StringW  pchDescriptor, ByRef<uint32_t>  pHandleOut) ;

/// @brief Method BeginInvoke addr 0x27f0250 size 0x94 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchDescriptor, ByRef<uint32_t>  pHandleOut, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27f02e4 size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRSpatialAnchorError EndInvoke(ByRef<uint32_t>  pHandleOut, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor(__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor(__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_CreateSpatialAnchorFromPose
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8548))
// CS Name: ::IVRSpatialAnchors::_CreateSpatialAnchorFromPose*
class CORDL_TYPE __IVRSpatialAnchors___CreateSpatialAnchorFromPose : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27f0310 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27f03d4 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRSpatialAnchorError Invoke(uint32_t  unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t>  pPose, ByRef<uint32_t>  pHandleOut) ;

/// @brief Method BeginInvoke addr 0x27f03e8 size 0x100 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t>  pPose, ByRef<uint32_t>  pHandleOut, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27f04e8 size 0x34 virtual true final false
inline ::OVR::OpenVR::EVRSpatialAnchorError EndInvoke(ByRef<::OVR::OpenVR::SpatialAnchorPose_t>  pPose, ByRef<uint32_t>  pHandleOut, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___CreateSpatialAnchorFromPose", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSpatialAnchors___CreateSpatialAnchorFromPose(__IVRSpatialAnchors___CreateSpatialAnchorFromPose && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___CreateSpatialAnchorFromPose", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSpatialAnchors___CreateSpatialAnchorFromPose(__IVRSpatialAnchors___CreateSpatialAnchorFromPose const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSpatialAnchors___CreateSpatialAnchorFromPose()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetSpatialAnchorPose
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8549))
// CS Name: ::IVRSpatialAnchors::_GetSpatialAnchorPose*
class CORDL_TYPE __IVRSpatialAnchors___GetSpatialAnchorPose : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27f051c size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27f05e0 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRSpatialAnchorError Invoke(uint32_t  unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t>  pPoseOut) ;

/// @brief Method BeginInvoke addr 0x27f05f4 size 0xe8 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t>  pPoseOut, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27f06dc size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRSpatialAnchorError EndInvoke(ByRef<::OVR::OpenVR::SpatialAnchorPose_t>  pPoseOut, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___GetSpatialAnchorPose", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSpatialAnchors___GetSpatialAnchorPose(__IVRSpatialAnchors___GetSpatialAnchorPose && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___GetSpatialAnchorPose", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSpatialAnchors___GetSpatialAnchorPose(__IVRSpatialAnchors___GetSpatialAnchorPose const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSpatialAnchors___GetSpatialAnchorPose()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetSpatialAnchorDescriptor
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8550))
// CS Name: ::IVRSpatialAnchors::_GetSpatialAnchorDescriptor*
class CORDL_TYPE __IVRSpatialAnchors___GetSpatialAnchorDescriptor : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27f0708 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27f07cc size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRSpatialAnchorError Invoke(uint32_t  unHandle, ::System::Text::StringBuilder*  pchDescriptorOut, ByRef<uint32_t>  punDescriptorBufferLenInOut) ;

/// @brief Method BeginInvoke addr 0x27f07e0 size 0xa8 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  unHandle, ::System::Text::StringBuilder*  pchDescriptorOut, ByRef<uint32_t>  punDescriptorBufferLenInOut, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27f0888 size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRSpatialAnchorError EndInvoke(ByRef<uint32_t>  punDescriptorBufferLenInOut, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___GetSpatialAnchorDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSpatialAnchors___GetSpatialAnchorDescriptor(__IVRSpatialAnchors___GetSpatialAnchorDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSpatialAnchors___GetSpatialAnchorDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSpatialAnchors___GetSpatialAnchorDescriptor(__IVRSpatialAnchors___GetSpatialAnchorDescriptor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRSpatialAnchors___GetSpatialAnchorDescriptor()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRSpatialAnchors
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8551))
// CS Name: ::OVR.OpenVR::IVRSpatialAnchors
struct CORDL_TYPE IVRSpatialAnchors : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
using _GetSpatialAnchorDescriptor = ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor;

using _GetSpatialAnchorPose = ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose;

using _CreateSpatialAnchorFromPose = ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose;

using _CreateSpatialAnchorFromDescriptor = ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field CreateSpatialAnchorFromDescriptor offset 0x0
 __declspec(property(get=__get_CreateSpatialAnchorFromDescriptor, put=__set_CreateSpatialAnchorFromDescriptor)) ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*  CreateSpatialAnchorFromDescriptor;

/// @brief Field CreateSpatialAnchorFromPose offset 0x8
 __declspec(property(get=__get_CreateSpatialAnchorFromPose, put=__set_CreateSpatialAnchorFromPose)) ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*  CreateSpatialAnchorFromPose;

/// @brief Field GetSpatialAnchorPose offset 0x10
 __declspec(property(get=__get_GetSpatialAnchorPose, put=__set_GetSpatialAnchorPose)) ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*  GetSpatialAnchorPose;

/// @brief Field GetSpatialAnchorDescriptor offset 0x18
 __declspec(property(get=__get_GetSpatialAnchorDescriptor, put=__set_GetSpatialAnchorDescriptor)) ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*  GetSpatialAnchorDescriptor;

constexpr void __set_CreateSpatialAnchorFromDescriptor(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*  value) ;

constexpr ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor* __get_CreateSpatialAnchorFromDescriptor() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*> __get_CreateSpatialAnchorFromDescriptor() const;

constexpr void __set_CreateSpatialAnchorFromPose(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*  value) ;

constexpr ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose* __get_CreateSpatialAnchorFromPose() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*> __get_CreateSpatialAnchorFromPose() const;

constexpr void __set_GetSpatialAnchorPose(::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*  value) ;

constexpr ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose* __get_GetSpatialAnchorPose() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*> __get_GetSpatialAnchorPose() const;

constexpr void __set_GetSpatialAnchorDescriptor(::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*  value) ;

constexpr ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor* __get_GetSpatialAnchorDescriptor() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*> __get_GetSpatialAnchorDescriptor() const;

// Ctor Parameters [CppParam { name: "CreateSpatialAnchorFromDescriptor", ty: "::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*", modifiers: "", def_value: None }, CppParam { name: "CreateSpatialAnchorFromPose", ty: "::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*", modifiers: "", def_value: None }, CppParam { name: "GetSpatialAnchorPose", ty: "::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*", modifiers: "", def_value: None }, CppParam { name: "GetSpatialAnchorDescriptor", ty: "::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*", modifiers: "", def_value: None }]
constexpr IVRSpatialAnchors(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*  CreateSpatialAnchorFromDescriptor, ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*  CreateSpatialAnchorFromPose, ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*  GetSpatialAnchorPose, ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*  GetSpatialAnchorDescriptor) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IVRSpatialAnchors(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IVRSpatialAnchors()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSpatialAnchors, 0x20>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*, "OVR.OpenVR", "IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor");
NEED_NO_BOX(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*, "OVR.OpenVR", "IVRSpatialAnchors/_CreateSpatialAnchorFromPose");
NEED_NO_BOX(::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*, "OVR.OpenVR", "IVRSpatialAnchors/_GetSpatialAnchorDescriptor");
NEED_NO_BOX(::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*, "OVR.OpenVR", "IVRSpatialAnchors/_GetSpatialAnchorPose");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSpatialAnchors, "OVR.OpenVR", "IVRSpatialAnchors");
