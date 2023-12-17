#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRApplications)
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct EVRApplicationError;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct EVRApplicationProperty;
}
namespace OVR::OpenVR {
struct EVRApplicationTransitionState;
}
namespace OVR::OpenVR {
struct AppOverrideKeys_t;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationAutoLaunch;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationsTransitionStateNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRApplications___RemoveApplicationManifest;
}
namespace OVR::OpenVR {
class __IVRApplications___SetDefaultApplicationForMimeType;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationCount;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchApplicationFromMimeType;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationLaunchArguments;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationsThatSupportMimeType;
}
namespace OVR::OpenVR {
class __IVRApplications___PerformApplicationPrelaunchCheck;
}
namespace OVR::OpenVR {
class __IVRApplications___IsQuitUserPromptRequested;
}
namespace OVR::OpenVR {
class __IVRApplications___IsApplicationInstalled;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationPropertyBool;
}
namespace OVR::OpenVR {
class __IVRApplications___GetTransitionState;
}
namespace OVR::OpenVR {
class __IVRApplications___CancelApplicationLaunch;
}
namespace OVR::OpenVR {
class __IVRApplications___GetCurrentSceneProcessId;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationsErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationPropertyUint64;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationPropertyString;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationKeyByIndex;
}
namespace OVR::OpenVR {
class __IVRApplications___GetDefaultApplicationForMimeType;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationProcessId;
}
namespace OVR::OpenVR {
class __IVRApplications___IdentifyApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationKeyByProcessId;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationSupportedMimeTypes;
}
namespace OVR::OpenVR {
class __IVRApplications___GetStartingApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchInternalProcess;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchTemplateApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___AddApplicationManifest;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchDashboardOverlay;
}
namespace OVR::OpenVR {
class __IVRApplications___SetApplicationAutoLaunch;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRApplications___AddApplicationManifest;
}
namespace OVR::OpenVR {
class __IVRApplications___CancelApplicationLaunch;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationAutoLaunch;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationCount;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationKeyByIndex;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationKeyByProcessId;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationLaunchArguments;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationProcessId;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationPropertyBool;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationPropertyString;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationPropertyUint64;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationSupportedMimeTypes;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationsErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationsThatSupportMimeType;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationsTransitionStateNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRApplications___GetCurrentSceneProcessId;
}
namespace OVR::OpenVR {
class __IVRApplications___GetDefaultApplicationForMimeType;
}
namespace OVR::OpenVR {
class __IVRApplications___GetStartingApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___GetTransitionState;
}
namespace OVR::OpenVR {
class __IVRApplications___IdentifyApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___IsApplicationInstalled;
}
namespace OVR::OpenVR {
class __IVRApplications___IsQuitUserPromptRequested;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchApplicationFromMimeType;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchDashboardOverlay;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchInternalProcess;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchTemplateApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___PerformApplicationPrelaunchCheck;
}
namespace OVR::OpenVR {
class __IVRApplications___RemoveApplicationManifest;
}
namespace OVR::OpenVR {
class __IVRApplications___SetApplicationAutoLaunch;
}
namespace OVR::OpenVR {
class __IVRApplications___SetDefaultApplicationForMimeType;
}
namespace OVR::OpenVR {
struct IVRApplications;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___AddApplicationManifest);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationCount);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationProcessId);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetStartingApplication);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetTransitionState);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___IdentifyApplication);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___IsApplicationInstalled);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___LaunchApplication);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___LaunchInternalProcess);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType);
MARK_VAL_T(::OVR::OpenVR::IVRApplications);
// Type: ::_AddApplicationManifest
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8282))
// CS Name: ::IVRApplications::_AddApplicationManifest*
class CORDL_TYPE __IVRApplications___AddApplicationManifest : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___AddApplicationManifest* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d6a48 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d6b20 size 0x18 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW  pchApplicationManifestFullPath, bool  bTemporary) ;

/// @brief Method BeginInvoke addr 0x27d6b38 size 0x98 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchApplicationManifestFullPath, bool  bTemporary, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d6bd0 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___AddApplicationManifest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___AddApplicationManifest(__IVRApplications___AddApplicationManifest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___AddApplicationManifest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___AddApplicationManifest(__IVRApplications___AddApplicationManifest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___AddApplicationManifest()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___AddApplicationManifest, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_RemoveApplicationManifest
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8283))
// CS Name: ::IVRApplications::_RemoveApplicationManifest*
class CORDL_TYPE __IVRApplications___RemoveApplicationManifest : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d6bf8 size 0xd4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d6ccc size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW  pchApplicationManifestFullPath) ;

/// @brief Method BeginInvoke addr 0x27d6ce0 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchApplicationManifestFullPath, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d6d00 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___RemoveApplicationManifest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___RemoveApplicationManifest(__IVRApplications___RemoveApplicationManifest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___RemoveApplicationManifest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___RemoveApplicationManifest(__IVRApplications___RemoveApplicationManifest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___RemoveApplicationManifest()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_IsApplicationInstalled
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8284))
// CS Name: ::IVRApplications::_IsApplicationInstalled*
class CORDL_TYPE __IVRApplications___IsApplicationInstalled : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___IsApplicationInstalled* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d6d28 size 0xd4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d6dfc size 0x14 virtual true final false
inline bool Invoke(::StringW  pchAppKey) ;

/// @brief Method BeginInvoke addr 0x27d6e10 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchAppKey, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d6e30 size 0x28 virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___IsApplicationInstalled", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___IsApplicationInstalled(__IVRApplications___IsApplicationInstalled && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___IsApplicationInstalled", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___IsApplicationInstalled(__IVRApplications___IsApplicationInstalled const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___IsApplicationInstalled()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___IsApplicationInstalled, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationCount
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8285))
// CS Name: ::IVRApplications::_GetApplicationCount*
class CORDL_TYPE __IVRApplications___GetApplicationCount : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetApplicationCount* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d6e58 size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d6f14 size 0x14 virtual true final false
inline uint32_t Invoke() ;

/// @brief Method BeginInvoke addr 0x27d6f28 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d6f48 size 0x28 virtual true final false
inline uint32_t EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationCount", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetApplicationCount(__IVRApplications___GetApplicationCount && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationCount", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetApplicationCount(__IVRApplications___GetApplicationCount const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetApplicationCount()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationCount, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationKeyByIndex
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8286))
// CS Name: ::IVRApplications::_GetApplicationKeyByIndex*
class CORDL_TYPE __IVRApplications___GetApplicationKeyByIndex : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d6f70 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d7034 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError Invoke(uint32_t  unApplicationIndex, ::System::Text::StringBuilder*  pchAppKeyBuffer, uint32_t  unAppKeyBufferLen) ;

