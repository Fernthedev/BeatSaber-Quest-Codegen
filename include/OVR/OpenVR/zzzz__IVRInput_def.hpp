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
CORDL_MODULE_EXPORT(IVRInput)
namespace System {
class Object;
}
namespace OVR::OpenVR {
struct EVRSkeletalTransformSpace;
}
namespace OVR::OpenVR {
struct VRBoneTransform_t;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct EVRInputError;
}
namespace OVR::OpenVR {
struct InputAnalogActionData_t;
}
namespace OVR::OpenVR {
struct InputDigitalActionData_t;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct InputOriginInfo_t;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct InputPoseActionData_t;
}
namespace OVR::OpenVR {
struct InputSkeletalActionData_t;
}
namespace OVR::OpenVR {
struct EVRSkeletalMotionRange;
}
namespace OVR::OpenVR {
struct VRActiveActionSet_t;
}
namespace OVR::OpenVR {
class __IVRInput___GetActionSetHandle;
}
namespace OVR::OpenVR {
class __IVRInput___GetInputSourceHandle;
}
namespace OVR::OpenVR {
class __IVRInput___GetAnalogActionData;
}
namespace OVR::OpenVR {
class __IVRInput___GetDigitalActionData;
}
namespace OVR::OpenVR {
class __IVRInput___ShowBindingsForActionSet;
}
namespace OVR::OpenVR {
class __IVRInput___GetSkeletalBoneData;
}
namespace OVR::OpenVR {
class __IVRInput___GetActionOrigins;
}
namespace OVR::OpenVR {
class __IVRInput___GetOriginLocalizedName;
}
namespace OVR::OpenVR {
class __IVRInput___GetActionHandle;
}
namespace OVR::OpenVR {
class __IVRInput___SetActionManifestPath;
}
namespace OVR::OpenVR {
class __IVRInput___GetPoseActionData;
}
namespace OVR::OpenVR {
class __IVRInput___DecompressSkeletalBoneData;
}
namespace OVR::OpenVR {
class __IVRInput___GetOriginTrackedDeviceInfo;
}
namespace OVR::OpenVR {
class __IVRInput___GetSkeletalActionData;
}
namespace OVR::OpenVR {
class __IVRInput___ShowActionOrigins;
}
namespace OVR::OpenVR {
class __IVRInput___UpdateActionState;
}
namespace OVR::OpenVR {
class __IVRInput___GetSkeletalBoneDataCompressed;
}
namespace OVR::OpenVR {
class __IVRInput___TriggerHapticVibrationAction;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRInput___DecompressSkeletalBoneData;
}
namespace OVR::OpenVR {
class __IVRInput___GetActionHandle;
}
namespace OVR::OpenVR {
class __IVRInput___GetActionOrigins;
}
namespace OVR::OpenVR {
class __IVRInput___GetActionSetHandle;
}
namespace OVR::OpenVR {
class __IVRInput___GetAnalogActionData;
}
namespace OVR::OpenVR {
class __IVRInput___GetDigitalActionData;
}
namespace OVR::OpenVR {
class __IVRInput___GetInputSourceHandle;
}
namespace OVR::OpenVR {
class __IVRInput___GetOriginLocalizedName;
}
namespace OVR::OpenVR {
class __IVRInput___GetOriginTrackedDeviceInfo;
}
namespace OVR::OpenVR {
class __IVRInput___GetPoseActionData;
}
namespace OVR::OpenVR {
class __IVRInput___GetSkeletalActionData;
}
namespace OVR::OpenVR {
class __IVRInput___GetSkeletalBoneData;
}
namespace OVR::OpenVR {
class __IVRInput___GetSkeletalBoneDataCompressed;
}
namespace OVR::OpenVR {
class __IVRInput___SetActionManifestPath;
}
namespace OVR::OpenVR {
class __IVRInput___ShowActionOrigins;
}
namespace OVR::OpenVR {
class __IVRInput___ShowBindingsForActionSet;
}
namespace OVR::OpenVR {
class __IVRInput___TriggerHapticVibrationAction;
}
namespace OVR::OpenVR {
class __IVRInput___UpdateActionState;
}
namespace OVR::OpenVR {
struct IVRInput;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetActionHandle);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetActionOrigins);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetActionSetHandle);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetAnalogActionData);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetDigitalActionData);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetInputSourceHandle);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetOriginLocalizedName);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetPoseActionData);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetSkeletalActionData);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetSkeletalBoneData);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___SetActionManifestPath);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___ShowActionOrigins);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___UpdateActionState);
MARK_VAL_T(::OVR::OpenVR::IVRInput);
// Type: ::_SetActionManifestPath
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8522))
// CS Name: ::IVRInput::_SetActionManifestPath*
class CORDL_TYPE __IVRInput___SetActionManifestPath : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___SetActionManifestPath* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ed644 size 0xd4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ed718 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(::StringW  pchActionManifestPath) ;

