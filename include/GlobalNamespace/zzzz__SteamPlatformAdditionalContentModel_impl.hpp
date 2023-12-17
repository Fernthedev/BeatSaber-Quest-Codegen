#pragma once
#include "GlobalNamespace/zzzz__AdditionalContentModel_impl.hpp"
#include "GlobalNamespace/zzzz__SteamPlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__SteamPlatformAdditionalContentModel_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductsModelSO_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::*)()>(&::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2238c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2238e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> const& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__set___4__this(::GlobalNamespace::SteamPlatformAdditionalContentModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SteamPlatformAdditionalContentModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SteamPlatformAdditionalContentModel*>(value));
}
constexpr ::GlobalNamespace::SteamPlatformAdditionalContentModel* GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamPlatformAdditionalContentModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SteamPlatformAdditionalContentModel*> GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamPlatformAdditionalContentModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__set_levelId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__get_levelId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>  __t__builder, ::GlobalNamespace::SteamPlatformAdditionalContentModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::StringW  levelId, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->levelId = levelId;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::*)()>(&::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2238ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2239104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> const& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__set___4__this(::GlobalNamespace::SteamPlatformAdditionalContentModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SteamPlatformAdditionalContentModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SteamPlatformAdditionalContentModel*>(value));
}
constexpr ::GlobalNamespace::SteamPlatformAdditionalContentModel* GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamPlatformAdditionalContentModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SteamPlatformAdditionalContentModel*> GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamPlatformAdditionalContentModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__set_packId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__get_packId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__get_packId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>  __t__builder, ::GlobalNamespace::SteamPlatformAdditionalContentModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::StringW  packId, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->packId = packId;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::*)()>(&::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x223915c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22394b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>>& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>> const& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__set___4__this(::GlobalNamespace::SteamPlatformAdditionalContentModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SteamPlatformAdditionalContentModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SteamPlatformAdditionalContentModel*>(value));
}
constexpr ::GlobalNamespace::SteamPlatformAdditionalContentModel* GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamPlatformAdditionalContentModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SteamPlatformAdditionalContentModel*> GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamPlatformAdditionalContentModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__set_packId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get_packId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get_packId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__set__originalPack_5__2(::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>(value));
}
constexpr ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData* GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get__originalPack_5__2()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*> GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get__originalPack_5__2() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__set__levelPackRedirectionData_5__3(::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>(value));
}
constexpr ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData* GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get__levelPackRedirectionData_5__3()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*> GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get__levelPackRedirectionData_5__3() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> const& GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_originalPack_5__2", ty: "::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_levelPackRedirectionData_5__3", ty: "::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>>  __t__builder, ::GlobalNamespace::SteamPlatformAdditionalContentModel*  __4__this, ::StringW  packId, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*  _originalPack_5__2, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*  _levelPackRedirectionData_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x50>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->packId = packId;
this->cancellationToken = cancellationToken;
this->_originalPack_5__2 = _originalPack_5__2;
this->_levelPackRedirectionData_5__3 = _levelPackRedirectionData_5__3;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::*)()>(&::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x2239510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22398c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__set___4__this(::GlobalNamespace::SteamPlatformAdditionalContentModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SteamPlatformAdditionalContentModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SteamPlatformAdditionalContentModel*>(value));
}
constexpr ::GlobalNamespace::SteamPlatformAdditionalContentModel* GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamPlatformAdditionalContentModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SteamPlatformAdditionalContentModel*> GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamPlatformAdditionalContentModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>& GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> const& GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::GlobalNamespace::SteamPlatformAdditionalContentModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
//  Writing Method size for method: ::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::*)()>(&::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2239918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2239b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>& GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> const& GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__set___4__this(::GlobalNamespace::SteamPlatformAdditionalContentModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SteamPlatformAdditionalContentModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SteamPlatformAdditionalContentModel*>(value));
}
constexpr ::GlobalNamespace::SteamPlatformAdditionalContentModel* GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamPlatformAdditionalContentModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SteamPlatformAdditionalContentModel*> GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamPlatformAdditionalContentModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__set_levelPackId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__get_levelPackId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__get_levelPackId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__set_token(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__get_token()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__get_token() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>>& GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>> const& GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  __t__builder, ::GlobalNamespace::SteamPlatformAdditionalContentModel*  __4__this, ::StringW  levelPackId, ::System::Threading::CancellationToken  token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelPackId = levelPackId;
this->token = token;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.InvalidateDataInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)()>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::InvalidateDataInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2237fdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::GlobalNamespace::SteamLevelProductsModelSO*, ::GlobalNamespace::AlwaysOwnedContentContainerSO*)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x2237fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SteamLevelProductsModelSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.GetLevelProductData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData* (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::StringW)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::GetLevelProductData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22382c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "GetLevelProductData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.GetLevelEntitlementStatusInternalAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x223833c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.GetPackEntitlementStatusInternalAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2238440;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.GetLevelPackProductData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData* (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::StringW)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::GetLevelPackProductData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2238544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "GetLevelPackProductData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.GetRedirectedLevelPackProductData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::GetRedirectedLevelPackProductData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x22385bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "GetRedirectedLevelPackProductData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.GetLevelPackRedirectionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData* (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::StringW)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::GetLevelPackRedirectionData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22386cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "GetLevelPackRedirectionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.IsDataValidAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::IsDataValidAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2238744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "IsDataValidAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.OpenLevelProductStoreAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::OpenLevelProductStoreAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2238844;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.OpenLevelPackProductStoreAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2238944;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.OpenProductStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(uint32_t)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::OpenProductStore)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x223890c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "OpenProductStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.OpenBundleUrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(uint32_t)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::OpenBundleUrl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2238a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "OpenBundleUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.IsPackBetterBuyThanLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2238a80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.CheckForNewEntitlementsAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>* (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::CheckForNewEntitlementsAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2238ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "CheckForNewEntitlementsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.HasLevelEntitlement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::StringW)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::HasLevelEntitlement)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2238b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "HasLevelEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamPlatformAdditionalContentModel.HasLevelPackEntitlement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::StringW)>(&::GlobalNamespace::SteamPlatformAdditionalContentModel::HasLevelPackEntitlement)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2238bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "HasLevelPackEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SteamPlatformAdditionalContentModel::__set__steamLevelProductsModel(::GlobalNamespace::SteamLevelProductsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SteamLevelProductsModelSO*, 0x28>(this, std::forward<::GlobalNamespace::SteamLevelProductsModelSO*>(value));
}
constexpr ::GlobalNamespace::SteamLevelProductsModelSO* GlobalNamespace::SteamPlatformAdditionalContentModel::__get__steamLevelProductsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamLevelProductsModelSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SteamLevelProductsModelSO*> GlobalNamespace::SteamPlatformAdditionalContentModel::__get__steamLevelProductsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamLevelProductsModelSO*, 0x28>(this);
}
constexpr void GlobalNamespace::SteamPlatformAdditionalContentModel::__set__entitlementsAppIds(::System::Collections::Generic::HashSet_1<uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<uint32_t>*, 0x30>(this, std::forward<::System::Collections::Generic::HashSet_1<uint32_t>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* GlobalNamespace::SteamPlatformAdditionalContentModel::__get__entitlementsAppIds()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<uint32_t>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint32_t>*> GlobalNamespace::SteamPlatformAdditionalContentModel::__get__entitlementsAppIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<uint32_t>*, 0x30>(this);
}
constexpr void GlobalNamespace::SteamPlatformAdditionalContentModel::__set__dataIsValidTaskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x38>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* GlobalNamespace::SteamPlatformAdditionalContentModel::__get__dataIsValidTaskCompletionSource()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> GlobalNamespace::SteamPlatformAdditionalContentModel::__get__dataIsValidTaskCompletionSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x38>(this);
}
constexpr void GlobalNamespace::SteamPlatformAdditionalContentModel::__set__semaphoreSlim(::System::Threading::SemaphoreSlim*  value)  {
::cordl_internals::setInstanceField<::System::Threading::SemaphoreSlim*, 0x40>(this, std::forward<::System::Threading::SemaphoreSlim*>(value));
}
constexpr ::System::Threading::SemaphoreSlim* GlobalNamespace::SteamPlatformAdditionalContentModel::__get__semaphoreSlim()  {
return ::cordl_internals::getInstanceField<::System::Threading::SemaphoreSlim*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> GlobalNamespace::SteamPlatformAdditionalContentModel::__get__semaphoreSlim() const {
return ::cordl_internals::getInstanceField<::System::Threading::SemaphoreSlim*, 0x40>(this);
}
constexpr void GlobalNamespace::SteamPlatformAdditionalContentModel::__set__isDataValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::SteamPlatformAdditionalContentModel::__get__isDataValid()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr bool const& GlobalNamespace::SteamPlatformAdditionalContentModel::__get__isDataValid() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr void GlobalNamespace::SteamPlatformAdditionalContentModel::__set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*, 0x50>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>* GlobalNamespace::SteamPlatformAdditionalContentModel::__get__levelIdToProductData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> GlobalNamespace::SteamPlatformAdditionalContentModel::__get__levelIdToProductData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*, 0x50>(this);
}
constexpr void GlobalNamespace::SteamPlatformAdditionalContentModel::__set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*, 0x58>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>* GlobalNamespace::SteamPlatformAdditionalContentModel::__get__levelPackIdToProductData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> GlobalNamespace::SteamPlatformAdditionalContentModel::__get__levelPackIdToProductData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*, 0x58>(this);
}
constexpr void GlobalNamespace::SteamPlatformAdditionalContentModel::__set__levelPackRedirectionData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*, 0x60>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>* GlobalNamespace::SteamPlatformAdditionalContentModel::__get__levelPackRedirectionData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*> GlobalNamespace::SteamPlatformAdditionalContentModel::__get__levelPackRedirectionData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*, 0x60>(this);
}
inline void GlobalNamespace::SteamPlatformAdditionalContentModel::InvalidateDataInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "InvalidateDataInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SteamPlatformAdditionalContentModel* GlobalNamespace::SteamPlatformAdditionalContentModel::New_ctor(::GlobalNamespace::SteamLevelProductsModelSO*  steamLevelProductsModel, ::GlobalNamespace::AlwaysOwnedContentContainerSO*  alwaysOwnedContentContainer)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SteamPlatformAdditionalContentModel*>(steamLevelProductsModel, alwaysOwnedContentContainer));
}
inline void GlobalNamespace::SteamPlatformAdditionalContentModel::_ctor(::GlobalNamespace::SteamLevelProductsModelSO*  steamLevelProductsModel, ::GlobalNamespace::AlwaysOwnedContentContainerSO*  alwaysOwnedContentContainer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SteamLevelProductsModelSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, steamLevelProductsModel, alwaysOwnedContentContainer);
}
inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData* GlobalNamespace::SteamPlatformAdditionalContentModel::GetLevelProductData(::StringW  levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "GetLevelProductData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, false>(*this, ___internal_method, levelId);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GlobalNamespace::SteamPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync(::StringW  levelId, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "GetLevelEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(*this, ___internal_method, levelId, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GlobalNamespace::SteamPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync(::StringW  packId, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "GetPackEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(*this, ___internal_method, packId, cancellationToken);
}
inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData* GlobalNamespace::SteamPlatformAdditionalContentModel::GetLevelPackProductData(::StringW  levelPackId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "GetLevelPackProductData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, false>(*this, ___internal_method, levelPackId);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* GlobalNamespace::SteamPlatformAdditionalContentModel::GetRedirectedLevelPackProductData(::StringW  packId, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "GetRedirectedLevelPackProductData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*, false>(*this, ___internal_method, packId, cancellationToken);
}
inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData* GlobalNamespace::SteamPlatformAdditionalContentModel::GetLevelPackRedirectionData(::StringW  levelPackId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "GetLevelPackRedirectionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, false>(*this, ___internal_method, levelPackId);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::SteamPlatformAdditionalContentModel::IsDataValidAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "IsDataValidAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(*this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* GlobalNamespace::SteamPlatformAdditionalContentModel::OpenLevelProductStoreAsync(::StringW  levelId, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "OpenLevelProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*, false>(*this, ___internal_method, levelId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* GlobalNamespace::SteamPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync(::StringW  levelPackId, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "OpenLevelPackProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*, false>(*this, ___internal_method, levelPackId, token);
}
inline void GlobalNamespace::SteamPlatformAdditionalContentModel::OpenProductStore(uint32_t  appId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "OpenProductStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, appId);
}
inline void GlobalNamespace::SteamPlatformAdditionalContentModel::OpenBundleUrl(uint32_t  bundleId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "OpenBundleUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bundleId);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* GlobalNamespace::SteamPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync(::StringW  levelPackId, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "IsPackBetterBuyThanLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>*, false>(*this, ___internal_method, levelPackId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>* GlobalNamespace::SteamPlatformAdditionalContentModel::CheckForNewEntitlementsAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "CheckForNewEntitlementsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*, false>(*this, ___internal_method, cancellationToken);
}
inline bool GlobalNamespace::SteamPlatformAdditionalContentModel::HasLevelEntitlement(::StringW  levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "HasLevelEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, levelId);
}
inline bool GlobalNamespace::SteamPlatformAdditionalContentModel::HasLevelPackEntitlement(::StringW  levelPackId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamPlatformAdditionalContentModel*>::get(),
                            "HasLevelPackEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, levelPackId);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