/// @brief Method BeginInvoke addr 0x27d7048 size 0xa4 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  unApplicationIndex, ::System::Text::StringBuilder*  pchAppKeyBuffer, uint32_t  unAppKeyBufferLen, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d70ec size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationKeyByIndex", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetApplicationKeyByIndex(__IVRApplications___GetApplicationKeyByIndex && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationKeyByIndex", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetApplicationKeyByIndex(__IVRApplications___GetApplicationKeyByIndex const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetApplicationKeyByIndex()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationKeyByProcessId
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8287))
// CS Name: ::IVRApplications::_GetApplicationKeyByProcessId*
class CORDL_TYPE __IVRApplications___GetApplicationKeyByProcessId : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d7114 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d71d8 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError Invoke(uint32_t  unProcessId, ::System::Text::StringBuilder*  pchAppKeyBuffer, uint32_t  unAppKeyBufferLen) ;

/// @brief Method BeginInvoke addr 0x27d71ec size 0xa4 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  unProcessId, ::System::Text::StringBuilder*  pchAppKeyBuffer, uint32_t  unAppKeyBufferLen, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d7290 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationKeyByProcessId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetApplicationKeyByProcessId(__IVRApplications___GetApplicationKeyByProcessId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationKeyByProcessId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetApplicationKeyByProcessId(__IVRApplications___GetApplicationKeyByProcessId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetApplicationKeyByProcessId()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_LaunchApplication
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8288))
// CS Name: ::IVRApplications::_LaunchApplication*
class CORDL_TYPE __IVRApplications___LaunchApplication : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___LaunchApplication* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d72b8 size 0xd4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d738c size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW  pchAppKey) ;

/// @brief Method BeginInvoke addr 0x27d73a0 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchAppKey, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d73c0 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchApplication", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___LaunchApplication(__IVRApplications___LaunchApplication && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchApplication", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___LaunchApplication(__IVRApplications___LaunchApplication const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___LaunchApplication()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___LaunchApplication, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_LaunchTemplateApplication
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8289))
// CS Name: ::IVRApplications::_LaunchTemplateApplication*
class CORDL_TYPE __IVRApplications___LaunchTemplateApplication : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d73e8 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d74c0 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW  pchTemplateAppKey, ::StringW  pchNewAppKey, ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t,::Array<::OVR::OpenVR::AppOverrideKeys_t>*>>  pKeys, uint32_t  unKeys) ;

/// @brief Method BeginInvoke addr 0x27d74d4 size 0xa8 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchTemplateAppKey, ::StringW  pchNewAppKey, ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t,::Array<::OVR::OpenVR::AppOverrideKeys_t>*>>  pKeys, uint32_t  unKeys, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d757c size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchTemplateApplication", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___LaunchTemplateApplication(__IVRApplications___LaunchTemplateApplication && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchTemplateApplication", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___LaunchTemplateApplication(__IVRApplications___LaunchTemplateApplication const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___LaunchTemplateApplication()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_LaunchApplicationFromMimeType
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8290))
// CS Name: ::IVRApplications::_LaunchApplicationFromMimeType*
class CORDL_TYPE __IVRApplications___LaunchApplicationFromMimeType : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d75a4 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d767c size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW  pchMimeType, ::StringW  pchArgs) ;

/// @brief Method BeginInvoke addr 0x27d7690 size 0x28 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchMimeType, ::StringW  pchArgs, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d76b8 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchApplicationFromMimeType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___LaunchApplicationFromMimeType(__IVRApplications___LaunchApplicationFromMimeType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchApplicationFromMimeType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___LaunchApplicationFromMimeType(__IVRApplications___LaunchApplicationFromMimeType const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___LaunchApplicationFromMimeType()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_LaunchDashboardOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8291))
// CS Name: ::IVRApplications::_LaunchDashboardOverlay*
class CORDL_TYPE __IVRApplications___LaunchDashboardOverlay : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d76e0 size 0xd4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d77b4 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW  pchAppKey) ;

/// @brief Method BeginInvoke addr 0x27d77c8 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchAppKey, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d77e8 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchDashboardOverlay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___LaunchDashboardOverlay(__IVRApplications___LaunchDashboardOverlay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchDashboardOverlay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___LaunchDashboardOverlay(__IVRApplications___LaunchDashboardOverlay const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___LaunchDashboardOverlay()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_CancelApplicationLaunch
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8292))
// CS Name: ::IVRApplications::_CancelApplicationLaunch*
class CORDL_TYPE __IVRApplications___CancelApplicationLaunch : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d7810 size 0xd4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d78e4 size 0x14 virtual true final false
inline bool Invoke(::StringW  pchAppKey) ;

/// @brief Method BeginInvoke addr 0x27d78f8 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchAppKey, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d7918 size 0x28 virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___CancelApplicationLaunch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___CancelApplicationLaunch(__IVRApplications___CancelApplicationLaunch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___CancelApplicationLaunch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___CancelApplicationLaunch(__IVRApplications___CancelApplicationLaunch const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___CancelApplicationLaunch()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_IdentifyApplication
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8293))
// CS Name: ::IVRApplications::_IdentifyApplication*
class CORDL_TYPE __IVRApplications___IdentifyApplication : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___IdentifyApplication* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d7940 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d7a04 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError Invoke(uint32_t  unProcessId, ::StringW  pchAppKey) ;

/// @brief Method BeginInvoke addr 0x27d7a18 size 0x90 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  unProcessId, ::StringW  pchAppKey, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d7aa8 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___IdentifyApplication", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___IdentifyApplication(__IVRApplications___IdentifyApplication && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___IdentifyApplication", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___IdentifyApplication(__IVRApplications___IdentifyApplication const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___IdentifyApplication()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___IdentifyApplication, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationProcessId
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8294))
// CS Name: ::IVRApplications::_GetApplicationProcessId*
class CORDL_TYPE __IVRApplications___GetApplicationProcessId : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetApplicationProcessId* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d7ad0 size 0xd4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d7ba4 size 0x14 virtual true final false
inline uint32_t Invoke(::StringW  pchAppKey) ;

/// @brief Method BeginInvoke addr 0x27d7bb8 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchAppKey, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d7bd8 size 0x28 virtual true final false
inline uint32_t EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationProcessId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetApplicationProcessId(__IVRApplications___GetApplicationProcessId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationProcessId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetApplicationProcessId(__IVRApplications___GetApplicationProcessId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetApplicationProcessId()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationProcessId, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationsErrorNameFromEnum
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8295))
// CS Name: ::IVRApplications::_GetApplicationsErrorNameFromEnum*
class CORDL_TYPE __IVRApplications___GetApplicationsErrorNameFromEnum : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d7c00 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d7cc4 size 0x14 virtual true final false
inline ::cordl_internals::intptr_t Invoke(::OVR::OpenVR::EVRApplicationError  error) ;

