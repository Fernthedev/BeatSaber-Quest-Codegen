#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
constexpr void GlobalNamespace::__OVROverlay__OverlayShape::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVROverlay__OverlayShape::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVROverlay__OverlayShape::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape::__OVROverlay__OverlayShape(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape  GlobalNamespace::__OVROverlay__OverlayShape::Quad{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape  GlobalNamespace::__OVROverlay__OverlayShape::Cylinder{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape  GlobalNamespace::__OVROverlay__OverlayShape::Cubemap{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape  GlobalNamespace::__OVROverlay__OverlayShape::OffcenterCubemap{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape  GlobalNamespace::__OVROverlay__OverlayShape::Equirect{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape  GlobalNamespace::__OVROverlay__OverlayShape::ReconstructionPassthrough{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape  GlobalNamespace::__OVROverlay__OverlayShape::SurfaceProjectedPassthrough{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape  GlobalNamespace::__OVROverlay__OverlayShape::Fisheye{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape  GlobalNamespace::__OVROverlay__OverlayShape::KeyboardHandsPassthrough{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape  GlobalNamespace::__OVROverlay__OverlayShape::KeyboardMaskedHandsPassthrough{static_cast<int32_t>(0xb)};
constexpr void GlobalNamespace::__OVROverlay__OverlayType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVROverlay__OverlayType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVROverlay__OverlayType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVROverlay__OverlayType::__OVROverlay__OverlayType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayType  GlobalNamespace::__OVROverlay__OverlayType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVROverlay__OverlayType  GlobalNamespace::__OVROverlay__OverlayType::Underlay{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVROverlay__OverlayType  GlobalNamespace::__OVROverlay__OverlayType::Overlay{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x274a5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated::*)()>(&::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x274a664;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x274a678;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x274a698;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated* GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*>(object, method));
}
inline void GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline void GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
constexpr void GlobalNamespace::__OVROverlay__LayerTexture::__set_appTexture(::UnityEngine::Texture*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Texture*>(value));
}
constexpr ::UnityEngine::Texture* GlobalNamespace::__OVROverlay__LayerTexture::__get_appTexture()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> GlobalNamespace::__OVROverlay__LayerTexture::__get_appTexture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVROverlay__LayerTexture::__set_appTexturePtr(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& GlobalNamespace::__OVROverlay__LayerTexture::__get_appTexturePtr()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& GlobalNamespace::__OVROverlay__LayerTexture::__get_appTexturePtr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVROverlay__LayerTexture::__set_swapChain(::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*>& GlobalNamespace::__OVROverlay__LayerTexture::__get_swapChain()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*> const& GlobalNamespace::__OVROverlay__LayerTexture::__get_swapChain() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVROverlay__LayerTexture::__set_swapChainPtr(::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>>(value));
}
constexpr ::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>& GlobalNamespace::__OVROverlay__LayerTexture::__get_swapChainPtr()  {
return ::cordl_internals::getInstanceField<::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*> const& GlobalNamespace::__OVROverlay__LayerTexture::__get_swapChainPtr() const {
return ::cordl_internals::getInstanceField<::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "appTexture", ty: "::UnityEngine::Texture*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "appTexturePtr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "swapChain", ty: "::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "swapChainPtr", ty: "::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__OVROverlay__LayerTexture::__OVROverlay__LayerTexture(::UnityEngine::Texture*  appTexture, ::cordl_internals::intptr_t  appTexturePtr, ::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*>  swapChain, ::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>  swapChainPtr) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->appTexture = appTexture;
this->appTexturePtr = appTexturePtr;
this->swapChain = swapChain;
this->swapChainPtr = swapChainPtr;
}
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.get_previewInEditor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::get_previewInEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27460cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "get_previewInEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.set_previewInEditor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(bool)>(&::GlobalNamespace::OVROverlay::set_previewInEditor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27460d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "set_previewInEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.OverrideOverlayTextureInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(::UnityEngine::Texture*, ::cordl_internals::intptr_t, ::UnityEngine::XR::XRNode)>(&::GlobalNamespace::OVROverlay::OverrideOverlayTextureInfo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27460f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "OverrideOverlayTextureInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.get_layerId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::get_layerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27461ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "get_layerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.set_layerId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(int32_t)>(&::GlobalNamespace::OVROverlay::set_layerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27461b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "set_layerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.get_layout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__LayerLayout (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::get_layout)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x27461bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "get_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.get_texturesPerStage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::get_texturesPerStage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2746288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "get_texturesPerStage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.NeedsTexturesForShape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVROverlay__OverlayShape)>(&::GlobalNamespace::OVROverlay::NeedsTexturesForShape)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27462a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "NeedsTexturesForShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlay__OverlayShape>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.CreateLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)(int32_t, int32_t, ::GlobalNamespace::__OVRPlugin__EyeTextureFormat, int32_t, ::GlobalNamespace::__OVRPlugin__Sizei, ::GlobalNamespace::__OVRPlugin__OverlayShape)>(&::GlobalNamespace::OVROverlay::CreateLayer)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x274635c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "CreateLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__EyeTextureFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Sizei>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__OverlayShape>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.CreateLayerTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)(bool, ::GlobalNamespace::__OVRPlugin__Sizei, bool)>(&::GlobalNamespace::OVROverlay::CreateLayerTextures)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x274676c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "CreateLayerTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Sizei>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.DestroyLayerTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::DestroyLayerTextures)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2746cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "DestroyLayerTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.DestroyLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::DestroyLayer)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2746dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "DestroyLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.SetSrcDestRects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect)>(&::GlobalNamespace::OVROverlay::SetSrcDestRects)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27470a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "SetSrcDestRects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.UpdateTextureRectMatrix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::UpdateTextureRectMatrix)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x27470c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "UpdateTextureRectMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.SetPerLayerColorScaleAndOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(::UnityEngine::Vector4, ::UnityEngine::Vector4)>(&::GlobalNamespace::OVROverlay::SetPerLayerColorScaleAndOffset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27474d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "SetPerLayerColorScaleAndOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.LatchLayerTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::LatchLayerTextures)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x27474e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "LatchLayerTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.GetCurrentLayerDesc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__LayerDesc (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::GetCurrentLayerDesc)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x2747954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "GetCurrentLayerDesc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.GetBlitRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::GlobalNamespace::OVROverlay::*)(int32_t)>(&::GlobalNamespace::OVROverlay::GetBlitRect)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2747e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "GetBlitRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.BlitSubImage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::UnityEngine::Rect)>(&::GlobalNamespace::OVROverlay::BlitSubImage)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x2747fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "BlitSubImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.PopulateLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)(int32_t, bool, ::GlobalNamespace::__OVRPlugin__Sizei, int32_t, int32_t)>(&::GlobalNamespace::OVROverlay::PopulateLayer)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x27483bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "PopulateLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Sizei>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.SubmitLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)(bool, bool, bool, ::GlobalNamespace::OVRPose, ::UnityEngine::Vector3, int32_t)>(&::GlobalNamespace::OVROverlay::SubmitLayer)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x2748a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "SubmitLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.SetupEditorPreview
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::SetupEditorPreview)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27460ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "SetupEditorPreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.IsPassthroughShape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVROverlay__OverlayShape)>(&::GlobalNamespace::OVROverlay::IsPassthroughShape)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2746304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "IsPassthroughShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlay__OverlayShape>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::Awake)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x2748ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.get_OpenVROverlayKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::OVROverlay::get_OpenVROverlayKey)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27491ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "get_OpenVROverlayKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2749228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.InitOVROverlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::InitOVROverlay)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2749298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "InitOVROverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::OnDisable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2749404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2749528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.ComputePoseAndScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(ByRef<::GlobalNamespace::OVRPose>, ByRef<::UnityEngine::Vector3>, ByRef<bool>, ByRef<bool>)>(&::GlobalNamespace::OVROverlay::ComputePoseAndScale)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x2749540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "ComputePoseAndScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRPose>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.ComputeSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)(ByRef<::GlobalNamespace::OVRPose>, ByRef<::UnityEngine::Vector3>, ByRef<bool>, ByRef<bool>)>(&::GlobalNamespace::OVROverlay::ComputeSubmit)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x27498c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "ComputeSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRPose>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.OpenVROverlayUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(::UnityEngine::Vector3, ::GlobalNamespace::OVRPose)>(&::GlobalNamespace::OVROverlay::OpenVROverlayUpdate)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x2749b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "OpenVROverlayUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPose>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::LateUpdate)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x2749e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x274a38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVROverlay::__set_currentOverlayType(::GlobalNamespace::__OVROverlay__OverlayType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVROverlay__OverlayType, 0x18>(this, std::forward<::GlobalNamespace::__OVROverlay__OverlayType>(value));
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayType& GlobalNamespace::OVROverlay::__get_currentOverlayType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVROverlay__OverlayType, 0x18>(this);
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayType const& GlobalNamespace::OVROverlay::__get_currentOverlayType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVROverlay__OverlayType, 0x18>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_isDynamic(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_isDynamic()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_isDynamic() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_isProtectedContent(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_isProtectedContent()  {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_isProtectedContent() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_srcRectLeft(::UnityEngine::Rect  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0x20>(this, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlay::__get_srcRectLeft()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x20>(this);
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlay::__get_srcRectLeft() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x20>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_srcRectRight(::UnityEngine::Rect  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0x30>(this, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlay::__get_srcRectRight()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x30>(this);
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlay::__get_srcRectRight() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x30>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_destRectLeft(::UnityEngine::Rect  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0x40>(this, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlay::__get_destRectLeft()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x40>(this);
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlay::__get_destRectLeft() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x40>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_destRectRight(::UnityEngine::Rect  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0x50>(this, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlay::__get_destRectRight()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x50>(this);
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlay::__get_destRectRight() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x50>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_invertTextureRects(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_invertTextureRects()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_invertTextureRects() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_textureRectMatrix(::GlobalNamespace::__OVRPlugin__TextureRectMatrixf  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRPlugin__TextureRectMatrixf, 0x64>(this, std::forward<::GlobalNamespace::__OVRPlugin__TextureRectMatrixf>(value));
}
constexpr ::GlobalNamespace::__OVRPlugin__TextureRectMatrixf& GlobalNamespace::OVROverlay::__get_textureRectMatrix()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__TextureRectMatrixf, 0x64>(this);
}
constexpr ::GlobalNamespace::__OVRPlugin__TextureRectMatrixf const& GlobalNamespace::OVROverlay::__get_textureRectMatrix() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__TextureRectMatrixf, 0x64>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_overrideTextureRectMatrix(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa4>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_overrideTextureRectMatrix()  {
return ::cordl_internals::getInstanceField<bool, 0xa4>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_overrideTextureRectMatrix() const {
return ::cordl_internals::getInstanceField<bool, 0xa4>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_overridePerLayerColorScaleAndOffset(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa5>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_overridePerLayerColorScaleAndOffset()  {
return ::cordl_internals::getInstanceField<bool, 0xa5>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_overridePerLayerColorScaleAndOffset() const {
return ::cordl_internals::getInstanceField<bool, 0xa5>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_colorScale(::UnityEngine::Vector4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector4, 0xa8>(this, std::forward<::UnityEngine::Vector4>(value));
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::OVROverlay::__get_colorScale()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0xa8>(this);
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::OVROverlay::__get_colorScale() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0xa8>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_colorOffset(::UnityEngine::Vector4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector4, 0xb8>(this, std::forward<::UnityEngine::Vector4>(value));
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::OVROverlay::__get_colorOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0xb8>(this);
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::OVROverlay::__get_colorOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0xb8>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_useExpensiveSuperSample(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_useExpensiveSuperSample()  {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_useExpensiveSuperSample() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_useExpensiveSharpen(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc9>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_useExpensiveSharpen()  {
return ::cordl_internals::getInstanceField<bool, 0xc9>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_useExpensiveSharpen() const {
return ::cordl_internals::getInstanceField<bool, 0xc9>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_hidden(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xca>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_hidden()  {
return ::cordl_internals::getInstanceField<bool, 0xca>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_hidden() const {
return ::cordl_internals::getInstanceField<bool, 0xca>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_isExternalSurface(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xcb>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_isExternalSurface()  {
return ::cordl_internals::getInstanceField<bool, 0xcb>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_isExternalSurface() const {
return ::cordl_internals::getInstanceField<bool, 0xcb>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_externalSurfaceWidth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xcc>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVROverlay::__get_externalSurfaceWidth()  {
return ::cordl_internals::getInstanceField<int32_t, 0xcc>(this);
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__get_externalSurfaceWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0xcc>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_externalSurfaceHeight(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xd0>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVROverlay::__get_externalSurfaceHeight()  {
return ::cordl_internals::getInstanceField<int32_t, 0xd0>(this);
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__get_externalSurfaceHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd0>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_compositionDepth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xd4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVROverlay::__get_compositionDepth()  {
return ::cordl_internals::getInstanceField<int32_t, 0xd4>(this);
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__get_compositionDepth() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd4>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_layerCompositionDepth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xd8>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVROverlay::__get_layerCompositionDepth()  {
return ::cordl_internals::getInstanceField<int32_t, 0xd8>(this);
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__get_layerCompositionDepth() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd8>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_noDepthBufferTesting(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xdc>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_noDepthBufferTesting()  {
return ::cordl_internals::getInstanceField<bool, 0xdc>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_noDepthBufferTesting() const {
return ::cordl_internals::getInstanceField<bool, 0xdc>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_layerTextureFormat(::GlobalNamespace::__OVRPlugin__EyeTextureFormat  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRPlugin__EyeTextureFormat, 0xe0>(this, std::forward<::GlobalNamespace::__OVRPlugin__EyeTextureFormat>(value));
}
constexpr ::GlobalNamespace::__OVRPlugin__EyeTextureFormat& GlobalNamespace::OVROverlay::__get_layerTextureFormat()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__EyeTextureFormat, 0xe0>(this);
}
constexpr ::GlobalNamespace::__OVRPlugin__EyeTextureFormat const& GlobalNamespace::OVROverlay::__get_layerTextureFormat() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__EyeTextureFormat, 0xe0>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_currentOverlayShape(::GlobalNamespace::__OVROverlay__OverlayShape  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVROverlay__OverlayShape, 0xe4>(this, std::forward<::GlobalNamespace::__OVROverlay__OverlayShape>(value));
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape& GlobalNamespace::OVROverlay::__get_currentOverlayShape()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVROverlay__OverlayShape, 0xe4>(this);
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape const& GlobalNamespace::OVROverlay::__get_currentOverlayShape() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVROverlay__OverlayShape, 0xe4>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_prevOverlayShape(::GlobalNamespace::__OVROverlay__OverlayShape  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVROverlay__OverlayShape, 0xe8>(this, std::forward<::GlobalNamespace::__OVROverlay__OverlayShape>(value));
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape& GlobalNamespace::OVROverlay::__get_prevOverlayShape()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVROverlay__OverlayShape, 0xe8>(this);
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape const& GlobalNamespace::OVROverlay::__get_prevOverlayShape() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVROverlay__OverlayShape, 0xe8>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_textures(::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*>, 0xf0>(this, std::forward<::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*>& GlobalNamespace::OVROverlay::__get_textures()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*>, 0xf0>(this);
}
constexpr ::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*> const& GlobalNamespace::OVROverlay::__get_textures() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*>, 0xf0>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_isAlphaPremultiplied(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xf8>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_isAlphaPremultiplied()  {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_isAlphaPremultiplied() const {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_useBicubicFiltering(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xf9>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_useBicubicFiltering()  {
return ::cordl_internals::getInstanceField<bool, 0xf9>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_useBicubicFiltering() const {
return ::cordl_internals::getInstanceField<bool, 0xf9>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_useLegacyCubemapRotation(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xfa>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_useLegacyCubemapRotation()  {
return ::cordl_internals::getInstanceField<bool, 0xfa>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_useLegacyCubemapRotation() const {
return ::cordl_internals::getInstanceField<bool, 0xfa>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_useEfficientSupersample(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xfb>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_useEfficientSupersample()  {
return ::cordl_internals::getInstanceField<bool, 0xfb>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_useEfficientSupersample() const {
return ::cordl_internals::getInstanceField<bool, 0xfb>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_useEfficientSharpen(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xfc>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_useEfficientSharpen()  {
return ::cordl_internals::getInstanceField<bool, 0xfc>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_useEfficientSharpen() const {
return ::cordl_internals::getInstanceField<bool, 0xfc>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_useAutomaticFiltering(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xfd>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_useAutomaticFiltering()  {
return ::cordl_internals::getInstanceField<bool, 0xfd>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_useAutomaticFiltering() const {
return ::cordl_internals::getInstanceField<bool, 0xfd>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set__previewInEditor(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xfe>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get__previewInEditor()  {
return ::cordl_internals::getInstanceField<bool, 0xfe>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get__previewInEditor() const {
return ::cordl_internals::getInstanceField<bool, 0xfe>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_texturePtrs(::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>, 0x100>(this, std::forward<::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>>(value));
}
constexpr ::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>& GlobalNamespace::OVROverlay::__get_texturePtrs()  {
return ::cordl_internals::getInstanceField<::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>, 0x100>(this);
}
constexpr ::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*> const& GlobalNamespace::OVROverlay::__get_texturePtrs() const {
return ::cordl_internals::getInstanceField<::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>, 0x100>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_externalSurfaceObject(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x108>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& GlobalNamespace::OVROverlay::__get_externalSurfaceObject()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x108>(this);
}
constexpr ::cordl_internals::intptr_t const& GlobalNamespace::OVROverlay::__get_externalSurfaceObject() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x108>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_externalSurfaceObjectCreated(::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*, 0x110>(this, std::forward<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*>(value));
}
constexpr ::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated* GlobalNamespace::OVROverlay::__get_externalSurfaceObjectCreated()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*> GlobalNamespace::OVROverlay::__get_externalSurfaceObjectCreated() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*, 0x110>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_isOverridePending(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x118>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_isOverridePending()  {
return ::cordl_internals::getInstanceField<bool, 0x118>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_isOverridePending() const {
return ::cordl_internals::getInstanceField<bool, 0x118>(this);
}
inline void GlobalNamespace::OVROverlay::setStaticF_instances(::ArrayW<::GlobalNamespace::OVROverlay*,::Array<::GlobalNamespace::OVROverlay*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::OVROverlay*,::Array<::GlobalNamespace::OVROverlay*>*>, "instances", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get>(std::forward<::ArrayW<::GlobalNamespace::OVROverlay*,::Array<::GlobalNamespace::OVROverlay*>*>>(value));
}
inline ::ArrayW<::GlobalNamespace::OVROverlay*,::Array<::GlobalNamespace::OVROverlay*>*> GlobalNamespace::OVROverlay::getStaticF_instances()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::OVROverlay*,::Array<::GlobalNamespace::OVROverlay*>*>, "instances", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get>();
}
constexpr void GlobalNamespace::OVROverlay::__set__layerId_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x11c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVROverlay::__get__layerId_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x11c>(this);
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__get__layerId_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x11c>(this);
}
inline void GlobalNamespace::OVROverlay::setStaticF_tex2DMaterial(::UnityEngine::Material*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Material*, "tex2DMaterial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get>(std::forward<::UnityEngine::Material*>(value));
}
inline ::UnityEngine::Material* GlobalNamespace::OVROverlay::getStaticF_tex2DMaterial()  {
return ::cordl_internals::getStaticField<::UnityEngine::Material*, "tex2DMaterial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get>();
}
inline void GlobalNamespace::OVROverlay::setStaticF_cubeMaterial(::UnityEngine::Material*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Material*, "cubeMaterial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get>(std::forward<::UnityEngine::Material*>(value));
}
inline ::UnityEngine::Material* GlobalNamespace::OVROverlay::getStaticF_cubeMaterial()  {
return ::cordl_internals::getStaticField<::UnityEngine::Material*, "cubeMaterial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get>();
}
constexpr void GlobalNamespace::OVROverlay::__set_layerTextures(::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture,::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture,::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*>, 0x120>(this, std::forward<::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture,::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture,::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*>& GlobalNamespace::OVROverlay::__get_layerTextures()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture,::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*>, 0x120>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture,::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*> const& GlobalNamespace::OVROverlay::__get_layerTextures() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture,::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*>, 0x120>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_layerDesc(::GlobalNamespace::__OVRPlugin__LayerDesc  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRPlugin__LayerDesc, 0x128>(this, std::forward<::GlobalNamespace::__OVRPlugin__LayerDesc>(value));
}
constexpr ::GlobalNamespace::__OVRPlugin__LayerDesc& GlobalNamespace::OVROverlay::__get_layerDesc()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__LayerDesc, 0x128>(this);
}
constexpr ::GlobalNamespace::__OVRPlugin__LayerDesc const& GlobalNamespace::OVROverlay::__get_layerDesc() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__LayerDesc, 0x128>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_stageCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x178>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVROverlay::__get_stageCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x178>(this);
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__get_stageCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x178>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_layerIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x17c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVROverlay::__get_layerIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x17c>(this);
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__get_layerIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x17c>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_layerIdHandle(::System::Runtime::InteropServices::GCHandle  value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::GCHandle, 0x180>(this, std::forward<::System::Runtime::InteropServices::GCHandle>(value));
}
constexpr ::System::Runtime::InteropServices::GCHandle& GlobalNamespace::OVROverlay::__get_layerIdHandle()  {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0x180>(this);
}
constexpr ::System::Runtime::InteropServices::GCHandle const& GlobalNamespace::OVROverlay::__get_layerIdHandle() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0x180>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_layerIdPtr(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x188>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& GlobalNamespace::OVROverlay::__get_layerIdPtr()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x188>(this);
}
constexpr ::cordl_internals::intptr_t const& GlobalNamespace::OVROverlay::__get_layerIdPtr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x188>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_frameIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x190>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVROverlay::__get_frameIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x190>(this);
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__get_frameIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x190>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_prevFrameIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x194>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVROverlay::__get_prevFrameIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x194>(this);
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__get_prevFrameIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x194>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_rend(::UnityEngine::Renderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Renderer*, 0x198>(this, std::forward<::UnityEngine::Renderer*>(value));
}
constexpr ::UnityEngine::Renderer* GlobalNamespace::OVROverlay::__get_rend()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Renderer*, 0x198>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> GlobalNamespace::OVROverlay::__get_rend() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Renderer*, 0x198>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_OpenVROverlayHandle(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x1a0>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& GlobalNamespace::OVROverlay::__get_OpenVROverlayHandle()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x1a0>(this);
}
constexpr uint64_t const& GlobalNamespace::OVROverlay::__get_OpenVROverlayHandle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x1a0>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_OpenVRUVOffsetAndScale(::UnityEngine::Vector4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector4, 0x1a8>(this, std::forward<::UnityEngine::Vector4>(value));
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::OVROverlay::__get_OpenVRUVOffsetAndScale()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x1a8>(this);
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::OVROverlay::__get_OpenVRUVOffsetAndScale() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x1a8>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_OpenVRMouseScale(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x1b8>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::OVROverlay::__get_OpenVRMouseScale()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x1b8>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::OVROverlay::__get_OpenVRMouseScale() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x1b8>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_constructedOverlayXRDevice(::GlobalNamespace::__OVRManager__XRDevice  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRManager__XRDevice, 0x1c0>(this, std::forward<::GlobalNamespace::__OVRManager__XRDevice>(value));
}
constexpr ::GlobalNamespace::__OVRManager__XRDevice& GlobalNamespace::OVROverlay::__get_constructedOverlayXRDevice()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__XRDevice, 0x1c0>(this);
}
constexpr ::GlobalNamespace::__OVRManager__XRDevice const& GlobalNamespace::OVROverlay::__get_constructedOverlayXRDevice() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRManager__XRDevice, 0x1c0>(this);
}
constexpr void GlobalNamespace::OVROverlay::__set_xrDeviceConstructed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c4>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlay::__get_xrDeviceConstructed()  {
return ::cordl_internals::getInstanceField<bool, 0x1c4>(this);
}
constexpr bool const& GlobalNamespace::OVROverlay::__get_xrDeviceConstructed() const {
return ::cordl_internals::getInstanceField<bool, 0x1c4>(this);
}
inline bool GlobalNamespace::OVROverlay::get_previewInEditor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "get_previewInEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::set_previewInEditor(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "set_previewInEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVROverlay::OverrideOverlayTextureInfo(::UnityEngine::Texture*  srcTexture, ::cordl_internals::intptr_t  nativePtr, ::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "OverrideOverlayTextureInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, srcTexture, nativePtr, node);
}
inline int32_t GlobalNamespace::OVROverlay::get_layerId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "get_layerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::set_layerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "set_layerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRPlugin__LayerLayout GlobalNamespace::OVROverlay::get_layout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "get_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__LayerLayout, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::OVROverlay::get_texturesPerStage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "get_texturesPerStage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVROverlay::NeedsTexturesForShape(::GlobalNamespace::__OVROverlay__OverlayShape  shape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "NeedsTexturesForShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlay__OverlayShape>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, shape);
}
inline bool GlobalNamespace::OVROverlay::CreateLayer(int32_t  mipLevels, int32_t  sampleCount, ::GlobalNamespace::__OVRPlugin__EyeTextureFormat  etFormat, int32_t  flags, ::GlobalNamespace::__OVRPlugin__Sizei  size, ::GlobalNamespace::__OVRPlugin__OverlayShape  shape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "CreateLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__EyeTextureFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Sizei>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__OverlayShape>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, mipLevels, sampleCount, etFormat, flags, size, shape);
}
inline bool GlobalNamespace::OVROverlay::CreateLayerTextures(bool  useMipmaps, ::GlobalNamespace::__OVRPlugin__Sizei  size, bool  isHdr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "CreateLayerTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Sizei>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, useMipmaps, size, isHdr);
}
inline void GlobalNamespace::OVROverlay::DestroyLayerTextures()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "DestroyLayerTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::DestroyLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "DestroyLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::SetSrcDestRects(::UnityEngine::Rect  srcLeft, ::UnityEngine::Rect  srcRight, ::UnityEngine::Rect  destLeft, ::UnityEngine::Rect  destRight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "SetSrcDestRects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, srcLeft, srcRight, destLeft, destRight);
}
inline void GlobalNamespace::OVROverlay::UpdateTextureRectMatrix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "UpdateTextureRectMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::SetPerLayerColorScaleAndOffset(::UnityEngine::Vector4  scale, ::UnityEngine::Vector4  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "SetPerLayerColorScaleAndOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scale, offset);
}
inline bool GlobalNamespace::OVROverlay::LatchLayerTextures()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "LatchLayerTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__OVRPlugin__LayerDesc GlobalNamespace::OVROverlay::GetCurrentLayerDesc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "GetCurrentLayerDesc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__LayerDesc, false>(*this, ___internal_method);
}
inline ::UnityEngine::Rect GlobalNamespace::OVROverlay::GetBlitRect(int32_t  eyeId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "GetBlitRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(*this, ___internal_method, eyeId);
}
inline void GlobalNamespace::OVROverlay::BlitSubImage(::UnityEngine::Texture*  src, ::UnityEngine::RenderTexture*  dst, ::UnityEngine::Material*  mat, ::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "BlitSubImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, src, dst, mat, rect);
}
inline bool GlobalNamespace::OVROverlay::PopulateLayer(int32_t  mipLevels, bool  isHdr, ::GlobalNamespace::__OVRPlugin__Sizei  size, int32_t  sampleCount, int32_t  stage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "PopulateLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Sizei>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, mipLevels, isHdr, size, sampleCount, stage);
}
inline bool GlobalNamespace::OVROverlay::SubmitLayer(bool  overlay, bool  headLocked, bool  noDepthBufferTesting, ::GlobalNamespace::OVRPose  pose, ::UnityEngine::Vector3  scale, int32_t  frameIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "SubmitLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, overlay, headLocked, noDepthBufferTesting, pose, scale, frameIndex);
}
inline void GlobalNamespace::OVROverlay::SetupEditorPreview()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "SetupEditorPreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVROverlay::IsPassthroughShape(::GlobalNamespace::__OVROverlay__OverlayShape  shape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "IsPassthroughShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlay__OverlayShape>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, shape);
}
inline void GlobalNamespace::OVROverlay::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVROverlay::get_OpenVROverlayKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "get_OpenVROverlayKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::InitOVROverlay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "InitOVROverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::ComputePoseAndScale(ByRef<::GlobalNamespace::OVRPose>  pose, ByRef<::UnityEngine::Vector3>  scale, ByRef<bool>  overlay, ByRef<bool>  headLocked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "ComputePoseAndScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRPose>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pose, scale, overlay, headLocked);
}
inline bool GlobalNamespace::OVROverlay::ComputeSubmit(ByRef<::GlobalNamespace::OVRPose>  pose, ByRef<::UnityEngine::Vector3>  scale, ByRef<bool>  overlay, ByRef<bool>  headLocked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "ComputeSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRPose>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pose, scale, overlay, headLocked);
}
inline void GlobalNamespace::OVROverlay::OpenVROverlayUpdate(::UnityEngine::Vector3  scale, ::GlobalNamespace::OVRPose  pose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "OpenVROverlayUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPose>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scale, pose);
}
inline void GlobalNamespace::OVROverlay::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVROverlay* GlobalNamespace::OVROverlay::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVROverlay*>());
}
inline void GlobalNamespace::OVROverlay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
