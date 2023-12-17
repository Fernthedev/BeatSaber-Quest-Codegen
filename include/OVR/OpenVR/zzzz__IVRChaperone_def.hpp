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
CORDL_MODULE_EXPORT(IVRChaperone)
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
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct ChaperoneCalibrationState;
}
namespace OVR::OpenVR {
struct HmdQuad_t;
}
namespace OVR::OpenVR {
class __IVRChaperone___GetCalibrationState;
}
namespace OVR::OpenVR {
class __IVRChaperone___SetSceneColor;
}
namespace OVR::OpenVR {
class __IVRChaperone___GetPlayAreaSize;
}
namespace OVR::OpenVR {
class __IVRChaperone___AreBoundsVisible;
}
namespace OVR::OpenVR {
class __IVRChaperone___GetPlayAreaRect;
}
namespace OVR::OpenVR {
class __IVRChaperone___ReloadInfo;
}
namespace OVR::OpenVR {
class __IVRChaperone___GetBoundsColor;
}
namespace OVR::OpenVR {
class __IVRChaperone___ForceBoundsVisible;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRChaperone___AreBoundsVisible;
}
namespace OVR::OpenVR {
class __IVRChaperone___ForceBoundsVisible;
}
namespace OVR::OpenVR {
class __IVRChaperone___GetBoundsColor;
}
namespace OVR::OpenVR {
class __IVRChaperone___GetCalibrationState;
}
namespace OVR::OpenVR {
class __IVRChaperone___GetPlayAreaRect;
}
namespace OVR::OpenVR {
class __IVRChaperone___GetPlayAreaSize;
}
namespace OVR::OpenVR {
class __IVRChaperone___ReloadInfo;
}
namespace OVR::OpenVR {
class __IVRChaperone___SetSceneColor;
}
namespace OVR::OpenVR {
struct IVRChaperone;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperone___AreBoundsVisible);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperone___ForceBoundsVisible);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperone___GetBoundsColor);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperone___GetCalibrationState);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperone___GetPlayAreaRect);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperone___GetPlayAreaSize);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperone___ReloadInfo);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperone___SetSceneColor);
MARK_VAL_T(::OVR::OpenVR::IVRChaperone);
// Type: ::_GetCalibrationState
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8314))
// CS Name: ::IVRChaperone::_GetCalibrationState*
class CORDL_TYPE __IVRChaperone___GetCalibrationState : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRChaperone___GetCalibrationState* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d9700 size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d97bc size 0x14 virtual true final false
inline ::OVR::OpenVR::ChaperoneCalibrationState Invoke() ;

/// @brief Method BeginInvoke addr 0x27d97d0 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d97f0 size 0x28 virtual true final false
inline ::OVR::OpenVR::ChaperoneCalibrationState EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___GetCalibrationState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRChaperone___GetCalibrationState(__IVRChaperone___GetCalibrationState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___GetCalibrationState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRChaperone___GetCalibrationState(__IVRChaperone___GetCalibrationState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRChaperone___GetCalibrationState()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperone___GetCalibrationState, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetPlayAreaSize
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8315))
// CS Name: ::IVRChaperone::_GetPlayAreaSize*
class CORDL_TYPE __IVRChaperone___GetPlayAreaSize : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRChaperone___GetPlayAreaSize* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d9818 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d98f0 size 0x14 virtual true final false
inline bool Invoke(ByRef<float_t>  pSizeX, ByRef<float_t>  pSizeZ) ;

/// @brief Method BeginInvoke addr 0x27d9904 size 0xa4 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(ByRef<float_t>  pSizeX, ByRef<float_t>  pSizeZ, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d99a8 size 0x34 virtual true final false
inline bool EndInvoke(ByRef<float_t>  pSizeX, ByRef<float_t>  pSizeZ, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___GetPlayAreaSize", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRChaperone___GetPlayAreaSize(__IVRChaperone___GetPlayAreaSize && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___GetPlayAreaSize", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRChaperone___GetPlayAreaSize(__IVRChaperone___GetPlayAreaSize const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRChaperone___GetPlayAreaSize()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperone___GetPlayAreaSize, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetPlayAreaRect
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8316))
// CS Name: ::IVRChaperone::_GetPlayAreaRect*
class CORDL_TYPE __IVRChaperone___GetPlayAreaRect : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRChaperone___GetPlayAreaRect* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d99dc size 0xd4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d9ab0 size 0x14 virtual true final false
inline bool Invoke(ByRef<::OVR::OpenVR::HmdQuad_t>  rect) ;

