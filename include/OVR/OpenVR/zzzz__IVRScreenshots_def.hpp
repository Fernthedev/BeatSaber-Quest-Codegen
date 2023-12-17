#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRScreenshots)
namespace System {
class Object;
}
namespace OVR::OpenVR {
struct EVRScreenshotPropertyFilenames;
}
namespace OVR::OpenVR {
struct EVRScreenshotError;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct EVRScreenshotType;
}
namespace OVR::OpenVR {
class __IVRScreenshots___SubmitScreenshot;
}
namespace OVR::OpenVR {
class __IVRScreenshots___UpdateScreenshotProgress;
}
namespace OVR::OpenVR {
class __IVRScreenshots___TakeStereoScreenshot;
}
namespace OVR::OpenVR {
class __IVRScreenshots___RequestScreenshot;
}
namespace OVR::OpenVR {
class __IVRScreenshots___HookScreenshot;
}
namespace OVR::OpenVR {
class __IVRScreenshots___GetScreenshotPropertyType;
}
namespace OVR::OpenVR {
class __IVRScreenshots___GetScreenshotPropertyFilename;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRScreenshots___GetScreenshotPropertyFilename;
}
namespace OVR::OpenVR {
class __IVRScreenshots___GetScreenshotPropertyType;
}
namespace OVR::OpenVR {
class __IVRScreenshots___HookScreenshot;
}
namespace OVR::OpenVR {
class __IVRScreenshots___RequestScreenshot;
}
namespace OVR::OpenVR {
class __IVRScreenshots___SubmitScreenshot;
}
namespace OVR::OpenVR {
class __IVRScreenshots___TakeStereoScreenshot;
}
namespace OVR::OpenVR {
class __IVRScreenshots___UpdateScreenshotProgress;
}
namespace OVR::OpenVR {
struct IVRScreenshots;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRScreenshots___HookScreenshot);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRScreenshots___RequestScreenshot);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress);
MARK_VAL_T(::OVR::OpenVR::IVRScreenshots);
// Type: ::_RequestScreenshot
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8507))
// CS Name: ::IVRScreenshots::_RequestScreenshot*
class CORDL_TYPE __IVRScreenshots___RequestScreenshot : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRScreenshots___RequestScreenshot* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ec268 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ec340 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRScreenshotError Invoke(ByRef<uint32_t>  pOutScreenshotHandle, ::OVR::OpenVR::EVRScreenshotType  type, ::StringW  pchPreviewFilename, ::StringW  pchVRFilename) ;

/// @brief Method BeginInvoke addr 0x27ec354 size 0xcc virtual true final false
inline ::System::IAsyncResult* BeginInvoke(ByRef<uint32_t>  pOutScreenshotHandle, ::OVR::OpenVR::EVRScreenshotType  type, ::StringW  pchPreviewFilename, ::StringW  pchVRFilename, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ec420 size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRScreenshotError EndInvoke(ByRef<uint32_t>  pOutScreenshotHandle, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRScreenshots___RequestScreenshot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRScreenshots___RequestScreenshot(__IVRScreenshots___RequestScreenshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRScreenshots___RequestScreenshot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRScreenshots___RequestScreenshot(__IVRScreenshots___RequestScreenshot const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRScreenshots___RequestScreenshot()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRScreenshots___RequestScreenshot, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_HookScreenshot
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8508))
// CS Name: ::IVRScreenshots::_HookScreenshot*
class CORDL_TYPE __IVRScreenshots___HookScreenshot : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRScreenshots___HookScreenshot* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ec44c size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ec524 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRScreenshotError Invoke(ByRef<::ArrayW<::OVR::OpenVR::EVRScreenshotType,::Array<::OVR::OpenVR::EVRScreenshotType>*>>  pSupportedTypes, int32_t  numTypes) ;

/// @brief Method BeginInvoke addr 0x27ec538 size 0x94 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::EVRScreenshotType,::Array<::OVR::OpenVR::EVRScreenshotType>*>>  pSupportedTypes, int32_t  numTypes, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ec5cc size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRScreenshotError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRScreenshots___HookScreenshot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRScreenshots___HookScreenshot(__IVRScreenshots___HookScreenshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRScreenshots___HookScreenshot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRScreenshots___HookScreenshot(__IVRScreenshots___HookScreenshot const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRScreenshots___HookScreenshot()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRScreenshots___HookScreenshot, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetScreenshotPropertyType
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8509))
// CS Name: ::IVRScreenshots::_GetScreenshotPropertyType*
class CORDL_TYPE __IVRScreenshots___GetScreenshotPropertyType : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ec5f4 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ec6b8 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRScreenshotType Invoke(uint32_t  screenshotHandle, ByRef<::OVR::OpenVR::EVRScreenshotError>  pError) ;

