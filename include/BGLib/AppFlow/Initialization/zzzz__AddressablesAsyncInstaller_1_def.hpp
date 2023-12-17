#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddressablesAsyncInstaller_1)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace BGLib::AppFlow::Initialization {
template<typename T>
struct __AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2;
}
namespace UnityEngine::AddressableAssets {
class AssetLabelReference;
}
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
template<typename T>
class AddressablesAsyncInstaller_1;
}
namespace BGLib::AppFlow::Initialization {
template<::il2cpp_utils::il2cpp_reference_type T>
class AddressablesAsyncInstaller_1<T>;
}
namespace BGLib::AppFlow::Initialization {
template<typename T>
struct __AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2;
}
namespace BGLib::AppFlow::Initialization {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1);
MARK_GEN_VAL_T(::BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2);
// Type: ::<LoadResourcesBeforeInstallAsync>d__2
// Type: BGLib.AppFlow.Initialization::AddressablesAsyncInstaller`1
// Type: ::<LoadResourcesBeforeInstallAsync>d__2
namespace BGLib::AppFlow::Initialization {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15419))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15419), inst: 2 })
// CS Name: ::AddressablesAsyncInstaller`1::<LoadResourcesBeforeInstallAsync>d__2<T>
struct CORDL_TYPE __AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T> : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*  __4__this;

/// @brief Field registry offset 0x28
 __declspec(property(get=__get_registry, put=__set_registry)) ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*  registry;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*  value) ;

constexpr ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*> __get___4__this() const;

constexpr void __set_registry(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*  value) ;

constexpr ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* __get_registry() ;

constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*> __get_registry() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*", modifiers: "", def_value: None }, CppParam { name: "registry", ty: "::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>", modifiers: "", def_value: None }]
constexpr __AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*  __4__this, ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*  registry, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGLib::AppFlow::Initialization
// Type: BGLib.AppFlow.Initialization::AddressablesAsyncInstaller`1
namespace BGLib::AppFlow::Initialization {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15422)), TypeDefinitionIndex(TypeDefinitionIndex(15420))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15420), inst: 2 })
// CS Name: ::BGLib.AppFlow.Initialization::AddressablesAsyncInstaller`1<T>*
class CORDL_TYPE AddressablesAsyncInstaller_1<T> : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
// Declarations
using _LoadResourcesBeforeInstallAsync_d__2 = ::BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::BGLib::AppFlow::Initialization::AsyncInstaller)]{};

/// @brief Field _handle offset 0x20
 __declspec(property(get=__get__handle, put=__set__handle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>  _handle;

 __declspec(property(get=get_assetLabel)) ::UnityEngine::AddressableAssets::AssetLabelReference*  assetLabel;

constexpr void __set__handle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>& __get__handle() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*> const& __get__handle() const;

/// @brief Method LoadResourcesBeforeInstall addr 0x0 size 0xffffffffffffffff virtual true final true
inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*  registry) ;

/// @brief Method LoadResourcesBeforeInstallAsync addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*  registry) ;

/// @brief Method get_assetLabel addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::AddressableAssets::AssetLabelReference* get_assetLabel() ;

/// @brief Method LoadResourcesBeforeInstall addr 0x0 size 0xffffffffffffffff virtual true final false
inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<T>*  assets, ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*  registry) ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnDestroy() ;

static inline ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AddressablesAsyncInstaller_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AddressablesAsyncInstaller_1(AddressablesAsyncInstaller_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddressablesAsyncInstaller_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddressablesAsyncInstaller_1(AddressablesAsyncInstaller_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AddressablesAsyncInstaller_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGLib::AppFlow::Initialization
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1, "BGLib.AppFlow.Initialization", "AddressablesAsyncInstaller`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2, "BGLib.AppFlow.Initialization", "AddressablesAsyncInstaller`1/<LoadResourcesBeforeInstallAsync>d__2");