/// @brief Method BeginInvoke addr 0x27d7cd8 size 0x84 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRApplicationError  error, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d7d5c size 0x28 virtual true final false
inline ::cordl_internals::intptr_t EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationsErrorNameFromEnum", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetApplicationsErrorNameFromEnum(__IVRApplications___GetApplicationsErrorNameFromEnum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationsErrorNameFromEnum", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetApplicationsErrorNameFromEnum(__IVRApplications___GetApplicationsErrorNameFromEnum const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetApplicationsErrorNameFromEnum()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationPropertyString
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8296))
// CS Name: ::IVRApplications::_GetApplicationPropertyString*
class CORDL_TYPE __IVRApplications___GetApplicationPropertyString : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d7d84 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d7e5c size 0x14 virtual true final false
inline uint32_t Invoke(::StringW  pchAppKey, ::OVR::OpenVR::EVRApplicationProperty  eProperty, ::System::Text::StringBuilder*  pchPropertyValueBuffer, uint32_t  unPropertyValueBufferLen, ByRef<::OVR::OpenVR::EVRApplicationError>  peError) ;

/// @brief Method BeginInvoke addr 0x27d7e70 size 0xfc virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchAppKey, ::OVR::OpenVR::EVRApplicationProperty  eProperty, ::System::Text::StringBuilder*  pchPropertyValueBuffer, uint32_t  unPropertyValueBufferLen, ByRef<::OVR::OpenVR::EVRApplicationError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d7f6c size 0x2c virtual true final false
inline uint32_t EndInvoke(ByRef<::OVR::OpenVR::EVRApplicationError>  peError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationPropertyString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetApplicationPropertyString(__IVRApplications___GetApplicationPropertyString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationPropertyString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetApplicationPropertyString(__IVRApplications___GetApplicationPropertyString const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetApplicationPropertyString()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationPropertyBool
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8297))
// CS Name: ::IVRApplications::_GetApplicationPropertyBool*
class CORDL_TYPE __IVRApplications___GetApplicationPropertyBool : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d7f98 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d8070 size 0x14 virtual true final false
inline bool Invoke(::StringW  pchAppKey, ::OVR::OpenVR::EVRApplicationProperty  eProperty, ByRef<::OVR::OpenVR::EVRApplicationError>  peError) ;

/// @brief Method BeginInvoke addr 0x27d8084 size 0xc8 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchAppKey, ::OVR::OpenVR::EVRApplicationProperty  eProperty, ByRef<::OVR::OpenVR::EVRApplicationError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d814c size 0x2c virtual true final false
inline bool EndInvoke(ByRef<::OVR::OpenVR::EVRApplicationError>  peError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationPropertyBool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetApplicationPropertyBool(__IVRApplications___GetApplicationPropertyBool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationPropertyBool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetApplicationPropertyBool(__IVRApplications___GetApplicationPropertyBool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetApplicationPropertyBool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationPropertyUint64
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8298))
// CS Name: ::IVRApplications::_GetApplicationPropertyUint64*
class CORDL_TYPE __IVRApplications___GetApplicationPropertyUint64 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d8178 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d8250 size 0x14 virtual true final false
inline uint64_t Invoke(::StringW  pchAppKey, ::OVR::OpenVR::EVRApplicationProperty  eProperty, ByRef<::OVR::OpenVR::EVRApplicationError>  peError) ;

/// @brief Method BeginInvoke addr 0x27d8264 size 0xc8 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchAppKey, ::OVR::OpenVR::EVRApplicationProperty  eProperty, ByRef<::OVR::OpenVR::EVRApplicationError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d832c size 0x2c virtual true final false
inline uint64_t EndInvoke(ByRef<::OVR::OpenVR::EVRApplicationError>  peError, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationPropertyUint64", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetApplicationPropertyUint64(__IVRApplications___GetApplicationPropertyUint64 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationPropertyUint64", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetApplicationPropertyUint64(__IVRApplications___GetApplicationPropertyUint64 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetApplicationPropertyUint64()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_SetApplicationAutoLaunch
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8299))
// CS Name: ::IVRApplications::_SetApplicationAutoLaunch*
class CORDL_TYPE __IVRApplications___SetApplicationAutoLaunch : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d8358 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d8430 size 0x18 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW  pchAppKey, bool  bAutoLaunch) ;

/// @brief Method BeginInvoke addr 0x27d8448 size 0x98 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchAppKey, bool  bAutoLaunch, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d84e0 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___SetApplicationAutoLaunch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___SetApplicationAutoLaunch(__IVRApplications___SetApplicationAutoLaunch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___SetApplicationAutoLaunch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___SetApplicationAutoLaunch(__IVRApplications___SetApplicationAutoLaunch const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___SetApplicationAutoLaunch()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationAutoLaunch
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8300))
// CS Name: ::IVRApplications::_GetApplicationAutoLaunch*
class CORDL_TYPE __IVRApplications___GetApplicationAutoLaunch : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d8508 size 0xd4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d85dc size 0x14 virtual true final false
inline bool Invoke(::StringW  pchAppKey) ;

/// @brief Method BeginInvoke addr 0x27d85f0 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchAppKey, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d8610 size 0x28 virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationAutoLaunch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetApplicationAutoLaunch(__IVRApplications___GetApplicationAutoLaunch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationAutoLaunch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetApplicationAutoLaunch(__IVRApplications___GetApplicationAutoLaunch const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetApplicationAutoLaunch()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_SetDefaultApplicationForMimeType
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8301))
// CS Name: ::IVRApplications::_SetDefaultApplicationForMimeType*
class CORDL_TYPE __IVRApplications___SetDefaultApplicationForMimeType : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d8638 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d8710 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW  pchAppKey, ::StringW  pchMimeType) ;

/// @brief Method BeginInvoke addr 0x27d8724 size 0x28 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchAppKey, ::StringW  pchMimeType, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d874c size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___SetDefaultApplicationForMimeType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___SetDefaultApplicationForMimeType(__IVRApplications___SetDefaultApplicationForMimeType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___SetDefaultApplicationForMimeType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___SetDefaultApplicationForMimeType(__IVRApplications___SetDefaultApplicationForMimeType const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___SetDefaultApplicationForMimeType()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetDefaultApplicationForMimeType
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8302))
// CS Name: ::IVRApplications::_GetDefaultApplicationForMimeType*
class CORDL_TYPE __IVRApplications___GetDefaultApplicationForMimeType : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d8774 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d884c size 0x14 virtual true final false
inline bool Invoke(::StringW  pchMimeType, ::System::Text::StringBuilder*  pchAppKeyBuffer, uint32_t  unAppKeyBufferLen) ;