/// @brief Method BeginInvoke addr 0x27ec6cc size 0xb8 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  screenshotHandle, ByRef<::OVR::OpenVR::EVRScreenshotError>  pError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ec784 size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRScreenshotType EndInvoke(ByRef<::OVR::OpenVR::EVRScreenshotError>  pError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRScreenshots___GetScreenshotPropertyType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRScreenshots___GetScreenshotPropertyType(__IVRScreenshots___GetScreenshotPropertyType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRScreenshots___GetScreenshotPropertyType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRScreenshots___GetScreenshotPropertyType(__IVRScreenshots___GetScreenshotPropertyType const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRScreenshots___GetScreenshotPropertyType()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetScreenshotPropertyFilename
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8510))
// CS Name: ::IVRScreenshots::_GetScreenshotPropertyFilename*
class CORDL_TYPE __IVRScreenshots___GetScreenshotPropertyFilename : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ec7b0 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ec874 size 0x14 virtual true final false
inline uint32_t Invoke(uint32_t  screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames  filenameType, ::System::Text::StringBuilder*  pchFilename, uint32_t  cchFilename, ByRef<::OVR::OpenVR::EVRScreenshotError>  pError) ;

/// @brief Method BeginInvoke addr 0x27ec888 size 0x104 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames  filenameType, ::System::Text::StringBuilder*  pchFilename, uint32_t  cchFilename, ByRef<::OVR::OpenVR::EVRScreenshotError>  pError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ec98c size 0x2c virtual true final false
inline uint32_t EndInvoke(ByRef<::OVR::OpenVR::EVRScreenshotError>  pError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRScreenshots___GetScreenshotPropertyFilename", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRScreenshots___GetScreenshotPropertyFilename(__IVRScreenshots___GetScreenshotPropertyFilename && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRScreenshots___GetScreenshotPropertyFilename", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRScreenshots___GetScreenshotPropertyFilename(__IVRScreenshots___GetScreenshotPropertyFilename const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRScreenshots___GetScreenshotPropertyFilename()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_UpdateScreenshotProgress
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8511))
// CS Name: ::IVRScreenshots::_UpdateScreenshotProgress*
class CORDL_TYPE __IVRScreenshots___UpdateScreenshotProgress : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ec9b8 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27eca7c size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRScreenshotError Invoke(uint32_t  screenshotHandle, float_t  flProgress) ;

/// @brief Method BeginInvoke addr 0x27eca90 size 0xb8 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  screenshotHandle, float_t  flProgress, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ecb48 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRScreenshotError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRScreenshots___UpdateScreenshotProgress", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRScreenshots___UpdateScreenshotProgress(__IVRScreenshots___UpdateScreenshotProgress && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRScreenshots___UpdateScreenshotProgress", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRScreenshots___UpdateScreenshotProgress(__IVRScreenshots___UpdateScreenshotProgress const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRScreenshots___UpdateScreenshotProgress()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_TakeStereoScreenshot
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8512))
// CS Name: ::IVRScreenshots::_TakeStereoScreenshot*
class CORDL_TYPE __IVRScreenshots___TakeStereoScreenshot : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ecb70 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ecc48 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRScreenshotError Invoke(ByRef<uint32_t>  pOutScreenshotHandle, ::StringW  pchPreviewFilename, ::StringW  pchVRFilename) ;