/// @brief Method BeginInvoke addr 0x27ed72c size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchActionManifestPath, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ed74c size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___SetActionManifestPath", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___SetActionManifestPath(__IVRInput___SetActionManifestPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___SetActionManifestPath", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___SetActionManifestPath(__IVRInput___SetActionManifestPath const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___SetActionManifestPath()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___SetActionManifestPath, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetActionSetHandle
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8523))
// CS Name: ::IVRInput::_GetActionSetHandle*
class CORDL_TYPE __IVRInput___GetActionSetHandle : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___GetActionSetHandle* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ed774 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ed84c size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(::StringW  pchActionSetName, ByRef<uint64_t>  pHandle) ;

/// @brief Method BeginInvoke addr 0x27ed860 size 0x94 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchActionSetName, ByRef<uint64_t>  pHandle, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ed8f4 size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<uint64_t>  pHandle, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetActionSetHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___GetActionSetHandle(__IVRInput___GetActionSetHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetActionSetHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___GetActionSetHandle(__IVRInput___GetActionSetHandle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___GetActionSetHandle()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetActionSetHandle, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetActionHandle
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8524))
// CS Name: ::IVRInput::_GetActionHandle*
class CORDL_TYPE __IVRInput___GetActionHandle : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___GetActionHandle* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ed920 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ed9f8 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(::StringW  pchActionName, ByRef<uint64_t>  pHandle) ;

/// @brief Method BeginInvoke addr 0x27eda0c size 0x94 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchActionName, ByRef<uint64_t>  pHandle, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27edaa0 size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<uint64_t>  pHandle, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetActionHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___GetActionHandle(__IVRInput___GetActionHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetActionHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___GetActionHandle(__IVRInput___GetActionHandle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___GetActionHandle()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetActionHandle, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetInputSourceHandle
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8525))
// CS Name: ::IVRInput::_GetInputSourceHandle*
class CORDL_TYPE __IVRInput___GetInputSourceHandle : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___GetInputSourceHandle* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27edacc size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27edba4 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(::StringW  pchInputSourcePath, ByRef<uint64_t>  pHandle) ;

/// @brief Method BeginInvoke addr 0x27edbb8 size 0x94 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchInputSourcePath, ByRef<uint64_t>  pHandle, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27edc4c size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<uint64_t>  pHandle, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetInputSourceHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___GetInputSourceHandle(__IVRInput___GetInputSourceHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetInputSourceHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___GetInputSourceHandle(__IVRInput___GetInputSourceHandle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___GetInputSourceHandle()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetInputSourceHandle, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_UpdateActionState
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8526))
// CS Name: ::IVRInput::_UpdateActionState*
class CORDL_TYPE __IVRInput___UpdateActionState : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___UpdateActionState* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27edc78 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27edd50 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t,::Array<::OVR::OpenVR::VRActiveActionSet_t>*>>  pSets, uint32_t  unSizeOfVRSelectedActionSet_t, uint32_t  unSetCount) ;

/// @brief Method BeginInvoke addr 0x27edd64 size 0xa8 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t,::Array<::OVR::OpenVR::VRActiveActionSet_t>*>>  pSets, uint32_t  unSizeOfVRSelectedActionSet_t, uint32_t  unSetCount, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ede0c size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___UpdateActionState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___UpdateActionState(__IVRInput___UpdateActionState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___UpdateActionState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___UpdateActionState(__IVRInput___UpdateActionState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___UpdateActionState()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___UpdateActionState, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetDigitalActionData
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8527))
// CS Name: ::IVRInput::_GetDigitalActionData*
class CORDL_TYPE __IVRInput___GetDigitalActionData : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___GetDigitalActionData* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ede34 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27edef8 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t  action, ByRef<::OVR::OpenVR::InputDigitalActionData_t>  pActionData, uint32_t  unActionDataSize, uint64_t  ulRestrictToDevice) ;

/// @brief Method BeginInvoke addr 0x27edf0c size 0x100 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  action, ByRef<::OVR::OpenVR::InputDigitalActionData_t>  pActionData, uint32_t  unActionDataSize, uint64_t  ulRestrictToDevice, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ee00c size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<::OVR::OpenVR::InputDigitalActionData_t>  pActionData, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetDigitalActionData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___GetDigitalActionData(__IVRInput___GetDigitalActionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetDigitalActionData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___GetDigitalActionData(__IVRInput___GetDigitalActionData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___GetDigitalActionData()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetDigitalActionData, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetAnalogActionData
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8528))
// CS Name: ::IVRInput::_GetAnalogActionData*
class CORDL_TYPE __IVRInput___GetAnalogActionData : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___GetAnalogActionData* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ee038 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ee0fc size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t  action, ByRef<::OVR::OpenVR::InputAnalogActionData_t>  pActionData, uint32_t  unActionDataSize, uint64_t  ulRestrictToDevice) ;