/// @brief Method BeginInvoke addr 0x27d8860 size 0x98 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchMimeType, ::System::Text::StringBuilder*  pchAppKeyBuffer, uint32_t  unAppKeyBufferLen, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d88f8 size 0x28 virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetDefaultApplicationForMimeType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetDefaultApplicationForMimeType(__IVRApplications___GetDefaultApplicationForMimeType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetDefaultApplicationForMimeType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetDefaultApplicationForMimeType(__IVRApplications___GetDefaultApplicationForMimeType const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetDefaultApplicationForMimeType()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationSupportedMimeTypes
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8303))
// CS Name: ::IVRApplications::_GetApplicationSupportedMimeTypes*
class CORDL_TYPE __IVRApplications___GetApplicationSupportedMimeTypes : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d8920 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d89f8 size 0x14 virtual true final false
inline bool Invoke(::StringW  pchAppKey, ::System::Text::StringBuilder*  pchMimeTypesBuffer, uint32_t  unMimeTypesBuffer) ;

/// @brief Method BeginInvoke addr 0x27d8a0c size 0x98 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchAppKey, ::System::Text::StringBuilder*  pchMimeTypesBuffer, uint32_t  unMimeTypesBuffer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d8aa4 size 0x28 virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationSupportedMimeTypes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetApplicationSupportedMimeTypes(__IVRApplications___GetApplicationSupportedMimeTypes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationSupportedMimeTypes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetApplicationSupportedMimeTypes(__IVRApplications___GetApplicationSupportedMimeTypes const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetApplicationSupportedMimeTypes()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationsThatSupportMimeType
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8304))
// CS Name: ::IVRApplications::_GetApplicationsThatSupportMimeType*
class CORDL_TYPE __IVRApplications___GetApplicationsThatSupportMimeType : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d8acc size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d8ba4 size 0x14 virtual true final false
inline uint32_t Invoke(::StringW  pchMimeType, ::System::Text::StringBuilder*  pchAppKeysThatSupportBuffer, uint32_t  unAppKeysThatSupportBuffer) ;

/// @brief Method BeginInvoke addr 0x27d8bb8 size 0x98 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchMimeType, ::System::Text::StringBuilder*  pchAppKeysThatSupportBuffer, uint32_t  unAppKeysThatSupportBuffer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d8c50 size 0x28 virtual true final false
inline uint32_t EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationsThatSupportMimeType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetApplicationsThatSupportMimeType(__IVRApplications___GetApplicationsThatSupportMimeType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationsThatSupportMimeType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetApplicationsThatSupportMimeType(__IVRApplications___GetApplicationsThatSupportMimeType const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetApplicationsThatSupportMimeType()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationLaunchArguments
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8305))
// CS Name: ::IVRApplications::_GetApplicationLaunchArguments*
class CORDL_TYPE __IVRApplications___GetApplicationLaunchArguments : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d8c78 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d8d3c size 0x14 virtual true final false
inline uint32_t Invoke(uint32_t  unHandle, ::System::Text::StringBuilder*  pchArgs, uint32_t  unArgs) ;

/// @brief Method BeginInvoke addr 0x27d8d50 size 0xa4 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  unHandle, ::System::Text::StringBuilder*  pchArgs, uint32_t  unArgs, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d8df4 size 0x28 virtual true final false
inline uint32_t EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationLaunchArguments", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetApplicationLaunchArguments(__IVRApplications___GetApplicationLaunchArguments && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationLaunchArguments", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetApplicationLaunchArguments(__IVRApplications___GetApplicationLaunchArguments const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetApplicationLaunchArguments()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetStartingApplication
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8306))
// CS Name: ::IVRApplications::_GetStartingApplication*
class CORDL_TYPE __IVRApplications___GetStartingApplication : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetStartingApplication* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d8e1c size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d8ef4 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError Invoke(::System::Text::StringBuilder*  pchAppKeyBuffer, uint32_t  unAppKeyBufferLen) ;

/// @brief Method BeginInvoke addr 0x27d8f08 size 0x94 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder*  pchAppKeyBuffer, uint32_t  unAppKeyBufferLen, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d8f9c size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetStartingApplication", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetStartingApplication(__IVRApplications___GetStartingApplication && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetStartingApplication", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetStartingApplication(__IVRApplications___GetStartingApplication const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetStartingApplication()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetStartingApplication, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetTransitionState
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8307))
// CS Name: ::IVRApplications::_GetTransitionState*
class CORDL_TYPE __IVRApplications___GetTransitionState : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetTransitionState* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d8fc4 size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d9080 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRApplicationTransitionState Invoke() ;

/// @brief Method BeginInvoke addr 0x27d9094 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d90b4 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRApplicationTransitionState EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetTransitionState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetTransitionState(__IVRApplications___GetTransitionState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetTransitionState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetTransitionState(__IVRApplications___GetTransitionState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetTransitionState()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetTransitionState, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_PerformApplicationPrelaunchCheck
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8308))
// CS Name: ::IVRApplications::_PerformApplicationPrelaunchCheck*
class CORDL_TYPE __IVRApplications___PerformApplicationPrelaunchCheck : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d90dc size 0xd4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d91b0 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW  pchAppKey) ;

/// @brief Method BeginInvoke addr 0x27d91c4 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchAppKey, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d91e4 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___PerformApplicationPrelaunchCheck", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___PerformApplicationPrelaunchCheck(__IVRApplications___PerformApplicationPrelaunchCheck && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___PerformApplicationPrelaunchCheck", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___PerformApplicationPrelaunchCheck(__IVRApplications___PerformApplicationPrelaunchCheck const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___PerformApplicationPrelaunchCheck()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationsTransitionStateNameFromEnum
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8309))
// CS Name: ::IVRApplications::_GetApplicationsTransitionStateNameFromEnum*
class CORDL_TYPE __IVRApplications___GetApplicationsTransitionStateNameFromEnum : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d920c size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d92d0 size 0x14 virtual true final false
inline ::cordl_internals::intptr_t Invoke(::OVR::OpenVR::EVRApplicationTransitionState  state) ;

/// @brief Method BeginInvoke addr 0x27d92e4 size 0x84 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRApplicationTransitionState  state, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d9368 size 0x28 virtual true final false
inline ::cordl_internals::intptr_t EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationsTransitionStateNameFromEnum", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetApplicationsTransitionStateNameFromEnum(__IVRApplications___GetApplicationsTransitionStateNameFromEnum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationsTransitionStateNameFromEnum", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetApplicationsTransitionStateNameFromEnum(__IVRApplications___GetApplicationsTransitionStateNameFromEnum const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetApplicationsTransitionStateNameFromEnum()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_IsQuitUserPromptRequested
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8310))
// CS Name: ::IVRApplications::_IsQuitUserPromptRequested*
class CORDL_TYPE __IVRApplications___IsQuitUserPromptRequested : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d9390 size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d944c size 0x14 virtual true final false
inline bool Invoke() ;