/// @brief Method BeginInvoke addr 0x27ecc5c size 0xa0 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(ByRef<uint32_t>  pOutScreenshotHandle, ::StringW  pchPreviewFilename, ::StringW  pchVRFilename, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27eccfc size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRScreenshotError EndInvoke(ByRef<uint32_t>  pOutScreenshotHandle, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRScreenshots___TakeStereoScreenshot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRScreenshots___TakeStereoScreenshot(__IVRScreenshots___TakeStereoScreenshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRScreenshots___TakeStereoScreenshot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRScreenshots___TakeStereoScreenshot(__IVRScreenshots___TakeStereoScreenshot const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRScreenshots___TakeStereoScreenshot()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_SubmitScreenshot
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8513))
// CS Name: ::IVRScreenshots::_SubmitScreenshot*
class CORDL_TYPE __IVRScreenshots___SubmitScreenshot : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ecd28 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ecdec size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRScreenshotError Invoke(uint32_t  screenshotHandle, ::OVR::OpenVR::EVRScreenshotType  type, ::StringW  pchSourcePreviewFilename, ::StringW  pchSourceVRFilename) ;

/// @brief Method BeginInvoke addr 0x27ece00 size 0xc8 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  screenshotHandle, ::OVR::OpenVR::EVRScreenshotType  type, ::StringW  pchSourcePreviewFilename, ::StringW  pchSourceVRFilename, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ecec8 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRScreenshotError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRScreenshots___SubmitScreenshot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRScreenshots___SubmitScreenshot(__IVRScreenshots___SubmitScreenshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRScreenshots___SubmitScreenshot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRScreenshots___SubmitScreenshot(__IVRScreenshots___SubmitScreenshot const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRScreenshots___SubmitScreenshot()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRScreenshots
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8514))
// CS Name: ::OVR.OpenVR::IVRScreenshots
struct CORDL_TYPE IVRScreenshots : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
using _SubmitScreenshot = ::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot;

using _TakeStereoScreenshot = ::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot;

using _UpdateScreenshotProgress = ::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress;

using _GetScreenshotPropertyFilename = ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename;

using _GetScreenshotPropertyType = ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType;

using _HookScreenshot = ::OVR::OpenVR::__IVRScreenshots___HookScreenshot;

using _RequestScreenshot = ::OVR::OpenVR::__IVRScreenshots___RequestScreenshot;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field RequestScreenshot offset 0x0
 __declspec(property(get=__get_RequestScreenshot, put=__set_RequestScreenshot)) ::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*  RequestScreenshot;

/// @brief Field HookScreenshot offset 0x8
 __declspec(property(get=__get_HookScreenshot, put=__set_HookScreenshot)) ::OVR::OpenVR::__IVRScreenshots___HookScreenshot*  HookScreenshot;

/// @brief Field GetScreenshotPropertyType offset 0x10
 __declspec(property(get=__get_GetScreenshotPropertyType, put=__set_GetScreenshotPropertyType)) ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*  GetScreenshotPropertyType;

/// @brief Field GetScreenshotPropertyFilename offset 0x18
 __declspec(property(get=__get_GetScreenshotPropertyFilename, put=__set_GetScreenshotPropertyFilename)) ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*  GetScreenshotPropertyFilename;

/// @brief Field UpdateScreenshotProgress offset 0x20
 __declspec(property(get=__get_UpdateScreenshotProgress, put=__set_UpdateScreenshotProgress)) ::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*  UpdateScreenshotProgress;

/// @brief Field TakeStereoScreenshot offset 0x28
 __declspec(property(get=__get_TakeStereoScreenshot, put=__set_TakeStereoScreenshot)) ::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*  TakeStereoScreenshot;

/// @brief Field SubmitScreenshot offset 0x30
 __declspec(property(get=__get_SubmitScreenshot, put=__set_SubmitScreenshot)) ::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*  SubmitScreenshot;

