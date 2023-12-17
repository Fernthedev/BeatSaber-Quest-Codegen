#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZenjectSettings)
namespace Zenject {
class __ZenjectSettings__SignalSettings;
}
namespace Zenject {
struct ValidationErrorResponses;
}
namespace Zenject {
struct RootResolveMethods;
}
namespace Zenject {
struct SignalMissingHandlerResponses;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct SignalDefaultSyncModes;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class ZenjectSettings;
}
namespace Zenject {
class __ZenjectSettings__SignalSettings;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ZenjectSettings);
MARK_REF_PTR_T(::Zenject::__ZenjectSettings__SignalSettings);
// Type: ::SignalSettings
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11173))
// CS Name: ::ZenjectSettings::SignalSettings*
class CORDL_TYPE __ZenjectSettings__SignalSettings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _defaultSyncMode offset 0x10
 __declspec(property(get=__get__defaultSyncMode, put=__set__defaultSyncMode)) ::Zenject::SignalDefaultSyncModes  _defaultSyncMode;

/// @brief Field _missingHandlerDefaultResponse offset 0x14
 __declspec(property(get=__get__missingHandlerDefaultResponse, put=__set__missingHandlerDefaultResponse)) ::Zenject::SignalMissingHandlerResponses  _missingHandlerDefaultResponse;

/// @brief Field _requireStrictUnsubscribe offset 0x18
 __declspec(property(get=__get__requireStrictUnsubscribe, put=__set__requireStrictUnsubscribe)) bool  _requireStrictUnsubscribe;

/// @brief Field _defaultAsyncTickPriority offset 0x1c
 __declspec(property(get=__get__defaultAsyncTickPriority, put=__set__defaultAsyncTickPriority)) int32_t  _defaultAsyncTickPriority;

 __declspec(property(get=get_DefaultAsyncTickPriority)) int32_t  DefaultAsyncTickPriority;

 __declspec(property(get=get_DefaultSyncMode)) ::Zenject::SignalDefaultSyncModes  DefaultSyncMode;

 __declspec(property(get=get_MissingHandlerDefaultResponse)) ::Zenject::SignalMissingHandlerResponses  MissingHandlerDefaultResponse;

 __declspec(property(get=get_RequireStrictUnsubscribe)) bool  RequireStrictUnsubscribe;

static inline void setStaticF_Default(::Zenject::__ZenjectSettings__SignalSettings*  value) ;

static inline ::Zenject::__ZenjectSettings__SignalSettings* getStaticF_Default() ;

constexpr void __set__defaultSyncMode(::Zenject::SignalDefaultSyncModes  value) ;

constexpr ::Zenject::SignalDefaultSyncModes& __get__defaultSyncMode() ;

constexpr ::Zenject::SignalDefaultSyncModes const& __get__defaultSyncMode() const;

constexpr void __set__missingHandlerDefaultResponse(::Zenject::SignalMissingHandlerResponses  value) ;

constexpr ::Zenject::SignalMissingHandlerResponses& __get__missingHandlerDefaultResponse() ;

constexpr ::Zenject::SignalMissingHandlerResponses const& __get__missingHandlerDefaultResponse() const;

constexpr void __set__requireStrictUnsubscribe(bool  value) ;

constexpr bool& __get__requireStrictUnsubscribe() ;

constexpr bool const& __get__requireStrictUnsubscribe() const;

constexpr void __set__defaultAsyncTickPriority(int32_t  value) ;

constexpr int32_t& __get__defaultAsyncTickPriority() ;

constexpr int32_t const& __get__defaultAsyncTickPriority() const;

static inline ::Zenject::__ZenjectSettings__SignalSettings* New_ctor(::Zenject::SignalDefaultSyncModes  defaultSyncMode, ::Zenject::SignalMissingHandlerResponses  missingHandlerDefaultResponse, bool  requireStrictUnsubscribe, int32_t  defaultAsyncTickPriority) ;