/// @brief Method BeginInvoke addr 0x27d9ac4 size 0x8c virtual true final false
inline ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::HmdQuad_t>  rect, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d9b50 size 0x2c virtual true final false
inline bool EndInvoke(ByRef<::OVR::OpenVR::HmdQuad_t>  rect, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___GetPlayAreaRect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRChaperone___GetPlayAreaRect(__IVRChaperone___GetPlayAreaRect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___GetPlayAreaRect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRChaperone___GetPlayAreaRect(__IVRChaperone___GetPlayAreaRect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRChaperone___GetPlayAreaRect()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperone___GetPlayAreaRect, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_ReloadInfo
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8317))
// CS Name: ::IVRChaperone::_ReloadInfo*
class CORDL_TYPE __IVRChaperone___ReloadInfo : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRChaperone___ReloadInfo* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d9b7c size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d9c38 size 0x14 virtual true final false
inline void Invoke() ;

/// @brief Method BeginInvoke addr 0x27d9c4c size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d9c6c size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___ReloadInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRChaperone___ReloadInfo(__IVRChaperone___ReloadInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___ReloadInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRChaperone___ReloadInfo(__IVRChaperone___ReloadInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRChaperone___ReloadInfo()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperone___ReloadInfo, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_SetSceneColor
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8318))
// CS Name: ::IVRChaperone::_SetSceneColor*
class CORDL_TYPE __IVRChaperone___SetSceneColor : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRChaperone___SetSceneColor* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d9c78 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d9d3c size 0x14 virtual true final false
inline void Invoke(::OVR::OpenVR::HmdColor_t  color) ;

/// @brief Method BeginInvoke addr 0x27d9d50 size 0x88 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::HmdColor_t  color, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d9dd8 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___SetSceneColor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRChaperone___SetSceneColor(__IVRChaperone___SetSceneColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___SetSceneColor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRChaperone___SetSceneColor(__IVRChaperone___SetSceneColor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRChaperone___SetSceneColor()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperone___SetSceneColor, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetBoundsColor
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8319))
// CS Name: ::IVRChaperone::_GetBoundsColor*
class CORDL_TYPE __IVRChaperone___GetBoundsColor : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRChaperone___GetBoundsColor* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d9de4 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d9ebc size 0x14 virtual true final false
inline void Invoke(ByRef<::OVR::OpenVR::HmdColor_t>  pOutputColorArray, int32_t  nNumOutputColors, float_t  flCollisionBoundsFadeDistance, ByRef<::OVR::OpenVR::HmdColor_t>  pOutputCameraColor) ;

/// @brief Method BeginInvoke addr 0x27d9ed0 size 0x104 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::HmdColor_t>  pOutputColorArray, int32_t  nNumOutputColors, float_t  flCollisionBoundsFadeDistance, ByRef<::OVR::OpenVR::HmdColor_t>  pOutputCameraColor, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d9fd4 size 0x24 virtual true final false
inline void EndInvoke(ByRef<::OVR::OpenVR::HmdColor_t>  pOutputColorArray, ByRef<::OVR::OpenVR::HmdColor_t>  pOutputCameraColor, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___GetBoundsColor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRChaperone___GetBoundsColor(__IVRChaperone___GetBoundsColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___GetBoundsColor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRChaperone___GetBoundsColor(__IVRChaperone___GetBoundsColor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRChaperone___GetBoundsColor()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperone___GetBoundsColor, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_AreBoundsVisible
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8320))
// CS Name: ::IVRChaperone::_AreBoundsVisible*
class CORDL_TYPE __IVRChaperone___AreBoundsVisible : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRChaperone___AreBoundsVisible* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d9ff8 size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27da0b4 size 0x14 virtual true final false
inline bool Invoke() ;

/// @brief Method BeginInvoke addr 0x27da0c8 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27da0e8 size 0x28 virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___AreBoundsVisible", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRChaperone___AreBoundsVisible(__IVRChaperone___AreBoundsVisible && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___AreBoundsVisible", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRChaperone___AreBoundsVisible(__IVRChaperone___AreBoundsVisible const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRChaperone___AreBoundsVisible()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperone___AreBoundsVisible, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_ForceBoundsVisible
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8321))
// CS Name: ::IVRChaperone::_ForceBoundsVisible*
class CORDL_TYPE __IVRChaperone___ForceBoundsVisible : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRChaperone___ForceBoundsVisible* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27da110 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27da1d4 size 0x18 virtual true final false
inline void Invoke(bool  bForce) ;