/// @brief Method BeginInvoke addr 0x27ee110 size 0x100 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  action, ByRef<::OVR::OpenVR::InputAnalogActionData_t>  pActionData, uint32_t  unActionDataSize, uint64_t  ulRestrictToDevice, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ee210 size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<::OVR::OpenVR::InputAnalogActionData_t>  pActionData, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetAnalogActionData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___GetAnalogActionData(__IVRInput___GetAnalogActionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetAnalogActionData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___GetAnalogActionData(__IVRInput___GetAnalogActionData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___GetAnalogActionData()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetAnalogActionData, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetPoseActionData
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8529))
// CS Name: ::IVRInput::_GetPoseActionData*
class CORDL_TYPE __IVRInput___GetPoseActionData : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___GetPoseActionData* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ee23c size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ee300 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t  action, ::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin, float_t  fPredictedSecondsFromNow, ByRef<::OVR::OpenVR::InputPoseActionData_t>  pActionData, uint32_t  unActionDataSize, uint64_t  ulRestrictToDevice) ;

/// @brief Method BeginInvoke addr 0x27ee314 size 0x160 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  action, ::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin, float_t  fPredictedSecondsFromNow, ByRef<::OVR::OpenVR::InputPoseActionData_t>  pActionData, uint32_t  unActionDataSize, uint64_t  ulRestrictToDevice, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ee474 size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<::OVR::OpenVR::InputPoseActionData_t>  pActionData, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetPoseActionData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___GetPoseActionData(__IVRInput___GetPoseActionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetPoseActionData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___GetPoseActionData(__IVRInput___GetPoseActionData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___GetPoseActionData()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetPoseActionData, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetSkeletalActionData
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8530))
// CS Name: ::IVRInput::_GetSkeletalActionData*
class CORDL_TYPE __IVRInput___GetSkeletalActionData : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___GetSkeletalActionData* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ee4a0 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ee564 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t  action, ByRef<::OVR::OpenVR::InputSkeletalActionData_t>  pActionData, uint32_t  unActionDataSize, uint64_t  ulRestrictToDevice) ;

/// @brief Method BeginInvoke addr 0x27ee578 size 0x100 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  action, ByRef<::OVR::OpenVR::InputSkeletalActionData_t>  pActionData, uint32_t  unActionDataSize, uint64_t  ulRestrictToDevice, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ee678 size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<::OVR::OpenVR::InputSkeletalActionData_t>  pActionData, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetSkeletalActionData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___GetSkeletalActionData(__IVRInput___GetSkeletalActionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetSkeletalActionData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___GetSkeletalActionData(__IVRInput___GetSkeletalActionData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___GetSkeletalActionData()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetSkeletalActionData, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetSkeletalBoneData
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8531))
// CS Name: ::IVRInput::_GetSkeletalBoneData*
class CORDL_TYPE __IVRInput___GetSkeletalBoneData : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ee6a4 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ee768 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t  action, ::OVR::OpenVR::EVRSkeletalTransformSpace  eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange  eMotionRange, ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t,::Array<::OVR::OpenVR::VRBoneTransform_t>*>>  pTransformArray, uint32_t  unTransformArrayCount, uint64_t  ulRestrictToDevice) ;

/// @brief Method BeginInvoke addr 0x27ee77c size 0x130 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  action, ::OVR::OpenVR::EVRSkeletalTransformSpace  eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange  eMotionRange, ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t,::Array<::OVR::OpenVR::VRBoneTransform_t>*>>  pTransformArray, uint32_t  unTransformArrayCount, uint64_t  ulRestrictToDevice, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ee8ac size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetSkeletalBoneData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___GetSkeletalBoneData(__IVRInput___GetSkeletalBoneData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetSkeletalBoneData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___GetSkeletalBoneData(__IVRInput___GetSkeletalBoneData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___GetSkeletalBoneData()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetSkeletalBoneData, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetSkeletalBoneDataCompressed
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8532))
// CS Name: ::IVRInput::_GetSkeletalBoneDataCompressed*
class CORDL_TYPE __IVRInput___GetSkeletalBoneDataCompressed : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ee8d4 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ee998 size 0x18 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t  action, ::OVR::OpenVR::EVRSkeletalTransformSpace  eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange  eMotionRange, ::cordl_internals::intptr_t  pvCompressedData, uint32_t  unCompressedSize, ByRef<uint32_t>  punRequiredCompressedSize, uint64_t  ulRestrictToDevice) ;