/// @brief Method .ctor addr 0x2f0468c size 0x44 virtual false final false
inline void _ctor(::Zenject::SignalDefaultSyncModes  defaultSyncMode, ::Zenject::SignalMissingHandlerResponses  missingHandlerDefaultResponse, bool  requireStrictUnsubscribe, int32_t  defaultAsyncTickPriority) ;

static inline ::Zenject::__ZenjectSettings__SignalSettings* New_ctor() ;

/// @brief Method .ctor addr 0x2f046d0 size 0x30 virtual false final false
inline void _ctor() ;

/// @brief Method get_DefaultAsyncTickPriority addr 0x2f04700 size 0x8 virtual false final false
inline int32_t get_DefaultAsyncTickPriority() ;

/// @brief Method get_DefaultSyncMode addr 0x2f04708 size 0x8 virtual false final false
inline ::Zenject::SignalDefaultSyncModes get_DefaultSyncMode() ;

/// @brief Method get_MissingHandlerDefaultResponse addr 0x2f04710 size 0x8 virtual false final false
inline ::Zenject::SignalMissingHandlerResponses get_MissingHandlerDefaultResponse() ;

/// @brief Method get_RequireStrictUnsubscribe addr 0x2f04718 size 0x8 virtual false final false
inline bool get_RequireStrictUnsubscribe() ;

/// @brief Method __zenCreate addr 0x2f0479c size 0x74 virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f04810 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ZenjectSettings__SignalSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ZenjectSettings__SignalSettings(__ZenjectSettings__SignalSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ZenjectSettings__SignalSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ZenjectSettings__SignalSettings(__ZenjectSettings__SignalSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ZenjectSettings__SignalSettings()  = default;
public:


// Fields

// Static field Default


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ZenjectSettings__SignalSettings, 0x20>, "Size mismatch!");

} // namespace end def Zenject
// Type: Zenject::ZenjectSettings
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11174))
// CS Name: ::Zenject::ZenjectSettings*
class CORDL_TYPE ZenjectSettings : public ::System::Object {
public:
// Declarations
using SignalSettings = ::Zenject::__ZenjectSettings__SignalSettings;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _ensureDeterministicDestructionOrderOnApplicationQuit offset 0x10
 __declspec(property(get=__get__ensureDeterministicDestructionOrderOnApplicationQuit, put=__set__ensureDeterministicDestructionOrderOnApplicationQuit)) bool  _ensureDeterministicDestructionOrderOnApplicationQuit;

/// @brief Field _displayWarningWhenResolvingDuringInstall offset 0x11
 __declspec(property(get=__get__displayWarningWhenResolvingDuringInstall, put=__set__displayWarningWhenResolvingDuringInstall)) bool  _displayWarningWhenResolvingDuringInstall;

/// @brief Field _validationRootResolveMethod offset 0x14
 __declspec(property(get=__get__validationRootResolveMethod, put=__set__validationRootResolveMethod)) ::Zenject::RootResolveMethods  _validationRootResolveMethod;

/// @brief Field _validationErrorResponse offset 0x18
 __declspec(property(get=__get__validationErrorResponse, put=__set__validationErrorResponse)) ::Zenject::ValidationErrorResponses  _validationErrorResponse;

/// @brief Field _signalSettings offset 0x20
 __declspec(property(get=__get__signalSettings, put=__set__signalSettings)) ::Zenject::__ZenjectSettings__SignalSettings*  _signalSettings;

 __declspec(property(get=get_Signals)) ::Zenject::__ZenjectSettings__SignalSettings*  Signals;

 __declspec(property(get=get_ValidationErrorResponse)) ::Zenject::ValidationErrorResponses  ValidationErrorResponse;

 __declspec(property(get=get_ValidationRootResolveMethod)) ::Zenject::RootResolveMethods  ValidationRootResolveMethod;

 __declspec(property(get=get_DisplayWarningWhenResolvingDuringInstall)) bool  DisplayWarningWhenResolvingDuringInstall;