constexpr void __set_RequestScreenshot(::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*  value) ;

constexpr ::OVR::OpenVR::__IVRScreenshots___RequestScreenshot* __get_RequestScreenshot() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*> __get_RequestScreenshot() const;

constexpr void __set_HookScreenshot(::OVR::OpenVR::__IVRScreenshots___HookScreenshot*  value) ;

constexpr ::OVR::OpenVR::__IVRScreenshots___HookScreenshot* __get_HookScreenshot() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRScreenshots___HookScreenshot*> __get_HookScreenshot() const;

constexpr void __set_GetScreenshotPropertyType(::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*  value) ;

constexpr ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType* __get_GetScreenshotPropertyType() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*> __get_GetScreenshotPropertyType() const;

constexpr void __set_GetScreenshotPropertyFilename(::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*  value) ;

constexpr ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename* __get_GetScreenshotPropertyFilename() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*> __get_GetScreenshotPropertyFilename() const;

constexpr void __set_UpdateScreenshotProgress(::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*  value) ;

constexpr ::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress* __get_UpdateScreenshotProgress() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*> __get_UpdateScreenshotProgress() const;

constexpr void __set_TakeStereoScreenshot(::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*  value) ;

constexpr ::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot* __get_TakeStereoScreenshot() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*> __get_TakeStereoScreenshot() const;

constexpr void __set_SubmitScreenshot(::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*  value) ;

constexpr ::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot* __get_SubmitScreenshot() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*> __get_SubmitScreenshot() const;

// Ctor Parameters [CppParam { name: "RequestScreenshot", ty: "::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*", modifiers: "", def_value: None }, CppParam { name: "HookScreenshot", ty: "::OVR::OpenVR::__IVRScreenshots___HookScreenshot*", modifiers: "", def_value: None }, CppParam { name: "GetScreenshotPropertyType", ty: "::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*", modifiers: "", def_value: None }, CppParam { name: "GetScreenshotPropertyFilename", ty: "::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*", modifiers: "", def_value: None }, CppParam { name: "UpdateScreenshotProgress", ty: "::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*", modifiers: "", def_value: None }, CppParam { name: "TakeStereoScreenshot", ty: "::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*", modifiers: "", def_value: None }, CppParam { name: "SubmitScreenshot", ty: "::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*", modifiers: "", def_value: None }]
constexpr IVRScreenshots(::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*  RequestScreenshot, ::OVR::OpenVR::__IVRScreenshots___HookScreenshot*  HookScreenshot, ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*  GetScreenshotPropertyType, ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*  GetScreenshotPropertyFilename, ::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*  UpdateScreenshotProgress, ::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*  TakeStereoScreenshot, ::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*  SubmitScreenshot) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IVRScreenshots(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IVRScreenshots()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRScreenshots, 0x38>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*, "OVR.OpenVR", "IVRScreenshots/_GetScreenshotPropertyFilename");
NEED_NO_BOX(::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*, "OVR.OpenVR", "IVRScreenshots/_GetScreenshotPropertyType");
NEED_NO_BOX(::OVR::OpenVR::__IVRScreenshots___HookScreenshot);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRScreenshots___HookScreenshot*, "OVR.OpenVR", "IVRScreenshots/_HookScreenshot");
NEED_NO_BOX(::OVR::OpenVR::__IVRScreenshots___RequestScreenshot);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*, "OVR.OpenVR", "IVRScreenshots/_RequestScreenshot");
NEED_NO_BOX(::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*, "OVR.OpenVR", "IVRScreenshots/_SubmitScreenshot");
NEED_NO_BOX(::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*, "OVR.OpenVR", "IVRScreenshots/_TakeStereoScreenshot");
NEED_NO_BOX(::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*, "OVR.OpenVR", "IVRScreenshots/_UpdateScreenshotProgress");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRScreenshots, "OVR.OpenVR", "IVRScreenshots");