/// @brief Method BeginInvoke addr 0x27ee9b0 size 0x170 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  action, ::OVR::OpenVR::EVRSkeletalTransformSpace  eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange  eMotionRange, ::cordl_internals::intptr_t  pvCompressedData, uint32_t  unCompressedSize, ByRef<uint32_t>  punRequiredCompressedSize, uint64_t  ulRestrictToDevice, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27eeb20 size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<uint32_t>  punRequiredCompressedSize, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetSkeletalBoneDataCompressed", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___GetSkeletalBoneDataCompressed(__IVRInput___GetSkeletalBoneDataCompressed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetSkeletalBoneDataCompressed", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___GetSkeletalBoneDataCompressed(__IVRInput___GetSkeletalBoneDataCompressed const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___GetSkeletalBoneDataCompressed()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_DecompressSkeletalBoneData
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8533))
// CS Name: ::IVRInput::_DecompressSkeletalBoneData*
class CORDL_TYPE __IVRInput___DecompressSkeletalBoneData : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27eeb4c size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27eec10 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(::cordl_internals::intptr_t  pvCompressedBuffer, uint32_t  unCompressedBufferSize, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>  peTransformSpace, ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t,::Array<::OVR::OpenVR::VRBoneTransform_t>*>>  pTransformArray, uint32_t  unTransformArrayCount) ;

/// @brief Method BeginInvoke addr 0x27eec24 size 0x104 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::cordl_internals::intptr_t  pvCompressedBuffer, uint32_t  unCompressedBufferSize, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>  peTransformSpace, ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t,::Array<::OVR::OpenVR::VRBoneTransform_t>*>>  pTransformArray, uint32_t  unTransformArrayCount, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27eed28 size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>  peTransformSpace, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___DecompressSkeletalBoneData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___DecompressSkeletalBoneData(__IVRInput___DecompressSkeletalBoneData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___DecompressSkeletalBoneData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___DecompressSkeletalBoneData(__IVRInput___DecompressSkeletalBoneData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___DecompressSkeletalBoneData()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_TriggerHapticVibrationAction
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8534))
// CS Name: ::IVRInput::_TriggerHapticVibrationAction*
class CORDL_TYPE __IVRInput___TriggerHapticVibrationAction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27eed54 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27eee18 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t  action, float_t  fStartSecondsFromNow, float_t  fDurationSeconds, float_t  fFrequency, float_t  fAmplitude, uint64_t  ulRestrictToDevice) ;

/// @brief Method BeginInvoke addr 0x27eee2c size 0x10c virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  action, float_t  fStartSecondsFromNow, float_t  fDurationSeconds, float_t  fFrequency, float_t  fAmplitude, uint64_t  ulRestrictToDevice, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27eef38 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___TriggerHapticVibrationAction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___TriggerHapticVibrationAction(__IVRInput___TriggerHapticVibrationAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___TriggerHapticVibrationAction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___TriggerHapticVibrationAction(__IVRInput___TriggerHapticVibrationAction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___TriggerHapticVibrationAction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetActionOrigins
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8535))
// CS Name: ::IVRInput::_GetActionOrigins*
class CORDL_TYPE __IVRInput___GetActionOrigins : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___GetActionOrigins* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27eef60 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ef024 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t  actionSetHandle, uint64_t  digitalActionHandle, ByRef<::ArrayW<uint64_t,::Array<uint64_t>*>>  originsOut, uint32_t  originOutCount) ;

/// @brief Method BeginInvoke addr 0x27ef038 size 0xd0 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  actionSetHandle, uint64_t  digitalActionHandle, ByRef<::ArrayW<uint64_t,::Array<uint64_t>*>>  originsOut, uint32_t  originOutCount, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ef108 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetActionOrigins", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___GetActionOrigins(__IVRInput___GetActionOrigins && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetActionOrigins", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___GetActionOrigins(__IVRInput___GetActionOrigins const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___GetActionOrigins()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetActionOrigins, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetOriginLocalizedName
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8536))
// CS Name: ::IVRInput::_GetOriginLocalizedName*
class CORDL_TYPE __IVRInput___GetOriginLocalizedName : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ef130 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ef1f4 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t  origin, ::System::Text::StringBuilder*  pchNameArray, uint32_t  unNameArraySize) ;

/// @brief Method BeginInvoke addr 0x27ef208 size 0xbc virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  origin, ::System::Text::StringBuilder*  pchNameArray, uint32_t  unNameArraySize, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ef2c4 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetOriginLocalizedName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___GetOriginLocalizedName(__IVRInput___GetOriginLocalizedName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetOriginLocalizedName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___GetOriginLocalizedName(__IVRInput___GetOriginLocalizedName const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___GetOriginLocalizedName()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetOriginLocalizedName, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetOriginTrackedDeviceInfo
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8537))
// CS Name: ::IVRInput::_GetOriginTrackedDeviceInfo*
class CORDL_TYPE __IVRInput___GetOriginTrackedDeviceInfo : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ef2ec size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ef3b0 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t  origin, ByRef<::OVR::OpenVR::InputOriginInfo_t>  pOriginInfo, uint32_t  unOriginInfoSize) ;

