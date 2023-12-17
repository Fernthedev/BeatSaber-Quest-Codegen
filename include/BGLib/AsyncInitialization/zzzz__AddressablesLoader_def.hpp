#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddressablesLoader)
namespace UnityEngine::AddressableAssets {
class AssetReferenceGameObject;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace Zenject {
class DiContainer;
}
namespace BGLib::AsyncInitialization {
template<typename TInstantiate,typename TReturn>
struct __AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace BGLib::AsyncInitialization {
class AddressablesLoader;
}
namespace BGLib::AsyncInitialization {
template<typename TInstantiate,typename TReturn>
struct __AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2;
}
namespace BGLib::AsyncInitialization {
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
struct __AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::AsyncInitialization::AddressablesLoader);
MARK_GEN_VAL_T(::BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2);
// Type: ::<InstantiateFromAddressableToContainer>d__0`2
// Type: BGLib.AsyncInitialization::AddressablesLoader
namespace BGLib::AsyncInitialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15163))
// CS Name: ::BGLib.AsyncInitialization::AddressablesLoader*
class CORDL_TYPE AddressablesLoader : public ::System::Object {
public:
// Declarations
template<typename TInstantiate,typename TReturn>
using _InstantiateFromAddressableToContainer_d__0_2 = ::BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate, TReturn>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method InstantiateFromAddressableToContainer addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstantiate,typename TReturn>
static inline ::System::Threading::Tasks::Task_1<TReturn>* InstantiateFromAddressableToContainer(::UnityEngine::AddressableAssets::AssetReferenceGameObject*  prefab, ::Zenject::DiContainer*  container) ;

// Ctor Parameters [CppParam { name: "", ty: "AddressablesLoader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AddressablesLoader(AddressablesLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddressablesLoader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddressablesLoader(AddressablesLoader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AddressablesLoader()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AsyncInitialization::AddressablesLoader, 0x10>, "Size mismatch!");

} // namespace end def BGLib::AsyncInitialization
// Type: ::<InstantiateFromAddressableToContainer>d__0`2
namespace BGLib::AsyncInitialization {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15162))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15162), inst: 81 })
// CS Name: ::AddressablesLoader::<InstantiateFromAddressableToContainer>d__0`2<TInstantiate,TReturn>
struct CORDL_TYPE __AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn> : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>  __t__builder;

/// @brief Field prefab offset 0x20
 __declspec(property(get=__get_prefab, put=__set_prefab)) ::UnityEngine::AddressableAssets::AssetReferenceGameObject*  prefab;

/// @brief Field container offset 0x28
 __declspec(property(get=__get_container, put=__set_container)) ::Zenject::DiContainer*  container;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn> const& __get___t__builder() const;

constexpr void __set_prefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject*  value) ;

constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject* __get_prefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceGameObject*> __get_prefab() const;

constexpr void __set_container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get_container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get_container() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>", modifiers: "", def_value: None }, CppParam { name: "prefab", ty: "::UnityEngine::AddressableAssets::AssetReferenceGameObject*", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*>", modifiers: "", def_value: None }]
constexpr __AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>  __t__builder, ::UnityEngine::AddressableAssets::AssetReferenceGameObject*  prefab, ::Zenject::DiContainer*  container, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGLib::AsyncInitialization
NEED_NO_BOX(::BGLib::AsyncInitialization::AddressablesLoader);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AsyncInitialization::AddressablesLoader*, "BGLib.AsyncInitialization", "AddressablesLoader");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2, "BGLib.AsyncInitialization", "AddressablesLoader/<InstantiateFromAddressableToContainer>d__0`2");
