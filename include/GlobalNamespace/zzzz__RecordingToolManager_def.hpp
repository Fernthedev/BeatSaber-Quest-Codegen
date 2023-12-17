#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RecordingToolManager)
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
struct __RecordingToolManager__SetupData;
}
namespace GlobalNamespace {
class RecordingSettings;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace GlobalNamespace {
struct __RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28;
}
namespace GlobalNamespace {
class GameplayLevelSceneTransitionEvents;
}
namespace GlobalNamespace {
class RecordingToolSettings;
}
namespace Zenject {
class IInitializable;
}
namespace GlobalNamespace {
class IPosesSerializer;
}
namespace GlobalNamespace {
class RecordingToolConfigurationProcessor;
}
namespace GlobalNamespace {
class __RecordingToolManager____c;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolManager;
}
namespace GlobalNamespace {
class __RecordingToolManager____c;
}
namespace GlobalNamespace {
struct __RecordingToolManager__SetupData;
}
namespace GlobalNamespace {
struct __RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolManager);
MARK_REF_PTR_T(::GlobalNamespace::__RecordingToolManager____c);
MARK_VAL_T(::GlobalNamespace::__RecordingToolManager__SetupData);
MARK_VAL_T(::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28);
// Type: ::SetupData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5962))
// CS Name: ::RecordingToolManager::SetupData
struct CORDL_TYPE __RecordingToolManager__SetupData : public ::bs_hook::ValueTypeWrapper<0x2> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field profileSong offset 0x0
 __declspec(property(get=__get_profileSong, put=__set_profileSong)) bool  profileSong;

/// @brief Field runAutopilot offset 0x1
 __declspec(property(get=__get_runAutopilot, put=__set_runAutopilot)) bool  runAutopilot;

constexpr void __set_profileSong(bool  value) ;

constexpr bool& __get_profileSong() ;

constexpr bool const& __get_profileSong() const;

constexpr void __set_runAutopilot(bool  value) ;

constexpr bool& __get_runAutopilot() ;

constexpr bool const& __get_runAutopilot() const;

// Ctor Parameters [CppParam { name: "profileSong", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "runAutopilot", ty: "bool", modifiers: "", def_value: None }]
constexpr __RecordingToolManager__SetupData(bool  profileSong, bool  runAutopilot) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __RecordingToolManager__SetupData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x2>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __RecordingToolManager__SetupData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolManager__SetupData, 0x2>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5963))
// CS Name: ::RecordingToolManager::<>c*
class CORDL_TYPE __RecordingToolManager____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__RecordingToolManager____c*  value) ;

static inline ::GlobalNamespace::__RecordingToolManager____c* getStaticF___9() ;

static inline void setStaticF___9__25_0(::System::Func_2<::GlobalNamespace::RecordingSettings*,bool>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::RecordingSettings*,bool>* getStaticF___9__25_0() ;

static inline ::GlobalNamespace::__RecordingToolManager____c* New_ctor() ;

/// @brief Method .ctor addr 0x2308a0c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.ctor>b__25_0 addr 0x2308a14 size 0x18 virtual false final false
inline bool __ctor_b__25_0(::GlobalNamespace::RecordingSettings*  recordingSettings) ;

// Ctor Parameters [CppParam { name: "", ty: "__RecordingToolManager____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RecordingToolManager____c(__RecordingToolManager____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RecordingToolManager____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RecordingToolManager____c(__RecordingToolManager____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RecordingToolManager____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__25_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolManager____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish>d__28
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5964))
// CS Name: ::RecordingToolManager::<HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish>d__28
struct CORDL_TYPE __RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::RecordingToolManager*  __4__this;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::RecordingToolManager*  value) ;

constexpr ::GlobalNamespace::RecordingToolManager* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolManager*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2308a2c size 0x2b8 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2308ce4 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::RecordingToolManager*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::RecordingToolManager*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RecordingToolManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5965))
// CS Name: ::RecordingToolManager*
class CORDL_TYPE RecordingToolManager : public ::System::Object {
public:
// Declarations
using _HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28 = ::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28;

using __c = ::GlobalNamespace::__RecordingToolManager____c;

using SetupData = ::GlobalNamespace::__RecordingToolManager__SetupData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Object)]{};