/// @brief Method BeginInvoke addr 0x27ef3c4 size 0xe8 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  origin, ByRef<::OVR::OpenVR::InputOriginInfo_t>  pOriginInfo, uint32_t  unOriginInfoSize, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ef4ac size 0x2c virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<::OVR::OpenVR::InputOriginInfo_t>  pOriginInfo, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetOriginTrackedDeviceInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___GetOriginTrackedDeviceInfo(__IVRInput___GetOriginTrackedDeviceInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetOriginTrackedDeviceInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___GetOriginTrackedDeviceInfo(__IVRInput___GetOriginTrackedDeviceInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___GetOriginTrackedDeviceInfo()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_ShowActionOrigins
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8538))
// CS Name: ::IVRInput::_ShowActionOrigins*
class CORDL_TYPE __IVRInput___ShowActionOrigins : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___ShowActionOrigins* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ef4d8 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ef59c size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t  actionSetHandle, uint64_t  ulActionHandle) ;

/// @brief Method BeginInvoke addr 0x27ef5b0 size 0x98 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  actionSetHandle, uint64_t  ulActionHandle, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ef648 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___ShowActionOrigins", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___ShowActionOrigins(__IVRInput___ShowActionOrigins && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___ShowActionOrigins", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___ShowActionOrigins(__IVRInput___ShowActionOrigins const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___ShowActionOrigins()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___ShowActionOrigins, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_ShowBindingsForActionSet
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8539))
// CS Name: ::IVRInput::_ShowBindingsForActionSet*
class CORDL_TYPE __IVRInput___ShowBindingsForActionSet : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ef670 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ef748 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRInputError Invoke(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t,::Array<::OVR::OpenVR::VRActiveActionSet_t>*>>  pSets, uint32_t  unSizeOfVRSelectedActionSet_t, uint32_t  unSetCount, uint64_t  originToHighlight) ;

