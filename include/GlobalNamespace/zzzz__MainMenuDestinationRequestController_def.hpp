#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainMenuDestinationRequestController)
namespace GlobalNamespace {
struct __MainMenuDestinationRequestController___ProcessDestinationRequest_d__9;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace Zenject {
class IInitializable;
}
namespace GlobalNamespace {
class MenuScenesTransitionSetupDataSO;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class IDestinationRequestManager;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class MainMenuDestinationRequestController;
}
namespace GlobalNamespace {
struct __MainMenuDestinationRequestController___ProcessDestinationRequest_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainMenuDestinationRequestController);
MARK_VAL_T(::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9);
// Type: ::<ProcessDestinationRequest>d__9
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4150))
// CS Name: ::MainMenuDestinationRequestController::<ProcessDestinationRequest>d__9
struct CORDL_TYPE __MainMenuDestinationRequestController___ProcessDestinationRequest_d__9 : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MainMenuDestinationRequestController*  __4__this;

/// @brief Field menuDestination offset 0x30
 __declspec(property(get=__get_menuDestination, put=__set_menuDestination)) ::GlobalNamespace::MenuDestination*  menuDestination;

/// @brief Field <cancellationToken>5__2 offset 0x38
 __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2)) ::System::Threading::CancellationToken  _cancellationToken_5__2;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::MainMenuDestinationRequestController*  value) ;

constexpr ::GlobalNamespace::MainMenuDestinationRequestController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainMenuDestinationRequestController*> __get___4__this() const;

constexpr void __set_menuDestination(::GlobalNamespace::MenuDestination*  value) ;

constexpr ::GlobalNamespace::MenuDestination* __get_menuDestination() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> __get_menuDestination() const;

constexpr void __set__cancellationToken_5__2(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get__cancellationToken_5__2() ;

constexpr ::System::Threading::CancellationToken const& __get__cancellationToken_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x223d848 size 0x4cc virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x223dd14 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MainMenuDestinationRequestController*", modifiers: "", def_value: None }, CppParam { name: "menuDestination", ty: "::GlobalNamespace::MenuDestination*", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __MainMenuDestinationRequestController___ProcessDestinationRequest_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::MainMenuDestinationRequestController*  __4__this, ::GlobalNamespace::MenuDestination*  menuDestination, ::System::Threading::CancellationToken  _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MainMenuDestinationRequestController___ProcessDestinationRequest_d__9(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MainMenuDestinationRequestController___ProcessDestinationRequest_d__9()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MainMenuDestinationRequestController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4151))
// CS Name: ::MainMenuDestinationRequestController*
class CORDL_TYPE MainMenuDestinationRequestController : public ::System::Object {
public:
// Declarations
using _ProcessDestinationRequest_d__9 = ::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _destinationRequestManager offset 0x10
 __declspec(property(get=__get__destinationRequestManager, put=__set__destinationRequestManager)) ::GlobalNamespace::IDestinationRequestManager*  _destinationRequestManager;

/// @brief Field _menuScenesTransitionSetupData offset 0x18
 __declspec(property(get=__get__menuScenesTransitionSetupData, put=__set__menuScenesTransitionSetupData)) ::GlobalNamespace::MenuScenesTransitionSetupDataSO*  _menuScenesTransitionSetupData;

/// @brief Field _gameScenesManager offset 0x20
 __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager)) ::GlobalNamespace::GameScenesManager*  _gameScenesManager;

/// @brief Field _cancellationTokenSource offset 0x28
 __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

/// @brief Convert operator to "::Zenject::IInitializable"
constexpr operator  ::Zenject::IInitializable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

static inline void setStaticF__nextMenuDestination(::GlobalNamespace::MenuDestination*  value) ;

static inline ::GlobalNamespace::MenuDestination* getStaticF__nextMenuDestination() ;

constexpr void __set__destinationRequestManager(::GlobalNamespace::IDestinationRequestManager*  value) ;

constexpr ::GlobalNamespace::IDestinationRequestManager* __get__destinationRequestManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDestinationRequestManager*> __get__destinationRequestManager() const;

constexpr void __set__menuScenesTransitionSetupData(::GlobalNamespace::MenuScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::MenuScenesTransitionSetupDataSO* __get__menuScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuScenesTransitionSetupDataSO*> __get__menuScenesTransitionSetupData() const;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value) ;

constexpr ::GlobalNamespace::GameScenesManager* __get__gameScenesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> __get__gameScenesManager() const;

constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__cancellationTokenSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__cancellationTokenSource() const;

/// @brief Method Initialize addr 0x223d0e0 size 0x274 virtual true final true
inline void Initialize() ;

/// @brief Method Dispose addr 0x223d3f4 size 0x1b4 virtual true final true
inline void Dispose() ;

/// @brief Method HandleGameScenesManagerInstallEarlyBindings addr 0x223d5a8 size 0x294 virtual false final false
inline void HandleGameScenesManagerInstallEarlyBindings(::GlobalNamespace::ScenesTransitionSetupDataSO*  scenesTransitionSetupData, ::Zenject::DiContainer*  container) ;

/// @brief Method HandleDestinationRequestManagerDidSendMenuDestinationRequest addr 0x223d83c size 0x4 virtual false final false
inline void HandleDestinationRequestManagerDidSendMenuDestinationRequest(::GlobalNamespace::MenuDestination*  menuDestination) ;

/// @brief Method ProcessDestinationRequest addr 0x223d354 size 0xa0 virtual false final false
inline void ProcessDestinationRequest(::GlobalNamespace::MenuDestination*  menuDestination) ;

static inline ::GlobalNamespace::MainMenuDestinationRequestController* New_ctor() ;

/// @brief Method .ctor addr 0x223d840 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MainMenuDestinationRequestController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainMenuDestinationRequestController(MainMenuDestinationRequestController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainMenuDestinationRequestController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainMenuDestinationRequestController(MainMenuDestinationRequestController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MainMenuDestinationRequestController()  = default;
public:


// Fields

// Static field _nextMenuDestination


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainMenuDestinationRequestController, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainMenuDestinationRequestController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainMenuDestinationRequestController*, "", "MainMenuDestinationRequestController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9, "", "MainMenuDestinationRequestController/<ProcessDestinationRequest>d__9");