/// @brief Method BeginInvoke addr 0x27d9460 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d9480 size 0x28 virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___IsQuitUserPromptRequested", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___IsQuitUserPromptRequested(__IVRApplications___IsQuitUserPromptRequested && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___IsQuitUserPromptRequested", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___IsQuitUserPromptRequested(__IVRApplications___IsQuitUserPromptRequested const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___IsQuitUserPromptRequested()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_LaunchInternalProcess
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8311))
// CS Name: ::IVRApplications::_LaunchInternalProcess*
class CORDL_TYPE __IVRApplications___LaunchInternalProcess : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___LaunchInternalProcess* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d94a8 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d9580 size 0x14 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW  pchBinaryPath, ::StringW  pchArguments, ::StringW  pchWorkingDirectory) ;

/// @brief Method BeginInvoke addr 0x27d9594 size 0x2c virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchBinaryPath, ::StringW  pchArguments, ::StringW  pchWorkingDirectory, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d95c0 size 0x28 virtual true final false
inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchInternalProcess", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___LaunchInternalProcess(__IVRApplications___LaunchInternalProcess && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchInternalProcess", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___LaunchInternalProcess(__IVRApplications___LaunchInternalProcess const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___LaunchInternalProcess()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___LaunchInternalProcess, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetCurrentSceneProcessId
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8312))
// CS Name: ::IVRApplications::_GetCurrentSceneProcessId*
class CORDL_TYPE __IVRApplications___GetCurrentSceneProcessId : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27d95e8 size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27d96a4 size 0x14 virtual true final false
inline uint32_t Invoke() ;

/// @brief Method BeginInvoke addr 0x27d96b8 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27d96d8 size 0x28 virtual true final false
inline uint32_t EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetCurrentSceneProcessId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRApplications___GetCurrentSceneProcessId(__IVRApplications___GetCurrentSceneProcessId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetCurrentSceneProcessId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRApplications___GetCurrentSceneProcessId(__IVRApplications___GetCurrentSceneProcessId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRApplications___GetCurrentSceneProcessId()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRApplications
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8313))
// CS Name: ::OVR.OpenVR::IVRApplications
struct CORDL_TYPE IVRApplications : public ::bs_hook::ValueTypeWrapper<0xf8> {
public:
// Declarations
using _GetCurrentSceneProcessId = ::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId;

using _LaunchInternalProcess = ::OVR::OpenVR::__IVRApplications___LaunchInternalProcess;

using _IsQuitUserPromptRequested = ::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested;

using _GetApplicationsTransitionStateNameFromEnum = ::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum;

using _PerformApplicationPrelaunchCheck = ::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck;

using _GetTransitionState = ::OVR::OpenVR::__IVRApplications___GetTransitionState;

using _GetStartingApplication = ::OVR::OpenVR::__IVRApplications___GetStartingApplication;

using _GetApplicationLaunchArguments = ::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments;

using _GetApplicationsThatSupportMimeType = ::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType;

using _GetApplicationSupportedMimeTypes = ::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes;

using _GetDefaultApplicationForMimeType = ::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType;

using _SetDefaultApplicationForMimeType = ::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType;

using _GetApplicationAutoLaunch = ::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch;

using _SetApplicationAutoLaunch = ::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch;

using _GetApplicationPropertyUint64 = ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64;

using _GetApplicationPropertyBool = ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool;

using _GetApplicationPropertyString = ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString;

using _GetApplicationsErrorNameFromEnum = ::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum;

using _GetApplicationProcessId = ::OVR::OpenVR::__IVRApplications___GetApplicationProcessId;

using _IdentifyApplication = ::OVR::OpenVR::__IVRApplications___IdentifyApplication;

using _CancelApplicationLaunch = ::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch;

using _LaunchDashboardOverlay = ::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay;

using _LaunchApplicationFromMimeType = ::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType;

using _LaunchTemplateApplication = ::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication;

using _LaunchApplication = ::OVR::OpenVR::__IVRApplications___LaunchApplication;

using _GetApplicationKeyByProcessId = ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId;

using _GetApplicationKeyByIndex = ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex;

using _GetApplicationCount = ::OVR::OpenVR::__IVRApplications___GetApplicationCount;

using _IsApplicationInstalled = ::OVR::OpenVR::__IVRApplications___IsApplicationInstalled;

using _RemoveApplicationManifest = ::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest;

using _AddApplicationManifest = ::OVR::OpenVR::__IVRApplications___AddApplicationManifest;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xf8};

/// @brief Field AddApplicationManifest offset 0x0
 __declspec(property(get=__get_AddApplicationManifest, put=__set_AddApplicationManifest)) ::OVR::OpenVR::__IVRApplications___AddApplicationManifest*  AddApplicationManifest;

/// @brief Field RemoveApplicationManifest offset 0x8
 __declspec(property(get=__get_RemoveApplicationManifest, put=__set_RemoveApplicationManifest)) ::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest*  RemoveApplicationManifest;

/// @brief Field IsApplicationInstalled offset 0x10
 __declspec(property(get=__get_IsApplicationInstalled, put=__set_IsApplicationInstalled)) ::OVR::OpenVR::__IVRApplications___IsApplicationInstalled*  IsApplicationInstalled;

/// @brief Field GetApplicationCount offset 0x18
 __declspec(property(get=__get_GetApplicationCount, put=__set_GetApplicationCount)) ::OVR::OpenVR::__IVRApplications___GetApplicationCount*  GetApplicationCount;

/// @brief Field GetApplicationKeyByIndex offset 0x20
 __declspec(property(get=__get_GetApplicationKeyByIndex, put=__set_GetApplicationKeyByIndex)) ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex*  GetApplicationKeyByIndex;

/// @brief Field GetApplicationKeyByProcessId offset 0x28
 __declspec(property(get=__get_GetApplicationKeyByProcessId, put=__set_GetApplicationKeyByProcessId)) ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId*  GetApplicationKeyByProcessId;

/// @brief Field LaunchApplication offset 0x30
 __declspec(property(get=__get_LaunchApplication, put=__set_LaunchApplication)) ::OVR::OpenVR::__IVRApplications___LaunchApplication*  LaunchApplication;

/// @brief Field LaunchTemplateApplication offset 0x38
 __declspec(property(get=__get_LaunchTemplateApplication, put=__set_LaunchTemplateApplication)) ::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication*  LaunchTemplateApplication;

