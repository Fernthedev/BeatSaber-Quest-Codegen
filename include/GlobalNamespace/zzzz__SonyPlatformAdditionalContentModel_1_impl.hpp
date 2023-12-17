#pragma once
#include "GlobalNamespace/zzzz__AdditionalContentModel_impl.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__SonyLevelProductModelSO_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentContainerSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*> GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__set_levelId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__get_levelId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>  __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::StringW  levelId, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->levelId = levelId;
this->__u__1 = __u__1;
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*> GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__set_levelPackId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__get_levelPackId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__get_levelPackId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>  __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::StringW  levelPackId, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->levelPackId = levelPackId;
this->__u__1 = __u__1;
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*> GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__set_levelId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__get_levelId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  __4__this, ::StringW  levelId, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelId = levelId;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*> GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__set_levelPackId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__get_levelPackId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__get_levelPackId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  __4__this, ::StringW  levelPackId, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x48>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelPackId = levelPackId;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*> GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__set_levelPackId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__get_levelPackId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__get_levelPackId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>  __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::StringW  levelPackId, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->levelPackId = levelPackId;
this->__u__1 = __u__1;
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*> GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__set_packId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get_packId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get_packId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__set__originalPack_5__2(::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData* GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get__originalPack_5__2()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*> GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get__originalPack_5__2() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__set__levelPackRedirectionData_5__3(::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData* GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get__levelPackRedirectionData_5__3()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*> GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get__levelPackRedirectionData_5__3() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_originalPack_5__2", ty: "::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_levelPackRedirectionData_5__3", ty: "::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  __4__this, ::StringW  packId, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*  _originalPack_5__2, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*  _levelPackRedirectionData_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x50>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->packId = packId;
this->cancellationToken = cancellationToken;
this->_originalPack_5__2 = _originalPack_5__2;
this->_levelPackRedirectionData_5__3 = _levelPackRedirectionData_5__3;
this->__u__1 = __u__1;
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*> GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__set___4__this(::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*> GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> const& GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>  __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__entitlementsLabels(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::StringW>*, 0x28>(this, std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__entitlementsLabels()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::StringW>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__entitlementsLabels() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::StringW>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__semaphoreSlim(::System::Threading::SemaphoreSlim*  value)  {
::cordl_internals::setInstanceField<::System::Threading::SemaphoreSlim*, 0x30>(this, std::forward<::System::Threading::SemaphoreSlim*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::SemaphoreSlim* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__semaphoreSlim()  {
return ::cordl_internals::getInstanceField<::System::Threading::SemaphoreSlim*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__semaphoreSlim() const {
return ::cordl_internals::getInstanceField<::System::Threading::SemaphoreSlim*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__isDataValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__isDataValid()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__isDataValid() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__sonyCommerceHelper(::GlobalNamespace::ISonyCommerceHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ISonyCommerceHelper*, 0x40>(this, std::forward<::GlobalNamespace::ISonyCommerceHelper*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::ISonyCommerceHelper* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__sonyCommerceHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISonyCommerceHelper*, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISonyCommerceHelper*> GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__sonyCommerceHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISonyCommerceHelper*, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*, 0x48>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__levelIdToProductData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*, 0x48>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*> GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__levelIdToProductData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*, 0x48>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*, 0x50>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__levelPackIdToProductData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*> GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__levelPackIdToProductData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__levelPackRedirectionData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*, 0x58>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__levelPackRedirectionData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*> GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__levelPackRedirectionData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::New_ctor(T  levelPackProductsData, ::GlobalNamespace::ISonyCommerceHelper*  sonyCommerceHelper, ::GlobalNamespace::AlwaysOwnedContentContainerSO*  alwaysOwnedContentContainer)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>(levelPackProductsData, sonyCommerceHelper, alwaysOwnedContentContainer));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::_ctor(T  levelPackProductsData, ::GlobalNamespace::ISonyCommerceHelper*  sonyCommerceHelper, ::GlobalNamespace::AlwaysOwnedContentContainerSO*  alwaysOwnedContentContainer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISonyCommerceHelper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, levelPackProductsData, sonyCommerceHelper, alwaysOwnedContentContainer);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetLevelProductData(::StringW  levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                            "GetLevelProductData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*, false>(*this, ___internal_method, levelId);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetLevelPackProductData(::StringW  levelPackId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                            "GetLevelPackProductData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*, false>(*this, ___internal_method, levelPackId);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::InvalidateDataInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                            "InvalidateDataInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetLevelEntitlementStatusInternalAsync(::StringW  levelId, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                            "GetLevelEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(*this, ___internal_method, levelId, cancellationToken);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetPackEntitlementStatusInternalAsync(::StringW  levelPackId, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                            "GetPackEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(*this, ___internal_method, levelPackId, cancellationToken);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::OpenLevelProductStoreAsync(::StringW  levelId, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                            "OpenLevelProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*, false>(*this, ___internal_method, levelId, cancellationToken);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::OpenLevelPackProductStoreAsync(::StringW  levelPackId, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                            "OpenLevelPackProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*, false>(*this, ___internal_method, levelPackId, cancellationToken);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::IsPackBetterBuyThanLevelAsync(::StringW  levelPackId, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                            "IsPackBetterBuyThanLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>*, false>(*this, ___internal_method, levelPackId, cancellationToken);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetRedirectedLevelPackProductData(::StringW  packId, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                            "GetRedirectedLevelPackProductData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(*this, ___internal_method, packId, cancellationToken);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetLevelPackRedirectionData(::StringW  levelPackId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                            "GetLevelPackRedirectionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*, false>(*this, ___internal_method, levelPackId);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::HasLevelEntitlement(::StringW  levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                            "HasLevelEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, levelId);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::HasLevelPackEntitlement(::StringW  levelPackId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                            "HasLevelPackEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, levelPackId);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::EnsureDataValidity(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                            "EnsureDataValidity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(*this, ___internal_method, cancellationToken);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>* GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::UpdateEntitlementsAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*>::get(),
                            "UpdateEntitlementsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*, false>(*this, ___internal_method, cancellationToken);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