/// @brief Field kRecordingToolId offset 0x0
static constexpr ::ConstString  kRecordingToolId{u"RecordingTool"};

/// @brief Field _gameplayLevelSceneTransitionEvents offset 0x10
 __declspec(property(get=__get__gameplayLevelSceneTransitionEvents, put=__set__gameplayLevelSceneTransitionEvents)) ::GlobalNamespace::GameplayLevelSceneTransitionEvents*  _gameplayLevelSceneTransitionEvents;

/// @brief Field _gameScenesManager offset 0x18
 __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager)) ::GlobalNamespace::GameScenesManager*  _gameScenesManager;

/// @brief Field _recordingToolEnabled offset 0x20
 __declspec(property(get=__get__recordingToolEnabled, put=__set__recordingToolEnabled)) bool  _recordingToolEnabled;

/// @brief Field _performanceRecordingEnabled offset 0x21
 __declspec(property(get=__get__performanceRecordingEnabled, put=__set__performanceRecordingEnabled)) bool  _performanceRecordingEnabled;

/// @brief Field _configJsonData offset 0x28
 __declspec(property(get=__get__configJsonData, put=__set__configJsonData)) ::StringW  _configJsonData;

/// @brief Field _recordingToolSettings offset 0x30
 __declspec(property(get=__get__recordingToolSettings, put=__set__recordingToolSettings)) ::GlobalNamespace::RecordingToolSettings*  _recordingToolSettings;

/// @brief Field _configurationProcessor offset 0x38
 __declspec(property(get=__get__configurationProcessor, put=__set__configurationProcessor)) ::GlobalNamespace::RecordingToolConfigurationProcessor*  _configurationProcessor;

/// @brief Field _container offset 0x40
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _logger offset 0x48
 __declspec(property(get=__get__logger, put=__set__logger)) ::GlobalNamespace::IBeatSaberLogger*  _logger;

/// @brief Field _posesSerializer offset 0x50
 __declspec(property(get=__get__posesSerializer, put=__set__posesSerializer)) ::GlobalNamespace::IPosesSerializer*  _posesSerializer;

/// @brief Field _currentRecordingIndex offset 0x58
 __declspec(property(get=__get__currentRecordingIndex, put=__set__currentRecordingIndex)) int32_t  _currentRecordingIndex;

 __declspec(property(get=get_recordingToolEnabled)) bool  recordingToolEnabled;

 __declspec(property(get=get_showRecordingToolScene)) bool  showRecordingToolScene;

 __declspec(property(get=get_performanceRecordingEnabled)) bool  performanceRecordingEnabled;

 __declspec(property(get=get_configJsonData)) ::StringW  configJsonData;

 __declspec(property(get=get_recordingToolSettings)) ::GlobalNamespace::RecordingToolSettings*  recordingToolSettings;

 __declspec(property(get=get_posesSerializer)) ::GlobalNamespace::IPosesSerializer*  posesSerializer;

/// @brief Convert operator to "::Zenject::IInitializable"
constexpr operator  ::Zenject::IInitializable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__gameplayLevelSceneTransitionEvents(::GlobalNamespace::GameplayLevelSceneTransitionEvents*  value) ;

constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents* __get__gameplayLevelSceneTransitionEvents() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayLevelSceneTransitionEvents*> __get__gameplayLevelSceneTransitionEvents() const;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value) ;

constexpr ::GlobalNamespace::GameScenesManager* __get__gameScenesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> __get__gameScenesManager() const;

constexpr void __set__recordingToolEnabled(bool  value) ;

constexpr bool& __get__recordingToolEnabled() ;

constexpr bool const& __get__recordingToolEnabled() const;

constexpr void __set__performanceRecordingEnabled(bool  value) ;

constexpr bool& __get__performanceRecordingEnabled() ;

constexpr bool const& __get__performanceRecordingEnabled() const;