/// @brief Field LaunchApplicationFromMimeType offset 0x40
 __declspec(property(get=__get_LaunchApplicationFromMimeType, put=__set_LaunchApplicationFromMimeType)) ::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType*  LaunchApplicationFromMimeType;

/// @brief Field LaunchDashboardOverlay offset 0x48
 __declspec(property(get=__get_LaunchDashboardOverlay, put=__set_LaunchDashboardOverlay)) ::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay*  LaunchDashboardOverlay;

/// @brief Field CancelApplicationLaunch offset 0x50
 __declspec(property(get=__get_CancelApplicationLaunch, put=__set_CancelApplicationLaunch)) ::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch*  CancelApplicationLaunch;

/// @brief Field IdentifyApplication offset 0x58
 __declspec(property(get=__get_IdentifyApplication, put=__set_IdentifyApplication)) ::OVR::OpenVR::__IVRApplications___IdentifyApplication*  IdentifyApplication;

/// @brief Field GetApplicationProcessId offset 0x60
 __declspec(property(get=__get_GetApplicationProcessId, put=__set_GetApplicationProcessId)) ::OVR::OpenVR::__IVRApplications___GetApplicationProcessId*  GetApplicationProcessId;

/// @brief Field GetApplicationsErrorNameFromEnum offset 0x68
 __declspec(property(get=__get_GetApplicationsErrorNameFromEnum, put=__set_GetApplicationsErrorNameFromEnum)) ::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum*  GetApplicationsErrorNameFromEnum;

/// @brief Field GetApplicationPropertyString offset 0x70
 __declspec(property(get=__get_GetApplicationPropertyString, put=__set_GetApplicationPropertyString)) ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString*  GetApplicationPropertyString;

/// @brief Field GetApplicationPropertyBool offset 0x78
 __declspec(property(get=__get_GetApplicationPropertyBool, put=__set_GetApplicationPropertyBool)) ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool*  GetApplicationPropertyBool;

/// @brief Field GetApplicationPropertyUint64 offset 0x80
 __declspec(property(get=__get_GetApplicationPropertyUint64, put=__set_GetApplicationPropertyUint64)) ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64*  GetApplicationPropertyUint64;

/// @brief Field SetApplicationAutoLaunch offset 0x88
 __declspec(property(get=__get_SetApplicationAutoLaunch, put=__set_SetApplicationAutoLaunch)) ::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch*  SetApplicationAutoLaunch;

/// @brief Field GetApplicationAutoLaunch offset 0x90
 __declspec(property(get=__get_GetApplicationAutoLaunch, put=__set_GetApplicationAutoLaunch)) ::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch*  GetApplicationAutoLaunch;

/// @brief Field SetDefaultApplicationForMimeType offset 0x98
 __declspec(property(get=__get_SetDefaultApplicationForMimeType, put=__set_SetDefaultApplicationForMimeType)) ::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType*  SetDefaultApplicationForMimeType;

/// @brief Field GetDefaultApplicationForMimeType offset 0xa0
 __declspec(property(get=__get_GetDefaultApplicationForMimeType, put=__set_GetDefaultApplicationForMimeType)) ::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType*  GetDefaultApplicationForMimeType;

/// @brief Field GetApplicationSupportedMimeTypes offset 0xa8
 __declspec(property(get=__get_GetApplicationSupportedMimeTypes, put=__set_GetApplicationSupportedMimeTypes)) ::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes*  GetApplicationSupportedMimeTypes;

/// @brief Field GetApplicationsThatSupportMimeType offset 0xb0
 __declspec(property(get=__get_GetApplicationsThatSupportMimeType, put=__set_GetApplicationsThatSupportMimeType)) ::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType*  GetApplicationsThatSupportMimeType;

/// @brief Field GetApplicationLaunchArguments offset 0xb8
 __declspec(property(get=__get_GetApplicationLaunchArguments, put=__set_GetApplicationLaunchArguments)) ::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments*  GetApplicationLaunchArguments;

/// @brief Field GetStartingApplication offset 0xc0
 __declspec(property(get=__get_GetStartingApplication, put=__set_GetStartingApplication)) ::OVR::OpenVR::__IVRApplications___GetStartingApplication*  GetStartingApplication;

/// @brief Field GetTransitionState offset 0xc8
 __declspec(property(get=__get_GetTransitionState, put=__set_GetTransitionState)) ::OVR::OpenVR::__IVRApplications___GetTransitionState*  GetTransitionState;

/// @brief Field PerformApplicationPrelaunchCheck offset 0xd0
 __declspec(property(get=__get_PerformApplicationPrelaunchCheck, put=__set_PerformApplicationPrelaunchCheck)) ::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck*  PerformApplicationPrelaunchCheck;

/// @brief Field GetApplicationsTransitionStateNameFromEnum offset 0xd8
 __declspec(property(get=__get_GetApplicationsTransitionStateNameFromEnum, put=__set_GetApplicationsTransitionStateNameFromEnum)) ::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum*  GetApplicationsTransitionStateNameFromEnum;

/// @brief Field IsQuitUserPromptRequested offset 0xe0
 __declspec(property(get=__get_IsQuitUserPromptRequested, put=__set_IsQuitUserPromptRequested)) ::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested*  IsQuitUserPromptRequested;

/// @brief Field LaunchInternalProcess offset 0xe8
 __declspec(property(get=__get_LaunchInternalProcess, put=__set_LaunchInternalProcess)) ::OVR::OpenVR::__IVRApplications___LaunchInternalProcess*  LaunchInternalProcess;

/// @brief Field GetCurrentSceneProcessId offset 0xf0
 __declspec(property(get=__get_GetCurrentSceneProcessId, put=__set_GetCurrentSceneProcessId)) ::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId*  GetCurrentSceneProcessId;

