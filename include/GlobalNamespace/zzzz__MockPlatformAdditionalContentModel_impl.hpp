#pragma once
#include "GlobalNamespace/zzzz__AdditionalContentModel_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__MockPlatformAdditionalContentModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "GlobalNamespace/zzzz__MockPlatformEntitlement_def.hpp"
#include "GlobalNamespace/zzzz__MockPlatformAdditionalContentModelInitialDataSO_def.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentContainerSO_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::*)()>(&::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2234f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22351ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>& GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> const& GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set_token(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get_token()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get_token() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set_levelId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get_levelId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set___4__this(::GlobalNamespace::MockPlatformAdditionalContentModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MockPlatformAdditionalContentModel*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::MockPlatformAdditionalContentModel*>(value));
}
constexpr ::GlobalNamespace::MockPlatformAdditionalContentModel* GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MockPlatformAdditionalContentModel*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockPlatformAdditionalContentModel*> GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MockPlatformAdditionalContentModel*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__set___u__1(::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter& GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter const& GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  __t__builder, ::System::Threading::CancellationToken  token, ::StringW  levelId, ::GlobalNamespace::MockPlatformAdditionalContentModel*  __4__this, ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->token = token;
this->levelId = levelId;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlatformAdditionalContentModel::*)(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*, ::GlobalNamespace::AlwaysOwnedContentContainerSO*)>(&::GlobalNamespace::MockPlatformAdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x223440c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel.InvalidateDataInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlatformAdditionalContentModel::*)()>(&::GlobalNamespace::MockPlatformAdditionalContentModel::InvalidateDataInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2234a24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel.GetLevelEntitlementStatusInternalAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (::GlobalNamespace::MockPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::MockPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2234a28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel.GetPackEntitlementStatusInternalAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (::GlobalNamespace::MockPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::MockPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2234b00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel.IsPackBetterBuyThanLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* (::GlobalNamespace::MockPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::MockPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2234bd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel.OpenLevelProductStoreAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* (::GlobalNamespace::MockPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::MockPlatformAdditionalContentModel::OpenLevelProductStoreAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2234c68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel.BuyLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlatformAdditionalContentModel::*)(::StringW)>(&::GlobalNamespace::MockPlatformAdditionalContentModel::BuyLevel)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2234d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                            "BuyLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformAdditionalContentModel.OpenLevelPackProductStoreAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* (::GlobalNamespace::MockPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::MockPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2234e94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MockPlatformAdditionalContentModel::__set__levelsEntitlements(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*, 0x28>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>* GlobalNamespace::MockPlatformAdditionalContentModel::__get__levelsEntitlements()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*> GlobalNamespace::MockPlatformAdditionalContentModel::__get__levelsEntitlements() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*, 0x28>(this);
}
constexpr void GlobalNamespace::MockPlatformAdditionalContentModel::__set__levelPacksEntitlements(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*, 0x30>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>* GlobalNamespace::MockPlatformAdditionalContentModel::__get__levelPacksEntitlements()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*> GlobalNamespace::MockPlatformAdditionalContentModel::__get__levelPacksEntitlements() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*, 0x30>(this);
}
constexpr void GlobalNamespace::MockPlatformAdditionalContentModel::__set__packBetterBuyThanLevel(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MockPlatformAdditionalContentModel::__get__packBetterBuyThanLevel()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::MockPlatformAdditionalContentModel::__get__packBetterBuyThanLevel() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
inline ::GlobalNamespace::MockPlatformAdditionalContentModel* GlobalNamespace::MockPlatformAdditionalContentModel::New_ctor(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*  mockPlatformAdditionalContentModelInitialData, ::GlobalNamespace::AlwaysOwnedContentContainerSO*  alwaysOwnedContentContainer)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MockPlatformAdditionalContentModel*>(mockPlatformAdditionalContentModelInitialData, alwaysOwnedContentContainer));
}
inline void GlobalNamespace::MockPlatformAdditionalContentModel::_ctor(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*  mockPlatformAdditionalContentModelInitialData, ::GlobalNamespace::AlwaysOwnedContentContainerSO*  alwaysOwnedContentContainer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mockPlatformAdditionalContentModelInitialData, alwaysOwnedContentContainer);
}
inline void GlobalNamespace::MockPlatformAdditionalContentModel::InvalidateDataInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                            "InvalidateDataInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GlobalNamespace::MockPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync(::StringW  levelId, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                            "GetLevelEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(*this, ___internal_method, levelId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GlobalNamespace::MockPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync(::StringW  levelPackId, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                            "GetPackEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(*this, ___internal_method, levelPackId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* GlobalNamespace::MockPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync(::StringW  levelPackId, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                            "IsPackBetterBuyThanLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>*, false>(*this, ___internal_method, levelPackId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* GlobalNamespace::MockPlatformAdditionalContentModel::OpenLevelProductStoreAsync(::StringW  levelId, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                            "OpenLevelProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*, false>(*this, ___internal_method, levelId, token);
}
inline void GlobalNamespace::MockPlatformAdditionalContentModel::BuyLevel(::StringW  levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                            "BuyLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, levelId);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* GlobalNamespace::MockPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync(::StringW  levelPackId, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformAdditionalContentModel*>::get(),
                            "OpenLevelPackProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*, false>(*this, ___internal_method, levelPackId, token);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
