#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/AsyncInitialization/zzzz__AddressablesLoader_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceGameObject_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "BGLib/AsyncInitialization/zzzz__AddressablesLoader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
template<typename TInstantiate,typename TReturn>
inline ::System::Threading::Tasks::Task_1<TReturn>* BGLib::AsyncInitialization::AddressablesLoader::InstantiateFromAddressableToContainer(::UnityEngine::AddressableAssets::AssetReferenceGameObject*  prefab, ::Zenject::DiContainer*  container)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AsyncInitialization::AddressablesLoader*>::get(),
                        "InstantiateFromAddressableToContainer",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstantiate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TReturn>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AssetReferenceGameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstantiate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TReturn>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TReturn>*, false>(nullptr, ___internal_method, prefab, container);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr  BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr void BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr int32_t& BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr int32_t const& BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr void BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>& BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn> const& BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr void BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__set_prefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AddressableAssets::AssetReferenceGameObject*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::AddressableAssets::AssetReferenceGameObject*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject* BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__get_prefab()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AddressableAssets::AssetReferenceGameObject*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceGameObject*> BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__get_prefab() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AddressableAssets::AssetReferenceGameObject*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr void BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__set_container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Zenject::DiContainer*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr ::Zenject::DiContainer* BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__get_container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__get_container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr void BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*>& BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*> const& BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
inline void BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
inline void BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefab", ty: "::UnityEngine::AddressableAssets::AssetReferenceGameObject*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TInstantiate,::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr ::BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate,TReturn>::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>  __t__builder, ::UnityEngine::AddressableAssets::AssetReferenceGameObject*  prefab, ::Zenject::DiContainer*  container, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::GameObject*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->prefab = prefab;
this->container = container;
this->__u__1 = __u__1;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