constexpr void __set_AddApplicationManifest(::OVR::OpenVR::__IVRApplications___AddApplicationManifest*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___AddApplicationManifest* __get_AddApplicationManifest() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___AddApplicationManifest*> __get_AddApplicationManifest() const;

constexpr void __set_RemoveApplicationManifest(::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest* __get_RemoveApplicationManifest() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest*> __get_RemoveApplicationManifest() const;

constexpr void __set_IsApplicationInstalled(::OVR::OpenVR::__IVRApplications___IsApplicationInstalled*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___IsApplicationInstalled* __get_IsApplicationInstalled() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___IsApplicationInstalled*> __get_IsApplicationInstalled() const;

constexpr void __set_GetApplicationCount(::OVR::OpenVR::__IVRApplications___GetApplicationCount*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetApplicationCount* __get_GetApplicationCount() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetApplicationCount*> __get_GetApplicationCount() const;

constexpr void __set_GetApplicationKeyByIndex(::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex* __get_GetApplicationKeyByIndex() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex*> __get_GetApplicationKeyByIndex() const;

constexpr void __set_GetApplicationKeyByProcessId(::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId* __get_GetApplicationKeyByProcessId() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId*> __get_GetApplicationKeyByProcessId() const;

constexpr void __set_LaunchApplication(::OVR::OpenVR::__IVRApplications___LaunchApplication*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___LaunchApplication* __get_LaunchApplication() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___LaunchApplication*> __get_LaunchApplication() const;

constexpr void __set_LaunchTemplateApplication(::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication* __get_LaunchTemplateApplication() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication*> __get_LaunchTemplateApplication() const;

constexpr void __set_LaunchApplicationFromMimeType(::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType* __get_LaunchApplicationFromMimeType() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType*> __get_LaunchApplicationFromMimeType() const;

constexpr void __set_LaunchDashboardOverlay(::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay* __get_LaunchDashboardOverlay() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay*> __get_LaunchDashboardOverlay() const;

constexpr void __set_CancelApplicationLaunch(::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch* __get_CancelApplicationLaunch() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch*> __get_CancelApplicationLaunch() const;

constexpr void __set_IdentifyApplication(::OVR::OpenVR::__IVRApplications___IdentifyApplication*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___IdentifyApplication* __get_IdentifyApplication() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___IdentifyApplication*> __get_IdentifyApplication() const;

constexpr void __set_GetApplicationProcessId(::OVR::OpenVR::__IVRApplications___GetApplicationProcessId*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetApplicationProcessId* __get_GetApplicationProcessId() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetApplicationProcessId*> __get_GetApplicationProcessId() const;

constexpr void __set_GetApplicationsErrorNameFromEnum(::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum* __get_GetApplicationsErrorNameFromEnum() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum*> __get_GetApplicationsErrorNameFromEnum() const;

constexpr void __set_GetApplicationPropertyString(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString* __get_GetApplicationPropertyString() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString*> __get_GetApplicationPropertyString() const;

constexpr void __set_GetApplicationPropertyBool(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool* __get_GetApplicationPropertyBool() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool*> __get_GetApplicationPropertyBool() const;

constexpr void __set_GetApplicationPropertyUint64(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64* __get_GetApplicationPropertyUint64() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64*> __get_GetApplicationPropertyUint64() const;

constexpr void __set_SetApplicationAutoLaunch(::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch* __get_SetApplicationAutoLaunch() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch*> __get_SetApplicationAutoLaunch() const;

constexpr void __set_GetApplicationAutoLaunch(::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch* __get_GetApplicationAutoLaunch() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch*> __get_GetApplicationAutoLaunch() const;

constexpr void __set_SetDefaultApplicationForMimeType(::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType* __get_SetDefaultApplicationForMimeType() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType*> __get_SetDefaultApplicationForMimeType() const;

constexpr void __set_GetDefaultApplicationForMimeType(::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType* __get_GetDefaultApplicationForMimeType() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType*> __get_GetDefaultApplicationForMimeType() const;

constexpr void __set_GetApplicationSupportedMimeTypes(::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes* __get_GetApplicationSupportedMimeTypes() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes*> __get_GetApplicationSupportedMimeTypes() const;

constexpr void __set_GetApplicationsThatSupportMimeType(::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType* __get_GetApplicationsThatSupportMimeType() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType*> __get_GetApplicationsThatSupportMimeType() const;

constexpr void __set_GetApplicationLaunchArguments(::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments* __get_GetApplicationLaunchArguments() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments*> __get_GetApplicationLaunchArguments() const;

constexpr void __set_GetStartingApplication(::OVR::OpenVR::__IVRApplications___GetStartingApplication*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetStartingApplication* __get_GetStartingApplication() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetStartingApplication*> __get_GetStartingApplication() const;

constexpr void __set_GetTransitionState(::OVR::OpenVR::__IVRApplications___GetTransitionState*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetTransitionState* __get_GetTransitionState() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetTransitionState*> __get_GetTransitionState() const;

constexpr void __set_PerformApplicationPrelaunchCheck(::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck* __get_PerformApplicationPrelaunchCheck() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck*> __get_PerformApplicationPrelaunchCheck() const;

constexpr void __set_GetApplicationsTransitionStateNameFromEnum(::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum* __get_GetApplicationsTransitionStateNameFromEnum() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum*> __get_GetApplicationsTransitionStateNameFromEnum() const;

constexpr void __set_IsQuitUserPromptRequested(::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested* __get_IsQuitUserPromptRequested() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested*> __get_IsQuitUserPromptRequested() const;

constexpr void __set_LaunchInternalProcess(::OVR::OpenVR::__IVRApplications___LaunchInternalProcess*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___LaunchInternalProcess* __get_LaunchInternalProcess() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___LaunchInternalProcess*> __get_LaunchInternalProcess() const;

constexpr void __set_GetCurrentSceneProcessId(::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId*  value) ;

constexpr ::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId* __get_GetCurrentSceneProcessId() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId*> __get_GetCurrentSceneProcessId() const;

// Ctor Parameters [CppParam { name: "AddApplicationManifest", ty: "::OVR::OpenVR::__IVRApplications___AddApplicationManifest*", modifiers: "", def_value: None }, CppParam { name: "RemoveApplicationManifest", ty: "::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest*", modifiers: "", def_value: None }, CppParam { name: "IsApplicationInstalled", ty: "::OVR::OpenVR::__IVRApplications___IsApplicationInstalled*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationCount", ty: "::OVR::OpenVR::__IVRApplications___GetApplicationCount*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationKeyByIndex", ty: "::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationKeyByProcessId", ty: "::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId*", modifiers: "", def_value: None }, CppParam { name: "LaunchApplication", ty: "::OVR::OpenVR::__IVRApplications___LaunchApplication*", modifiers: "", def_value: None }, CppParam { name: "LaunchTemplateApplication", ty: "::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication*", modifiers: "", def_value: None }, CppParam { name: "LaunchApplicationFromMimeType", ty: "::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType*", modifiers: "", def_value: None }, CppParam { name: "LaunchDashboardOverlay", ty: "::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay*", modifiers: "", def_value: None }, CppParam { name: "CancelApplicationLaunch", ty: "::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch*", modifiers: "", def_value: None }, CppParam { name: "IdentifyApplication", ty: "::OVR::OpenVR::__IVRApplications___IdentifyApplication*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationProcessId", ty: "::OVR::OpenVR::__IVRApplications___GetApplicationProcessId*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationsErrorNameFromEnum", ty: "::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationPropertyString", ty: "::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationPropertyBool", ty: "::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationPropertyUint64", ty: "::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64*", modifiers: "", def_value: None }, CppParam { name: "SetApplicationAutoLaunch", ty: "::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationAutoLaunch", ty: "::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch*", modifiers: "", def_value: None }, CppParam { name: "SetDefaultApplicationForMimeType", ty: "::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType*", modifiers: "", def_value: None }, CppParam { name: "GetDefaultApplicationForMimeType", ty: "::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationSupportedMimeTypes", ty: "::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationsThatSupportMimeType", ty: "::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationLaunchArguments", ty: "::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments*", modifiers: "", def_value: None }, CppParam { name: "GetStartingApplication", ty: "::OVR::OpenVR::__IVRApplications___GetStartingApplication*", modifiers: "", def_value: None }, CppParam { name: "GetTransitionState", ty: "::OVR::OpenVR::__IVRApplications___GetTransitionState*", modifiers: "", def_value: None }, CppParam { name: "PerformApplicationPrelaunchCheck", ty: "::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationsTransitionStateNameFromEnum", ty: "::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "IsQuitUserPromptRequested", ty: "::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested*", modifiers: "", def_value: None }, CppParam { name: "LaunchInternalProcess", ty: "::OVR::OpenVR::__IVRApplications___LaunchInternalProcess*", modifiers: "", def_value: None }, CppParam { name: "GetCurrentSceneProcessId", ty: "::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId*", modifiers: "", def_value: None }]
constexpr IVRApplications(::OVR::OpenVR::__IVRApplications___AddApplicationManifest*  AddApplicationManifest, ::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest*  RemoveApplicationManifest, ::OVR::OpenVR::__IVRApplications___IsApplicationInstalled*  IsApplicationInstalled, ::OVR::OpenVR::__IVRApplications___GetApplicationCount*  GetApplicationCount, ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex*  GetApplicationKeyByIndex, ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId*  GetApplicationKeyByProcessId, ::OVR::OpenVR::__IVRApplications___LaunchApplication*  LaunchApplication, ::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication*  LaunchTemplateApplication, ::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType*  LaunchApplicationFromMimeType, ::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay*  LaunchDashboardOverlay, ::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch*  CancelApplicationLaunch, ::OVR::OpenVR::__IVRApplications___IdentifyApplication*  IdentifyApplication, ::OVR::OpenVR::__IVRApplications___GetApplicationProcessId*  GetApplicationProcessId, ::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum*  GetApplicationsErrorNameFromEnum, ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString*  GetApplicationPropertyString, ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool*  GetApplicationPropertyBool, ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64*  GetApplicationPropertyUint64, ::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch*  SetApplicationAutoLaunch, ::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch*  GetApplicationAutoLaunch, ::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType*  SetDefaultApplicationForMimeType, ::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType*  GetDefaultApplicationForMimeType, ::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes*  GetApplicationSupportedMimeTypes, ::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType*  GetApplicationsThatSupportMimeType, ::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments*  GetApplicationLaunchArguments, ::OVR::OpenVR::__IVRApplications___GetStartingApplication*  GetStartingApplication, ::OVR::OpenVR::__IVRApplications___GetTransitionState*  GetTransitionState, ::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck*  PerformApplicationPrelaunchCheck, ::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum*  GetApplicationsTransitionStateNameFromEnum, ::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested*  IsQuitUserPromptRequested, ::OVR::OpenVR::__IVRApplications___LaunchInternalProcess*  LaunchInternalProcess, ::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId*  GetCurrentSceneProcessId) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IVRApplications(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xf8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IVRApplications()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications, 0xf8>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___AddApplicationManifest);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___AddApplicationManifest*, "OVR.OpenVR", "IVRApplications/_AddApplicationManifest");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch*, "OVR.OpenVR", "IVRApplications/_CancelApplicationLaunch");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch*, "OVR.OpenVR", "IVRApplications/_GetApplicationAutoLaunch");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationCount);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationCount*, "OVR.OpenVR", "IVRApplications/_GetApplicationCount");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex*, "OVR.OpenVR", "IVRApplications/_GetApplicationKeyByIndex");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId*, "OVR.OpenVR", "IVRApplications/_GetApplicationKeyByProcessId");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments*, "OVR.OpenVR", "IVRApplications/_GetApplicationLaunchArguments");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationProcessId);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationProcessId*, "OVR.OpenVR", "IVRApplications/_GetApplicationProcessId");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool*, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyBool");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString*, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyString");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64*, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyUint64");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes*, "OVR.OpenVR", "IVRApplications/_GetApplicationSupportedMimeTypes");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum*, "OVR.OpenVR", "IVRApplications/_GetApplicationsErrorNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType*, "OVR.OpenVR", "IVRApplications/_GetApplicationsThatSupportMimeType");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum*, "OVR.OpenVR", "IVRApplications/_GetApplicationsTransitionStateNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId*, "OVR.OpenVR", "IVRApplications/_GetCurrentSceneProcessId");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType*, "OVR.OpenVR", "IVRApplications/_GetDefaultApplicationForMimeType");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetStartingApplication);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetStartingApplication*, "OVR.OpenVR", "IVRApplications/_GetStartingApplication");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetTransitionState);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetTransitionState*, "OVR.OpenVR", "IVRApplications/_GetTransitionState");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___IdentifyApplication);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___IdentifyApplication*, "OVR.OpenVR", "IVRApplications/_IdentifyApplication");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___IsApplicationInstalled);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___IsApplicationInstalled*, "OVR.OpenVR", "IVRApplications/_IsApplicationInstalled");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested*, "OVR.OpenVR", "IVRApplications/_IsQuitUserPromptRequested");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___LaunchApplication);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___LaunchApplication*, "OVR.OpenVR", "IVRApplications/_LaunchApplication");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType*, "OVR.OpenVR", "IVRApplications/_LaunchApplicationFromMimeType");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay*, "OVR.OpenVR", "IVRApplications/_LaunchDashboardOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___LaunchInternalProcess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___LaunchInternalProcess*, "OVR.OpenVR", "IVRApplications/_LaunchInternalProcess");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication*, "OVR.OpenVR", "IVRApplications/_LaunchTemplateApplication");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck*, "OVR.OpenVR", "IVRApplications/_PerformApplicationPrelaunchCheck");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest*, "OVR.OpenVR", "IVRApplications/_RemoveApplicationManifest");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch*, "OVR.OpenVR", "IVRApplications/_SetApplicationAutoLaunch");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType*, "OVR.OpenVR", "IVRApplications/_SetDefaultApplicationForMimeType");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications, "OVR.OpenVR", "IVRApplications");
