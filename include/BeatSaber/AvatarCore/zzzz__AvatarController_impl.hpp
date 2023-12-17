#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarController_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__Avatar_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarController_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarDisplayContext_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarVisualDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IOptionalAvatarDataProvider_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::*)()>(&::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0xe0ae3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe0b58c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::__set___4__this(::BeatSaber::AvatarCore::AvatarController*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarController*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BeatSaber::AvatarCore::AvatarController*>(value));
}
constexpr ::BeatSaber::AvatarCore::AvatarController* BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::__get___4__this()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarController*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarController*> BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::__get___4__this() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarController*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*>& BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*> const& BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::AvatarCore::AvatarController*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::__AvatarController___LoadAndDisplayAvatar_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::BeatSaber::AvatarCore::AvatarController*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController.get_avatar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::Avatar* (::BeatSaber::AvatarCore::AvatarController::*)()>(&::BeatSaber::AvatarCore::AvatarController::get_avatar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0ad94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(),
                            "get_avatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarController::*)()>(&::BeatSaber::AvatarCore::AvatarController::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe0ad9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController.LoadAndDisplayAvatar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarController::*)()>(&::BeatSaber::AvatarCore::AvatarController::LoadAndDisplayAvatar)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe0ada0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(),
                            "LoadAndDisplayAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarController::*)()>(&::BeatSaber::AvatarCore::AvatarController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0ae34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaber::AvatarCore::AvatarController::__set__parentingTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x18>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::AvatarCore::AvatarController::__get__parentingTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::AvatarCore::AvatarController::__get__parentingTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarController::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x20>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* BeatSaber::AvatarCore::AvatarController::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> BeatSaber::AvatarCore::AvatarController::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x20>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarController::__set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x28>(this, std::forward<::BeatSaber::AvatarCore::AvatarSystemCollection*>(value));
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* BeatSaber::AvatarCore::AvatarController::__get__avatarSystemCollection()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> BeatSaber::AvatarCore::AvatarController::__get__avatarSystemCollection() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x28>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarController::__set__avatarDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarDisplayContext, 0x30>(this, std::forward<::BeatSaber::AvatarCore::AvatarDisplayContext>(value));
}
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext& BeatSaber::AvatarCore::AvatarController::__get__avatarDisplayContext()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarDisplayContext, 0x30>(this);
}
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext const& BeatSaber::AvatarCore::AvatarController::__get__avatarDisplayContext() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarDisplayContext, 0x30>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarController::__set__visualDataProvider(::BeatSaber::AvatarCore::IAvatarVisualDataProvider*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*, 0x38>(this, std::forward<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(value));
}
constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider* BeatSaber::AvatarCore::AvatarController::__get__visualDataProvider()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*> BeatSaber::AvatarCore::AvatarController::__get__visualDataProvider() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*, 0x38>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarController::__set__poseDataProvider(::BeatSaber::AvatarCore::IAvatarPoseDataProvider*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*, 0x40>(this, std::forward<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>(value));
}
constexpr ::BeatSaber::AvatarCore::IAvatarPoseDataProvider* BeatSaber::AvatarCore::AvatarController::__get__poseDataProvider()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*> BeatSaber::AvatarCore::AvatarController::__get__poseDataProvider() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*, 0x40>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarController::__set__optionalDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*, 0x48>(this, std::forward<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(value));
}
constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* BeatSaber::AvatarCore::AvatarController::__get__optionalDataProvider()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*> BeatSaber::AvatarCore::AvatarController::__get__optionalDataProvider() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*, 0x48>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarController::__set__avatar(::BeatSaber::AvatarCore::Avatar*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::Avatar*, 0x50>(this, std::forward<::BeatSaber::AvatarCore::Avatar*>(value));
}
constexpr ::BeatSaber::AvatarCore::Avatar* BeatSaber::AvatarCore::AvatarController::__get__avatar()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::Avatar*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::Avatar*> BeatSaber::AvatarCore::AvatarController::__get__avatar() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::Avatar*, 0x50>(this);
}
inline ::BeatSaber::AvatarCore::Avatar* BeatSaber::AvatarCore::AvatarController::get_avatar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(),
                            "get_avatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::Avatar*, false>(*this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarController::LoadAndDisplayAvatar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(),
                            "LoadAndDisplayAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::AvatarController* BeatSaber::AvatarCore::AvatarController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::AvatarController*>());
}
inline void BeatSaber::AvatarCore::AvatarController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
