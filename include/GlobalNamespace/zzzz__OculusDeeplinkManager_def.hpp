#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OculusDeeplinkManager)
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
namespace GlobalNamespace {
class IDeeplinkManager;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace GlobalNamespace {
class Deeplink;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Oculus::Platform::Models {
class LaunchDetails;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusDeeplinkManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusDeeplinkManager);
// Type: ::OculusDeeplinkManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4159))
// CS Name: ::OculusDeeplinkManager*
class CORDL_TYPE OculusDeeplinkManager : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field didReceiveDeeplinkEvent offset 0x10
 __declspec(property(get=__get_didReceiveDeeplinkEvent, put=__set_didReceiveDeeplinkEvent)) ::System::Action_1<::GlobalNamespace::Deeplink*>*  didReceiveDeeplinkEvent;

/// @brief Field _currentDeeplink offset 0x18
 __declspec(property(get=__get__currentDeeplink, put=__set__currentDeeplink)) ::GlobalNamespace::Deeplink*  _currentDeeplink;

/// @brief Field _oculusPlatformWasInitialized offset 0x20
 __declspec(property(get=__get__oculusPlatformWasInitialized, put=__set__oculusPlatformWasInitialized)) bool  _oculusPlatformWasInitialized;

 __declspec(property(get=get_currentDeeplink)) ::GlobalNamespace::Deeplink*  currentDeeplink;

/// @brief Convert operator to "::GlobalNamespace::IDeeplinkManager"
constexpr operator  ::GlobalNamespace::IDeeplinkManager*() noexcept;

constexpr void __set_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::Deeplink*>* __get_didReceiveDeeplinkEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::Deeplink*>*> __get_didReceiveDeeplinkEvent() const;

constexpr void __set__currentDeeplink(::GlobalNamespace::Deeplink*  value) ;

constexpr ::GlobalNamespace::Deeplink* __get__currentDeeplink() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Deeplink*> __get__currentDeeplink() const;

constexpr void __set__oculusPlatformWasInitialized(bool  value) ;

constexpr bool& __get__oculusPlatformWasInitialized() ;

constexpr bool const& __get__oculusPlatformWasInitialized() const;

/// @brief Method add_didReceiveDeeplinkEvent addr 0x223dde8 size 0xb0 virtual true final true
inline void add_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>*  value) ;

/// @brief Method remove_didReceiveDeeplinkEvent addr 0x223de98 size 0xb0 virtual true final true
inline void remove_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>*  value) ;

/// @brief Method get_currentDeeplink addr 0x223df48 size 0x8 virtual true final true
inline ::GlobalNamespace::Deeplink* get_currentDeeplink() ;

/// @brief Method Init addr 0x223df50 size 0x80 virtual false final false
inline void Init() ;

/// @brief Method OculusPlatformWasInitialized addr 0x223dfd0 size 0x18 virtual false final false
inline void OculusPlatformWasInitialized() ;

/// @brief Method SetJoinIntentReceivedNotificationCallback addr 0x223dfe8 size 0xac virtual false final false
inline void SetJoinIntentReceivedNotificationCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*  message) ;

/// @brief Method UpdateDeeplinkMessage addr 0x223e0ec size 0x238 virtual false final false
inline void UpdateDeeplinkMessage(::Oculus::Platform::Models::GroupPresenceJoinIntent*  joinIntent, ::Oculus::Platform::Models::LaunchDetails*  launchDetails) ;

/// @brief Method IsAtLeastOneFieldPopulated addr 0x223e324 size 0x74 virtual false final false
inline bool IsAtLeastOneFieldPopulated(::GlobalNamespace::Deeplink*  deeplink) ;

/// @brief Method Log addr 0x223e094 size 0x58 virtual false final false
static inline void Log(::StringW  message) ;

static inline ::GlobalNamespace::OculusDeeplinkManager* New_ctor() ;

/// @brief Method .ctor addr 0x223e398 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OculusDeeplinkManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OculusDeeplinkManager(OculusDeeplinkManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OculusDeeplinkManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OculusDeeplinkManager(OculusDeeplinkManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OculusDeeplinkManager()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusDeeplinkManager, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusDeeplinkManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusDeeplinkManager*, "", "OculusDeeplinkManager");
