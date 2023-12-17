#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BlurredCoverImageView_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BlurredCoverImageView_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::*)()>(&::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x808;
  constexpr static std::size_t addrs = 0x22dfbd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22e03e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__set___4__this(::GlobalNamespace::BlurredCoverImageView*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BlurredCoverImageView*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::BlurredCoverImageView*>(value));
}
constexpr ::GlobalNamespace::BlurredCoverImageView* GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BlurredCoverImageView*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BlurredCoverImageView*> GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BlurredCoverImageView*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__set_level(::GlobalNamespace::IPreviewBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::IPreviewBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__get_level()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__get_level() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__set__cancellationToken_5__2(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__get__cancellationToken_5__2()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__get__cancellationToken_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>& GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> const& GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BlurredCoverImageView*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "level", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6::__BlurredCoverImageView___SetTextureAsync_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::BlurredCoverImageView*  __4__this, ::GlobalNamespace::IPreviewBeatmapLevel*  level, ::System::Threading::CancellationToken  _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x48>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->level = level;
this->_cancellationToken_5__2 = _cancellationToken_5__2;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::BlurredCoverImageView.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlurredCoverImageView::*)()>(&::GlobalNamespace::BlurredCoverImageView::OnDestroy)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22dfa8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlurredCoverImageView*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlurredCoverImageView.SetTextureAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlurredCoverImageView::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&::GlobalNamespace::BlurredCoverImageView::SetTextureAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22dfb30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlurredCoverImageView*>::get(),
                            "SetTextureAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlurredCoverImageView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlurredCoverImageView::*)()>(&::GlobalNamespace::BlurredCoverImageView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22dfbd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlurredCoverImageView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BlurredCoverImageView::__set__coverImage(::HMUI::ImageView*  value)  {
::cordl_internals::setInstanceField<::HMUI::ImageView*, 0x18>(this, std::forward<::HMUI::ImageView*>(value));
}
constexpr ::HMUI::ImageView* GlobalNamespace::BlurredCoverImageView::__get__coverImage()  {
return ::cordl_internals::getInstanceField<::HMUI::ImageView*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> GlobalNamespace::BlurredCoverImageView::__get__coverImage() const {
return ::cordl_internals::getInstanceField<::HMUI::ImageView*, 0x18>(this);
}
constexpr void GlobalNamespace::BlurredCoverImageView::__set__kawaseBlurRenderer(::GlobalNamespace::KawaseBlurRendererSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::KawaseBlurRendererSO*, 0x20>(this, std::forward<::GlobalNamespace::KawaseBlurRendererSO*>(value));
}
constexpr ::GlobalNamespace::KawaseBlurRendererSO* GlobalNamespace::BlurredCoverImageView::__get__kawaseBlurRenderer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::KawaseBlurRendererSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::KawaseBlurRendererSO*> GlobalNamespace::BlurredCoverImageView::__get__kawaseBlurRenderer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::KawaseBlurRendererSO*, 0x20>(this);
}
constexpr void GlobalNamespace::BlurredCoverImageView::__set__settingTextureForLevelId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::BlurredCoverImageView::__get__settingTextureForLevelId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& GlobalNamespace::BlurredCoverImageView::__get__settingTextureForLevelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void GlobalNamespace::BlurredCoverImageView::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource*, 0x30>(this, std::forward<::System::Threading::CancellationTokenSource*>(value));
}
constexpr ::System::Threading::CancellationTokenSource* GlobalNamespace::BlurredCoverImageView::__get__cancellationTokenSource()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> GlobalNamespace::BlurredCoverImageView::__get__cancellationTokenSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x30>(this);
}
constexpr void GlobalNamespace::BlurredCoverImageView::__set__blurredCoverTexture(::UnityEngine::Texture2D*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture2D*, 0x38>(this, std::forward<::UnityEngine::Texture2D*>(value));
}
constexpr ::UnityEngine::Texture2D* GlobalNamespace::BlurredCoverImageView::__get__blurredCoverTexture()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> GlobalNamespace::BlurredCoverImageView::__get__blurredCoverTexture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D*, 0x38>(this);
}
inline void GlobalNamespace::BlurredCoverImageView::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlurredCoverImageView*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BlurredCoverImageView::SetTextureAsync(::GlobalNamespace::IPreviewBeatmapLevel*  level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlurredCoverImageView*>::get(),
                            "SetTextureAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, level);
}
inline ::GlobalNamespace::BlurredCoverImageView* GlobalNamespace::BlurredCoverImageView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BlurredCoverImageView*>());
}
inline void GlobalNamespace::BlurredCoverImageView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlurredCoverImageView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
