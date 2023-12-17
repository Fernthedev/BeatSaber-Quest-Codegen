#pragma once
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetLabelReference_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__set___4__this(::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*  value)  {
::cordl_internals::setInstanceField<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>* BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*> BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__set_registry(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*  value)  {
::cordl_internals::setInstanceField<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__get_registry()  {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*> BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__get_registry() const {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>& BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*> const& BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "registry", ty: "::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*  __4__this, ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*  registry, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->registry = registry;
this->__u__1 = __u__1;
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::__set__handle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>, 0x20>(this, std::forward<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>& BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::__get__handle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*> const& BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::__get__handle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*  registry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>::get(),
                            "LoadResourcesBeforeInstall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, registry);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*  registry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>::get(),
                            "LoadResourcesBeforeInstallAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, registry);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::AddressableAssets::AssetLabelReference* BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::get_assetLabel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>::get(),
                            "get_assetLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetLabelReference*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<T>*  assets, ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*  registry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>::get(),
                            "LoadResourcesBeforeInstall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, assets, registry);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>* BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
