#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainSettingsModelAsyncLoader)
namespace GlobalNamespace {
struct __MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace GlobalNamespace {
class PerformancePreset;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSettingsModelAsyncLoader;
}
namespace GlobalNamespace {
struct __MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainSettingsModelAsyncLoader);
MARK_VAL_T(::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3);
// Type: ::<LoadResourcesBeforeInstallAsync>d__3
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4027))
// CS Name: ::MainSettingsModelAsyncLoader::<LoadResourcesBeforeInstallAsync>d__3
struct CORDL_TYPE __MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3 : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MainSettingsModelAsyncLoader*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::MainSettingsModelAsyncLoader*  value) ;

constexpr ::GlobalNamespace::MainSettingsModelAsyncLoader* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelAsyncLoader*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2226488 size 0x26c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22266f4 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MainSettingsModelAsyncLoader*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>", modifiers: "", def_value: None }]
constexpr __MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::MainSettingsModelAsyncLoader*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MainSettingsModelAsyncLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15422))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4028))
// CS Name: ::MainSettingsModelAsyncLoader*
class CORDL_TYPE MainSettingsModelAsyncLoader : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
// Declarations
using _LoadResourcesBeforeInstallAsync_d__3 = ::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::BGLib::AppFlow::Initialization::AsyncInstaller)]{};

/// @brief Field _mainSettingsModel offset 0x20
 __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel)) ::GlobalNamespace::MainSettingsModelSO*  _mainSettingsModel;

/// @brief Field _saveData offset 0x28
 __declspec(property(get=__get__saveData, put=__set__saveData)) ::GlobalNamespace::ISaveData*  _saveData;

constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO*  value) ;

constexpr ::GlobalNamespace::MainSettingsModelSO* __get__mainSettingsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> __get__mainSettingsModel() const;

constexpr void __set__saveData(::GlobalNamespace::ISaveData*  value) ;

constexpr ::GlobalNamespace::ISaveData* __get__saveData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> __get__saveData() const;

/// @brief Method LoadResourcesBeforeInstall addr 0x222628c size 0x98 virtual true final false
inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*  registry) ;

/// @brief Method LoadResourcesBeforeInstallAsync addr 0x2226324 size 0xc8 virtual true final false
inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*  registry) ;

/// @brief Method InstallBindings addr 0x22263ec size 0x94 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::MainSettingsModelAsyncLoader* New_ctor() ;

/// @brief Method .ctor addr 0x2226480 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MainSettingsModelAsyncLoader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainSettingsModelAsyncLoader(MainSettingsModelAsyncLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainSettingsModelAsyncLoader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainSettingsModelAsyncLoader(MainSettingsModelAsyncLoader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MainSettingsModelAsyncLoader()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSettingsModelAsyncLoader, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSettingsModelAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsModelAsyncLoader*, "", "MainSettingsModelAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3, "", "MainSettingsModelAsyncLoader/<LoadResourcesBeforeInstallAsync>d__3");