/// @brief Method BeginInvoke addr 0x27ef75c size 0xd4 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t,::Array<::OVR::OpenVR::VRActiveActionSet_t>*>>  pSets, uint32_t  unSizeOfVRSelectedActionSet_t, uint32_t  unSetCount, uint64_t  originToHighlight, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ef830 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___ShowBindingsForActionSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRInput___ShowBindingsForActionSet(__IVRInput___ShowBindingsForActionSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRInput___ShowBindingsForActionSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRInput___ShowBindingsForActionSet(__IVRInput___ShowBindingsForActionSet const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRInput___ShowBindingsForActionSet()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRInput
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8540))
// CS Name: ::OVR.OpenVR::IVRInput
struct CORDL_TYPE IVRInput : public ::bs_hook::ValueTypeWrapper<0x90> {
public:
// Declarations
using _ShowBindingsForActionSet = ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet;

using _ShowActionOrigins = ::OVR::OpenVR::__IVRInput___ShowActionOrigins;

using _GetOriginTrackedDeviceInfo = ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo;

using _GetOriginLocalizedName = ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName;

using _GetActionOrigins = ::OVR::OpenVR::__IVRInput___GetActionOrigins;

using _TriggerHapticVibrationAction = ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction;

using _DecompressSkeletalBoneData = ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData;

using _GetSkeletalBoneDataCompressed = ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed;

using _GetSkeletalBoneData = ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData;

using _GetSkeletalActionData = ::OVR::OpenVR::__IVRInput___GetSkeletalActionData;

using _GetPoseActionData = ::OVR::OpenVR::__IVRInput___GetPoseActionData;

using _GetAnalogActionData = ::OVR::OpenVR::__IVRInput___GetAnalogActionData;

using _GetDigitalActionData = ::OVR::OpenVR::__IVRInput___GetDigitalActionData;

using _UpdateActionState = ::OVR::OpenVR::__IVRInput___UpdateActionState;

using _GetInputSourceHandle = ::OVR::OpenVR::__IVRInput___GetInputSourceHandle;

using _GetActionHandle = ::OVR::OpenVR::__IVRInput___GetActionHandle;

using _GetActionSetHandle = ::OVR::OpenVR::__IVRInput___GetActionSetHandle;

using _SetActionManifestPath = ::OVR::OpenVR::__IVRInput___SetActionManifestPath;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field SetActionManifestPath offset 0x0
 __declspec(property(get=__get_SetActionManifestPath, put=__set_SetActionManifestPath)) ::OVR::OpenVR::__IVRInput___SetActionManifestPath*  SetActionManifestPath;

/// @brief Field GetActionSetHandle offset 0x8
 __declspec(property(get=__get_GetActionSetHandle, put=__set_GetActionSetHandle)) ::OVR::OpenVR::__IVRInput___GetActionSetHandle*  GetActionSetHandle;

/// @brief Field GetActionHandle offset 0x10
 __declspec(property(get=__get_GetActionHandle, put=__set_GetActionHandle)) ::OVR::OpenVR::__IVRInput___GetActionHandle*  GetActionHandle;

/// @brief Field GetInputSourceHandle offset 0x18
 __declspec(property(get=__get_GetInputSourceHandle, put=__set_GetInputSourceHandle)) ::OVR::OpenVR::__IVRInput___GetInputSourceHandle*  GetInputSourceHandle;

/// @brief Field UpdateActionState offset 0x20
 __declspec(property(get=__get_UpdateActionState, put=__set_UpdateActionState)) ::OVR::OpenVR::__IVRInput___UpdateActionState*  UpdateActionState;

/// @brief Field GetDigitalActionData offset 0x28
 __declspec(property(get=__get_GetDigitalActionData, put=__set_GetDigitalActionData)) ::OVR::OpenVR::__IVRInput___GetDigitalActionData*  GetDigitalActionData;

/// @brief Field GetAnalogActionData offset 0x30
 __declspec(property(get=__get_GetAnalogActionData, put=__set_GetAnalogActionData)) ::OVR::OpenVR::__IVRInput___GetAnalogActionData*  GetAnalogActionData;

/// @brief Field GetPoseActionData offset 0x38
 __declspec(property(get=__get_GetPoseActionData, put=__set_GetPoseActionData)) ::OVR::OpenVR::__IVRInput___GetPoseActionData*  GetPoseActionData;

/// @brief Field GetSkeletalActionData offset 0x40
 __declspec(property(get=__get_GetSkeletalActionData, put=__set_GetSkeletalActionData)) ::OVR::OpenVR::__IVRInput___GetSkeletalActionData*  GetSkeletalActionData;

/// @brief Field GetSkeletalBoneData offset 0x48
 __declspec(property(get=__get_GetSkeletalBoneData, put=__set_GetSkeletalBoneData)) ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*  GetSkeletalBoneData;

/// @brief Field GetSkeletalBoneDataCompressed offset 0x50
 __declspec(property(get=__get_GetSkeletalBoneDataCompressed, put=__set_GetSkeletalBoneDataCompressed)) ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*  GetSkeletalBoneDataCompressed;

/// @brief Field DecompressSkeletalBoneData offset 0x58
 __declspec(property(get=__get_DecompressSkeletalBoneData, put=__set_DecompressSkeletalBoneData)) ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*  DecompressSkeletalBoneData;

/// @brief Field TriggerHapticVibrationAction offset 0x60
 __declspec(property(get=__get_TriggerHapticVibrationAction, put=__set_TriggerHapticVibrationAction)) ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*  TriggerHapticVibrationAction;

/// @brief Field GetActionOrigins offset 0x68
 __declspec(property(get=__get_GetActionOrigins, put=__set_GetActionOrigins)) ::OVR::OpenVR::__IVRInput___GetActionOrigins*  GetActionOrigins;

/// @brief Field GetOriginLocalizedName offset 0x70
 __declspec(property(get=__get_GetOriginLocalizedName, put=__set_GetOriginLocalizedName)) ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*  GetOriginLocalizedName;

/// @brief Field GetOriginTrackedDeviceInfo offset 0x78
 __declspec(property(get=__get_GetOriginTrackedDeviceInfo, put=__set_GetOriginTrackedDeviceInfo)) ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*  GetOriginTrackedDeviceInfo;

/// @brief Field ShowActionOrigins offset 0x80
 __declspec(property(get=__get_ShowActionOrigins, put=__set_ShowActionOrigins)) ::OVR::OpenVR::__IVRInput___ShowActionOrigins*  ShowActionOrigins;

/// @brief Field ShowBindingsForActionSet offset 0x88
 __declspec(property(get=__get_ShowBindingsForActionSet, put=__set_ShowBindingsForActionSet)) ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*  ShowBindingsForActionSet;

constexpr void __set_SetActionManifestPath(::OVR::OpenVR::__IVRInput___SetActionManifestPath*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___SetActionManifestPath* __get_SetActionManifestPath() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___SetActionManifestPath*> __get_SetActionManifestPath() const;

constexpr void __set_GetActionSetHandle(::OVR::OpenVR::__IVRInput___GetActionSetHandle*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___GetActionSetHandle* __get_GetActionSetHandle() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___GetActionSetHandle*> __get_GetActionSetHandle() const;

constexpr void __set_GetActionHandle(::OVR::OpenVR::__IVRInput___GetActionHandle*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___GetActionHandle* __get_GetActionHandle() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___GetActionHandle*> __get_GetActionHandle() const;

constexpr void __set_GetInputSourceHandle(::OVR::OpenVR::__IVRInput___GetInputSourceHandle*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___GetInputSourceHandle* __get_GetInputSourceHandle() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___GetInputSourceHandle*> __get_GetInputSourceHandle() const;

constexpr void __set_UpdateActionState(::OVR::OpenVR::__IVRInput___UpdateActionState*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___UpdateActionState* __get_UpdateActionState() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___UpdateActionState*> __get_UpdateActionState() const;

constexpr void __set_GetDigitalActionData(::OVR::OpenVR::__IVRInput___GetDigitalActionData*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___GetDigitalActionData* __get_GetDigitalActionData() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___GetDigitalActionData*> __get_GetDigitalActionData() const;

constexpr void __set_GetAnalogActionData(::OVR::OpenVR::__IVRInput___GetAnalogActionData*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___GetAnalogActionData* __get_GetAnalogActionData() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___GetAnalogActionData*> __get_GetAnalogActionData() const;

constexpr void __set_GetPoseActionData(::OVR::OpenVR::__IVRInput___GetPoseActionData*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___GetPoseActionData* __get_GetPoseActionData() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___GetPoseActionData*> __get_GetPoseActionData() const;

constexpr void __set_GetSkeletalActionData(::OVR::OpenVR::__IVRInput___GetSkeletalActionData*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___GetSkeletalActionData* __get_GetSkeletalActionData() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___GetSkeletalActionData*> __get_GetSkeletalActionData() const;

constexpr void __set_GetSkeletalBoneData(::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData* __get_GetSkeletalBoneData() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*> __get_GetSkeletalBoneData() const;

constexpr void __set_GetSkeletalBoneDataCompressed(::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed* __get_GetSkeletalBoneDataCompressed() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*> __get_GetSkeletalBoneDataCompressed() const;

constexpr void __set_DecompressSkeletalBoneData(::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData* __get_DecompressSkeletalBoneData() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*> __get_DecompressSkeletalBoneData() const;

constexpr void __set_TriggerHapticVibrationAction(::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction* __get_TriggerHapticVibrationAction() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*> __get_TriggerHapticVibrationAction() const;

constexpr void __set_GetActionOrigins(::OVR::OpenVR::__IVRInput___GetActionOrigins*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___GetActionOrigins* __get_GetActionOrigins() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___GetActionOrigins*> __get_GetActionOrigins() const;

constexpr void __set_GetOriginLocalizedName(::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName* __get_GetOriginLocalizedName() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*> __get_GetOriginLocalizedName() const;

constexpr void __set_GetOriginTrackedDeviceInfo(::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo* __get_GetOriginTrackedDeviceInfo() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*> __get_GetOriginTrackedDeviceInfo() const;

constexpr void __set_ShowActionOrigins(::OVR::OpenVR::__IVRInput___ShowActionOrigins*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___ShowActionOrigins* __get_ShowActionOrigins() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___ShowActionOrigins*> __get_ShowActionOrigins() const;

constexpr void __set_ShowBindingsForActionSet(::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*  value) ;

constexpr ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet* __get_ShowBindingsForActionSet() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*> __get_ShowBindingsForActionSet() const;

// Ctor Parameters [CppParam { name: "SetActionManifestPath", ty: "::OVR::OpenVR::__IVRInput___SetActionManifestPath*", modifiers: "", def_value: None }, CppParam { name: "GetActionSetHandle", ty: "::OVR::OpenVR::__IVRInput___GetActionSetHandle*", modifiers: "", def_value: None }, CppParam { name: "GetActionHandle", ty: "::OVR::OpenVR::__IVRInput___GetActionHandle*", modifiers: "", def_value: None }, CppParam { name: "GetInputSourceHandle", ty: "::OVR::OpenVR::__IVRInput___GetInputSourceHandle*", modifiers: "", def_value: None }, CppParam { name: "UpdateActionState", ty: "::OVR::OpenVR::__IVRInput___UpdateActionState*", modifiers: "", def_value: None }, CppParam { name: "GetDigitalActionData", ty: "::OVR::OpenVR::__IVRInput___GetDigitalActionData*", modifiers: "", def_value: None }, CppParam { name: "GetAnalogActionData", ty: "::OVR::OpenVR::__IVRInput___GetAnalogActionData*", modifiers: "", def_value: None }, CppParam { name: "GetPoseActionData", ty: "::OVR::OpenVR::__IVRInput___GetPoseActionData*", modifiers: "", def_value: None }, CppParam { name: "GetSkeletalActionData", ty: "::OVR::OpenVR::__IVRInput___GetSkeletalActionData*", modifiers: "", def_value: None }, CppParam { name: "GetSkeletalBoneData", ty: "::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*", modifiers: "", def_value: None }, CppParam { name: "GetSkeletalBoneDataCompressed", ty: "::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*", modifiers: "", def_value: None }, CppParam { name: "DecompressSkeletalBoneData", ty: "::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*", modifiers: "", def_value: None }, CppParam { name: "TriggerHapticVibrationAction", ty: "::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*", modifiers: "", def_value: None }, CppParam { name: "GetActionOrigins", ty: "::OVR::OpenVR::__IVRInput___GetActionOrigins*", modifiers: "", def_value: None }, CppParam { name: "GetOriginLocalizedName", ty: "::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*", modifiers: "", def_value: None }, CppParam { name: "GetOriginTrackedDeviceInfo", ty: "::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*", modifiers: "", def_value: None }, CppParam { name: "ShowActionOrigins", ty: "::OVR::OpenVR::__IVRInput___ShowActionOrigins*", modifiers: "", def_value: None }, CppParam { name: "ShowBindingsForActionSet", ty: "::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*", modifiers: "", def_value: None }]
constexpr IVRInput(::OVR::OpenVR::__IVRInput___SetActionManifestPath*  SetActionManifestPath, ::OVR::OpenVR::__IVRInput___GetActionSetHandle*  GetActionSetHandle, ::OVR::OpenVR::__IVRInput___GetActionHandle*  GetActionHandle, ::OVR::OpenVR::__IVRInput___GetInputSourceHandle*  GetInputSourceHandle, ::OVR::OpenVR::__IVRInput___UpdateActionState*  UpdateActionState, ::OVR::OpenVR::__IVRInput___GetDigitalActionData*  GetDigitalActionData, ::OVR::OpenVR::__IVRInput___GetAnalogActionData*  GetAnalogActionData, ::OVR::OpenVR::__IVRInput___GetPoseActionData*  GetPoseActionData, ::OVR::OpenVR::__IVRInput___GetSkeletalActionData*  GetSkeletalActionData, ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*  GetSkeletalBoneData, ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*  GetSkeletalBoneDataCompressed, ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*  DecompressSkeletalBoneData, ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*  TriggerHapticVibrationAction, ::OVR::OpenVR::__IVRInput___GetActionOrigins*  GetActionOrigins, ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*  GetOriginLocalizedName, ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*  GetOriginTrackedDeviceInfo, ::OVR::OpenVR::__IVRInput___ShowActionOrigins*  ShowActionOrigins, ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*  ShowBindingsForActionSet) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IVRInput(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x90>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IVRInput()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput, 0x90>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*, "OVR.OpenVR", "IVRInput/_DecompressSkeletalBoneData");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetActionHandle);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetActionHandle*, "OVR.OpenVR", "IVRInput/_GetActionHandle");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetActionOrigins);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetActionOrigins*, "OVR.OpenVR", "IVRInput/_GetActionOrigins");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetActionSetHandle);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetActionSetHandle*, "OVR.OpenVR", "IVRInput/_GetActionSetHandle");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetAnalogActionData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetAnalogActionData*, "OVR.OpenVR", "IVRInput/_GetAnalogActionData");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetDigitalActionData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetDigitalActionData*, "OVR.OpenVR", "IVRInput/_GetDigitalActionData");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetInputSourceHandle);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetInputSourceHandle*, "OVR.OpenVR", "IVRInput/_GetInputSourceHandle");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetOriginLocalizedName);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*, "OVR.OpenVR", "IVRInput/_GetOriginLocalizedName");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*, "OVR.OpenVR", "IVRInput/_GetOriginTrackedDeviceInfo");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetPoseActionData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetPoseActionData*, "OVR.OpenVR", "IVRInput/_GetPoseActionData");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetSkeletalActionData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetSkeletalActionData*, "OVR.OpenVR", "IVRInput/_GetSkeletalActionData");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetSkeletalBoneData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*, "OVR.OpenVR", "IVRInput/_GetSkeletalBoneData");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*, "OVR.OpenVR", "IVRInput/_GetSkeletalBoneDataCompressed");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___SetActionManifestPath);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___SetActionManifestPath*, "OVR.OpenVR", "IVRInput/_SetActionManifestPath");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___ShowActionOrigins);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___ShowActionOrigins*, "OVR.OpenVR", "IVRInput/_ShowActionOrigins");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*, "OVR.OpenVR", "IVRInput/_ShowBindingsForActionSet");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*, "OVR.OpenVR", "IVRInput/_TriggerHapticVibrationAction");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___UpdateActionState);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___UpdateActionState*, "OVR.OpenVR", "IVRInput/_UpdateActionState");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput, "OVR.OpenVR", "IVRInput");