constexpr void __set__configJsonData(::StringW  value) ;

constexpr ::StringW& __get__configJsonData() ;

constexpr ::StringW const& __get__configJsonData() const;

constexpr void __set__recordingToolSettings(::GlobalNamespace::RecordingToolSettings*  value) ;

constexpr ::GlobalNamespace::RecordingToolSettings* __get__recordingToolSettings() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolSettings*> __get__recordingToolSettings() const;

constexpr void __set__configurationProcessor(::GlobalNamespace::RecordingToolConfigurationProcessor*  value) ;

constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor* __get__configurationProcessor() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolConfigurationProcessor*> __get__configurationProcessor() const;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__logger(::GlobalNamespace::IBeatSaberLogger*  value) ;

constexpr ::GlobalNamespace::IBeatSaberLogger* __get__logger() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> __get__logger() const;

constexpr void __set__posesSerializer(::GlobalNamespace::IPosesSerializer*  value) ;

constexpr ::GlobalNamespace::IPosesSerializer* __get__posesSerializer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPosesSerializer*> __get__posesSerializer() const;

constexpr void __set__currentRecordingIndex(int32_t  value) ;

constexpr int32_t& __get__currentRecordingIndex() ;

constexpr int32_t const& __get__currentRecordingIndex() const;

/// @brief Method get_recordingToolEnabled addr 0x230811c size 0x8 virtual false final false
inline bool get_recordingToolEnabled() ;

/// @brief Method get_showRecordingToolScene addr 0x2308124 size 0x8 virtual false final false
inline bool get_showRecordingToolScene() ;

/// @brief Method get_performanceRecordingEnabled addr 0x230812c size 0x8 virtual false final false
inline bool get_performanceRecordingEnabled() ;

/// @brief Method get_configJsonData addr 0x2308134 size 0x8 virtual false final false
inline ::StringW get_configJsonData() ;

/// @brief Method get_recordingToolSettings addr 0x230813c size 0x8 virtual false final false
inline ::GlobalNamespace::RecordingToolSettings* get_recordingToolSettings() ;

/// @brief Method get_posesSerializer addr 0x2308144 size 0x8 virtual false final false
inline ::GlobalNamespace::IPosesSerializer* get_posesSerializer() ;

static inline ::GlobalNamespace::RecordingToolManager* New_ctor(::GlobalNamespace::RecordingToolConfigurationProcessor*  processor, ::GlobalNamespace::BeatmapCharacteristicCollection*  beatmapCharacteristicCollection, ::Zenject::DiContainer*  diContainer) ;

/// @brief Method .ctor addr 0x230814c size 0x198 virtual false final false
inline void _ctor(::GlobalNamespace::RecordingToolConfigurationProcessor*  processor, ::GlobalNamespace::BeatmapCharacteristicCollection*  beatmapCharacteristicCollection, ::Zenject::DiContainer*  diContainer) ;

/// @brief Method Initialize addr 0x23082e4 size 0xa8 virtual true final true
inline void Initialize() ;

/// @brief Method Dispose addr 0x2308530 size 0x98 virtual true final true
inline void Dispose() ;

/// @brief Method HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish addr 0x23085c8 size 0x94 virtual false final false
inline void HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish() ;

/// @brief Method StartNextRecording addr 0x230838c size 0x1a4 virtual false final false
inline void StartNextRecording() ;

/// @brief Method BindNextRecording addr 0x230865c size 0x34c virtual false final false
inline ::GlobalNamespace::MenuDestination* BindNextRecording(::Zenject::DiContainer*  container, ::GlobalNamespace::RecordingSettings*  recordingSettings, bool  quitAppAfterRun) ;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecordingToolManager(RecordingToolManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecordingToolManager(RecordingToolManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RecordingToolManager()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolManager, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolManager*, "", "RecordingToolManager");
NEED_NO_BOX(::GlobalNamespace::__RecordingToolManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolManager____c*, "", "RecordingToolManager/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolManager__SetupData, "", "RecordingToolManager/SetupData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28, "", "RecordingToolManager/<HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish>d__28");