/// @brief Method BeginInvoke addr 0x27da1ec size 0x88 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(bool  bForce, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27da274 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___ForceBoundsVisible", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRChaperone___ForceBoundsVisible(__IVRChaperone___ForceBoundsVisible && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRChaperone___ForceBoundsVisible", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRChaperone___ForceBoundsVisible(__IVRChaperone___ForceBoundsVisible const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRChaperone___ForceBoundsVisible()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperone___ForceBoundsVisible, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRChaperone
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8322))
// CS Name: ::OVR.OpenVR::IVRChaperone
struct CORDL_TYPE IVRChaperone : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
using _ForceBoundsVisible = ::OVR::OpenVR::__IVRChaperone___ForceBoundsVisible;

using _AreBoundsVisible = ::OVR::OpenVR::__IVRChaperone___AreBoundsVisible;

using _GetBoundsColor = ::OVR::OpenVR::__IVRChaperone___GetBoundsColor;

using _SetSceneColor = ::OVR::OpenVR::__IVRChaperone___SetSceneColor;

using _ReloadInfo = ::OVR::OpenVR::__IVRChaperone___ReloadInfo;

using _GetPlayAreaRect = ::OVR::OpenVR::__IVRChaperone___GetPlayAreaRect;

using _GetPlayAreaSize = ::OVR::OpenVR::__IVRChaperone___GetPlayAreaSize;

using _GetCalibrationState = ::OVR::OpenVR::__IVRChaperone___GetCalibrationState;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field GetCalibrationState offset 0x0
 __declspec(property(get=__get_GetCalibrationState, put=__set_GetCalibrationState)) ::OVR::OpenVR::__IVRChaperone___GetCalibrationState*  GetCalibrationState;

/// @brief Field GetPlayAreaSize offset 0x8
 __declspec(property(get=__get_GetPlayAreaSize, put=__set_GetPlayAreaSize)) ::OVR::OpenVR::__IVRChaperone___GetPlayAreaSize*  GetPlayAreaSize;

/// @brief Field GetPlayAreaRect offset 0x10
 __declspec(property(get=__get_GetPlayAreaRect, put=__set_GetPlayAreaRect)) ::OVR::OpenVR::__IVRChaperone___GetPlayAreaRect*  GetPlayAreaRect;

/// @brief Field ReloadInfo offset 0x18
 __declspec(property(get=__get_ReloadInfo, put=__set_ReloadInfo)) ::OVR::OpenVR::__IVRChaperone___ReloadInfo*  ReloadInfo;

/// @brief Field SetSceneColor offset 0x20
 __declspec(property(get=__get_SetSceneColor, put=__set_SetSceneColor)) ::OVR::OpenVR::__IVRChaperone___SetSceneColor*  SetSceneColor;

/// @brief Field GetBoundsColor offset 0x28
 __declspec(property(get=__get_GetBoundsColor, put=__set_GetBoundsColor)) ::OVR::OpenVR::__IVRChaperone___GetBoundsColor*  GetBoundsColor;

/// @brief Field AreBoundsVisible offset 0x30
 __declspec(property(get=__get_AreBoundsVisible, put=__set_AreBoundsVisible)) ::OVR::OpenVR::__IVRChaperone___AreBoundsVisible*  AreBoundsVisible;

/// @brief Field ForceBoundsVisible offset 0x38
 __declspec(property(get=__get_ForceBoundsVisible, put=__set_ForceBoundsVisible)) ::OVR::OpenVR::__IVRChaperone___ForceBoundsVisible*  ForceBoundsVisible;

constexpr void __set_GetCalibrationState(::OVR::OpenVR::__IVRChaperone___GetCalibrationState*  value) ;

constexpr ::OVR::OpenVR::__IVRChaperone___GetCalibrationState* __get_GetCalibrationState() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRChaperone___GetCalibrationState*> __get_GetCalibrationState() const;

constexpr void __set_GetPlayAreaSize(::OVR::OpenVR::__IVRChaperone___GetPlayAreaSize*  value) ;

constexpr ::OVR::OpenVR::__IVRChaperone___GetPlayAreaSize* __get_GetPlayAreaSize() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRChaperone___GetPlayAreaSize*> __get_GetPlayAreaSize() const;

constexpr void __set_GetPlayAreaRect(::OVR::OpenVR::__IVRChaperone___GetPlayAreaRect*  value) ;

constexpr ::OVR::OpenVR::__IVRChaperone___GetPlayAreaRect* __get_GetPlayAreaRect() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRChaperone___GetPlayAreaRect*> __get_GetPlayAreaRect() const;

constexpr void __set_ReloadInfo(::OVR::OpenVR::__IVRChaperone___ReloadInfo*  value) ;

constexpr ::OVR::OpenVR::__IVRChaperone___ReloadInfo* __get_ReloadInfo() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRChaperone___ReloadInfo*> __get_ReloadInfo() const;

constexpr void __set_SetSceneColor(::OVR::OpenVR::__IVRChaperone___SetSceneColor*  value) ;