 __declspec(property(get=get_EnsureDeterministicDestructionOrderOnApplicationQuit)) bool  EnsureDeterministicDestructionOrderOnApplicationQuit;

static inline void setStaticF_Default(::Zenject::ZenjectSettings*  value) ;

static inline ::Zenject::ZenjectSettings* getStaticF_Default() ;

constexpr void __set__ensureDeterministicDestructionOrderOnApplicationQuit(bool  value) ;

constexpr bool& __get__ensureDeterministicDestructionOrderOnApplicationQuit() ;

constexpr bool const& __get__ensureDeterministicDestructionOrderOnApplicationQuit() const;

constexpr void __set__displayWarningWhenResolvingDuringInstall(bool  value) ;

constexpr bool& __get__displayWarningWhenResolvingDuringInstall() ;

constexpr bool const& __get__displayWarningWhenResolvingDuringInstall() const;

constexpr void __set__validationRootResolveMethod(::Zenject::RootResolveMethods  value) ;

constexpr ::Zenject::RootResolveMethods& __get__validationRootResolveMethod() ;

constexpr ::Zenject::RootResolveMethods const& __get__validationRootResolveMethod() const;

constexpr void __set__validationErrorResponse(::Zenject::ValidationErrorResponses  value) ;

constexpr ::Zenject::ValidationErrorResponses& __get__validationErrorResponse() ;

constexpr ::Zenject::ValidationErrorResponses const& __get__validationErrorResponse() const;

constexpr void __set__signalSettings(::Zenject::__ZenjectSettings__SignalSettings*  value) ;

constexpr ::Zenject::__ZenjectSettings__SignalSettings* __get__signalSettings() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::__ZenjectSettings__SignalSettings*> __get__signalSettings() const;

static inline ::Zenject::ZenjectSettings* New_ctor(::Zenject::ValidationErrorResponses  validationErrorResponse, ::Zenject::RootResolveMethods  validationRootResolveMethod, bool  displayWarningWhenResolvingDuringInstall, bool  ensureDeterministicDestructionOrderOnApplicationQuit, ::Zenject::__ZenjectSettings__SignalSettings*  signalSettings) ;

/// @brief Method .ctor addr 0x2f04538 size 0xa0 virtual false final false
inline void _ctor(::Zenject::ValidationErrorResponses  validationErrorResponse, ::Zenject::RootResolveMethods  validationRootResolveMethod, bool  displayWarningWhenResolvingDuringInstall, bool  ensureDeterministicDestructionOrderOnApplicationQuit, ::Zenject::__ZenjectSettings__SignalSettings*  signalSettings) ;

static inline ::Zenject::ZenjectSettings* New_ctor() ;

/// @brief Method .ctor addr 0x2f045d8 size 0x18 virtual false final false
inline void _ctor() ;

/// @brief Method get_Signals addr 0x2f045f0 size 0x8 virtual false final false
inline ::Zenject::__ZenjectSettings__SignalSettings* get_Signals() ;

/// @brief Method get_ValidationErrorResponse addr 0x2f045f8 size 0x8 virtual false final false
inline ::Zenject::ValidationErrorResponses get_ValidationErrorResponse() ;

/// @brief Method get_ValidationRootResolveMethod addr 0x2f04600 size 0x8 virtual false final false
inline ::Zenject::RootResolveMethods get_ValidationRootResolveMethod() ;

/// @brief Method get_DisplayWarningWhenResolvingDuringInstall addr 0x2f04608 size 0x8 virtual false final false
inline bool get_DisplayWarningWhenResolvingDuringInstall() ;

/// @brief Method get_EnsureDeterministicDestructionOrderOnApplicationQuit addr 0x2f04610 size 0x8 virtual false final false
inline bool get_EnsureDeterministicDestructionOrderOnApplicationQuit() ;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZenjectSettings(ZenjectSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZenjectSettings(ZenjectSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ZenjectSettings()  = default;
public:


// Fields

// Static field Default


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenjectSettings, 0x28>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::ZenjectSettings);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectSettings*, "Zenject", "ZenjectSettings");
NEED_NO_BOX(::Zenject::__ZenjectSettings__SignalSettings);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ZenjectSettings__SignalSettings*, "Zenject", "ZenjectSettings/SignalSettings");