constexpr ::OVR::OpenVR::__IVRChaperone___SetSceneColor* __get_SetSceneColor() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRChaperone___SetSceneColor*> __get_SetSceneColor() const;

constexpr void __set_GetBoundsColor(::OVR::OpenVR::__IVRChaperone___GetBoundsColor*  value) ;

constexpr ::OVR::OpenVR::__IVRChaperone___GetBoundsColor* __get_GetBoundsColor() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRChaperone___GetBoundsColor*> __get_GetBoundsColor() const;

constexpr void __set_AreBoundsVisible(::OVR::OpenVR::__IVRChaperone___AreBoundsVisible*  value) ;

constexpr ::OVR::OpenVR::__IVRChaperone___AreBoundsVisible* __get_AreBoundsVisible() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRChaperone___AreBoundsVisible*> __get_AreBoundsVisible() const;

constexpr void __set_ForceBoundsVisible(::OVR::OpenVR::__IVRChaperone___ForceBoundsVisible*  value) ;

constexpr ::OVR::OpenVR::__IVRChaperone___ForceBoundsVisible* __get_ForceBoundsVisible() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRChaperone___ForceBoundsVisible*> __get_ForceBoundsVisible() const;

// Ctor Parameters [CppParam { name: "GetCalibrationState", ty: "::OVR::OpenVR::__IVRChaperone___GetCalibrationState*", modifiers: "", def_value: None }, CppParam { name: "GetPlayAreaSize", ty: "::OVR::OpenVR::__IVRChaperone___GetPlayAreaSize*", modifiers: "", def_value: None }, CppParam { name: "GetPlayAreaRect", ty: "::OVR::OpenVR::__IVRChaperone___GetPlayAreaRect*", modifiers: "", def_value: None }, CppParam { name: "ReloadInfo", ty: "::OVR::OpenVR::__IVRChaperone___ReloadInfo*", modifiers: "", def_value: None }, CppParam { name: "SetSceneColor", ty: "::OVR::OpenVR::__IVRChaperone___SetSceneColor*", modifiers: "", def_value: None }, CppParam { name: "GetBoundsColor", ty: "::OVR::OpenVR::__IVRChaperone___GetBoundsColor*", modifiers: "", def_value: None }, CppParam { name: "AreBoundsVisible", ty: "::OVR::OpenVR::__IVRChaperone___AreBoundsVisible*", modifiers: "", def_value: None }, CppParam { name: "ForceBoundsVisible", ty: "::OVR::OpenVR::__IVRChaperone___ForceBoundsVisible*", modifiers: "", def_value: None }]
constexpr IVRChaperone(::OVR::OpenVR::__IVRChaperone___GetCalibrationState*  GetCalibrationState, ::OVR::OpenVR::__IVRChaperone___GetPlayAreaSize*  GetPlayAreaSize, ::OVR::OpenVR::__IVRChaperone___GetPlayAreaRect*  GetPlayAreaRect, ::OVR::OpenVR::__IVRChaperone___ReloadInfo*  ReloadInfo, ::OVR::OpenVR::__IVRChaperone___SetSceneColor*  SetSceneColor, ::OVR::OpenVR::__IVRChaperone___GetBoundsColor*  GetBoundsColor, ::OVR::OpenVR::__IVRChaperone___AreBoundsVisible*  AreBoundsVisible, ::OVR::OpenVR::__IVRChaperone___ForceBoundsVisible*  ForceBoundsVisible) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IVRChaperone(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IVRChaperone()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperone, 0x40>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperone___AreBoundsVisible);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperone___AreBoundsVisible*, "OVR.OpenVR", "IVRChaperone/_AreBoundsVisible");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperone___ForceBoundsVisible);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperone___ForceBoundsVisible*, "OVR.OpenVR", "IVRChaperone/_ForceBoundsVisible");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperone___GetBoundsColor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperone___GetBoundsColor*, "OVR.OpenVR", "IVRChaperone/_GetBoundsColor");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperone___GetCalibrationState);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperone___GetCalibrationState*, "OVR.OpenVR", "IVRChaperone/_GetCalibrationState");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperone___GetPlayAreaRect);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperone___GetPlayAreaRect*, "OVR.OpenVR", "IVRChaperone/_GetPlayAreaRect");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperone___GetPlayAreaSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperone___GetPlayAreaSize*, "OVR.OpenVR", "IVRChaperone/_GetPlayAreaSize");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperone___ReloadInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperone___ReloadInfo*, "OVR.OpenVR", "IVRChaperone/_ReloadInfo");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperone___SetSceneColor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperone___SetSceneColor*, "OVR.OpenVR", "IVRChaperone/_SetSceneColor");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperone, "OVR.OpenVR", "IVRChaperone");
